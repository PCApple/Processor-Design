-- Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2022.1 (win64) Build 3526262 Mon Apr 18 15:48:16 MDT 2022
-- Date        : Fri Nov 18 17:34:37 2022
-- Host        : PCLaptop running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ diagram_project2_frame_0_2_sim_netlist.vhdl
-- Design      : diagram_project2_frame_0_2
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7z020clg400-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_pipeline is
  port (
    out1 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    clk : in STD_LOGIC;
    reset_n : in STD_LOGIC
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_pipeline;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_pipeline is
  signal \cycle_count[31]_i_1_n_0\ : STD_LOGIC;
  signal \cycle_count[3]_i_2_n_0\ : STD_LOGIC;
  signal \cycle_count_reg[11]_i_1_n_0\ : STD_LOGIC;
  signal \cycle_count_reg[11]_i_1_n_1\ : STD_LOGIC;
  signal \cycle_count_reg[11]_i_1_n_2\ : STD_LOGIC;
  signal \cycle_count_reg[11]_i_1_n_3\ : STD_LOGIC;
  signal \cycle_count_reg[11]_i_1_n_4\ : STD_LOGIC;
  signal \cycle_count_reg[11]_i_1_n_5\ : STD_LOGIC;
  signal \cycle_count_reg[11]_i_1_n_6\ : STD_LOGIC;
  signal \cycle_count_reg[11]_i_1_n_7\ : STD_LOGIC;
  signal \cycle_count_reg[15]_i_1_n_0\ : STD_LOGIC;
  signal \cycle_count_reg[15]_i_1_n_1\ : STD_LOGIC;
  signal \cycle_count_reg[15]_i_1_n_2\ : STD_LOGIC;
  signal \cycle_count_reg[15]_i_1_n_3\ : STD_LOGIC;
  signal \cycle_count_reg[15]_i_1_n_4\ : STD_LOGIC;
  signal \cycle_count_reg[15]_i_1_n_5\ : STD_LOGIC;
  signal \cycle_count_reg[15]_i_1_n_6\ : STD_LOGIC;
  signal \cycle_count_reg[15]_i_1_n_7\ : STD_LOGIC;
  signal \cycle_count_reg[19]_i_1_n_0\ : STD_LOGIC;
  signal \cycle_count_reg[19]_i_1_n_1\ : STD_LOGIC;
  signal \cycle_count_reg[19]_i_1_n_2\ : STD_LOGIC;
  signal \cycle_count_reg[19]_i_1_n_3\ : STD_LOGIC;
  signal \cycle_count_reg[19]_i_1_n_4\ : STD_LOGIC;
  signal \cycle_count_reg[19]_i_1_n_5\ : STD_LOGIC;
  signal \cycle_count_reg[19]_i_1_n_6\ : STD_LOGIC;
  signal \cycle_count_reg[19]_i_1_n_7\ : STD_LOGIC;
  signal \cycle_count_reg[23]_i_1_n_0\ : STD_LOGIC;
  signal \cycle_count_reg[23]_i_1_n_1\ : STD_LOGIC;
  signal \cycle_count_reg[23]_i_1_n_2\ : STD_LOGIC;
  signal \cycle_count_reg[23]_i_1_n_3\ : STD_LOGIC;
  signal \cycle_count_reg[23]_i_1_n_4\ : STD_LOGIC;
  signal \cycle_count_reg[23]_i_1_n_5\ : STD_LOGIC;
  signal \cycle_count_reg[23]_i_1_n_6\ : STD_LOGIC;
  signal \cycle_count_reg[23]_i_1_n_7\ : STD_LOGIC;
  signal \cycle_count_reg[27]_i_1_n_0\ : STD_LOGIC;
  signal \cycle_count_reg[27]_i_1_n_1\ : STD_LOGIC;
  signal \cycle_count_reg[27]_i_1_n_2\ : STD_LOGIC;
  signal \cycle_count_reg[27]_i_1_n_3\ : STD_LOGIC;
  signal \cycle_count_reg[27]_i_1_n_4\ : STD_LOGIC;
  signal \cycle_count_reg[27]_i_1_n_5\ : STD_LOGIC;
  signal \cycle_count_reg[27]_i_1_n_6\ : STD_LOGIC;
  signal \cycle_count_reg[27]_i_1_n_7\ : STD_LOGIC;
  signal \cycle_count_reg[31]_i_2_n_1\ : STD_LOGIC;
  signal \cycle_count_reg[31]_i_2_n_2\ : STD_LOGIC;
  signal \cycle_count_reg[31]_i_2_n_3\ : STD_LOGIC;
  signal \cycle_count_reg[31]_i_2_n_4\ : STD_LOGIC;
  signal \cycle_count_reg[31]_i_2_n_5\ : STD_LOGIC;
  signal \cycle_count_reg[31]_i_2_n_6\ : STD_LOGIC;
  signal \cycle_count_reg[31]_i_2_n_7\ : STD_LOGIC;
  signal \cycle_count_reg[3]_i_1_n_0\ : STD_LOGIC;
  signal \cycle_count_reg[3]_i_1_n_1\ : STD_LOGIC;
  signal \cycle_count_reg[3]_i_1_n_2\ : STD_LOGIC;
  signal \cycle_count_reg[3]_i_1_n_3\ : STD_LOGIC;
  signal \cycle_count_reg[3]_i_1_n_4\ : STD_LOGIC;
  signal \cycle_count_reg[3]_i_1_n_5\ : STD_LOGIC;
  signal \cycle_count_reg[3]_i_1_n_6\ : STD_LOGIC;
  signal \cycle_count_reg[3]_i_1_n_7\ : STD_LOGIC;
  signal \cycle_count_reg[7]_i_1_n_0\ : STD_LOGIC;
  signal \cycle_count_reg[7]_i_1_n_1\ : STD_LOGIC;
  signal \cycle_count_reg[7]_i_1_n_2\ : STD_LOGIC;
  signal \cycle_count_reg[7]_i_1_n_3\ : STD_LOGIC;
  signal \cycle_count_reg[7]_i_1_n_4\ : STD_LOGIC;
  signal \cycle_count_reg[7]_i_1_n_5\ : STD_LOGIC;
  signal \cycle_count_reg[7]_i_1_n_6\ : STD_LOGIC;
  signal \cycle_count_reg[7]_i_1_n_7\ : STD_LOGIC;
  signal \^out1\ : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \NLW_cycle_count_reg[31]_i_2_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  attribute ADDER_THRESHOLD : integer;
  attribute ADDER_THRESHOLD of \cycle_count_reg[11]_i_1\ : label is 11;
  attribute ADDER_THRESHOLD of \cycle_count_reg[15]_i_1\ : label is 11;
  attribute ADDER_THRESHOLD of \cycle_count_reg[19]_i_1\ : label is 11;
  attribute ADDER_THRESHOLD of \cycle_count_reg[23]_i_1\ : label is 11;
  attribute ADDER_THRESHOLD of \cycle_count_reg[27]_i_1\ : label is 11;
  attribute ADDER_THRESHOLD of \cycle_count_reg[31]_i_2\ : label is 11;
  attribute ADDER_THRESHOLD of \cycle_count_reg[3]_i_1\ : label is 11;
  attribute ADDER_THRESHOLD of \cycle_count_reg[7]_i_1\ : label is 11;
begin
  out1(31 downto 0) <= \^out1\(31 downto 0);
\cycle_count[31]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => reset_n,
      O => \cycle_count[31]_i_1_n_0\
    );
