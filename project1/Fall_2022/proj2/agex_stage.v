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

  wire [`DBITS-1:0] sxt_imm_AGEX; // for the immediate value 
  wire [`DBITS-1:0] rs1_AGEX; // rs1 value
  wire [`DBITS-1:0] rs2_AGEX; // rs2 value
  wire [`TYPENOBITS-1:0] type_I_AGEX; // instruction type
  reg [`DBITS-1:0] output_AGEX; // returning value from ALU ops
  reg [`DBITS-1:0] branch_addr_AGEX;
  reg [`REGNOBITS-1:0] forward_reg;
  reg is_forwarding;


  wire[`BUS_CANARY_WIDTH-1:0] bus_canary_AGEX; 
 
  // **TODO: Complete the rest of the pipeline 
 
  
  always @ (*) begin
    case (op_I_AGEX)
      `BEQ_I :
      begin
        if (rs1_AGEX == rs2_AGEX) begin
          br_cond_AGEX = 1;
          branch_addr_AGEX = PC_AGEX + sxt_imm_AGEX;
        end else begin
          br_cond_AGEX = 0;
        end
      end

      //`BEQ_I : br_cond_AGEX = 1; // write correct code to check the branch condition. 
      // Check registers one and two
      // If equal, pcplus_AGEX <= PC_AGEX + offset

      `BNE_I : begin
        if (rs1_AGEX != rs2_AGEX) begin
          br_cond_AGEX = 1;
          branch_addr_AGEX = PC_AGEX + sxt_imm_AGEX;
        end else begin
          br_cond_AGEX = 0;
        end
      end
      `BLT_I : begin
        if (rs1_AGEX <= rs2_AGEX) begin
          br_cond_AGEX = 1;
          branch_addr_AGEX = PC_AGEX + sxt_imm_AGEX;
        end else begin
          br_cond_AGEX = 0;
        end
      end
      `BGE_I : begin
        if (rs1_AGEX >= rs2_AGEX) begin
          br_cond_AGEX = 1;
          branch_addr_AGEX = PC_AGEX + sxt_imm_AGEX;
        end else begin
          br_cond_AGEX = 0;
        end
      end
      /*
      `BLTU_I: ..
      `BGEU_I : ...
      */
  
      default : br_cond_AGEX = 1'b0;
    endcase
  end


  // compute ALU operations  (alu out or memory addresses)
 
  always @ (*) begin
  
  case (op_I_AGEX)
    `ADDI_I: begin
      output_AGEX = rs1_AGEX + sxt_imm_AGEX;
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `ADD_I: begin
      output_AGEX = rs1_AGEX + rs2_AGEX;
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `AND_I: begin
      output_AGEX = rs1_AGEX & rs2_AGEX;
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `MUL_I: begin
      output_AGEX = rs1_AGEX * rs2_AGEX;
      is_forwarding = 1;
      forward_reg = inst_AGEX[11:7];
    end
    `SUB_I: begin
      output_AGEX = rs1_AGEX - rs2_AGEX;
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


    default: is_forwarding = 0;

	 endcase 
   
  end 

  // branch target needs to be computed here 
  // computed branch target needs to send to other pipeline stages (pctarget_AGEX)

  always @(*)begin  
  /*
    if (op_I_AGEX == `JAL_I) 
    ... 
    */
  end 

  assign from_AGEX_to_FE = { br_cond_AGEX, branch_addr_AGEX};

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
            // more signals might need
    bus_canary_AGEX     
  }; 
  assign from_AGEX_to_DE = {forward_reg, is_forwarding};
 
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
