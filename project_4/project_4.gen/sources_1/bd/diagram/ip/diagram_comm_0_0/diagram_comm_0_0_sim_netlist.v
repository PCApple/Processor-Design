// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2022.1 (win64) Build 3526262 Mon Apr 18 15:48:16 MDT 2022
// Date        : Mon Nov  7 20:38:20 2022
// Host        : PCLaptop running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim
//               c:/Users/pockc/Documents/GitHub/CS3220/project_4/project_4.gen/sources_1/bd/diagram/ip/diagram_comm_0_0/diagram_comm_0_0_sim_netlist.v
// Design      : diagram_comm_0_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z020clg400-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "diagram_comm_0_0,comm,{}" *) (* DowngradeIPIdentifiedWarnings = "yes" *) (* IP_DEFINITION_SOURCE = "HLS" *) 
(* X_CORE_INFO = "comm,Vivado 2022.1" *) (* hls_module = "yes" *) 
(* NotValidForBitStream *)
module diagram_comm_0_0
   (out1_ap_vld,
    out2_ap_vld,
    s_axi_control_AWADDR,
    s_axi_control_AWVALID,
    s_axi_control_AWREADY,
    s_axi_control_WDATA,
    s_axi_control_WSTRB,
    s_axi_control_WVALID,
    s_axi_control_WREADY,
    s_axi_control_BRESP,
    s_axi_control_BVALID,
    s_axi_control_BREADY,
    s_axi_control_ARADDR,
    s_axi_control_ARVALID,
    s_axi_control_ARREADY,
    s_axi_control_RDATA,
    s_axi_control_RRESP,
    s_axi_control_RVALID,
    s_axi_control_RREADY,
    in1,
    in2,
    out1,
    out2,
    ap_clk,
    ap_rst_n);
  output out1_ap_vld;
  output out2_ap_vld;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control AWADDR" *) input [5:0]s_axi_control_AWADDR;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control AWVALID" *) input s_axi_control_AWVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control AWREADY" *) output s_axi_control_AWREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control WDATA" *) input [31:0]s_axi_control_WDATA;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control WSTRB" *) input [3:0]s_axi_control_WSTRB;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control WVALID" *) input s_axi_control_WVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control WREADY" *) output s_axi_control_WREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control BRESP" *) output [1:0]s_axi_control_BRESP;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control BVALID" *) output s_axi_control_BVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control BREADY" *) input s_axi_control_BREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control ARADDR" *) input [5:0]s_axi_control_ARADDR;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control ARVALID" *) input s_axi_control_ARVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control ARREADY" *) output s_axi_control_ARREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control RDATA" *) output [31:0]s_axi_control_RDATA;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control RRESP" *) output [1:0]s_axi_control_RRESP;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control RVALID" *) output s_axi_control_RVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_control RREADY" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME s_axi_control, ADDR_WIDTH 6, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, FREQ_HZ 100000000, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.0, CLK_DOMAIN diagram_processing_system7_0_0_FCLK_CLK0, NUM_READ_THREADS 4, NUM_WRITE_THREADS 4, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *) input s_axi_control_RREADY;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 in1 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME in1, LAYERED_METADATA undef" *) input [31:0]in1;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 in2 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME in2, LAYERED_METADATA undef" *) input [31:0]in2;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 out1 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME out1, LAYERED_METADATA undef" *) output [31:0]out1;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 out2 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME out2, LAYERED_METADATA undef" *) output [31:0]out2;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_BUSIF s_axi_control, ASSOCIATED_RESET ap_rst_n, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN diagram_processing_system7_0_0_FCLK_CLK0, INSERT_VIP 0" *) input ap_clk;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst_n RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst_n, POLARITY ACTIVE_LOW, INSERT_VIP 0" *) input ap_rst_n;

  wire \<const0> ;
  wire \<const1> ;
  wire ap_clk;
  wire ap_rst_n;
  wire [31:0]in1;
  wire [31:0]in2;
  wire [31:0]out1;
  wire [31:0]out2;
  wire [5:0]s_axi_control_ARADDR;
  wire s_axi_control_ARREADY;
  wire s_axi_control_ARVALID;
  wire [5:0]s_axi_control_AWADDR;
  wire s_axi_control_AWREADY;
  wire s_axi_control_AWVALID;
  wire s_axi_control_BREADY;
  wire s_axi_control_BVALID;
  wire [31:0]s_axi_control_RDATA;
  wire s_axi_control_RREADY;
  wire s_axi_control_RVALID;
  wire [31:0]s_axi_control_WDATA;
  wire s_axi_control_WREADY;
  wire [3:0]s_axi_control_WSTRB;
  wire s_axi_control_WVALID;
  wire NLW_inst_out1_ap_vld_UNCONNECTED;
  wire NLW_inst_out2_ap_vld_UNCONNECTED;
  wire [1:0]NLW_inst_s_axi_control_BRESP_UNCONNECTED;
  wire [1:0]NLW_inst_s_axi_control_RRESP_UNCONNECTED;

  assign out1_ap_vld = \<const1> ;
  assign out2_ap_vld = \<const1> ;
  assign s_axi_control_BRESP[1] = \<const0> ;
  assign s_axi_control_BRESP[0] = \<const0> ;
  assign s_axi_control_RRESP[1] = \<const0> ;
  assign s_axi_control_RRESP[0] = \<const0> ;
  GND GND
       (.G(\<const0> ));
  VCC VCC
       (.P(\<const1> ));
  (* C_S_AXI_CONTROL_ADDR_WIDTH = "6" *) 
  (* C_S_AXI_CONTROL_DATA_WIDTH = "32" *) 
  (* C_S_AXI_CONTROL_WSTRB_WIDTH = "4" *) 
  (* C_S_AXI_DATA_WIDTH = "32" *) 
  (* C_S_AXI_WSTRB_WIDTH = "4" *) 
  (* SDX_KERNEL = "true" *) 
  (* SDX_KERNEL_SYNTH_INST = "inst" *) 
  (* SDX_KERNEL_TYPE = "hls" *) 
  diagram_comm_0_0_comm inst
       (.ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .in1(in1),
        .in2(in2),
        .out1(out1),
        .out1_ap_vld(NLW_inst_out1_ap_vld_UNCONNECTED),
        .out2(out2),
        .out2_ap_vld(NLW_inst_out2_ap_vld_UNCONNECTED),
        .s_axi_control_ARADDR(s_axi_control_ARADDR),
        .s_axi_control_ARREADY(s_axi_control_ARREADY),
        .s_axi_control_ARVALID(s_axi_control_ARVALID),
        .s_axi_control_AWADDR(s_axi_control_AWADDR),
        .s_axi_control_AWREADY(s_axi_control_AWREADY),
        .s_axi_control_AWVALID(s_axi_control_AWVALID),
        .s_axi_control_BREADY(s_axi_control_BREADY),
        .s_axi_control_BRESP(NLW_inst_s_axi_control_BRESP_UNCONNECTED[1:0]),
        .s_axi_control_BVALID(s_axi_control_BVALID),
        .s_axi_control_RDATA(s_axi_control_RDATA),
        .s_axi_control_RREADY(s_axi_control_RREADY),
        .s_axi_control_RRESP(NLW_inst_s_axi_control_RRESP_UNCONNECTED[1:0]),
        .s_axi_control_RVALID(s_axi_control_RVALID),
        .s_axi_control_WDATA(s_axi_control_WDATA),
        .s_axi_control_WREADY(s_axi_control_WREADY),
        .s_axi_control_WSTRB(s_axi_control_WSTRB),
        .s_axi_control_WVALID(s_axi_control_WVALID));
