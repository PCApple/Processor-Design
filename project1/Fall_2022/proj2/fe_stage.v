 `include "define.vh" 

module FE_STAGE(
  input wire                              clk,
  input wire                              reset,
  input wire  [`from_DE_to_FE_WIDTH-1:0]  from_DE_to_FE,
  input wire  [`from_AGEX_to_FE_WIDTH-1:0] from_AGEX_to_FE,   
  input wire  [`from_MEM_to_FE_WIDTH-1:0] from_MEM_to_FE,   
  input wire  [`from_WB_to_FE_WIDTH-1:0]  from_WB_to_FE, 
  output wire [`FE_latch_WIDTH-1:0]       FE_latch_out
);


  // I-MEM
  (* ram_init_file = `IDMEMINITFILE *)
  reg [`DBITS-1:0] imem [`IMEMWORDS-1:0];
 
  initial begin
      $readmemh(`IDMEMINITFILE , imem);
  end

  
  // Display memory contents with verilator 
  /*always @(posedge clk) begin
    for (integer i=0 ; i<`IMEMWORDS ; i=i+1) begin
        $display("%h", imem[i]);
    end
  end*/
  

  /* pipeline latch */ 
  reg [`FE_latch_WIDTH-1:0] FE_latch;  // FE latch 

  reg [`DBITS-1:0] PC_FE_latch; // PC latch in the FE stage   // you could use a part of FE_latch as a PC latch as well 
  
  wire [`INSTBITS-1:0] inst_FE;  // instruction value in the FE stage 
  wire [`DBITS-1:0] pcplus_FE;  // pc plus value in the FE stage 
  wire stall_pipe_FE; // signal to indicate when a front-end needs to be stall
  wire flush_pipe_FE;   // signal to indicate when a front-end needs to be flushed

  wire br_cond_FE;
  wire [`DBITS-1:0] branch_addr_FE;

  wire [`FE_latch_WIDTH-1:0] FE_latch_contents;  // the signals that will be FE latch contents 

  // Branch prediction
  reg [`BTB_ENTRY_SIZE-1:0] BTB [`BTB_ENTRIES-1:0];
  wire [`BTB_INDEX_SIZE-1:0] btb_index_FE;
  wire [`BTB_TAG_SIZE-1:0] btb_tag_FE;
  wire [`BTB_TARGET_SIZE-1:0] btb_target_FE;
  wire btb_hit_FE;
  wire [`BTB_INDEX_SIZE-1:0] btb_index_update_FE;
  wire [`BTB_ENTRY_SIZE-1:0] btb_entry_update_FE;
  wire branch_predict_FE;

  reg [`PHT_ENTRY_SIZE-1:0] PHT [`PHT_ENTRIES-1:0];
  wire [`PHT_INDEX_SIZE-1:0] pht_index_FE;
  wire [`PHT_INDEX_SIZE-1:0] pht_index_update_FE;
  wire [7:0] PHT_PC_FE;
  wire update_BTB_PHT_FE;
  
  reg [`BHR_SIZE-1:0] BHR_FE_LATCH;
  wire [`BHR_SIZE-1:0] BHR_FE;

  assign btb_index_FE = PC_FE_latch[5:2];
  assign btb_tag_FE = PC_FE_latch[31:6];
  assign btb_hit_FE = (BTB[btb_index_FE][`BTB_ENTRY_SIZE-1:`BTB_ENTRY_SIZE -`BTB_TAG_SIZE] == btb_tag_FE && BTB[btb_index_FE][0] == 1'b1);
  assign btb_target_FE = BTB[btb_index_FE][`BTB_ENTRY_SIZE-`BTB_TAG_SIZE-1:1];
  assign PHT_PC_FE = PC_FE_latch[9:2];
  assign pht_index_FE = PHT_PC_FE ^ BHR_FE;
  assign branch_predict_FE = PHT[pht_index_FE] >= 2;

  
  
  // reading instruction from imem 
  assign inst_FE = flush_pipe_FE ? 0 : imem[PC_FE_latch[`IMEMADDRBITS-1:`IMEMWORDBITS]];  // this code works. imem is stored 4B together 
  
  // wire to send the FE latch contents to the DE stage 
  assign FE_latch_out = FE_latch; 

  reg [`DBITS-1:0] inst_count_FE; /* for debugging purpose */ 
  
  wire [`DBITS-1:0] inst_count_AGEX; /* for debugging purpose. resent the instruction counter */ 

  // This is the value of "incremented PC", computed in the FE stage
  assign pcplus_FE = PC_FE_latch + `INSTSIZE;


  assign stall_pipe_FE = {from_DE_to_FE};  // you need to modify this line for your design 
  
  assign {
    br_cond_FE,
    branch_addr_FE,
    BHR_FE,
    flush_pipe_FE,
    btb_index_update_FE,
    btb_entry_update_FE,
    update_BTB_PHT_FE
    } = from_AGEX_to_FE;
   
   // the order of latch contents should be matched in the decode stage when we extract the contents. 
  assign FE_latch_contents = {
                                inst_FE, 
                                PC_FE_latch, 
                                pcplus_FE, // please feel free to add more signals such as valid bits etc. 
                                inst_count_FE,
                                BHR_FE,
                                pht_index_FE,
                                branch_predict_FE, 
                                // if you add more bits here, please increase the width of latch in define.vh 
                                `BUS_CANARY_VALUE // for an error checking of bus encoding/decoding  
                                };




  // **TODO: Complete the rest of the pipeline 
  /*reg stall_next;
  always @ (negedge clk) begin
    stall_next = 0;
    if (stall_pipe_FE == 0) begin
      stall_next = 1;
    end else begin
      stall_next = 0;
    end
  end*/
