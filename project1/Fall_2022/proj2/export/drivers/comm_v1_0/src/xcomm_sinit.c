// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.1 (64-bit)
// Tool Version Limit: 2022.04
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xcomm.h"

extern XComm_Config XComm_ConfigTable[];

XComm_Config *XComm_LookupConfig(u16 DeviceId) {
	XComm_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XCOMM_NUM_INSTANCES; Index++) {
		if (XComm_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XComm_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XComm_Initialize(XComm *InstancePtr, u16 DeviceId) {
	XComm_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XComm_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XComm_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