endmodule

(* C_S_AXI_CONTROL_ADDR_WIDTH = "6" *) (* C_S_AXI_CONTROL_DATA_WIDTH = "32" *) (* C_S_AXI_CONTROL_WSTRB_WIDTH = "4" *) 
(* C_S_AXI_DATA_WIDTH = "32" *) (* C_S_AXI_WSTRB_WIDTH = "4" *) (* ORIG_REF_NAME = "comm" *) 
(* hls_module = "yes" *) 
module diagram_comm_0_0_comm
   (in1,
    in2,
    out1,
    out1_ap_vld,
    out2,
    out2_ap_vld,
    s_axi_control_AWVALID,
    s_axi_control_AWREADY,
    s_axi_control_AWADDR,
    s_axi_control_WVALID,
    s_axi_control_WREADY,
    s_axi_control_WDATA,
    s_axi_control_WSTRB,
    s_axi_control_ARVALID,
    s_axi_control_ARREADY,
    s_axi_control_ARADDR,
    s_axi_control_RVALID,
    s_axi_control_RREADY,
    s_axi_control_RDATA,
    s_axi_control_RRESP,
    s_axi_control_BVALID,
    s_axi_control_BREADY,
    s_axi_control_BRESP,
    ap_clk,
    ap_rst_n);
  input [31:0]in1;
  input [31:0]in2;
  output [31:0]out1;
  output out1_ap_vld;
  output [31:0]out2;
  output out2_ap_vld;
  input s_axi_control_AWVALID;
  output s_axi_control_AWREADY;
  input [5:0]s_axi_control_AWADDR;
  input s_axi_control_WVALID;
  output s_axi_control_WREADY;
  input [31:0]s_axi_control_WDATA;
  input [3:0]s_axi_control_WSTRB;
  input s_axi_control_ARVALID;
  output s_axi_control_ARREADY;
  input [5:0]s_axi_control_ARADDR;
  output s_axi_control_RVALID;
  input s_axi_control_RREADY;
  output [31:0]s_axi_control_RDATA;
  output [1:0]s_axi_control_RRESP;
  output s_axi_control_BVALID;
  input s_axi_control_BREADY;
  output [1:0]s_axi_control_BRESP;
  input ap_clk;
  input ap_rst_n;

  wire \<const0> ;
  wire ap_clk;
  wire ap_rst_n;
  wire [31:0]in1;
  wire [31:0]in2;
  wire [31:0]out1;
  wire [31:0]out2;
  wire [5:0]s_axi_control_ARADDR;
  wire s_axi_control_ARREADY;
  wire s_axi_control_ARVALID;
  wire [5:0]s_axi_control_AWADDR;
  wire s_axi_control_AWREADY;
  wire s_axi_control_AWVALID;
  wire s_axi_control_BREADY;
  wire s_axi_control_BVALID;
  wire [31:0]s_axi_control_RDATA;
  wire s_axi_control_RREADY;
  wire s_axi_control_RVALID;
  wire [31:0]s_axi_control_WDATA;
  wire s_axi_control_WREADY;
  wire [3:0]s_axi_control_WSTRB;
  wire s_axi_control_WVALID;

  assign out1_ap_vld = \<const0> ;
  assign out2_ap_vld = \<const0> ;
  assign s_axi_control_BRESP[1] = \<const0> ;
  assign s_axi_control_BRESP[0] = \<const0> ;
  assign s_axi_control_RRESP[1] = \<const0> ;
  assign s_axi_control_RRESP[0] = \<const0> ;
  GND GND
       (.G(\<const0> ));
  diagram_comm_0_0_comm_control_s_axi control_s_axi_U
       (.\FSM_onehot_rstate_reg[1]_0 (s_axi_control_ARREADY),
        .\FSM_onehot_wstate_reg[1]_0 (s_axi_control_AWREADY),
        .\FSM_onehot_wstate_reg[2]_0 (s_axi_control_WREADY),
        .ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .in1(in1),
        .in2(in2),
        .out1(out1),
        .out2(out2),
        .s_axi_control_ARADDR(s_axi_control_ARADDR),
        .s_axi_control_ARVALID(s_axi_control_ARVALID),
        .s_axi_control_AWADDR(s_axi_control_AWADDR),
        .s_axi_control_AWVALID(s_axi_control_AWVALID),
        .s_axi_control_BREADY(s_axi_control_BREADY),
        .s_axi_control_BVALID(s_axi_control_BVALID),
        .s_axi_control_RDATA(s_axi_control_RDATA),
        .s_axi_control_RREADY(s_axi_control_RREADY),
        .s_axi_control_RVALID(s_axi_control_RVALID),
        .s_axi_control_WDATA(s_axi_control_WDATA),
        .s_axi_control_WSTRB(s_axi_control_WSTRB),
        .s_axi_control_WVALID(s_axi_control_WVALID));
endmodule