always @ (posedge clk or posedge reset) begin
  if (update_BTB_PHT_FE) begin
    if (br_cond_FE)
      PHT[pht_index_update_FE] <= PHT[pht_index_update_FE] == 3 ? 3 : PHT[pht_index_update_FE] + 1;
    else
      PHT[pht_index_update_FE] <= PHT[pht_index_update_FE] == 0 ? 0 : PHT[pht_index_update_FE] - 1;
  end
  BHR_FE_LATCH <= BHR_FE;
  BTB[btb_index_update_FE][`BTB_ENTRY_SIZE-1:0] <= btb_entry_update_FE;
end
// PC stuff
  always @ (posedge clk) begin
  /* you need to extend this always block */
   if (reset) begin 
      PC_FE_latch <= `STARTPC;
      inst_count_FE <= 1;  /* inst_count starts from 1 for easy human reading. 1st fetch instructions can have 1 */ 
      end 
    else if (stall_pipe_FE) begin
      PC_FE_latch <= PC_FE_latch;  
      inst_count_FE <= inst_count_FE + 1;
    end else if (flush_pipe_FE) begin
      PC_FE_latch <= branch_addr_FE;
      inst_count_FE <= inst_count_FE + 1;
    end else if (btb_hit_FE && branch_predict_FE) begin
      PC_FE_latch <= btb_target_FE;
      inst_count_FE <= inst_count_FE + 1;
    end else begin
      PC_FE_latch <= pcplus_FE;
      inst_count_FE <= inst_count_FE + 1;
    end
  end
  

  always @ (posedge clk) begin
    if (reset || flush_pipe_FE) 
      FE_latch <= {`FE_latch_WIDTH{1'b0}}; 
    else if (stall_pipe_FE)
      FE_latch <= FE_latch;
    else
      FE_latch <= FE_latch_contents; 
  end
  always @ (posedge clk or posedge reset) begin
    if (reset) begin
      PHT[0] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[1] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[2] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[3] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[4] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[5] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[6] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[7] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[8] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[9] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[10] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[11] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[12] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[13] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[14] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[15] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[16] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[17] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[18] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[19] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[20] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[21] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[22] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[23] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[24] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[25] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[26] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[27] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[28] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[29] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[30] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[31] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[32] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[33] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[34] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[35] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[36] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[37] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[38] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[39] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[40] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[41] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[42] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[43] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[44] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[45] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[46] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[47] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[48] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[49] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[50] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[51] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[52] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[53] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[54] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[55] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[56] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[57] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[58] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[59] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[60] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[61] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[62] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[63] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[64] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[65] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[66] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[67] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[68] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[69] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[70] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[71] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[72] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[73] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[74] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[75] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[76] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[77] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[78] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[79] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[80] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[81] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[82] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[83] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[84] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[85] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[86] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[87] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[88] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[89] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[90] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[91] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[92] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[93] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[94] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[95] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[96] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[97] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[98] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[99] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[100] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[101] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[102] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[103] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[104] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[105] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[106] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[107] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[108] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[109] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[110] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[111] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[112] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[113] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[114] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[115] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[116] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[117] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[118] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[119] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[120] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[121] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[122] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[123] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[124] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[125] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[126] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[127] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[128] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[129] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[130] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[131] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[132] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[133] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[134] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[135] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[136] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[137] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[138] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[139] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[140] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[141] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[142] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[143] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[144] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[145] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[146] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[147] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[148] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[149] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[150] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[151] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[152] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[153] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[154] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[155] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[156] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[157] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[158] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[159] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[160] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[161] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[162] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[163] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[164] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[165] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[166] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[167] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[168] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[169] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[170] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[171] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[172] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[173] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[174] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[175] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[176] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[177] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[178] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[179] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[180] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[181] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[182] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[183] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[184] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[185] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[186] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[187] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[188] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[189] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[190] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[191] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[192] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[193] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[194] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[195] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[196] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[197] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[198] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[199] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[200] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[201] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[202] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[203] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[204] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[205] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[206] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[207] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[208] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[209] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[210] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[211] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[212] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[213] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[214] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[215] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[216] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[217] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[218] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[219] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[220] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[221] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[222] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[223] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[224] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[225] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[226] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[227] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[228] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[229] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[230] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[231] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[232] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[233] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[234] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[235] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[236] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[237] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[238] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[239] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[240] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[241] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[242] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[243] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[244] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[245] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[246] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[247] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[248] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[249] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[250] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[251] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[252] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[253] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[254] <= {`PHT_ENTRY_SIZE{1'b0}};
      PHT[255] <= {`PHT_ENTRY_SIZE{1'b0}};
      BTB[0] <= {`BTB_ENTRY_SIZE{1'b0}};
	  	BTB[1] <= {`BTB_ENTRY_SIZE{1'b0}};
	   	BTB[2] <= {`BTB_ENTRY_SIZE{1'b0}};
		  BTB[3] <= {`BTB_ENTRY_SIZE{1'b0}};
	  	BTB[4] <= {`BTB_ENTRY_SIZE{1'b0}};
		  BTB[5] <= {`BTB_ENTRY_SIZE{1'b0}};
		  BTB[6] <= {`BTB_ENTRY_SIZE{1'b0}};
		  BTB[7] <= {`BTB_ENTRY_SIZE{1'b0}};
		  BTB[8] <= {`BTB_ENTRY_SIZE{1'b0}};
		  BTB[9] <= {`BTB_ENTRY_SIZE{1'b0}};
		  BTB[10] <= {`BTB_ENTRY_SIZE{1'b0}};
		  BTB[11] <= {`BTB_ENTRY_SIZE{1'b0}};
		  BTB[12] <= {`BTB_ENTRY_SIZE{1'b0}};
		  BTB[13] <= {`BTB_ENTRY_SIZE{1'b0}};
		  BTB[14] <= {`BTB_ENTRY_SIZE{1'b0}};
		  BTB[15] <= {`BTB_ENTRY_SIZE{1'b0}};
      BHR_FE_LATCH <= {`BHR_SIZE{1'b0}};
    end
  end

endmodule