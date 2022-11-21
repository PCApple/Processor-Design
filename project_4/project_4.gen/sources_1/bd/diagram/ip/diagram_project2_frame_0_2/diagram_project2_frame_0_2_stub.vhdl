-- Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2022.1 (win64) Build 3526262 Mon Apr 18 15:48:16 MDT 2022
-- Date        : Fri Nov 18 18:14:56 2022
-- Host        : PCLaptop running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub
--               c:/Users/pockc/Documents/GitHub/CS3220/project_4/project_4.gen/sources_1/bd/diagram/ip/diagram_project2_frame_0_2/diagram_project2_frame_0_2_stub.vhdl
-- Design      : diagram_project2_frame_0_2
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7z020clg400-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity diagram_project2_frame_0_2 is
  Port ( 
    clk : in STD_LOGIC;
    reset_n : in STD_LOGIC;
    out1 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    out2 : out STD_LOGIC_VECTOR ( 31 downto 0 )
  );

end diagram_project2_frame_0_2;

architecture stub of diagram_project2_frame_0_2 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "clk,reset_n,out1[31:0],out2[31:0]";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "project2_frame,Vivado 2022.1";
begin
end;