\cycle_count[3]_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \^out1\(0),
      O => \cycle_count[3]_i_2_n_0\
    );
\cycle_count_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[3]_i_1_n_7\,
      Q => \^out1\(0),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[11]_i_1_n_5\,
      Q => \^out1\(10),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[11]_i_1_n_4\,
      Q => \^out1\(11),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[11]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \cycle_count_reg[7]_i_1_n_0\,
      CO(3) => \cycle_count_reg[11]_i_1_n_0\,
      CO(2) => \cycle_count_reg[11]_i_1_n_1\,
      CO(1) => \cycle_count_reg[11]_i_1_n_2\,
      CO(0) => \cycle_count_reg[11]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => \cycle_count_reg[11]_i_1_n_4\,
      O(2) => \cycle_count_reg[11]_i_1_n_5\,
      O(1) => \cycle_count_reg[11]_i_1_n_6\,
      O(0) => \cycle_count_reg[11]_i_1_n_7\,
      S(3 downto 0) => \^out1\(11 downto 8)
    );
\cycle_count_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[15]_i_1_n_7\,
      Q => \^out1\(12),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[15]_i_1_n_6\,
      Q => \^out1\(13),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[15]_i_1_n_5\,
      Q => \^out1\(14),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[15]_i_1_n_4\,
      Q => \^out1\(15),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[15]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \cycle_count_reg[11]_i_1_n_0\,
      CO(3) => \cycle_count_reg[15]_i_1_n_0\,
      CO(2) => \cycle_count_reg[15]_i_1_n_1\,
      CO(1) => \cycle_count_reg[15]_i_1_n_2\,
      CO(0) => \cycle_count_reg[15]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => \cycle_count_reg[15]_i_1_n_4\,
      O(2) => \cycle_count_reg[15]_i_1_n_5\,
      O(1) => \cycle_count_reg[15]_i_1_n_6\,
      O(0) => \cycle_count_reg[15]_i_1_n_7\,
      S(3 downto 0) => \^out1\(15 downto 12)
    );
