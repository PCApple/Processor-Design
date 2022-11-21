// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2022.1 (win64) Build 3526262 Mon Apr 18 15:48:16 MDT 2022
// Date        : Fri Nov 18 17:34:37 2022
// Host        : PCLaptop running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ diagram_project2_frame_0_2_sim_netlist.v
// Design      : diagram_project2_frame_0_2
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z020clg400-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "diagram_project2_frame_0_2,project2_frame,{}" *) (* DowngradeIPIdentifiedWarnings = "yes" *) (* IP_DEFINITION_SOURCE = "module_ref" *) 
(* X_CORE_INFO = "project2_frame,Vivado 2022.1" *) 
(* NotValidForBitStream *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix
   (clk,
    reset_n,
    out1,
    out2);
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 clk CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME clk, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN diagram_processing_system7_0_1_FCLK_CLK0, INSERT_VIP 0" *) input clk;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 reset_n RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME reset_n, POLARITY ACTIVE_LOW, INSERT_VIP 0" *) input reset_n;
  output [31:0]out1;
  output [31:0]out2;

  wire \<const0> ;
  wire \<const1> ;
  wire clk;
  wire [31:0]out1;
  wire reset_n;

  assign out2[31] = \<const0> ;
  assign out2[30] = \<const0> ;
  assign out2[29] = \<const0> ;
  assign out2[28] = \<const0> ;
  assign out2[27] = \<const0> ;
  assign out2[26] = \<const0> ;
  assign out2[25] = \<const0> ;
  assign out2[24] = \<const0> ;
  assign out2[23] = \<const0> ;
  assign out2[22] = \<const0> ;
  assign out2[21] = \<const0> ;
  assign out2[20] = \<const0> ;
  assign out2[19] = \<const0> ;
  assign out2[18] = \<const0> ;
  assign out2[17] = \<const0> ;
  assign out2[16] = \<const0> ;
  assign out2[15] = \<const0> ;
  assign out2[14] = \<const0> ;
  assign out2[13] = \<const0> ;
  assign out2[12] = \<const0> ;
  assign out2[11] = \<const0> ;
  assign out2[10] = \<const0> ;
  assign out2[9] = \<const0> ;
  assign out2[8] = \<const0> ;
  assign out2[7] = \<const0> ;
  assign out2[6] = \<const0> ;
  assign out2[5] = \<const1> ;
  assign out2[4] = \<const0> ;
  assign out2[3] = \<const0> ;
  assign out2[2] = \<const0> ;
  assign out2[1] = \<const0> ;
  assign out2[0] = \<const0> ;
  GND GND
       (.G(\<const0> ));
  VCC VCC
       (.P(\<const1> ));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_project2_frame inst
       (.clk(clk),
        .out1(out1),
        .reset_n(reset_n));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_pipeline
   (out1,
    clk,
    reset_n);
  output [31:0]out1;
  input clk;
  input reset_n;

  wire clk;
  wire \cycle_count[31]_i_1_n_0 ;
  wire \cycle_count[3]_i_2_n_0 ;
  wire \cycle_count_reg[11]_i_1_n_0 ;
  wire \cycle_count_reg[11]_i_1_n_1 ;
  wire \cycle_count_reg[11]_i_1_n_2 ;
  wire \cycle_count_reg[11]_i_1_n_3 ;
  wire \cycle_count_reg[11]_i_1_n_4 ;
  wire \cycle_count_reg[11]_i_1_n_5 ;
  wire \cycle_count_reg[11]_i_1_n_6 ;
  wire \cycle_count_reg[11]_i_1_n_7 ;
  wire \cycle_count_reg[15]_i_1_n_0 ;
  wire \cycle_count_reg[15]_i_1_n_1 ;
  wire \cycle_count_reg[15]_i_1_n_2 ;
  wire \cycle_count_reg[15]_i_1_n_3 ;
  wire \cycle_count_reg[15]_i_1_n_4 ;
  wire \cycle_count_reg[15]_i_1_n_5 ;
  wire \cycle_count_reg[15]_i_1_n_6 ;
  wire \cycle_count_reg[15]_i_1_n_7 ;
  wire \cycle_count_reg[19]_i_1_n_0 ;
  wire \cycle_count_reg[19]_i_1_n_1 ;
  wire \cycle_count_reg[19]_i_1_n_2 ;
  wire \cycle_count_reg[19]_i_1_n_3 ;
  wire \cycle_count_reg[19]_i_1_n_4 ;
  wire \cycle_count_reg[19]_i_1_n_5 ;
  wire \cycle_count_reg[19]_i_1_n_6 ;
  wire \cycle_count_reg[19]_i_1_n_7 ;
  wire \cycle_count_reg[23]_i_1_n_0 ;
  wire \cycle_count_reg[23]_i_1_n_1 ;
  wire \cycle_count_reg[23]_i_1_n_2 ;
  wire \cycle_count_reg[23]_i_1_n_3 ;
  wire \cycle_count_reg[23]_i_1_n_4 ;
  wire \cycle_count_reg[23]_i_1_n_5 ;
  wire \cycle_count_reg[23]_i_1_n_6 ;
  wire \cycle_count_reg[23]_i_1_n_7 ;
  wire \cycle_count_reg[27]_i_1_n_0 ;
  wire \cycle_count_reg[27]_i_1_n_1 ;
  wire \cycle_count_reg[27]_i_1_n_2 ;
  wire \cycle_count_reg[27]_i_1_n_3 ;
  wire \cycle_count_reg[27]_i_1_n_4 ;
  wire \cycle_count_reg[27]_i_1_n_5 ;
  wire \cycle_count_reg[27]_i_1_n_6 ;
  wire \cycle_count_reg[27]_i_1_n_7 ;
  wire \cycle_count_reg[31]_i_2_n_1 ;
  wire \cycle_count_reg[31]_i_2_n_2 ;
  wire \cycle_count_reg[31]_i_2_n_3 ;
  wire \cycle_count_reg[31]_i_2_n_4 ;
  wire \cycle_count_reg[31]_i_2_n_5 ;
  wire \cycle_count_reg[31]_i_2_n_6 ;
  wire \cycle_count_reg[31]_i_2_n_7 ;
  wire \cycle_count_reg[3]_i_1_n_0 ;
  wire \cycle_count_reg[3]_i_1_n_1 ;
  wire \cycle_count_reg[3]_i_1_n_2 ;
  wire \cycle_count_reg[3]_i_1_n_3 ;
  wire \cycle_count_reg[3]_i_1_n_4 ;
  wire \cycle_count_reg[3]_i_1_n_5 ;
  wire \cycle_count_reg[3]_i_1_n_6 ;
  wire \cycle_count_reg[3]_i_1_n_7 ;
  wire \cycle_count_reg[7]_i_1_n_0 ;
  wire \cycle_count_reg[7]_i_1_n_1 ;
  wire \cycle_count_reg[7]_i_1_n_2 ;
  wire \cycle_count_reg[7]_i_1_n_3 ;
  wire \cycle_count_reg[7]_i_1_n_4 ;
  wire \cycle_count_reg[7]_i_1_n_5 ;
  wire \cycle_count_reg[7]_i_1_n_6 ;
  wire \cycle_count_reg[7]_i_1_n_7 ;
  wire [31:0]out1;
  wire reset_n;
  wire [3:3]\NLW_cycle_count_reg[31]_i_2_CO_UNCONNECTED ;

  LUT1 #(
    .INIT(2'h1)) 
    \cycle_count[31]_i_1 
       (.I0(reset_n),
        .O(\cycle_count[31]_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \cycle_count[3]_i_2 
       (.I0(out1[0]),
        .O(\cycle_count[3]_i_2_n_0 ));
  FDRE \cycle_count_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[3]_i_1_n_7 ),
        .Q(out1[0]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[10] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[11]_i_1_n_5 ),
        .Q(out1[10]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[11] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[11]_i_1_n_4 ),
        .Q(out1[11]),
        .R(\cycle_count[31]_i_1_n_0 ));
  (* ADDER_THRESHOLD = "11" *) 
  CARRY4 \cycle_count_reg[11]_i_1 
       (.CI(\cycle_count_reg[7]_i_1_n_0 ),
        .CO({\cycle_count_reg[11]_i_1_n_0 ,\cycle_count_reg[11]_i_1_n_1 ,\cycle_count_reg[11]_i_1_n_2 ,\cycle_count_reg[11]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\cycle_count_reg[11]_i_1_n_4 ,\cycle_count_reg[11]_i_1_n_5 ,\cycle_count_reg[11]_i_1_n_6 ,\cycle_count_reg[11]_i_1_n_7 }),
        .S(out1[11:8]));
  FDRE \cycle_count_reg[12] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[15]_i_1_n_7 ),
        .Q(out1[12]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[13] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[15]_i_1_n_6 ),
        .Q(out1[13]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[14] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[15]_i_1_n_5 ),
        .Q(out1[14]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[15] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[15]_i_1_n_4 ),
        .Q(out1[15]),
        .R(\cycle_count[31]_i_1_n_0 ));
  (* ADDER_THRESHOLD = "11" *) 
  CARRY4 \cycle_count_reg[15]_i_1 
       (.CI(\cycle_count_reg[11]_i_1_n_0 ),
        .CO({\cycle_count_reg[15]_i_1_n_0 ,\cycle_count_reg[15]_i_1_n_1 ,\cycle_count_reg[15]_i_1_n_2 ,\cycle_count_reg[15]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\cycle_count_reg[15]_i_1_n_4 ,\cycle_count_reg[15]_i_1_n_5 ,\cycle_count_reg[15]_i_1_n_6 ,\cycle_count_reg[15]_i_1_n_7 }),
        .S(out1[15:12]));
  FDRE \cycle_count_reg[16] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[19]_i_1_n_7 ),
        .Q(out1[16]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[17] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[19]_i_1_n_6 ),
        .Q(out1[17]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[18] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[19]_i_1_n_5 ),
        .Q(out1[18]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[19] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[19]_i_1_n_4 ),
        .Q(out1[19]),
        .R(\cycle_count[31]_i_1_n_0 ));
  (* ADDER_THRESHOLD = "11" *) 
  CARRY4 \cycle_count_reg[19]_i_1 
       (.CI(\cycle_count_reg[15]_i_1_n_0 ),
        .CO({\cycle_count_reg[19]_i_1_n_0 ,\cycle_count_reg[19]_i_1_n_1 ,\cycle_count_reg[19]_i_1_n_2 ,\cycle_count_reg[19]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\cycle_count_reg[19]_i_1_n_4 ,\cycle_count_reg[19]_i_1_n_5 ,\cycle_count_reg[19]_i_1_n_6 ,\cycle_count_reg[19]_i_1_n_7 }),
        .S(out1[19:16]));
  FDRE \cycle_count_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[3]_i_1_n_6 ),
        .Q(out1[1]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[20] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[23]_i_1_n_7 ),
        .Q(out1[20]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[21] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[23]_i_1_n_6 ),
        .Q(out1[21]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[22] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[23]_i_1_n_5 ),
        .Q(out1[22]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[23] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[23]_i_1_n_4 ),
        .Q(out1[23]),
        .R(\cycle_count[31]_i_1_n_0 ));
  (* ADDER_THRESHOLD = "11" *) 
  CARRY4 \cycle_count_reg[23]_i_1 
       (.CI(\cycle_count_reg[19]_i_1_n_0 ),
        .CO({\cycle_count_reg[23]_i_1_n_0 ,\cycle_count_reg[23]_i_1_n_1 ,\cycle_count_reg[23]_i_1_n_2 ,\cycle_count_reg[23]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\cycle_count_reg[23]_i_1_n_4 ,\cycle_count_reg[23]_i_1_n_5 ,\cycle_count_reg[23]_i_1_n_6 ,\cycle_count_reg[23]_i_1_n_7 }),
        .S(out1[23:20]));
  FDRE \cycle_count_reg[24] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[27]_i_1_n_7 ),
        .Q(out1[24]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[25] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[27]_i_1_n_6 ),
        .Q(out1[25]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[26] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[27]_i_1_n_5 ),
        .Q(out1[26]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[27] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[27]_i_1_n_4 ),
        .Q(out1[27]),
        .R(\cycle_count[31]_i_1_n_0 ));
  (* ADDER_THRESHOLD = "11" *) 
  CARRY4 \cycle_count_reg[27]_i_1 
       (.CI(\cycle_count_reg[23]_i_1_n_0 ),
        .CO({\cycle_count_reg[27]_i_1_n_0 ,\cycle_count_reg[27]_i_1_n_1 ,\cycle_count_reg[27]_i_1_n_2 ,\cycle_count_reg[27]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\cycle_count_reg[27]_i_1_n_4 ,\cycle_count_reg[27]_i_1_n_5 ,\cycle_count_reg[27]_i_1_n_6 ,\cycle_count_reg[27]_i_1_n_7 }),
        .S(out1[27:24]));
  FDRE \cycle_count_reg[28] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[31]_i_2_n_7 ),
        .Q(out1[28]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[29] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[31]_i_2_n_6 ),
        .Q(out1[29]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[3]_i_1_n_5 ),
        .Q(out1[2]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[30] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[31]_i_2_n_5 ),
        .Q(out1[30]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[31] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[31]_i_2_n_4 ),
        .Q(out1[31]),
        .R(\cycle_count[31]_i_1_n_0 ));
  (* ADDER_THRESHOLD = "11" *) 
  CARRY4 \cycle_count_reg[31]_i_2 
       (.CI(\cycle_count_reg[27]_i_1_n_0 ),
        .CO({\NLW_cycle_count_reg[31]_i_2_CO_UNCONNECTED [3],\cycle_count_reg[31]_i_2_n_1 ,\cycle_count_reg[31]_i_2_n_2 ,\cycle_count_reg[31]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\cycle_count_reg[31]_i_2_n_4 ,\cycle_count_reg[31]_i_2_n_5 ,\cycle_count_reg[31]_i_2_n_6 ,\cycle_count_reg[31]_i_2_n_7 }),
        .S(out1[31:28]));
  FDRE \cycle_count_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[3]_i_1_n_4 ),
        .Q(out1[3]),
        .R(\cycle_count[31]_i_1_n_0 ));
  (* ADDER_THRESHOLD = "11" *) 
  CARRY4 \cycle_count_reg[3]_i_1 
       (.CI(1'b0),
        .CO({\cycle_count_reg[3]_i_1_n_0 ,\cycle_count_reg[3]_i_1_n_1 ,\cycle_count_reg[3]_i_1_n_2 ,\cycle_count_reg[3]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b1}),
        .O({\cycle_count_reg[3]_i_1_n_4 ,\cycle_count_reg[3]_i_1_n_5 ,\cycle_count_reg[3]_i_1_n_6 ,\cycle_count_reg[3]_i_1_n_7 }),
        .S({out1[3:1],\cycle_count[3]_i_2_n_0 }));
  FDRE \cycle_count_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[7]_i_1_n_7 ),
        .Q(out1[4]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[5] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[7]_i_1_n_6 ),
        .Q(out1[5]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[6] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[7]_i_1_n_5 ),
        .Q(out1[6]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[7] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[7]_i_1_n_4 ),
        .Q(out1[7]),
        .R(\cycle_count[31]_i_1_n_0 ));
  (* ADDER_THRESHOLD = "11" *) 
  CARRY4 \cycle_count_reg[7]_i_1 
       (.CI(\cycle_count_reg[3]_i_1_n_0 ),
        .CO({\cycle_count_reg[7]_i_1_n_0 ,\cycle_count_reg[7]_i_1_n_1 ,\cycle_count_reg[7]_i_1_n_2 ,\cycle_count_reg[7]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\cycle_count_reg[7]_i_1_n_4 ,\cycle_count_reg[7]_i_1_n_5 ,\cycle_count_reg[7]_i_1_n_6 ,\cycle_count_reg[7]_i_1_n_7 }),
        .S(out1[7:4]));
  FDRE \cycle_count_reg[8] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[11]_i_1_n_7 ),
        .Q(out1[8]),
        .R(\cycle_count[31]_i_1_n_0 ));
  FDRE \cycle_count_reg[9] 
       (.C(clk),
        .CE(1'b1),
        .D(\cycle_count_reg[11]_i_1_n_6 ),
        .Q(out1[9]),
        .R(\cycle_count[31]_i_1_n_0 ));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_project2_frame
   (out1,
    clk,
    reset_n);
  output [31:0]out1;
  input clk;
  input reset_n;

  wire clk;
  wire [31:0]out1;
  wire reset_n;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_pipeline my_cpu
       (.clk(clk),
        .out1(out1),
        .reset_n(reset_n));
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
