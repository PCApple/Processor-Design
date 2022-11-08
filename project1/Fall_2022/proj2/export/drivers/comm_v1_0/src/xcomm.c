// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.1 (64-bit)
// Tool Version Limit: 2022.04
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xcomm.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XComm_CfgInitialize(XComm *InstancePtr, XComm_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XComm_Set_a(XComm *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XComm_WriteReg(InstancePtr->Control_BaseAddress, XCOMM_CONTROL_ADDR_A_DATA, Data);
}

u32 XComm_Get_a(XComm *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XComm_ReadReg(InstancePtr->Control_BaseAddress, XCOMM_CONTROL_ADDR_A_DATA);
    return Data;
}

void XComm_Set_b(XComm *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XComm_WriteReg(InstancePtr->Control_BaseAddress, XCOMM_CONTROL_ADDR_B_DATA, Data);
}

u32 XComm_Get_b(XComm *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XComm_ReadReg(InstancePtr->Control_BaseAddress, XCOMM_CONTROL_ADDR_B_DATA);
    return Data;
}

u32 XComm_Get_c(XComm *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XComm_ReadReg(InstancePtr->Control_BaseAddress, XCOMM_CONTROL_ADDR_C_DATA);
    return Data;
}

u32 XComm_Get_c_vld(XComm *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XComm_ReadReg(InstancePtr->Control_BaseAddress, XCOMM_CONTROL_ADDR_C_CTRL);
    return Data & 0x1;
}

u32 XComm_Get_d(XComm *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XComm_ReadReg(InstancePtr->Control_BaseAddress, XCOMM_CONTROL_ADDR_D_DATA);
    return Data;
}

u32 XComm_Get_d_vld(XComm *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XComm_ReadReg(InstancePtr->Control_BaseAddress, XCOMM_CONTROL_ADDR_D_CTRL);
    return Data & 0x1;
}