\cycle_count_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[19]_i_1_n_7\,
      Q => \^out1\(16),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[17]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[19]_i_1_n_6\,
      Q => \^out1\(17),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[18]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[19]_i_1_n_5\,
      Q => \^out1\(18),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[19]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[19]_i_1_n_4\,
      Q => \^out1\(19),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[19]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \cycle_count_reg[15]_i_1_n_0\,
      CO(3) => \cycle_count_reg[19]_i_1_n_0\,
      CO(2) => \cycle_count_reg[19]_i_1_n_1\,
      CO(1) => \cycle_count_reg[19]_i_1_n_2\,
      CO(0) => \cycle_count_reg[19]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => \cycle_count_reg[19]_i_1_n_4\,
      O(2) => \cycle_count_reg[19]_i_1_n_5\,
      O(1) => \cycle_count_reg[19]_i_1_n_6\,
      O(0) => \cycle_count_reg[19]_i_1_n_7\,
      S(3 downto 0) => \^out1\(19 downto 16)
    );
\cycle_count_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[3]_i_1_n_6\,
      Q => \^out1\(1),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[20]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[23]_i_1_n_7\,
      Q => \^out1\(20),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[21]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[23]_i_1_n_6\,
      Q => \^out1\(21),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[22]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[23]_i_1_n_5\,
      Q => \^out1\(22),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[23]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[23]_i_1_n_4\,
      Q => \^out1\(23),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[23]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \cycle_count_reg[19]_i_1_n_0\,
      CO(3) => \cycle_count_reg[23]_i_1_n_0\,
      CO(2) => \cycle_count_reg[23]_i_1_n_1\,
      CO(1) => \cycle_count_reg[23]_i_1_n_2\,
      CO(0) => \cycle_count_reg[23]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => \cycle_count_reg[23]_i_1_n_4\,
      O(2) => \cycle_count_reg[23]_i_1_n_5\,
      O(1) => \cycle_count_reg[23]_i_1_n_6\,
      O(0) => \cycle_count_reg[23]_i_1_n_7\,
      S(3 downto 0) => \^out1\(23 downto 20)
    );
