// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.1 (64-bit)
// Tool Version Limit: 2022.04
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// control
// 0x00 : reserved
// 0x04 : reserved
// 0x08 : reserved
// 0x0c : reserved
// 0x10 : Data signal of a
//        bit 31~0 - a[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of b
//        bit 31~0 - b[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of c
//        bit 31~0 - c[31:0] (Read)
// 0x24 : Control signal of c
//        bit 0  - c_ap_vld (Read/COR)
//        others - reserved
// 0x30 : Data signal of d
//        bit 31~0 - d[31:0] (Read)
// 0x34 : Control signal of d
//        bit 0  - d_ap_vld (Read/COR)
//        others - reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XCOMM_CONTROL_ADDR_A_DATA 0x10
#define XCOMM_CONTROL_BITS_A_DATA 32
#define XCOMM_CONTROL_ADDR_B_DATA 0x18
#define XCOMM_CONTROL_BITS_B_DATA 32
#define XCOMM_CONTROL_ADDR_C_DATA 0x20
#define XCOMM_CONTROL_BITS_C_DATA 32
#define XCOMM_CONTROL_ADDR_C_CTRL 0x24
#define XCOMM_CONTROL_ADDR_D_DATA 0x30
#define XCOMM_CONTROL_BITS_D_DATA 32
#define XCOMM_CONTROL_ADDR_D_CTRL 0x34

