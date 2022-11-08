// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2022.1 (win64) Build 3526262 Mon Apr 18 15:48:16 MDT 2022
// Date        : Mon Nov  7 20:38:20 2022
// Host        : PCLaptop running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub
//               c:/Users/pockc/Documents/GitHub/CS3220/project_4/project_4.gen/sources_1/bd/diagram/ip/diagram_comm_0_0/diagram_comm_0_0_stub.v
// Design      : diagram_comm_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg400-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "comm,Vivado 2022.1" *)
module diagram_comm_0_0(out1_ap_vld, out2_ap_vld, 
  s_axi_control_AWADDR, s_axi_control_AWVALID, s_axi_control_AWREADY, 
  s_axi_control_WDATA, s_axi_control_WSTRB, s_axi_control_WVALID, s_axi_control_WREADY, 
  s_axi_control_BRESP, s_axi_control_BVALID, s_axi_control_BREADY, s_axi_control_ARADDR, 
  s_axi_control_ARVALID, s_axi_control_ARREADY, s_axi_control_RDATA, s_axi_control_RRESP, 
  s_axi_control_RVALID, s_axi_control_RREADY, in1, in2, out1, out2, ap_clk, ap_rst_n)
/* synthesis syn_black_box black_box_pad_pin="out1_ap_vld,out2_ap_vld,s_axi_control_AWADDR[5:0],s_axi_control_AWVALID,s_axi_control_AWREADY,s_axi_control_WDATA[31:0],s_axi_control_WSTRB[3:0],s_axi_control_WVALID,s_axi_control_WREADY,s_axi_control_BRESP[1:0],s_axi_control_BVALID,s_axi_control_BREADY,s_axi_control_ARADDR[5:0],s_axi_control_ARVALID,s_axi_control_ARREADY,s_axi_control_RDATA[31:0],s_axi_control_RRESP[1:0],s_axi_control_RVALID,s_axi_control_RREADY,in1[31:0],in2[31:0],out1[31:0],out2[31:0],ap_clk,ap_rst_n" */;
  output out1_ap_vld;
  output out2_ap_vld;
  input [5:0]s_axi_control_AWADDR;
  input s_axi_control_AWVALID;
  output s_axi_control_AWREADY;
  input [31:0]s_axi_control_WDATA;
  input [3:0]s_axi_control_WSTRB;
  input s_axi_control_WVALID;
  output s_axi_control_WREADY;
  output [1:0]s_axi_control_BRESP;
  output s_axi_control_BVALID;
  input s_axi_control_BREADY;
  input [5:0]s_axi_control_ARADDR;
  input s_axi_control_ARVALID;
  output s_axi_control_ARREADY;
  output [31:0]s_axi_control_RDATA;
  output [1:0]s_axi_control_RRESP;
  output s_axi_control_RVALID;
  input s_axi_control_RREADY;
  input [31:0]in1;
  input [31:0]in2;
  output [31:0]out1;
  output [31:0]out2;
  input ap_clk;
  input ap_rst_n;
endmodule