\cycle_count_reg[24]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[27]_i_1_n_7\,
      Q => \^out1\(24),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[25]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[27]_i_1_n_6\,
      Q => \^out1\(25),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[26]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[27]_i_1_n_5\,
      Q => \^out1\(26),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[27]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[27]_i_1_n_4\,
      Q => \^out1\(27),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[27]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \cycle_count_reg[23]_i_1_n_0\,
      CO(3) => \cycle_count_reg[27]_i_1_n_0\,
      CO(2) => \cycle_count_reg[27]_i_1_n_1\,
      CO(1) => \cycle_count_reg[27]_i_1_n_2\,
      CO(0) => \cycle_count_reg[27]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => \cycle_count_reg[27]_i_1_n_4\,
      O(2) => \cycle_count_reg[27]_i_1_n_5\,
      O(1) => \cycle_count_reg[27]_i_1_n_6\,
      O(0) => \cycle_count_reg[27]_i_1_n_7\,
      S(3 downto 0) => \^out1\(27 downto 24)
    );
\cycle_count_reg[28]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[31]_i_2_n_7\,
      Q => \^out1\(28),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[29]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[31]_i_2_n_6\,
      Q => \^out1\(29),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[3]_i_1_n_5\,
      Q => \^out1\(2),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[30]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[31]_i_2_n_5\,
      Q => \^out1\(30),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[31]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[31]_i_2_n_4\,
      Q => \^out1\(31),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[31]_i_2\: unisim.vcomponents.CARRY4
     port map (
      CI => \cycle_count_reg[27]_i_1_n_0\,
      CO(3) => \NLW_cycle_count_reg[31]_i_2_CO_UNCONNECTED\(3),
      CO(2) => \cycle_count_reg[31]_i_2_n_1\,
      CO(1) => \cycle_count_reg[31]_i_2_n_2\,
      CO(0) => \cycle_count_reg[31]_i_2_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => \cycle_count_reg[31]_i_2_n_4\,
      O(2) => \cycle_count_reg[31]_i_2_n_5\,
      O(1) => \cycle_count_reg[31]_i_2_n_6\,
      O(0) => \cycle_count_reg[31]_i_2_n_7\,
      S(3 downto 0) => \^out1\(31 downto 28)
    );
\cycle_count_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[3]_i_1_n_4\,
      Q => \^out1\(3),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[3]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \cycle_count_reg[3]_i_1_n_0\,
      CO(2) => \cycle_count_reg[3]_i_1_n_1\,
      CO(1) => \cycle_count_reg[3]_i_1_n_2\,
      CO(0) => \cycle_count_reg[3]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0001",
      O(3) => \cycle_count_reg[3]_i_1_n_4\,
      O(2) => \cycle_count_reg[3]_i_1_n_5\,
      O(1) => \cycle_count_reg[3]_i_1_n_6\,
      O(0) => \cycle_count_reg[3]_i_1_n_7\,
      S(3 downto 1) => \^out1\(3 downto 1),
      S(0) => \cycle_count[3]_i_2_n_0\
    );
\cycle_count_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[7]_i_1_n_7\,
      Q => \^out1\(4),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[7]_i_1_n_6\,
      Q => \^out1\(5),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[7]_i_1_n_5\,
      Q => \^out1\(6),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[7]_i_1_n_4\,
      Q => \^out1\(7),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[7]_i_1\: unisim.vcomponents.CARRY4
     port map (
      CI => \cycle_count_reg[3]_i_1_n_0\,
      CO(3) => \cycle_count_reg[7]_i_1_n_0\,
      CO(2) => \cycle_count_reg[7]_i_1_n_1\,
      CO(1) => \cycle_count_reg[7]_i_1_n_2\,
      CO(0) => \cycle_count_reg[7]_i_1_n_3\,
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3) => \cycle_count_reg[7]_i_1_n_4\,
      O(2) => \cycle_count_reg[7]_i_1_n_5\,
      O(1) => \cycle_count_reg[7]_i_1_n_6\,
      O(0) => \cycle_count_reg[7]_i_1_n_7\,
      S(3 downto 0) => \^out1\(7 downto 4)
    );