(* ORIG_REF_NAME = "comm_control_s_axi" *) 
module diagram_comm_0_0_comm_control_s_axi
   (s_axi_control_BVALID,
    \FSM_onehot_wstate_reg[2]_0 ,
    \FSM_onehot_wstate_reg[1]_0 ,
    s_axi_control_RVALID,
    \FSM_onehot_rstate_reg[1]_0 ,
    out1,
    out2,
    s_axi_control_RDATA,
    ap_clk,
    ap_rst_n,
    s_axi_control_AWADDR,
    in1,
    in2,
    s_axi_control_AWVALID,
    s_axi_control_BREADY,
    s_axi_control_WVALID,
    s_axi_control_ARVALID,
    s_axi_control_RREADY,
    s_axi_control_WDATA,
    s_axi_control_WSTRB,
    s_axi_control_ARADDR);
  output s_axi_control_BVALID;
  output \FSM_onehot_wstate_reg[2]_0 ;
  output \FSM_onehot_wstate_reg[1]_0 ;
  output s_axi_control_RVALID;
  output \FSM_onehot_rstate_reg[1]_0 ;
  output [31:0]out1;
  output [31:0]out2;
  output [31:0]s_axi_control_RDATA;
  input ap_clk;
  input ap_rst_n;
  input [5:0]s_axi_control_AWADDR;
  input [31:0]in1;
  input [31:0]in2;
  input s_axi_control_AWVALID;
  input s_axi_control_BREADY;
  input s_axi_control_WVALID;
  input s_axi_control_ARVALID;
  input s_axi_control_RREADY;
  input [31:0]s_axi_control_WDATA;
  input [3:0]s_axi_control_WSTRB;
  input [5:0]s_axi_control_ARADDR;

  wire \FSM_onehot_rstate[1]_i_1_n_0 ;
  wire \FSM_onehot_rstate[2]_i_1_n_0 ;
  wire \FSM_onehot_rstate_reg[1]_0 ;
  wire \FSM_onehot_wstate[1]_i_1_n_0 ;
  wire \FSM_onehot_wstate[2]_i_1_n_0 ;
  wire \FSM_onehot_wstate[3]_i_1_n_0 ;
  wire \FSM_onehot_wstate_reg[1]_0 ;
  wire \FSM_onehot_wstate_reg[2]_0 ;
  wire ap_clk;
  wire ap_rst_n;
  wire ap_rst_n_inv;
  wire ar_hs;
  wire [31:0]in1;
  wire [31:0]in2;
  wire int_a;
  wire [31:0]int_a0;
  wire \int_a[31]_i_4_n_0 ;
  wire int_b;
  wire [31:0]int_b0;
  wire [31:0]int_c;
  wire [31:0]int_d;
  wire int_d_ap_vld;
  wire [31:0]out1;
  wire [31:0]out2;
  wire [31:0]rdata;
  wire \rdata[0]_i_2_n_0 ;
  wire \rdata[0]_i_3_n_0 ;
  wire \rdata[0]_i_4_n_0 ;
  wire \rdata[10]_i_2_n_0 ;
  wire \rdata[11]_i_2_n_0 ;
  wire \rdata[12]_i_2_n_0 ;
  wire \rdata[13]_i_2_n_0 ;
  wire \rdata[14]_i_2_n_0 ;
  wire \rdata[15]_i_2_n_0 ;
  wire \rdata[16]_i_2_n_0 ;
  wire \rdata[17]_i_2_n_0 ;
  wire \rdata[18]_i_2_n_0 ;
  wire \rdata[19]_i_2_n_0 ;
  wire \rdata[1]_i_2_n_0 ;
  wire \rdata[20]_i_2_n_0 ;
  wire \rdata[21]_i_2_n_0 ;
  wire \rdata[22]_i_2_n_0 ;
  wire \rdata[23]_i_2_n_0 ;
  wire \rdata[24]_i_2_n_0 ;
  wire \rdata[25]_i_2_n_0 ;
  wire \rdata[26]_i_2_n_0 ;
  wire \rdata[27]_i_2_n_0 ;
  wire \rdata[28]_i_2_n_0 ;
  wire \rdata[29]_i_2_n_0 ;
  wire \rdata[2]_i_2_n_0 ;
  wire \rdata[30]_i_2_n_0 ;
  wire \rdata[31]_i_3_n_0 ;
  wire \rdata[31]_i_4_n_0 ;
  wire \rdata[3]_i_2_n_0 ;
  wire \rdata[4]_i_2_n_0 ;
  wire \rdata[5]_i_2_n_0 ;
  wire \rdata[6]_i_2_n_0 ;
  wire \rdata[7]_i_2_n_0 ;
  wire \rdata[8]_i_2_n_0 ;
  wire \rdata[9]_i_2_n_0 ;
  wire [5:0]s_axi_control_ARADDR;
  wire s_axi_control_ARVALID;
  wire [5:0]s_axi_control_AWADDR;
  wire s_axi_control_AWVALID;
  wire s_axi_control_BREADY;
  wire s_axi_control_BVALID;
  wire [31:0]s_axi_control_RDATA;
  wire s_axi_control_RREADY;
  wire s_axi_control_RVALID;
  wire [31:0]s_axi_control_WDATA;
  wire [3:0]s_axi_control_WSTRB;
  wire s_axi_control_WVALID;
  wire waddr;
  wire \waddr_reg_n_0_[0] ;
  wire \waddr_reg_n_0_[1] ;
  wire \waddr_reg_n_0_[2] ;
  wire \waddr_reg_n_0_[3] ;
  wire \waddr_reg_n_0_[4] ;
  wire \waddr_reg_n_0_[5] ;

  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'hF747)) 
    \FSM_onehot_rstate[1]_i_1 
       (.I0(s_axi_control_ARVALID),
        .I1(\FSM_onehot_rstate_reg[1]_0 ),
        .I2(s_axi_control_RVALID),
        .I3(s_axi_control_RREADY),
        .O(\FSM_onehot_rstate[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'h8F88)) 
    \FSM_onehot_rstate[2]_i_1 
       (.I0(s_axi_control_ARVALID),
        .I1(\FSM_onehot_rstate_reg[1]_0 ),
        .I2(s_axi_control_RREADY),
        .I3(s_axi_control_RVALID),
        .O(\FSM_onehot_rstate[2]_i_1_n_0 ));
  (* FSM_ENCODED_STATES = "RDIDLE:010,RDDATA:100,iSTATE:001" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_rstate_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\FSM_onehot_rstate[1]_i_1_n_0 ),
        .Q(\FSM_onehot_rstate_reg[1]_0 ),
        .R(ap_rst_n_inv));
  (* FSM_ENCODED_STATES = "RDIDLE:010,RDDATA:100,iSTATE:001" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_rstate_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\FSM_onehot_rstate[2]_i_1_n_0 ),
        .Q(s_axi_control_RVALID),
        .R(ap_rst_n_inv));
  LUT5 #(
    .INIT(32'hF444F477)) 
    \FSM_onehot_wstate[1]_i_1 
       (.I0(s_axi_control_AWVALID),
        .I1(\FSM_onehot_wstate_reg[1]_0 ),
        .I2(s_axi_control_BREADY),
        .I3(s_axi_control_BVALID),
        .I4(\FSM_onehot_wstate_reg[2]_0 ),
        .O(\FSM_onehot_wstate[1]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h88F8)) 
    \FSM_onehot_wstate[2]_i_1 
       (.I0(s_axi_control_AWVALID),
        .I1(\FSM_onehot_wstate_reg[1]_0 ),
        .I2(\FSM_onehot_wstate_reg[2]_0 ),
        .I3(s_axi_control_WVALID),
        .O(\FSM_onehot_wstate[2]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF444)) 
    \FSM_onehot_wstate[3]_i_1 
       (.I0(s_axi_control_BREADY),
        .I1(s_axi_control_BVALID),
        .I2(s_axi_control_WVALID),
        .I3(\FSM_onehot_wstate_reg[2]_0 ),
        .O(\FSM_onehot_wstate[3]_i_1_n_0 ));
  (* FSM_ENCODED_STATES = "WRDATA:0100,WRRESP:1000,WRIDLE:0010,iSTATE:0001" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_wstate_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\FSM_onehot_wstate[1]_i_1_n_0 ),
        .Q(\FSM_onehot_wstate_reg[1]_0 ),
        .R(ap_rst_n_inv));
  (* FSM_ENCODED_STATES = "WRDATA:0100,WRRESP:1000,WRIDLE:0010,iSTATE:0001" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_wstate_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\FSM_onehot_wstate[2]_i_1_n_0 ),
        .Q(\FSM_onehot_wstate_reg[2]_0 ),
        .R(ap_rst_n_inv));
  (* FSM_ENCODED_STATES = "WRDATA:0100,WRRESP:1000,WRIDLE:0010,iSTATE:0001" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_wstate_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\FSM_onehot_wstate[3]_i_1_n_0 ),
        .Q(s_axi_control_BVALID),
        .R(ap_rst_n_inv));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[0]_i_1 
       (.I0(s_axi_control_WDATA[0]),
        .I1(s_axi_control_WSTRB[0]),
        .I2(out1[0]),
        .O(int_a0[0]));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[10]_i_1 
       (.I0(s_axi_control_WDATA[10]),
        .I1(s_axi_control_WSTRB[1]),
        .I2(out1[10]),
        .O(int_a0[10]));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[11]_i_1 
       (.I0(s_axi_control_WDATA[11]),
        .I1(s_axi_control_WSTRB[1]),
        .I2(out1[11]),
        .O(int_a0[11]));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[12]_i_1 
       (.I0(s_axi_control_WDATA[12]),
        .I1(s_axi_control_WSTRB[1]),
        .I2(out1[12]),
        .O(int_a0[12]));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[13]_i_1 
       (.I0(s_axi_control_WDATA[13]),
        .I1(s_axi_control_WSTRB[1]),
        .I2(out1[13]),
        .O(int_a0[13]));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[14]_i_1 
       (.I0(s_axi_control_WDATA[14]),
        .I1(s_axi_control_WSTRB[1]),
        .I2(out1[14]),
        .O(int_a0[14]));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[15]_i_1 
       (.I0(s_axi_control_WDATA[15]),
        .I1(s_axi_control_WSTRB[1]),
        .I2(out1[15]),
        .O(int_a0[15]));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[16]_i_1 
       (.I0(s_axi_control_WDATA[16]),
        .I1(s_axi_control_WSTRB[2]),
        .I2(out1[16]),
        .O(int_a0[16]));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[17]_i_1 
       (.I0(s_axi_control_WDATA[17]),
        .I1(s_axi_control_WSTRB[2]),
        .I2(out1[17]),
        .O(int_a0[17]));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[18]_i_1 
       (.I0(s_axi_control_WDATA[18]),
        .I1(s_axi_control_WSTRB[2]),
        .I2(out1[18]),
        .O(int_a0[18]));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[19]_i_1 
       (.I0(s_axi_control_WDATA[19]),
        .I1(s_axi_control_WSTRB[2]),
        .I2(out1[19]),
        .O(int_a0[19]));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[1]_i_1 
       (.I0(s_axi_control_WDATA[1]),
        .I1(s_axi_control_WSTRB[0]),
        .I2(out1[1]),
        .O(int_a0[1]));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[20]_i_1 
       (.I0(s_axi_control_WDATA[20]),
        .I1(s_axi_control_WSTRB[2]),
        .I2(out1[20]),
        .O(int_a0[20]));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[21]_i_1 
       (.I0(s_axi_control_WDATA[21]),
        .I1(s_axi_control_WSTRB[2]),
        .I2(out1[21]),
        .O(int_a0[21]));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[22]_i_1 
       (.I0(s_axi_control_WDATA[22]),
        .I1(s_axi_control_WSTRB[2]),
        .I2(out1[22]),
        .O(int_a0[22]));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[23]_i_1 
       (.I0(s_axi_control_WDATA[23]),
        .I1(s_axi_control_WSTRB[2]),
        .I2(out1[23]),
        .O(int_a0[23]));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[24]_i_1 
       (.I0(s_axi_control_WDATA[24]),
        .I1(s_axi_control_WSTRB[3]),
        .I2(out1[24]),
        .O(int_a0[24]));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[25]_i_1 
       (.I0(s_axi_control_WDATA[25]),
        .I1(s_axi_control_WSTRB[3]),
        .I2(out1[25]),
        .O(int_a0[25]));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[26]_i_1 
       (.I0(s_axi_control_WDATA[26]),
        .I1(s_axi_control_WSTRB[3]),
        .I2(out1[26]),
        .O(int_a0[26]));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[27]_i_1 
       (.I0(s_axi_control_WDATA[27]),
        .I1(s_axi_control_WSTRB[3]),
        .I2(out1[27]),
        .O(int_a0[27]));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[28]_i_1 
       (.I0(s_axi_control_WDATA[28]),
        .I1(s_axi_control_WSTRB[3]),
        .I2(out1[28]),
        .O(int_a0[28]));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[29]_i_1 
       (.I0(s_axi_control_WDATA[29]),
        .I1(s_axi_control_WSTRB[3]),
        .I2(out1[29]),
        .O(int_a0[29]));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[2]_i_1 
       (.I0(s_axi_control_WDATA[2]),
        .I1(s_axi_control_WSTRB[0]),
        .I2(out1[2]),
        .O(int_a0[2]));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[30]_i_1 
       (.I0(s_axi_control_WDATA[30]),
        .I1(s_axi_control_WSTRB[3]),
        .I2(out1[30]),
        .O(int_a0[30]));
  LUT1 #(
    .INIT(2'h1)) 
    \int_a[31]_i_1 
       (.I0(ap_rst_n),
        .O(ap_rst_n_inv));
  LUT3 #(
    .INIT(8'h08)) 
    \int_a[31]_i_2 
       (.I0(\FSM_onehot_wstate_reg[2]_0 ),
        .I1(\int_a[31]_i_4_n_0 ),
        .I2(\waddr_reg_n_0_[3] ),
        .O(int_a));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[31]_i_3 
       (.I0(s_axi_control_WDATA[31]),
        .I1(s_axi_control_WSTRB[3]),
        .I2(out1[31]),
        .O(int_a0[31]));
  LUT6 #(
    .INIT(64'h0000001000000000)) 
    \int_a[31]_i_4 
       (.I0(\waddr_reg_n_0_[1] ),
        .I1(\waddr_reg_n_0_[0] ),
        .I2(\waddr_reg_n_0_[4] ),
        .I3(\waddr_reg_n_0_[2] ),
        .I4(\waddr_reg_n_0_[5] ),
        .I5(s_axi_control_WVALID),
        .O(\int_a[31]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[3]_i_1 
       (.I0(s_axi_control_WDATA[3]),
        .I1(s_axi_control_WSTRB[0]),
        .I2(out1[3]),
        .O(int_a0[3]));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[4]_i_1 
       (.I0(s_axi_control_WDATA[4]),
        .I1(s_axi_control_WSTRB[0]),
        .I2(out1[4]),
        .O(int_a0[4]));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[5]_i_1 
       (.I0(s_axi_control_WDATA[5]),
        .I1(s_axi_control_WSTRB[0]),
        .I2(out1[5]),
        .O(int_a0[5]));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[6]_i_1 
       (.I0(s_axi_control_WDATA[6]),
        .I1(s_axi_control_WSTRB[0]),
        .I2(out1[6]),
        .O(int_a0[6]));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[7]_i_1 
       (.I0(s_axi_control_WDATA[7]),
        .I1(s_axi_control_WSTRB[0]),
        .I2(out1[7]),
        .O(int_a0[7]));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[8]_i_1 
       (.I0(s_axi_control_WDATA[8]),
        .I1(s_axi_control_WSTRB[1]),
        .I2(out1[8]),
        .O(int_a0[8]));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[9]_i_1 
       (.I0(s_axi_control_WDATA[9]),
        .I1(s_axi_control_WSTRB[1]),
        .I2(out1[9]),
        .O(int_a0[9]));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[0] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[0]),
        .Q(out1[0]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[10] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[10]),
        .Q(out1[10]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[11] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[11]),
        .Q(out1[11]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[12] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[12]),
        .Q(out1[12]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[13] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[13]),
        .Q(out1[13]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[14] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[14]),
        .Q(out1[14]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[15] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[15]),
        .Q(out1[15]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[16] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[16]),
        .Q(out1[16]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[17] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[17]),
        .Q(out1[17]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[18] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[18]),
        .Q(out1[18]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[19] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[19]),
        .Q(out1[19]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[1] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[1]),
        .Q(out1[1]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[20] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[20]),
        .Q(out1[20]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[21] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[21]),
        .Q(out1[21]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[22] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[22]),
        .Q(out1[22]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[23] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[23]),
        .Q(out1[23]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[24] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[24]),
        .Q(out1[24]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[25] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[25]),
        .Q(out1[25]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[26] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[26]),
        .Q(out1[26]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[27] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[27]),
        .Q(out1[27]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[28] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[28]),
        .Q(out1[28]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[29] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[29]),
        .Q(out1[29]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[2] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[2]),
        .Q(out1[2]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[30] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[30]),
        .Q(out1[30]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[31] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[31]),
        .Q(out1[31]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[3] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[3]),
        .Q(out1[3]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[4] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[4]),
        .Q(out1[4]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[5] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[5]),
        .Q(out1[5]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[6] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[6]),
        .Q(out1[6]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[7] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[7]),
        .Q(out1[7]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[8] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[8]),
        .Q(out1[8]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[9] 
       (.C(ap_clk),
        .CE(int_a),
        .D(int_a0[9]),
        .Q(out1[9]),
        .R(ap_rst_n_inv));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[0]_i_1 
       (.I0(s_axi_control_WDATA[0]),
        .I1(s_axi_control_WSTRB[0]),
        .I2(out2[0]),
        .O(int_b0[0]));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[10]_i_1 
       (.I0(s_axi_control_WDATA[10]),
        .I1(s_axi_control_WSTRB[1]),
        .I2(out2[10]),
        .O(int_b0[10]));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[11]_i_1 
       (.I0(s_axi_control_WDATA[11]),
        .I1(s_axi_control_WSTRB[1]),
        .I2(out2[11]),
        .O(int_b0[11]));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[12]_i_1 
       (.I0(s_axi_control_WDATA[12]),
        .I1(s_axi_control_WSTRB[1]),
        .I2(out2[12]),
        .O(int_b0[12]));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[13]_i_1 
       (.I0(s_axi_control_WDATA[13]),
        .I1(s_axi_control_WSTRB[1]),
        .I2(out2[13]),
        .O(int_b0[13]));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[14]_i_1 
       (.I0(s_axi_control_WDATA[14]),
        .I1(s_axi_control_WSTRB[1]),
        .I2(out2[14]),
        .O(int_b0[14]));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[15]_i_1 
       (.I0(s_axi_control_WDATA[15]),
        .I1(s_axi_control_WSTRB[1]),
        .I2(out2[15]),
        .O(int_b0[15]));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[16]_i_1 
       (.I0(s_axi_control_WDATA[16]),
        .I1(s_axi_control_WSTRB[2]),
        .I2(out2[16]),
        .O(int_b0[16]));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[17]_i_1 
       (.I0(s_axi_control_WDATA[17]),
        .I1(s_axi_control_WSTRB[2]),
        .I2(out2[17]),
        .O(int_b0[17]));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[18]_i_1 
       (.I0(s_axi_control_WDATA[18]),
        .I1(s_axi_control_WSTRB[2]),
        .I2(out2[18]),
        .O(int_b0[18]));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[19]_i_1 
       (.I0(s_axi_control_WDATA[19]),
        .I1(s_axi_control_WSTRB[2]),
        .I2(out2[19]),
        .O(int_b0[19]));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[1]_i_1 
       (.I0(s_axi_control_WDATA[1]),
        .I1(s_axi_control_WSTRB[0]),
        .I2(out2[1]),
        .O(int_b0[1]));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[20]_i_1 
       (.I0(s_axi_control_WDATA[20]),
        .I1(s_axi_control_WSTRB[2]),
        .I2(out2[20]),
        .O(int_b0[20]));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[21]_i_1 
       (.I0(s_axi_control_WDATA[21]),
        .I1(s_axi_control_WSTRB[2]),
        .I2(out2[21]),
        .O(int_b0[21]));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[22]_i_1 
       (.I0(s_axi_control_WDATA[22]),
        .I1(s_axi_control_WSTRB[2]),
        .I2(out2[22]),
        .O(int_b0[22]));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[23]_i_1 
       (.I0(s_axi_control_WDATA[23]),
        .I1(s_axi_control_WSTRB[2]),
        .I2(out2[23]),
        .O(int_b0[23]));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[24]_i_1 
       (.I0(s_axi_control_WDATA[24]),
        .I1(s_axi_control_WSTRB[3]),
        .I2(out2[24]),
        .O(int_b0[24]));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[25]_i_1 
       (.I0(s_axi_control_WDATA[25]),
        .I1(s_axi_control_WSTRB[3]),
        .I2(out2[25]),
        .O(int_b0[25]));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[26]_i_1 
       (.I0(s_axi_control_WDATA[26]),
        .I1(s_axi_control_WSTRB[3]),
        .I2(out2[26]),
        .O(int_b0[26]));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[27]_i_1 
       (.I0(s_axi_control_WDATA[27]),
        .I1(s_axi_control_WSTRB[3]),
        .I2(out2[27]),
        .O(int_b0[27]));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[28]_i_1 
       (.I0(s_axi_control_WDATA[28]),
        .I1(s_axi_control_WSTRB[3]),
        .I2(out2[28]),
        .O(int_b0[28]));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[29]_i_1 
       (.I0(s_axi_control_WDATA[29]),
        .I1(s_axi_control_WSTRB[3]),
        .I2(out2[29]),
        .O(int_b0[29]));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[2]_i_1 
       (.I0(s_axi_control_WDATA[2]),
        .I1(s_axi_control_WSTRB[0]),
        .I2(out2[2]),
        .O(int_b0[2]));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[30]_i_1 
       (.I0(s_axi_control_WDATA[30]),
        .I1(s_axi_control_WSTRB[3]),
        .I2(out2[30]),
        .O(int_b0[30]));
  LUT3 #(
    .INIT(8'h80)) 
    \int_b[31]_i_1 
       (.I0(\FSM_onehot_wstate_reg[2]_0 ),
        .I1(\int_a[31]_i_4_n_0 ),
        .I2(\waddr_reg_n_0_[3] ),
        .O(int_b));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[31]_i_2 
       (.I0(s_axi_control_WDATA[31]),
        .I1(s_axi_control_WSTRB[3]),
        .I2(out2[31]),
        .O(int_b0[31]));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[3]_i_1 
       (.I0(s_axi_control_WDATA[3]),
        .I1(s_axi_control_WSTRB[0]),
        .I2(out2[3]),
        .O(int_b0[3]));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[4]_i_1 
       (.I0(s_axi_control_WDATA[4]),
        .I1(s_axi_control_WSTRB[0]),
        .I2(out2[4]),
        .O(int_b0[4]));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[5]_i_1 
       (.I0(s_axi_control_WDATA[5]),
        .I1(s_axi_control_WSTRB[0]),
        .I2(out2[5]),
        .O(int_b0[5]));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[6]_i_1 
       (.I0(s_axi_control_WDATA[6]),
        .I1(s_axi_control_WSTRB[0]),
        .I2(out2[6]),
        .O(int_b0[6]));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[7]_i_1 
       (.I0(s_axi_control_WDATA[7]),
        .I1(s_axi_control_WSTRB[0]),
        .I2(out2[7]),
        .O(int_b0[7]));
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[8]_i_1 
       (.I0(s_axi_control_WDATA[8]),
        .I1(s_axi_control_WSTRB[1]),
        .I2(out2[8]),
        .O(int_b0[8]));
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[9]_i_1 
       (.I0(s_axi_control_WDATA[9]),
        .I1(s_axi_control_WSTRB[1]),
        .I2(out2[9]),
        .O(int_b0[9]));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[0] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[0]),
        .Q(out2[0]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[10] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[10]),
        .Q(out2[10]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[11] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[11]),
        .Q(out2[11]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[12] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[12]),
        .Q(out2[12]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[13] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[13]),
        .Q(out2[13]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[14] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[14]),
        .Q(out2[14]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[15] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[15]),
        .Q(out2[15]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[16] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[16]),
        .Q(out2[16]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[17] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[17]),
        .Q(out2[17]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[18] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[18]),
        .Q(out2[18]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[19] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[19]),
        .Q(out2[19]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[1] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[1]),
        .Q(out2[1]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[20] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[20]),
        .Q(out2[20]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[21] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[21]),
        .Q(out2[21]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[22] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[22]),
        .Q(out2[22]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[23] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[23]),
        .Q(out2[23]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[24] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[24]),
        .Q(out2[24]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[25] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[25]),
        .Q(out2[25]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[26] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[26]),
        .Q(out2[26]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[27] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[27]),
        .Q(out2[27]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[28] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[28]),
        .Q(out2[28]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[29] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[29]),
        .Q(out2[29]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[2] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[2]),
        .Q(out2[2]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[30] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[30]),
        .Q(out2[30]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[31] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[31]),
        .Q(out2[31]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[3] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[3]),
        .Q(out2[3]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[4] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[4]),
        .Q(out2[4]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[5] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[5]),
        .Q(out2[5]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[6] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[6]),
        .Q(out2[6]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[7] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[7]),
        .Q(out2[7]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[8] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[8]),
        .Q(out2[8]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[9] 
       (.C(ap_clk),
        .CE(int_b),
        .D(int_b0[9]),
        .Q(out2[9]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[0]),
        .Q(int_c[0]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[10]),
        .Q(int_c[10]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[11]),
        .Q(int_c[11]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[12]),
        .Q(int_c[12]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[13]),
        .Q(int_c[13]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[14]),
        .Q(int_c[14]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[15]),
        .Q(int_c[15]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[16]),
        .Q(int_c[16]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[17] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[17]),
        .Q(int_c[17]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[18] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[18]),
        .Q(int_c[18]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[19] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[19]),
        .Q(int_c[19]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[1]),
        .Q(int_c[1]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[20] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[20]),
        .Q(int_c[20]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[21] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[21]),
        .Q(int_c[21]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[22] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[22]),
        .Q(int_c[22]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[23] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[23]),
        .Q(int_c[23]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[24] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[24]),
        .Q(int_c[24]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[25] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[25]),
        .Q(int_c[25]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[26] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[26]),
        .Q(int_c[26]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[27] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[27]),
        .Q(int_c[27]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[28] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[28]),
        .Q(int_c[28]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[29] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[29]),
        .Q(int_c[29]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[2]),
        .Q(int_c[2]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[30] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[30]),
        .Q(int_c[30]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[31] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[31]),
        .Q(int_c[31]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[3]),
        .Q(int_c[3]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[4]),
        .Q(int_c[4]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[5]),
        .Q(int_c[5]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[6]),
        .Q(int_c[6]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[7]),
        .Q(int_c[7]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[8]),
        .Q(int_c[8]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in1[9]),
        .Q(int_c[9]),
        .R(ap_rst_n_inv));
  FDRE int_d_ap_vld_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(1'b1),
        .Q(int_d_ap_vld),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[0]),
        .Q(int_d[0]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[10]),
        .Q(int_d[10]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[11]),
        .Q(int_d[11]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[12]),
        .Q(int_d[12]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[13]),
        .Q(int_d[13]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[14] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[14]),
        .Q(int_d[14]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[15] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[15]),
        .Q(int_d[15]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[16] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[16]),
        .Q(int_d[16]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[17] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[17]),
        .Q(int_d[17]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[18] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[18]),
        .Q(int_d[18]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[19] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[19]),
        .Q(int_d[19]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[1]),
        .Q(int_d[1]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[20] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[20]),
        .Q(int_d[20]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[21] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[21]),
        .Q(int_d[21]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[22] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[22]),
        .Q(int_d[22]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[23] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[23]),
        .Q(int_d[23]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[24] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[24]),
        .Q(int_d[24]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[25] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[25]),
        .Q(int_d[25]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[26] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[26]),
        .Q(int_d[26]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[27] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[27]),
        .Q(int_d[27]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[28] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[28]),
        .Q(int_d[28]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[29] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[29]),
        .Q(int_d[29]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[2]),
        .Q(int_d[2]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[30] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[30]),
        .Q(int_d[30]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[31] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[31]),
        .Q(int_d[31]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[3]),
        .Q(int_d[3]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[4]),
        .Q(int_d[4]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[5]),
        .Q(int_d[5]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[6]),
        .Q(int_d[6]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[7]),
        .Q(int_d[7]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[8]),
        .Q(int_d[8]),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    \int_d_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(in2[9]),
        .Q(int_d[9]),
        .R(ap_rst_n_inv));
  LUT5 #(
    .INIT(32'hAFA0C0C0)) 
    \rdata[0]_i_1 
       (.I0(\rdata[0]_i_2_n_0 ),
        .I1(\rdata[0]_i_3_n_0 ),
        .I2(s_axi_control_ARADDR[5]),
        .I3(\rdata[0]_i_4_n_0 ),
        .I4(s_axi_control_ARADDR[4]),
        .O(rdata[0]));
  LUT6 #(
    .INIT(64'h0000000B00000008)) 
    \rdata[0]_i_2 
       (.I0(int_d_ap_vld),
        .I1(s_axi_control_ARADDR[2]),
        .I2(s_axi_control_ARADDR[3]),
        .I3(s_axi_control_ARADDR[1]),
        .I4(s_axi_control_ARADDR[0]),
        .I5(int_d[0]),
        .O(\rdata[0]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h00000000000000B8)) 
    \rdata[0]_i_3 
       (.I0(int_d_ap_vld),
        .I1(s_axi_control_ARADDR[2]),
        .I2(int_c[0]),
        .I3(s_axi_control_ARADDR[1]),
        .I4(s_axi_control_ARADDR[0]),
        .I5(s_axi_control_ARADDR[3]),
        .O(\rdata[0]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[0]_i_4 
       (.I0(out1[0]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[0]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[0]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[10]_i_1 
       (.I0(int_d[10]),
        .I1(int_c[10]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[10]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[10]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[10]_i_2 
       (.I0(out1[10]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[10]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[10]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[11]_i_1 
       (.I0(int_d[11]),
        .I1(int_c[11]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[11]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[11]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[11]_i_2 
       (.I0(out1[11]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[11]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[11]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[12]_i_1 
       (.I0(int_d[12]),
        .I1(int_c[12]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[12]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[12]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[12]_i_2 
       (.I0(out1[12]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[12]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[12]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[13]_i_1 
       (.I0(int_d[13]),
        .I1(int_c[13]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[13]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[13]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[13]_i_2 
       (.I0(out1[13]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[13]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[13]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[14]_i_1 
       (.I0(int_d[14]),
        .I1(int_c[14]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[14]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[14]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[14]_i_2 
       (.I0(out1[14]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[14]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[14]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[15]_i_1 
       (.I0(int_d[15]),
        .I1(int_c[15]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[15]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[15]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[15]_i_2 
       (.I0(out1[15]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[15]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[15]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[16]_i_1 
       (.I0(int_d[16]),
        .I1(int_c[16]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[16]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[16]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[16]_i_2 
       (.I0(out1[16]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[16]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[16]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[17]_i_1 
       (.I0(int_d[17]),
        .I1(int_c[17]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[17]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[17]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[17]_i_2 
       (.I0(out1[17]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[17]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[17]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[18]_i_1 
       (.I0(int_d[18]),
        .I1(int_c[18]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[18]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[18]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[18]_i_2 
       (.I0(out1[18]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[18]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[18]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[19]_i_1 
       (.I0(int_d[19]),
        .I1(int_c[19]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[19]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[19]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[19]_i_2 
       (.I0(out1[19]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[19]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[19]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[1]_i_1 
       (.I0(int_d[1]),
        .I1(int_c[1]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[1]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[1]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[1]_i_2 
       (.I0(out1[1]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[1]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[1]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[20]_i_1 
       (.I0(int_d[20]),
        .I1(int_c[20]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[20]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[20]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[20]_i_2 
       (.I0(out1[20]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[20]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[20]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[21]_i_1 
       (.I0(int_d[21]),
        .I1(int_c[21]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[21]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[21]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[21]_i_2 
       (.I0(out1[21]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[21]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[21]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[22]_i_1 
       (.I0(int_d[22]),
        .I1(int_c[22]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[22]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[22]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[22]_i_2 
       (.I0(out1[22]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[22]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[22]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[23]_i_1 
       (.I0(int_d[23]),
        .I1(int_c[23]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[23]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[23]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[23]_i_2 
       (.I0(out1[23]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[23]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[23]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[24]_i_1 
       (.I0(int_d[24]),
        .I1(int_c[24]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[24]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[24]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[24]_i_2 
       (.I0(out1[24]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[24]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[24]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[25]_i_1 
       (.I0(int_d[25]),
        .I1(int_c[25]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[25]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[25]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[25]_i_2 
       (.I0(out1[25]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[25]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[25]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[26]_i_1 
       (.I0(int_d[26]),
        .I1(int_c[26]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[26]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[26]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[26]_i_2 
       (.I0(out1[26]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[26]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[26]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[27]_i_1 
       (.I0(int_d[27]),
        .I1(int_c[27]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[27]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[27]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[27]_i_2 
       (.I0(out1[27]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[27]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[27]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[28]_i_1 
       (.I0(int_d[28]),
        .I1(int_c[28]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[28]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[28]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[28]_i_2 
       (.I0(out1[28]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[28]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[28]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[29]_i_1 
       (.I0(int_d[29]),
        .I1(int_c[29]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[29]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[29]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[29]_i_2 
       (.I0(out1[29]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[29]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[29]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[2]_i_1 
       (.I0(int_d[2]),
        .I1(int_c[2]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[2]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[2]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[2]_i_2 
       (.I0(out1[2]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[2]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[2]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[30]_i_1 
       (.I0(int_d[30]),
        .I1(int_c[30]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[30]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[30]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[30]_i_2 
       (.I0(out1[30]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[30]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[30]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \rdata[31]_i_1 
       (.I0(s_axi_control_ARVALID),
        .I1(\FSM_onehot_rstate_reg[1]_0 ),
        .O(ar_hs));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[31]_i_2 
       (.I0(int_d[31]),
        .I1(int_c[31]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[31]_i_4_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[31]));
  LUT4 #(
    .INIT(16'h0001)) 
    \rdata[31]_i_3 
       (.I0(s_axi_control_ARADDR[3]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[2]),
        .O(\rdata[31]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[31]_i_4 
       (.I0(out1[31]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[31]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[31]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[3]_i_1 
       (.I0(int_d[3]),
        .I1(int_c[3]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[3]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[3]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[3]_i_2 
       (.I0(out1[3]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[3]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[3]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[4]_i_1 
       (.I0(int_d[4]),
        .I1(int_c[4]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[4]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[4]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[4]_i_2 
       (.I0(out1[4]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[4]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[4]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[5]_i_1 
       (.I0(int_d[5]),
        .I1(int_c[5]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[5]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[5]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[5]_i_2 
       (.I0(out1[5]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[5]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[5]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[6]_i_1 
       (.I0(int_d[6]),
        .I1(int_c[6]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[6]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[6]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[6]_i_2 
       (.I0(out1[6]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[6]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[6]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[7]_i_1 
       (.I0(int_d[7]),
        .I1(int_c[7]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[7]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[7]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[7]_i_2 
       (.I0(out1[7]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[7]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[7]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[8]_i_1 
       (.I0(int_d[8]),
        .I1(int_c[8]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[8]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[8]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[8]_i_2 
       (.I0(out1[8]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[8]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[8]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hA0FFA000C000C000)) 
    \rdata[9]_i_1 
       (.I0(int_d[9]),
        .I1(int_c[9]),
        .I2(\rdata[31]_i_3_n_0 ),
        .I3(s_axi_control_ARADDR[5]),
        .I4(\rdata[9]_i_2_n_0 ),
        .I5(s_axi_control_ARADDR[4]),
        .O(rdata[9]));
  LUT6 #(
    .INIT(64'h0000000003020002)) 
    \rdata[9]_i_2 
       (.I0(out1[9]),
        .I1(s_axi_control_ARADDR[1]),
        .I2(s_axi_control_ARADDR[0]),
        .I3(s_axi_control_ARADDR[3]),
        .I4(out2[9]),
        .I5(s_axi_control_ARADDR[2]),
        .O(\rdata[9]_i_2_n_0 ));
  FDRE \rdata_reg[0] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[0]),
        .Q(s_axi_control_RDATA[0]),
        .R(1'b0));
  FDRE \rdata_reg[10] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[10]),
        .Q(s_axi_control_RDATA[10]),
        .R(1'b0));
  FDRE \rdata_reg[11] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[11]),
        .Q(s_axi_control_RDATA[11]),
        .R(1'b0));
  FDRE \rdata_reg[12] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[12]),
        .Q(s_axi_control_RDATA[12]),
        .R(1'b0));
  FDRE \rdata_reg[13] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[13]),
        .Q(s_axi_control_RDATA[13]),
        .R(1'b0));
  FDRE \rdata_reg[14] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[14]),
        .Q(s_axi_control_RDATA[14]),
        .R(1'b0));
  FDRE \rdata_reg[15] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[15]),
        .Q(s_axi_control_RDATA[15]),
        .R(1'b0));
  FDRE \rdata_reg[16] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[16]),
        .Q(s_axi_control_RDATA[16]),
        .R(1'b0));
  FDRE \rdata_reg[17] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[17]),
        .Q(s_axi_control_RDATA[17]),
        .R(1'b0));
  FDRE \rdata_reg[18] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[18]),
        .Q(s_axi_control_RDATA[18]),
        .R(1'b0));
  FDRE \rdata_reg[19] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[19]),
        .Q(s_axi_control_RDATA[19]),
        .R(1'b0));
  FDRE \rdata_reg[1] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[1]),
        .Q(s_axi_control_RDATA[1]),
        .R(1'b0));
  FDRE \rdata_reg[20] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[20]),
        .Q(s_axi_control_RDATA[20]),
        .R(1'b0));
  FDRE \rdata_reg[21] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[21]),
        .Q(s_axi_control_RDATA[21]),
        .R(1'b0));
  FDRE \rdata_reg[22] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[22]),
        .Q(s_axi_control_RDATA[22]),
        .R(1'b0));
  FDRE \rdata_reg[23] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[23]),
        .Q(s_axi_control_RDATA[23]),
        .R(1'b0));
  FDRE \rdata_reg[24] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[24]),
        .Q(s_axi_control_RDATA[24]),
        .R(1'b0));
  FDRE \rdata_reg[25] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[25]),
        .Q(s_axi_control_RDATA[25]),
        .R(1'b0));
  FDRE \rdata_reg[26] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[26]),
        .Q(s_axi_control_RDATA[26]),
        .R(1'b0));
  FDRE \rdata_reg[27] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[27]),
        .Q(s_axi_control_RDATA[27]),
        .R(1'b0));
  FDRE \rdata_reg[28] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[28]),
        .Q(s_axi_control_RDATA[28]),
        .R(1'b0));
  FDRE \rdata_reg[29] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[29]),
        .Q(s_axi_control_RDATA[29]),
        .R(1'b0));
  FDRE \rdata_reg[2] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[2]),
        .Q(s_axi_control_RDATA[2]),
        .R(1'b0));
  FDRE \rdata_reg[30] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[30]),
        .Q(s_axi_control_RDATA[30]),
        .R(1'b0));
  FDRE \rdata_reg[31] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[31]),
        .Q(s_axi_control_RDATA[31]),
        .R(1'b0));
  FDRE \rdata_reg[3] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[3]),
        .Q(s_axi_control_RDATA[3]),
        .R(1'b0));
  FDRE \rdata_reg[4] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[4]),
        .Q(s_axi_control_RDATA[4]),
        .R(1'b0));
  FDRE \rdata_reg[5] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[5]),
        .Q(s_axi_control_RDATA[5]),
        .R(1'b0));
  FDRE \rdata_reg[6] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[6]),
        .Q(s_axi_control_RDATA[6]),
        .R(1'b0));
  FDRE \rdata_reg[7] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[7]),
        .Q(s_axi_control_RDATA[7]),
        .R(1'b0));
  FDRE \rdata_reg[8] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[8]),
        .Q(s_axi_control_RDATA[8]),
        .R(1'b0));
  FDRE \rdata_reg[9] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[9]),
        .Q(s_axi_control_RDATA[9]),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h8)) 
    \waddr[5]_i_1 
       (.I0(s_axi_control_AWVALID),
        .I1(\FSM_onehot_wstate_reg[1]_0 ),
        .O(waddr));
  FDRE \waddr_reg[0] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_control_AWADDR[0]),
        .Q(\waddr_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \waddr_reg[1] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_control_AWADDR[1]),
        .Q(\waddr_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \waddr_reg[2] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_control_AWADDR[2]),
        .Q(\waddr_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \waddr_reg[3] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_control_AWADDR[3]),
        .Q(\waddr_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \waddr_reg[4] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_control_AWADDR[4]),
        .Q(\waddr_reg_n_0_[4] ),
        .R(1'b0));
  FDRE \waddr_reg[5] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_control_AWADDR[5]),
        .Q(\waddr_reg_n_0_[5] ),
        .R(1'b0));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;
    parameter GRES_WIDTH = 10000;
    parameter GRES_START = 10000;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    wire GRESTORE;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;
    reg GRESTORE_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;
    assign (strong1, weak0) GRESTORE = GRESTORE_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

    initial begin 
	GRESTORE_int = 1'b0;
	#(GRES_START);
	GRESTORE_int = 1'b1;
	#(GRES_WIDTH);
	GRESTORE_int = 1'b0;
    end

endmodule
`endif
