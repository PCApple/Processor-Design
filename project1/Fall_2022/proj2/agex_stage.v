 `include "define.vh" 

module AGEX_STAGE(
  input  wire                               clk,
  input  wire                               reset,
  input  wire [`from_MEM_to_AGEX_WIDTH-1:0] from_MEM_to_AGEX,    
  input  wire [`from_WB_to_AGEX_WIDTH-1:0]  from_WB_to_AGEX,   
  input  wire [`DE_latch_WIDTH-1:0]         from_DE_latch,
  output wire [`AGEX_latch_WIDTH-1:0]       AGEX_latch_out,
  output wire [`from_AGEX_to_FE_WIDTH-1:0]  from_AGEX_to_FE,
  output wire [`from_AGEX_to_DE_WIDTH-1:0]  from_AGEX_to_DE
);

  reg [`AGEX_latch_WIDTH-1:0] AGEX_latch; 
  // wire to send the AGEX latch contents to other pipeline stages 
  assign AGEX_latch_out = AGEX_latch;
  
  wire[`AGEX_latch_WIDTH-1:0] AGEX_latch_contents; 
  
   
  wire [`INSTBITS-1:0]inst_AGEX; 
  wire [`DBITS-1:0]PC_AGEX;
  wire [`DBITS-1:0] inst_count_AGEX; 
  wire [`DBITS-1:0] pcplus_AGEX; 
  wire [`IOPBITS-1:0] op_I_AGEX;
  
  reg br_cond_AGEX; // 1 means a branch condition is satisified. 0 means a branch condition is not satisifed

  wire signed [`DBITS-1:0] sxt_imm_AGEX; // for the immediate value 
  wire signed [`DBITS-1:0] rs1_AGEX; // rs1 value
  wire signed [`DBITS-1:0] rs2_AGEX; // rs2 value
  wire [`DBITS-1:0] unsigned_sxt_imm_AGEX; // for the immediate value
  wire [`DBITS-1:0] unsigned_rs1_AGEX; // rs1 value
  wire [`DBITS-1:0] unsigned_rs2_AGEX; // rs2 value
  assign unsigned_sxt_imm_AGEX = sxt_imm_AGEX;
  assign unsigned_rs1_AGEX = rs1_AGEX;
  assign unsigned_rs2_AGEX = rs2_AGEX;
  
  wire is_branch_AGEX;
  wire is_jmp_AGEX;
  wire rd_mem_AGEX;
  wire wr_mem_AGEX;
  wire wr_reg_AGEX;
  wire branch_predict_AGEX;
 
  wire [`PHT_INDEX_SIZE-1:0] pht_index_AGEX;
  
  wire [`BHR_SIZE-1:0] BHR_AGEX;
  wire [`BHR_SIZE-1:0] next_BHR;

  wire update_BTB;
  wire [`BTB_INDEX_SIZE-1:0] BTB_index;
  wire [`BTB_ENTRY_SIZE-1:0] BTB_entry;
  wire [`BTB_TAG_SIZE-1:0] BTB_tag;

  /*wire [15:0] correct_predictions;
  wire [15:0] incorrect_predictions;
  wire [15:0] total_predictions;
  reg [15:0] incorrect_predictions_reg;
  reg [15:0] correct_predictions_reg;
  reg [15:0] total_predictions_reg;
  wire correct_prediction;
  assign incorrect_predictions = incorrect_predictions_reg+1;
  assign correct_predictions = correct_predictions_reg+1;
  assign total_predictions = total_predictions_reg+1;
  assign correct_prediction = (is_branch_AGEX || is_jmp_AGEX) && (branch_predict_AGEX == br_cond_AGEX) || (!br_cond_AGEX);*/

  
  
  wire [`TYPENOBITS-1:0] type_I_AGEX; // instruction type
  reg [`DBITS-1:0] output_AGEX; // returning value from ALU ops
  wire [`DBITS-1:0] branch_addr_AGEX; // Branch target address
  reg [`DBITS-1:0] jmp_addr;
  reg [`REGNOBITS-1:0] forward_reg;
  reg is_forwarding;

  wire flush_pipe;
  // need wires for BTB, BHR, and PHT
  // BTB, need to know the index, tag
  
  // BHR, need to update register


  // PHT -> ? What do we need in this stage?




  wire[`BUS_CANARY_WIDTH-1:0] bus_canary_AGEX; 
 
  // **TODO: Complete the rest of the pipeline 
 
  
  always @ (*) begin
    case (op_I_AGEX)
      `BEQ_I : br_cond_AGEX = (rs1_AGEX == rs2_AGEX);
  
      //`BEQ_I : br_cond_AGEX = 1; // write correct code to check the branch condition. 
      // Check registers one and two
      // If equal, pcplus_AGEX <= PC_AGEX + offset

      `BNE_I : br_cond_AGEX = (rs1_AGEX != rs2_AGEX);
      `BLT_I : br_cond_AGEX = (rs1_AGEX < rs2_AGEX);
      `BGE_I : br_cond_AGEX = (rs1_AGEX >= rs2_AGEX);
      `BLTU_I : br_cond_AGEX = (unsigned_rs1_AGEX < unsigned_rs2_AGEX);
      `BGEU_I : br_cond_AGEX = (unsigned_rs1_AGEX >= unsigned_rs2_AGEX);
      `JAL_I: br_cond_AGEX = 1'b1;
      `JALR_I: br_cond_AGEX = 1'b1;
      `JR_I: br_cond_AGEX = 1'b1;
      default : br_cond_AGEX = 1'b0;
    endcase
    if (br_cond_AGEX)
      $display("rs1 = %d, rs2 = %d, br_cond = %d", rs1_AGEX, rs2_AGEX, br_cond_AGEX);
  end


  // compute ALU operations  (alu out or memory addresses)
 
  always @ (*) begin
  
  case (op_I_AGEX)
    `ADD_I: begin
      output_AGEX = rs1_AGEX + rs2_AGEX;
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `SUB_I: begin
      output_AGEX = rs1_AGEX - rs2_AGEX;
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `AND_I: begin
      output_AGEX = unsigned_rs1_AGEX & unsigned_rs2_AGEX;
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `OR_I: begin
      output_AGEX = rs1_AGEX | rs2_AGEX;
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `XOR_I: begin
      output_AGEX = rs1_AGEX ^ rs2_AGEX;
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `SLT_I: begin
      output_AGEX = {31'b0,(rs1_AGEX < rs2_AGEX)};
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `SLTU_I: begin
      output_AGEX = {31'b0,(unsigned_rs1_AGEX < unsigned_rs2_AGEX)};
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `SRA_I: begin
      output_AGEX = (rs1_AGEX >>> rs2_AGEX[4:0]);
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `SRL_I: begin
      output_AGEX = (rs1_AGEX >> rs2_AGEX[4:0]);
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `SLL_I: begin
      output_AGEX = (rs1_AGEX << rs2_AGEX[4:0]);
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `SW_I: begin
      output_AGEX = (rs1_AGEX + sxt_imm_AGEX)&(32'hFFFFFFFC);
      is_forwarding = 0;
    end
    `MUL_I: begin
      output_AGEX = rs1_AGEX * rs2_AGEX;
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `ADDI_I: begin
      output_AGEX = rs1_AGEX + sxt_imm_AGEX;
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `ANDI_I: begin
      output_AGEX = rs1_AGEX & sxt_imm_AGEX;
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `ORI_I: begin
      output_AGEX = rs1_AGEX | sxt_imm_AGEX;
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `XORI_I: begin
      output_AGEX = rs1_AGEX ^ sxt_imm_AGEX;
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `SLTI_I: begin
      output_AGEX = {31'b0,(rs1_AGEX < sxt_imm_AGEX)};
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `SLTIU_I: begin
      output_AGEX = {31'b0,(unsigned_rs1_AGEX < unsigned_sxt_imm_AGEX)};
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `SRAI_I: begin
      output_AGEX = (rs1_AGEX >>> inst_AGEX[24:20]);
      $display(inst_AGEX[24:20]);
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `SRLI_I: begin
      output_AGEX = (rs1_AGEX >> inst_AGEX[24:20]);
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `SLLI_I: begin
      output_AGEX = (rs1_AGEX << sxt_imm_AGEX[4:0]);
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `LUI_I: begin
      output_AGEX = unsigned_sxt_imm_AGEX;
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `AUIPC_I: begin
      output_AGEX = PC_AGEX + sxt_imm_AGEX;
      $display("PC ", PC_AGEX, " sxt ", sxt_imm_AGEX);
      $display("wr ", wr_reg_AGEX);
      $display("output", output_AGEX);
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `LW_I: begin
      output_AGEX = (rs1_AGEX + sxt_imm_AGEX) & 32'hFFFFFFFC;
      is_forwarding = 1;
      forward_reg = 1;
    end
    `JAL_I: begin
      output_AGEX = PC_AGEX + 4;
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `JALR_I: begin
      output_AGEX = PC_AGEX + 4;
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `JR_I: begin
      br_cond_AGEX = 1;
      is_forwarding = 0;
    end
    default:begin
       is_forwarding = 0;
       output_AGEX = 0;
    end

	 endcase 
   
  end 

  // branch target needs to be computed here 
  // computed branch target needs to send to other pipeline stages (pctarget_AGEX)

  // Only update BTB for branches and jumps 
  // that are mispredicted (10 or 01 for T/NT)
  // to update BTB, make sure the right tag and index are assigned
  // also make entry valid
  

  always @(*)begin  
    if (op_I_AGEX == `JR_I) begin
      jmp_addr = rs1_AGEX;
    end else if (op_I_AGEX == `JALR_I) begin
      jmp_addr = (rs1_AGEX + sxt_imm_AGEX) & 'hfffffffe;
    end else if (op_I_AGEX == `JAL_I) begin
      jmp_addr = PC_AGEX + sxt_imm_AGEX;
    end else begin
      jmp_addr = 0;
    end
  end 

  assign branch_addr_AGEX = is_jmp_AGEX ? op_I_AGEX == `JR_I ? rs1_AGEX : jmp_addr : (is_branch_AGEX && br_cond_AGEX) ? PC_AGEX + sxt_imm_AGEX: PC_AGEX + 4;
  /*
  if (is_jump_AGEX) {
    if (op_I_AGEX == 'JR_I) {
      branch_addr_AGEX = rs1_AGEX
    } else {
      branch_addr_AGEX = jmp_addr
    } else if (is_branch_AGEX && br_cond_AGEX) {
      branch_addr_AGEX = PC_AGEX + sxt_imm_AGEX
    } else {
      branch_addr_AGEX = PC_AGEX + 4 // could be pc_plus
    }

  }
  */

  assign update_BTB = (is_branch_AGEX || is_jmp_AGEX);
  assign BTB_tag = PC_AGEX[31:6];
  assign BTB_index = PC_AGEX[5:2];
  assign BTB_entry = {BTB_tag, branch_addr_AGEX, 1'b1};

  assign flush_pipe = (is_branch_AGEX || is_jmp_AGEX) && (br_cond_AGEX != branch_predict_AGEX);
  assign next_BHR = BHR_AGEX << 1 | {7'b0, {br_cond_AGEX}};
  // if (flush_pipe) is 1, stall_pipe should be 0!

  

  assign  {
    inst_AGEX,
    PC_AGEX,
    pcplus_AGEX,
    op_I_AGEX,
    inst_count_AGEX,
    sxt_imm_AGEX,
    rs1_AGEX,
    rs2_AGEX,    
    type_I_AGEX, 
    is_branch_AGEX,
    is_jmp_AGEX,
    rd_mem_AGEX,
    wr_mem_AGEX,
    wr_reg_AGEX,
    branch_predict_AGEX,
    pht_index_AGEX,
    BHR_AGEX,
            // more signals might need
    bus_canary_AGEX
  } = from_DE_latch;    
 
  assign AGEX_latch_contents = {
    inst_AGEX,  // passed from inst_de to here
    PC_AGEX,
    op_I_AGEX,
    inst_count_AGEX,
    sxt_imm_AGEX, 
    rs1_AGEX,
    rs2_AGEX,
    output_AGEX,
    type_I_AGEX,
    forward_reg,
    is_forwarding,
    rd_mem_AGEX,
    wr_mem_AGEX,
    wr_reg_AGEX,
            // more signals might need
    bus_canary_AGEX     
  }; 
  assign from_AGEX_to_FE = { 
    br_cond_AGEX,
     branch_addr_AGEX,
     next_BHR,
     flush_pipe,
     BTB_index,
     BTB_entry,
     update_BTB};
  assign from_AGEX_to_DE = {
    forward_reg,
    is_forwarding,
    flush_pipe};
 
  // if Branch is Taken
  // need to calculate the new pc
  // update BTB (and BHR as always, done earlier tho)
  // put logic to flush the pipe
  /*always @ (posedge clk or posedge reset) begin
    if (reset) begin
      incorrect_predictions_reg <= 0;
      correct_predictions_reg <= 0;
      total_predictions_reg <= 0;
    end
    if (flush_pipe) begin
      incorrect_predictions_reg <= incorrect_predictions;
    end else if (correct_prediction) begin
      correct_predictions_reg <= correct_predictions;
    end
    if (is_branch_AGEX || is_jmp_AGEX) begin
      total_predictions_reg = total_predictions;
    end

  end*/

  // If we do extra credit, we need to count correct and incorrect predictions
  // And then use those values to measure the accuracy

  always @ (posedge clk) begin
    if (reset) begin
      AGEX_latch <= {`AGEX_latch_WIDTH{1'b0}};
      // might need more code here  
        end 
    else 
        begin
      // need to complete 
            AGEX_latch <= AGEX_latch_contents;
        end 
  end

endmodule