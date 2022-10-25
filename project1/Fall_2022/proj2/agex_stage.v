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
  wire [`TYPENOBITS-1:0] type_I_AGEX; // instruction type
  reg [`DBITS-1:0] output_AGEX; // returning value from ALU ops
  reg [`DBITS-1:0] branch_addr_AGEX;
  reg [`REGNOBITS-1:0] forward_reg;
  reg is_forwarding;
  reg to_mem;


  wire[`BUS_CANARY_WIDTH-1:0] bus_canary_AGEX; 
 
  // **TODO: Complete the rest of the pipeline 
 
  // checking if need to branch
  always @ (*) begin
    case (op_I_AGEX)
      `BEQ_I : br_cond_AGEX = 1;
      `BNE_I : br_cond_AGEX = 1;
      `BLT_I : br_cond_AGEX = 1;
      `BGE_I : br_cond_AGEX = 1;
      `JAL_I: br_cond_AGEX =1;
      `JALR_I: br_cond_AGEX =1;
      `JR_I: br_cond_AGEX =1;
  
      default : br_cond_AGEX = 1'b0;
    endcase
  end
   // branch target needs to be computed here 
  // computed branch target needs to send to other pipeline stages (pctarget_AGEX)

  always @(*)begin  
    if (op_I_AGEX == `JAL_I) begin
      branch_addr_AGEX = PC_AGEX + sxt_imm_AGEX;
    end
    else if (op_I_AGEX == `JALR_I) begin
      branch_addr_AGEX = (rs1_AGEX + sxt_imm_AGEX) & 'hfffffffe;
    end
    else if (op_I_AGEX == `JR_I) begin
      branch_addr_AGEX = rs1_AGEX;
    end
    else if (op_I_AGEX == `BEQ_I) begin
      if (rs1_AGEX == rs2_AGEX)
        branch_addr_AGEX = PC_AGEX + sxt_imm_AGEX;
      else
        branch_addr_AGEX = pcplus_AGEX;
    end
    else if (op_I_AGEX == `BNE_I) begin
      if (rs1_AGEX != rs2_AGEX)
        branch_addr_AGEX = PC_AGEX + sxt_imm_AGEX;
      else
        branch_addr_AGEX = pcplus_AGEX;
    end
    else if (op_I_AGEX == `BLT_I) begin
      if (rs1_AGEX < rs2_AGEX)
        branch_addr_AGEX = PC_AGEX + sxt_imm_AGEX;
      else
        branch_addr_AGEX = pcplus_AGEX;
    end
    else if (op_I_AGEX == `BGE_I) begin
      if (rs1_AGEX >= rs2_AGEX)
        branch_addr_AGEX = PC_AGEX + sxt_imm_AGEX;
      else 
        branch_addr_AGEX = pcplus_AGEX;
    end
    else if (op_I_AGEX == `BLTU_I) begin
      if (rs1_AGEX < rs2_AGEX)
        branch_addr_AGEX = PC_AGEX + sxt_imm_AGEX;
      else
        branch_addr_AGEX = pcplus_AGEX;
    end
    else if (op_I_AGEX == `BGEU_I) begin
      if(rs1_AGEX >= rs2_AGEX)
        branch_addr_AGEX = PC_AGEX + sxt_imm_AGEX;
      else  
        branch_addr_AGEX = pcplus_AGEX;
    end
    else begin
      branch_addr_AGEX = 0;
    end
  end 


  // compute ALU operations  (alu out or memory addresses)
 
  always @ (*) begin
  
  case (op_I_AGEX)
    `ADDI_I: begin
      output_AGEX = rs1_AGEX + sxt_imm_AGEX;
    end
    `LUI_I: begin
      output_AGEX = sxt_imm_AGEX;
    end
    `AUIPC_I: begin
      output_AGEX = PC_AGEX + sxt_imm_AGEX;
    end
    `ADD_I: begin
      output_AGEX = rs1_AGEX + rs2_AGEX;
    end
    `AND_I: begin
      output_AGEX = rs1_AGEX & rs2_AGEX;
    end
    `MUL_I: begin
      output_AGEX = rs1_AGEX * rs2_AGEX;
    end
    `SUB_I: begin
      output_AGEX = rs1_AGEX - rs2_AGEX;
    end
    `OR_I: begin
      output_AGEX = rs1_AGEX | rs2_AGEX;
    end
    `XOR_I: begin
      output_AGEX = rs1_AGEX ^ rs2_AGEX;
    end
    `ANDI_I: begin
      output_AGEX = rs1_AGEX & sxt_imm_AGEX;
    end
    `ORI_I: begin
      output_AGEX = rs1_AGEX | sxt_imm_AGEX;
    end
    `XORI_I: begin
      output_AGEX = rs1_AGEX ^ sxt_imm_AGEX;
    end
    `JAL_I: begin
      branch_addr_AGEX = PC_AGEX + sxt_imm_AGEX;
      output_AGEX = PC_AGEX + 4;
    end
    `JALR_I: begin
      output_AGEX = PC_AGEX + 4;
    end
    `SW_I: begin
      output_AGEX = rs1_AGEX + sxt_imm_AGEX;
    end
    `LW_I: begin
      output_AGEX = rs1_AGEX + sxt_imm_AGEX;
    end
    default: begin
    end
	 endcase 
  end 

  // mem computes
  always @ (*) begin
    case (op_I_AGEX)
      `SW_I: to_mem = 1;
      default to_mem = 0;
  endcase
  end

  // forwarding
  always @ (*) begin
    case (op_I_AGEX)
      `SW_I: begin
        is_forwarding = 0;
        forward_reg = 0;
      end
      `BEQ_I: begin
        is_forwarding = 0;
        forward_reg = 0;
      end
      `BNE_I: begin
        is_forwarding = 0;
        forward_reg = 0;
      end
      `BLT_I: begin
        is_forwarding = 0;
        forward_reg = 0;
      end
      `BGE_I: begin
        is_forwarding = 0;
        forward_reg = 0;
      end
      `BLTU_I: begin
        is_forwarding = 0;
        forward_reg = 0;
      end
      `BGEU_I: begin
        is_forwarding = 0;
        forward_reg = 0;
      end
      default: begin
        is_forwarding = 1;
        forward_reg = inst_AGEX[11:7];
      end
    endcase
  end
 

  

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
    to_mem,
            // more signals might need
    bus_canary_AGEX     
  }; 
  // for branching/jumping
  assign from_AGEX_to_FE = { br_cond_AGEX, branch_addr_AGEX};
  // for forwarding
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