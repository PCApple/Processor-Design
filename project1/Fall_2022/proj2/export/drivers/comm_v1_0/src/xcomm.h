// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.1 (64-bit)
// Tool Version Limit: 2022.04
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XCOMM_H
#define XCOMM_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xcomm_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
#else
typedef struct {
    u16 DeviceId;
    u64 Control_BaseAddress;
} XComm_Config;
#endif

typedef struct {
    u64 Control_BaseAddress;
    u32 IsReady;
} XComm;

typedef u32 word_type;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XComm_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XComm_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XComm_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XComm_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XComm_Initialize(XComm *InstancePtr, u16 DeviceId);
XComm_Config* XComm_LookupConfig(u16 DeviceId);
int XComm_CfgInitialize(XComm *InstancePtr, XComm_Config *ConfigPtr);
#else
int XComm_Initialize(XComm *InstancePtr, const char* InstanceName);
int XComm_Release(XComm *InstancePtr);
#endif


void XComm_Set_a(XComm *InstancePtr, u32 Data);
u32 XComm_Get_a(XComm *InstancePtr);
void XComm_Set_b(XComm *InstancePtr, u32 Data);
u32 XComm_Get_b(XComm *InstancePtr);
u32 XComm_Get_c(XComm *InstancePtr);
u32 XComm_Get_c_vld(XComm *InstancePtr);
u32 XComm_Get_d(XComm *InstancePtr);
u32 XComm_Get_d_vld(XComm *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