\cycle_count_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[11]_i_1_n_7\,
      Q => \^out1\(8),
      R => \cycle_count[31]_i_1_n_0\
    );
\cycle_count_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => clk,
      CE => '1',
      D => \cycle_count_reg[11]_i_1_n_6\,
      Q => \^out1\(9),
      R => \cycle_count[31]_i_1_n_0\
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_project2_frame is
  port (
    out1 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    clk : in STD_LOGIC;
    reset_n : in STD_LOGIC
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_project2_frame;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_project2_frame is
begin
my_cpu: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_pipeline
     port map (
      clk => clk,
      out1(31 downto 0) => out1(31 downto 0),
      reset_n => reset_n
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  port (
    clk : in STD_LOGIC;
    reset_n : in STD_LOGIC;
    out1 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    out2 : out STD_LOGIC_VECTOR ( 31 downto 0 )
  );
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "diagram_project2_frame_0_2,project2_frame,{}";
  attribute DowngradeIPIdentifiedWarnings : string;
  attribute DowngradeIPIdentifiedWarnings of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "yes";
  attribute IP_DEFINITION_SOURCE : string;
  attribute IP_DEFINITION_SOURCE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "module_ref";
  attribute X_CORE_INFO : string;
  attribute X_CORE_INFO of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "project2_frame,Vivado 2022.1";
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  signal \<const0>\ : STD_LOGIC;
  signal \<const1>\ : STD_LOGIC;
  attribute X_INTERFACE_INFO : string;
  attribute X_INTERFACE_INFO of clk : signal is "xilinx.com:signal:clock:1.0 clk CLK";
  attribute X_INTERFACE_PARAMETER : string;
  attribute X_INTERFACE_PARAMETER of clk : signal is "XIL_INTERFACENAME clk, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN diagram_processing_system7_0_1_FCLK_CLK0, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of reset_n : signal is "xilinx.com:signal:reset:1.0 reset_n RST";
  attribute X_INTERFACE_PARAMETER of reset_n : signal is "XIL_INTERFACENAME reset_n, POLARITY ACTIVE_LOW, INSERT_VIP 0";
begin
  out2(31) <= \<const0>\;
  out2(30) <= \<const0>\;
  out2(29) <= \<const0>\;
  out2(28) <= \<const0>\;
  out2(27) <= \<const0>\;
  out2(26) <= \<const0>\;
  out2(25) <= \<const0>\;
  out2(24) <= \<const0>\;
  out2(23) <= \<const0>\;
  out2(22) <= \<const0>\;
  out2(21) <= \<const0>\;
  out2(20) <= \<const0>\;
  out2(19) <= \<const0>\;
  out2(18) <= \<const0>\;
  out2(17) <= \<const0>\;
  out2(16) <= \<const0>\;
  out2(15) <= \<const0>\;
  out2(14) <= \<const0>\;
  out2(13) <= \<const0>\;
  out2(12) <= \<const0>\;
  out2(11) <= \<const0>\;
  out2(10) <= \<const0>\;
  out2(9) <= \<const0>\;
  out2(8) <= \<const0>\;
  out2(7) <= \<const0>\;
  out2(6) <= \<const0>\;
  out2(5) <= \<const1>\;
  out2(4) <= \<const0>\;
  out2(3) <= \<const0>\;
  out2(2) <= \<const0>\;
  out2(1) <= \<const0>\;
  out2(0) <= \<const0>\;
GND: unisim.vcomponents.GND
     port map (
      G => \<const0>\
    );
VCC: unisim.vcomponents.VCC
     port map (
      P => \<const1>\
    );
inst: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_project2_frame
     port map (
      clk => clk,
      out1(31 downto 0) => out1(31 downto 0),
      reset_n => reset_n
    );
end STRUCTURE;
