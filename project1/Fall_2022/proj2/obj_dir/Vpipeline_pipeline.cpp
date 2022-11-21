// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline_pipeline.h"
#include "Vpipeline__Syms.h"

#include "verilated_dpi.h"

//==========
CData/*3:0*/ Vpipeline_pipeline::__Vtable1___PVT__my_DE_stage__DOT__type_I_DE[64];
CData/*2:0*/ Vpipeline_pipeline::__Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[64];

VL_CTOR_IMP(Vpipeline_pipeline) {
    VL_CELL(my_WB_stage, Vpipeline_WB_STAGE);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vpipeline_pipeline::__Vconfigure(Vpipeline__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vpipeline_pipeline::~Vpipeline_pipeline() {
}

void Vpipeline_pipeline::_initial__TOP__pipeline__1(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline::_initial__TOP__pipeline__1\n"); );
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*735:0*/ __Vtemp1[23];
    WData/*735:0*/ __Vtemp2[23];
    // Body
    __Vtemp1[0U] = 0x2e6d656dU;
    __Vtemp1[1U] = 0x74616c6cU;
    __Vtemp1[2U] = 0x2f746573U;
    __Vtemp1[3U] = 0x61727434U;
    __Vtemp1[4U] = 0x74732f70U;
    __Vtemp1[5U] = 0x2f746573U;
    __Vtemp1[6U] = 0x726f6a32U;
    __Vtemp1[7U] = 0x32322f70U;
    __Vtemp1[8U] = 0x6c5f3230U;
    __Vtemp1[9U] = 0x2f46616cU;
    __Vtemp1[0xaU] = 0x65637431U;
    __Vtemp1[0xbU] = 0x70726f6aU;
    __Vtemp1[0xcU] = 0x3232302fU;
    __Vtemp1[0xdU] = 0x2f435333U;
    __Vtemp1[0xeU] = 0x74487562U;
    __Vtemp1[0xfU] = 0x732f4769U;
    __Vtemp1[0x10U] = 0x6d656e74U;
    __Vtemp1[0x11U] = 0x446f6375U;
    __Vtemp1[0x12U] = 0x636b632fU;
    __Vtemp1[0x13U] = 0x732f706fU;
    __Vtemp1[0x14U] = 0x55736572U;
    __Vtemp1[0x15U] = 0x742f632fU;
    __Vtemp1[0x16U] = 0x2f6d6eU;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(23, __Vtemp1)
                 , vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                 , 0, ~VL_ULL(0));
    __Vtemp2[0U] = 0x2e6d656dU;
    __Vtemp2[1U] = 0x74616c6cU;
    __Vtemp2[2U] = 0x2f746573U;
    __Vtemp2[3U] = 0x61727434U;
    __Vtemp2[4U] = 0x74732f70U;
    __Vtemp2[5U] = 0x2f746573U;
    __Vtemp2[6U] = 0x726f6a32U;
    __Vtemp2[7U] = 0x32322f70U;
    __Vtemp2[8U] = 0x6c5f3230U;
    __Vtemp2[9U] = 0x2f46616cU;
    __Vtemp2[0xaU] = 0x65637431U;
    __Vtemp2[0xbU] = 0x70726f6aU;
    __Vtemp2[0xcU] = 0x3232302fU;
    __Vtemp2[0xdU] = 0x2f435333U;
    __Vtemp2[0xeU] = 0x74487562U;
    __Vtemp2[0xfU] = 0x732f4769U;
    __Vtemp2[0x10U] = 0x6d656e74U;
    __Vtemp2[0x11U] = 0x446f6375U;
    __Vtemp2[0x12U] = 0x636b632fU;
    __Vtemp2[0x13U] = 0x732f706fU;
    __Vtemp2[0x14U] = 0x55736572U;
    __Vtemp2[0x15U] = 0x742f632fU;
    __Vtemp2[0x16U] = 0x2f6d6eU;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(23, __Vtemp2)
                 , vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                 , 0, ~VL_ULL(0));
}

VL_INLINE_OPT void Vpipeline_pipeline::_sequent__TOP__pipeline__2(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline::_sequent__TOP__pipeline__2\n"); );
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__csr_regs__v0;
    CData/*3:0*/ __Vdlyvdim0__my_DE_stage__DOT__csr_regs__v16;
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__csr_regs__v16;
    CData/*0:0*/ __Vdlyvset__my_MEM_stage__DOT__dmem__v0;
    SData/*13:0*/ __Vdlyvdim0__my_MEM_stage__DOT__dmem__v0;
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__PC_FE_latch;
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__inst_count_FE;
    IData/*31:0*/ __Vdlyvval__my_DE_stage__DOT__csr_regs__v16;
    IData/*31:0*/ __Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    // Body
    __Vdly__my_FE_stage__DOT__inst_count_FE = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE;
    __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch;
    __Vdlyvset__my_DE_stage__DOT__csr_regs__v0 = 0U;
    __Vdlyvset__my_DE_stage__DOT__csr_regs__v16 = 0U;
    vlSymsp->TOP__pipeline.__Vdlyvset__my_DE_stage__DOT__regs__v0 = 0U;
    vlSymsp->TOP__pipeline.__Vdlyvset__my_DE_stage__DOT__regs__v32 = 0U;
    vlSymsp->TOP__pipeline.__Vdly__my_FE_stage__DOT__FE_latch[0U] 
        = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U];
    vlSymsp->TOP__pipeline.__Vdly__my_FE_stage__DOT__FE_latch[1U] 
        = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U];
    vlSymsp->TOP__pipeline.__Vdly__my_FE_stage__DOT__FE_latch[2U] 
        = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U];
    vlSymsp->TOP__pipeline.__Vdly__my_FE_stage__DOT__FE_latch[3U] 
        = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U];
    vlSymsp->TOP__pipeline.__Vdly__my_FE_stage__DOT__FE_latch[4U] 
        = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U];
    __Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0U;
    vlSymsp->TOP__pipeline.__PVT__cycle_count = ((IData)(vlTOPp->reset)
                                                  ? 0U
                                                  : 
                                                 ((IData)(1U) 
                                                  + vlSymsp->TOP__pipeline.__PVT__cycle_count));
    __Vdly__my_FE_stage__DOT__inst_count_FE = ((IData)(vlTOPp->reset)
                                                ? 1U
                                                : (
                                                   (1U 
                                                    & vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U])
                                                    ? 
                                                   ((IData)(1U) 
                                                    + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE)
                                                     : 
                                                    (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_hit_FE) 
                                                      & (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__branch_predict_FE))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE)
                                                      : 
                                                     ((IData)(1U) 
                                                      + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE)))));
    __Vdly__my_FE_stage__DOT__PC_FE_latch = ((IData)(vlTOPp->reset)
                                              ? 0x200U
                                              : ((1U 
                                                  & vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U])
                                                  ? 
                                                 ((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[3U] 
                                                   << 0x17U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U] 
                                                     >> 9U))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                                                   ? vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch
                                                   : 
                                                  (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_hit_FE) 
                                                    & (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__branch_predict_FE))
                                                    ? vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_target_FE
                                                    : vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcplus_FE))));
    if (vlTOPp->reset) {
        __Vdlyvset__my_DE_stage__DOT__csr_regs__v0 = 1U;
    } else {
        if ((1U & (~ (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                              >> 0x30U))))) {
            if ((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                               >> 6U)))) {
                __Vdlyvval__my_DE_stage__DOT__csr_regs__v16 
                    = (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                               >> 0xbU));
                __Vdlyvset__my_DE_stage__DOT__csr_regs__v16 = 1U;
                __Vdlyvdim0__my_DE_stage__DOT__csr_regs__v16 
                    = (0xfU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                       >> 7U)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__pipeline.__Vdlyvset__my_DE_stage__DOT__regs__v0 = 1U;
    } else {
        if ((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                           >> 0x30U)))) {
            vlSymsp->TOP__pipeline.__Vdlyvval__my_DE_stage__DOT__regs__v32 
                = ((0U == (0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                            >> 0x2bU))))
                    ? 0U : (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                    >> 0xbU)));
            vlSymsp->TOP__pipeline.__Vdlyvset__my_DE_stage__DOT__regs__v32 = 1U;
            vlSymsp->TOP__pipeline.__Vdlyvdim0__my_DE_stage__DOT__regs__v32 
                = (0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                    >> 0x2bU)));
        }
    }
    vlSymsp->TOP__pipeline.__Vdly__my_FE_stage__DOT__FE_latch[0U] 
        = ((1U & ((IData)(vlTOPp->reset) | vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U]))
            ? 0U : ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                     ? vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]
                     : (0xfU | ((0xffe00000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                                << 0x15U)) 
                                | ((0x1fe000U & (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U] 
                                                 << 0xcU)) 
                                   | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index_FE) 
                                       << 5U) | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__branch_predict_FE) 
                                                 << 4U)))))));
    vlSymsp->TOP__pipeline.__Vdly__my_FE_stage__DOT__FE_latch[1U] 
        = ((1U & ((IData)(vlTOPp->reset) | vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U]))
            ? 0U : ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                     ? vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U]
                     : ((0x1fffffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                      >> 0xbU)) | (0xffe00000U 
                                                   & (((IData)(4U) 
                                                       + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                                      << 0x15U)))));
    vlSymsp->TOP__pipeline.__Vdly__my_FE_stage__DOT__FE_latch[2U] 
        = ((1U & ((IData)(vlTOPp->reset) | vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U]))
            ? 0U : ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                     ? vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U]
                     : ((0x1fffffU & (((IData)(4U) 
                                       + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                      >> 0xbU)) | (0xffe00000U 
                                                   & ((IData)(
                                                              (((QData)((IData)(
                                                                                ((1U 
                                                                                & vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U])
                                                                                 ? 0U
                                                                                 : 
                                                                                vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                                [
                                                                                (0x3fffU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                                >> 2U))]))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                                      << 0x15U)))));
    vlSymsp->TOP__pipeline.__Vdly__my_FE_stage__DOT__FE_latch[3U] 
        = ((1U & ((IData)(vlTOPp->reset) | vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U]))
            ? 0U : ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                     ? vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U]
                     : ((0x1fffffU & ((IData)((((QData)((IData)(
                                                                ((1U 
                                                                  & vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U])
                                                                  ? 0U
                                                                  : 
                                                                 vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                 [
                                                                 (0x3fffU 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                     >> 2U))]))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                      >> 0xbU)) | (0xffe00000U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                ((1U 
                                                                                & vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U])
                                                                                 ? 0U
                                                                                 : 
                                                                                vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                                [
                                                                                (0x3fffU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                                >> 2U))]))) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                               >> 0x20U)) 
                                                      << 0x15U)))));
    vlSymsp->TOP__pipeline.__Vdly__my_FE_stage__DOT__FE_latch[4U] 
        = ((1U & ((IData)(vlTOPp->reset) | vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U]))
            ? 0U : ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                     ? vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U]
                     : (0x1fffffU & ((IData)(((((QData)((IData)(
                                                                ((1U 
                                                                  & vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U])
                                                                  ? 0U
                                                                  : 
                                                                 vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                 [
                                                                 (0x3fffU 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                     >> 2U))]))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                              >> 0x20U)) 
                                     >> 0xbU))));
    if ((0x20U & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])) {
        __Vdlyvval__my_MEM_stage__DOT__dmem__v0 = (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                    << 0xfU) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                      >> 0x11U));
        __Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 1U;
        __Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 = 
            (0x3fffU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                         << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                     >> 0x13U)));
    }
    if (__Vdlyvset__my_DE_stage__DOT__csr_regs__v0) {
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[0U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[1U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[2U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[3U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[4U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[5U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[6U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[7U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[8U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[9U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[0xaU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[0xbU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[0xcU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[0xdU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[0xeU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[0xfU] = 0U;
    }
    if (__Vdlyvset__my_DE_stage__DOT__csr_regs__v16) {
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[__Vdlyvdim0__my_DE_stage__DOT__csr_regs__v16] 
            = __Vdlyvval__my_DE_stage__DOT__csr_regs__v16;
    }
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
        = __Vdly__my_FE_stage__DOT__inst_count_FE;
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
        = __Vdly__my_FE_stage__DOT__PC_FE_latch;
    if (__Vdlyvset__my_MEM_stage__DOT__dmem__v0) {
        vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem[__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0] 
            = __Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    }
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcplus_FE 
        = ((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch);
}

VL_INLINE_OPT void Vpipeline_pipeline::_sequent__TOP__pipeline__3(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline::_sequent__TOP__pipeline__3\n"); );
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp18[8];
    WData/*159:0*/ __Vtemp30[5];
    WData/*287:0*/ __Vtemp33[9];
    // Body
    __Vtemp18[5U] = ((IData)(vlTOPp->reset) ? 0U : 
                     ((0xffe00000U & ((IData)((((QData)((IData)(
                                                                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[7U])) 
                                                << 0x29U) 
                                               | (((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U])) 
                                                     >> 0x17U)))) 
                                      << 0x15U)) | 
                      ((0x1f8000U & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                      << 0x1eU) | (0x3fff8000U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                                      >> 2U)))) 
                       | (0x7fffU & ((IData)(((((QData)((IData)(
                                                                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U])) 
                                                << 0x2fU) 
                                               | (((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U])) 
                                                   << 0xfU) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U])) 
                                                     >> 0x11U))) 
                                              >> 0x20U)) 
                                     >> 0x11U)))));
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0xffff8000U 
                                           & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                               << 0x1eU) 
                                              | (0x3fff8000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                    >> 2U)))) 
                                          | ((0x7800U 
                                              & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                  << 0x1eU) 
                                                 | (0x3ffff800U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                       >> 2U)))) 
                                             | ((0x7c0U 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                     << 0x1eU) 
                                                    | (0x3fffffc0U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                          >> 2U)))) 
                                                | ((0x20U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                       >> 2U)) 
                                                   | (0x1fU 
                                                      & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]))))));
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0x7fffU 
                                           & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                              >> 2U)) 
                                          | (0xffff8000U 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                 << 0x1eU) 
                                                | (0x3fff8000U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                      >> 2U))))));
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0x7fffU 
                                           & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                              >> 2U)) 
                                          | (0xffff8000U 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rs1_MEM 
                                                << 0xfU))));
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0x7fffU 
                                           & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rs1_MEM 
                                              >> 0x11U)) 
                                          | (0xffff8000U 
                                             & ((IData)(
                                                        (((QData)((IData)(
                                                                          vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U])) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U])) 
                                                             << 0xfU) 
                                                            | ((QData)((IData)(
                                                                               vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U])) 
                                                               >> 0x11U)))) 
                                                << 0xfU))));
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0x7fffU 
                                           & ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U])) 
                                                        << 0x2fU) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U])) 
                                                           << 0xfU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U])) 
                                                             >> 0x11U)))) 
                                              >> 0x11U)) 
                                          | (0xffff8000U 
                                             & ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U])) 
                                                           << 0x2fU) 
                                                          | (((QData)((IData)(
                                                                              vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U])) 
                                                              << 0xfU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U])) 
                                                                >> 0x11U))) 
                                                         >> 0x20U)) 
                                                << 0xfU))));
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
        = __Vtemp18[5U];
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0x1fffffU 
                                           & ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[7U])) 
                                                        << 0x29U) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U])) 
                                                             >> 0x17U)))) 
                                              >> 0xbU)) 
                                          | (0xffe00000U 
                                             & ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[7U])) 
                                                           << 0x29U) 
                                                          | (((QData)((IData)(
                                                                              vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U])) 
                                                                >> 0x17U))) 
                                                         >> 0x20U)) 
                                                << 0x15U))));
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : (0x1fffffU 
                                          & ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[7U])) 
                                                        << 0x29U) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U])) 
                                                             >> 0x17U))) 
                                                      >> 0x20U)) 
                                             >> 0xbU)));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0xfffe0000U 
                                           & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                              << 0x11U)) 
                                          | ((0x1e000U 
                                              & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  << 0x13U) 
                                                 | (0x7e000U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                       >> 0xdU)))) 
                                             | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg) 
                                                 << 8U) 
                                                | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding) 
                                                    << 7U) 
                                                   | ((0x40U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                          >> 0x11U)) 
                                                      | ((0x20U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                             >> 0x11U)) 
                                                         | ((0x10U 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                >> 0x11U)) 
                                                            | (0xfU 
                                                               & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])))))))));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0x1ffffU 
                                           & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                              >> 0xfU)) 
                                          | (0xfffe0000U 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 << 0x13U) 
                                                | (0x60000U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                      >> 0xdU))))));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0x1ffffU 
                                           & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 0xdU)) 
                                          | (0xfffe0000U 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 0x13U) 
                                                | (0x60000U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      >> 0xdU))))));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0x1ffffU 
                                           & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0xdU)) 
                                          | (0xfffe0000U 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 << 0x13U) 
                                                | (0x60000U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 0xdU))))));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0x1ffffU 
                                           & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0xdU)) 
                                          | (0xfffe0000U 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 << 0x13U) 
                                                | (0x60000U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      >> 0xdU))))));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0xff800000U 
                                           & ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U])) 
                                                        << 0x3cU) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                             >> 4U)))) 
                                              << 0x17U)) 
                                          | ((0x7e0000U 
                                              & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 0x13U) 
                                                 | (0x60000U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 0xdU)))) 
                                             | (0x1ffffU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0xdU)))));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0x7fffffU 
                                           & ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U])) 
                                                        << 0x3cU) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                             >> 4U)))) 
                                              >> 9U)) 
                                          | (0xff800000U 
                                             & ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U])) 
                                                           << 0x3cU) 
                                                          | (((QData)((IData)(
                                                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 0x17U))));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : (0x7fffffU 
                                          & ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U])) 
                                                        << 0x3cU) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                             >> 4U))) 
                                                      >> 0x20U)) 
                                             >> 9U)));
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rs1_MEM 
        = ((0x40U & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])
            ? vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
           [(0x3fffU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                         << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                     >> 0x13U)))] : 
           ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
             << 0xfU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                         >> 0x11U)));
    __Vtemp30[0U] = ((0xfc000000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                     [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 9U))] 
                                     << 0x1aU)) | (
                                                   ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE) 
                                                    << 0x16U) 
                                                   | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_branch) 
                                                       << 0x15U) 
                                                      | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_jmp) 
                                                          << 0x14U) 
                                                         | (((0x17U 
                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             << 0x13U) 
                                                            | (((0x18U 
                                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                << 0x12U) 
                                                               | ((((~ (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_branch)) 
                                                                    & (0x18U 
                                                                       != (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                                   << 0x11U) 
                                                                  | ((0x10000U 
                                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                         << 0xcU)) 
                                                                     | ((0xff00U 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                            << 3U)) 
                                                                        | (0xffU 
                                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                               << 0x13U) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                                >> 0xdU))))))))))));
    __Vtemp33[2U] = ((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                         >> 4U))] >> 2U)) 
                     | (0xfffffff0U & ((0x3ffffff0U 
                                        & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                           [(0x1fU 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 4U))] 
                                           >> 2U)) 
                                       | (0xc0000000U 
                                          & ((IData)(
                                                     (((QData)((IData)(
                                                                       ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                         << 0xbU) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                           >> 0x15U)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE)))) 
                                             << 0x1eU)))));
    __Vtemp33[3U] = ((0xfU & ((IData)((((QData)((IData)(
                                                        ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                          << 0xbU) 
                                                         | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                            >> 0x15U)))) 
                                        << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE)))) 
                              >> 2U)) | (0xfffffff0U 
                                         & ((0x3ffffff0U 
                                             & ((IData)(
                                                        (((QData)((IData)(
                                                                          ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                            << 0xbU) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                              >> 0x15U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE)))) 
                                                >> 2U)) 
                                            | (0xc0000000U 
                                               & ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                               << 0xbU) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                                >> 0x15U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE))) 
                                                           >> 0x20U)) 
                                                  << 0x1eU)))));
    __Vtemp33[4U] = ((0xfU & ((IData)(((((QData)((IData)(
                                                         ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                           << 0xbU) 
                                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                             >> 0x15U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE))) 
                                       >> 0x20U)) >> 2U)) 
                     | (0xfffffff0U & ((0xc0000000U 
                                        & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                           << 0x1eU)) 
                                       | (0x3ffffff0U 
                                          & ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                          << 0xbU) 
                                                                         | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                            >> 0x15U)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE))) 
                                                      >> 0x20U)) 
                                             >> 2U)))));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
        = ((1U & (((IData)(vlTOPp->reset) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)) 
                  | (IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE)))
            ? 0U : ((0xfffffff0U & (__Vtemp30[0U] << 4U)) 
                    | (0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
        = ((1U & (((IData)(vlTOPp->reset) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)) 
                  | (IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE)))
            ? 0U : ((0xfU & (__Vtemp30[0U] >> 0x1cU)) 
                    | (0xfffffff0U & ((0x3ffffff0U 
                                       & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                          [(0x1fU & 
                                            (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             >> 9U))] 
                                          >> 2U)) | 
                                      (0xc0000000U 
                                       & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                          [(0x1fU & 
                                            (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             >> 4U))] 
                                          << 0x1eU))))));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
        = ((1U & (((IData)(vlTOPp->reset) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)) 
                  | (IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE)))
            ? 0U : __Vtemp33[2U]);
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
        = ((1U & (((IData)(vlTOPp->reset) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)) 
                  | (IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE)))
            ? 0U : __Vtemp33[3U]);
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
        = ((1U & (((IData)(vlTOPp->reset) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)) 
                  | (IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE)))
            ? 0U : __Vtemp33[4U]);
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
        = ((1U & (((IData)(vlTOPp->reset) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)) 
                  | (IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE)))
            ? 0U : ((0xfU & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                             >> 2U)) | (0xfffffff0U 
                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                            << 0xfU) 
                                           | (0x7ff0U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                 >> 0x11U))))));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
        = ((1U & (((IData)(vlTOPp->reset) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)) 
                  | (IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE)))
            ? 0U : ((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                             >> 0x11U)) | (0xfffffff0U 
                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               << 0xfU) 
                                              | (0x7ff0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                    >> 0x11U))))));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
        = ((1U & (((IData)(vlTOPp->reset) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)) 
                  | (IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE)))
            ? 0U : ((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                             >> 0x11U)) | (0xfffffff0U 
                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               << 0xfU) 
                                              | (0x7ff0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 0x11U))))));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
        = ((1U & (((IData)(vlTOPp->reset) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)) 
                  | (IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE)))
            ? 0U : (0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                            >> 0x11U)));
    if (vlSymsp->TOP__pipeline.__Vdlyvset__my_DE_stage__DOT__regs__v0) {
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0xaU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0xbU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0xcU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0xdU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0xeU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0xfU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0x10U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0x11U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0x12U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0x13U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0x14U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0x15U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0x16U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0x17U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0x18U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0x19U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0x1aU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0x1bU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0x1cU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0x1dU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0x1eU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0x1fU] = 0U;
    }
    if (vlSymsp->TOP__pipeline.__Vdlyvset__my_DE_stage__DOT__regs__v32) {
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[vlSymsp->TOP__pipeline.__Vdlyvdim0__my_DE_stage__DOT__regs__v32] 
            = vlSymsp->TOP__pipeline.__Vdlyvval__my_DE_stage__DOT__regs__v32;
    }
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
        = vlSymsp->TOP__pipeline.__Vdly__my_FE_stage__DOT__FE_latch[0U];
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
        = vlSymsp->TOP__pipeline.__Vdly__my_FE_stage__DOT__FE_latch[1U];
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
        = vlSymsp->TOP__pipeline.__Vdly__my_FE_stage__DOT__FE_latch[2U];
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
        = vlSymsp->TOP__pipeline.__Vdly__my_FE_stage__DOT__FE_latch[3U];
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
        = vlSymsp->TOP__pipeline.__Vdly__my_FE_stage__DOT__FE_latch[4U];
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE 
        = ((((0x33U == (0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x15U)))) 
             & (0U == (7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                             >> 1U)))) & (0U == (0x7fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 0xeU))))
            ? 1U : ((((0x33U == (0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 0xbU) 
                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0x15U)))) 
                      & (0U == (7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      >> 1U)))) & (0x20U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 0xeU))))
                     ? 2U : ((((0x33U == (0x7fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 0xbU) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x15U)))) 
                               & (7U == (7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 1U)))) 
                              & (0U == (0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 >> 0xeU))))
                              ? 3U : ((((0x33U == (0x7fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 0xbU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x15U)))) 
                                        & (6U == (7U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 1U)))) 
                                       & (0U == (0x7fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 0xeU))))
                                       ? 4U : ((((0x33U 
                                                  == 
                                                  (0x7fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 0xbU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x15U)))) 
                                                 & (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 1U)))) 
                                                & (0U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 0xeU))))
                                                ? 5U
                                                : (
                                                   (((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           << 0xbU) 
                                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 0x15U)))) 
                                                     & (2U 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 1U)))) 
                                                    & (0U 
                                                       == 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 0xeU))))
                                                    ? 6U
                                                    : 
                                                   ((((0x33U 
                                                       == 
                                                       (0x7fU 
                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            << 0xbU) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x15U)))) 
                                                      & (3U 
                                                         == 
                                                         (7U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 1U)))) 
                                                     & (0U 
                                                        == 
                                                        (0x7fU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 0xeU))))
                                                     ? 7U
                                                     : 
                                                    ((((0x33U 
                                                        == 
                                                        (0x7fU 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             << 0xbU) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x15U)))) 
                                                       & (5U 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              >> 1U)))) 
                                                      & (0x20U 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0xeU))))
                                                      ? 8U
                                                      : 
                                                     ((((0x33U 
                                                         == 
                                                         (0x7fU 
                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              << 0xbU) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 0x15U)))) 
                                                        & (5U 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               >> 1U)))) 
                                                       & (0U 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              >> 0xeU))))
                                                       ? 9U
                                                       : 
                                                      ((((0x33U 
                                                          == 
                                                          (0x7fU 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 0xbU) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 0x15U)))) 
                                                         & (1U 
                                                            == 
                                                            (7U 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                >> 1U)))) 
                                                        & (0U 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               >> 0xeU))))
                                                        ? 0xaU
                                                        : 
                                                       ((((0x33U 
                                                           == 
                                                           (0x7fU 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 0xbU) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x15U)))) 
                                                          & (0U 
                                                             == 
                                                             (7U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 >> 1U)))) 
                                                         & (1U 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                >> 0xeU))))
                                                         ? 0xbU
                                                         : 
                                                        (((0x13U 
                                                           == 
                                                           (0x7fU 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 0xbU) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x15U)))) 
                                                          & (0U 
                                                             == 
                                                             (7U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 >> 1U))))
                                                          ? 0xcU
                                                          : 
                                                         (((0x13U 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 0xbU) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x15U)))) 
                                                           & (7U 
                                                              == 
                                                              (7U 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  >> 1U))))
                                                           ? 0xdU
                                                           : 
                                                          (((0x13U 
                                                             == 
                                                             (0x7fU 
                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  << 0xbU) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 0x15U)))) 
                                                            & (6U 
                                                               == 
                                                               (7U 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   >> 1U))))
                                                            ? 0xeU
                                                            : 
                                                           (((0x13U 
                                                              == 
                                                              (0x7fU 
                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   << 0xbU) 
                                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 0x15U)))) 
                                                             & (4U 
                                                                == 
                                                                (7U 
                                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    >> 1U))))
                                                             ? 0xfU
                                                             : 
                                                            (((0x13U 
                                                               == 
                                                               (0x7fU 
                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    << 0xbU) 
                                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                      >> 0x15U)))) 
                                                              & (2U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     >> 1U))))
                                                              ? 0x10U
                                                              : 
                                                             (((0x13U 
                                                                == 
                                                                (0x7fU 
                                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 0xbU) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x15U)))) 
                                                               & (3U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      >> 1U))))
                                                               ? 0x11U
                                                               : 
                                                              ((((0x13U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       << 0xbU) 
                                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 0x15U)))) 
                                                                 & (5U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        >> 1U)))) 
                                                                & (0x20U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       >> 0xeU))))
                                                                ? 0x12U
                                                                : 
                                                               ((((0x13U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        << 0xbU) 
                                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 0x15U)))) 
                                                                  & (5U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         >> 1U)))) 
                                                                 & (0U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        >> 0xeU))))
                                                                 ? 0x13U
                                                                 : 
                                                                ((((0x13U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         << 0xbU) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 0x15U)))) 
                                                                   & (1U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          >> 1U)))) 
                                                                  & (0U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         >> 0xeU))))
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x37U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        << 0xbU) 
                                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 0x15U))))
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x17U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         << 0xbU) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 0x15U))))
                                                                    ? 0x16U
                                                                    : 
                                                                   (((3U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                           << 0xbU) 
                                                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 0x15U)))) 
                                                                     & (2U 
                                                                        == 
                                                                        (7U 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            >> 1U))))
                                                                     ? 0x17U
                                                                     : 
                                                                    (((0x23U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 0xbU) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 0x15U)))) 
                                                                      & (2U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 1U))))
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x6fU 
                                                                       == 
                                                                       (0x7fU 
                                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 0xbU) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 0x15U))))
                                                                       ? 0x19U
                                                                       : 
                                                                      (((0x67U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              << 0xbU) 
                                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x15U)))) 
                                                                        & (0U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               >> 1U))))
                                                                        ? 0x1bU
                                                                        : 
                                                                       (((0x63U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               << 0xbU) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x15U)))) 
                                                                         & (0U 
                                                                            == 
                                                                            (7U 
                                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 1U))))
                                                                         ? 0x1cU
                                                                         : 
                                                                        (((0x63U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0xbU) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x15U)))) 
                                                                          & (1U 
                                                                             == 
                                                                             (7U 
                                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 1U))))
                                                                          ? 0x1dU
                                                                          : 
                                                                         (((0x63U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x15U)))) 
                                                                           & (4U 
                                                                              == 
                                                                              (7U 
                                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 1U))))
                                                                           ? 0x1eU
                                                                           : 
                                                                          (((0x63U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x15U)))) 
                                                                            & (5U 
                                                                               == 
                                                                               (7U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 1U))))
                                                                            ? 0x1fU
                                                                            : 
                                                                           (((0x63U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x15U)))) 
                                                                             & (6U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 1U))))
                                                                             ? 0x20U
                                                                             : 
                                                                            (((0x63U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x15U)))) 
                                                                              & (7U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 1U))))
                                                                              ? 0x21U
                                                                              : 
                                                                             (((0x73U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x15U)))) 
                                                                               & (2U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 1U))))
                                                                               ? 0x22U
                                                                               : 
                                                                              (((0x73U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x15U)))) 
                                                                                & (1U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 1U))))
                                                                                ? 0x23U
                                                                                : 0x25U))))))))))))))))))))))))))))))))));
    if (((((((((1U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU)))) 
               | (2U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x1eU))))) 
              | (3U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x1eU))))) 
             | (4U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
            | (5U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))) 
           | (6U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x1eU))))) 
          | (7U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                              << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0x1eU))))) 
         | (8U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                             << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0x1eU)))))) {
        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
            = ((1U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))
                ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                               >> 0x1eU)) + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 0x1eU)))
                : ((2U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))
                    ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                         << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x1eU)) - ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                    >> 0x1eU)))
                    : ((3U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))
                        ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                             << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 0x1eU)) & 
                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                             << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                       >> 0x1eU))) : 
                       ((4U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))
                         ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                              << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0x1eU)) 
                            | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                          >> 0x1eU)))
                         : ((5U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))
                             ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 0x1eU)) 
                                ^ ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                              >> 0x1eU)))
                             : ((6U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))
                                 ? VL_LTS_III(32,32,32, 
                                              ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x1eU)), 
                                              ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 0x1eU)))
                                 : ((7U == (0x3fU & 
                                            ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))
                                     ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 0x1eU)) 
                                        < ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                              >> 0x1eU)))
                                     : VL_SHIFTRS_III(32,32,5, 
                                                      ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        << 2U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                          >> 0x1eU)), 
                                                      (0x1fU 
                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                           << 2U) 
                                                          | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                             >> 0x1eU)))))))))));
    } else {
        if (((((((((9U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU)))) 
                   | (0xaU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                  | (0x18U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                 | (0xbU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU))))) 
                | (0xcU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
               | (0xdU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
              | (0xeU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))) 
             | (0xfU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x1eU)))))) {
            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                = ((9U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))
                    ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                         << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x1eU)) >> (0x1fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                        >> 0x1eU))))
                    : ((0xaU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))
                        ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                             << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 0x1eU)) << 
                           (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 0x1eU))))
                        : ((0x18U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))
                            ? (0xfffffffcU & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x1eU)) 
                                              + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 0x1eU))))
                            : ((0xbU == (0x3fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0x1eU))))
                                ? VL_MULS_III(32,32,32, 
                                              ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x1eU)), 
                                              ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 0x1eU)))
                                : ((0xcU == (0x3fU 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))
                                    ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x1eU)) 
                                       + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0x1eU)))
                                    : ((0xdU == (0x3fU 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     << 2U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 0x1eU))))
                                        ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0x1eU)) 
                                           & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               << 2U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0x1eU)))
                                        : ((0xeU == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))
                                            ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x1eU)) 
                                               | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x1eU)))
                                            : (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x1eU)) 
                                               ^ ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x1eU))))))))));
        } else {
            if (((((((((0x10U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU)))) 
                       | (0x11U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
                      | (0x12U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
                     | (0x13U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))) 
                    | (0x14U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
                   | (0x15U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))) 
                  | (0x16U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                 | (0x17U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU)))))) {
                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                    = ((0x10U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))
                        ? VL_LTS_III(32,32,32, ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x1eU)), 
                                     ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0x1eU)))
                        : ((0x11U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))
                            ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x1eU)) 
                               < ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             >> 0x1eU)))
                            : ((0x12U == (0x3fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    << 2U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0x1eU))))
                                ? VL_SHIFTRS_III(32,32,5, 
                                                 ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 0x1eU)), 
                                                 (0x1fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                      << 8U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                        >> 0x18U))))
                                : ((0x13U == (0x3fU 
                                              & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))
                                    ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x1eU)) 
                                       >> (0x1fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                             << 8U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                               >> 0x18U))))
                                    : ((0x14U == (0x3fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 0x1eU))))
                                        ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0x1eU)) 
                                           << (0x1fU 
                                               & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x1eU))))
                                        : ((0x15U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))
                                            ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 0x1eU))
                                            : ((0x16U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     << 2U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 0x1eU))))
                                                ? (
                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                     << 0x1cU) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                       >> 4U)) 
                                                   + 
                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 2U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 0x1eU)))
                                                : (0xfffffffcU 
                                                   & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        << 2U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                          >> 0x1eU)) 
                                                      + 
                                                      ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        << 2U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          >> 0x1eU)))))))))));
            } else {
                if ((0x19U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) {
                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                        = ((IData)(4U) + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                           << 0x1cU) 
                                          | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 4U)));
                } else {
                    if ((0x1bU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) {
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                            = ((IData)(4U) + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                               << 0x1cU) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                 >> 4U)));
                    } else {
                        if ((0x1aU != (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) {
                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__in_alu 
        = (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               >> 0x1eU)));
    if ((1U & (~ ((((((((1U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU)))) 
                        | (2U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))) 
                       | (3U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
                      | (4U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))) 
                     | (5U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                    | (6U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))) 
                   | (7U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU))))) 
                  | (8U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU)))))))) {
        if ((1U & (~ ((((((((9U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU)))) 
                            | (0xaU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))) 
                           | (0x18U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))) 
                          | (0xbU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))) 
                         | (0xcU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               << 2U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU))))) 
                        | (0xdU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
                       | (0xeU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
                      | (0xfU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU)))))))) {
            if ((1U & (~ ((((((((0x10U == (0x3fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU)))) 
                                | (0x11U == (0x3fU 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                               | (0x12U == (0x3fU & 
                                            ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
                              | (0x13U == (0x3fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
                             | (0x14U == (0x3fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    << 2U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0x1eU))))) 
                            | (0x15U == (0x3fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0x1eU))))) 
                           | (0x16U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))) 
                          | (0x17U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU)))))))) {
                if ((0x19U != (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) {
                    if ((0x1bU != (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) {
                        if ((0x1aU != (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) {
                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__in_alu = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding 
        = (((((((((1U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU)))) 
                  | (2U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
                 | (3U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
                | (4U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))) 
               | (5U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x1eU))))) 
              | (6U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x1eU))))) 
             | (7U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
            | (8U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))) 
           | (((((((((9U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU)))) 
                     | (0xaU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
                    | (0x18U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
                   | (0xbU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                  | (0xcU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))) 
                 | (0xdU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU))))) 
                | (0xeU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
               | (0xfU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU)))))
               ? ((9U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU)))) 
                  | ((0xaU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU)))) 
                     | (0x18U != (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))))
               : (((((((((0x10U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU)))) 
                         | (0x11U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))) 
                        | (0x12U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               << 2U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU))))) 
                       | (0x13U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
                      | (0x14U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
                     | (0x15U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))) 
                    | (0x16U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
                   | (0x17U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))) 
                  | ((0x19U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU)))) 
                     | (0x1bU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))))));
    if (((((((((1U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU)))) 
               | (2U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x1eU))))) 
              | (3U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x1eU))))) 
             | (4U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
            | (5U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))) 
           | (6U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x1eU))))) 
          | (7U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                              << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0x1eU))))) 
         | (8U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                             << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0x1eU)))))) {
        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg 
            = (0x1fU & ((1U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))
                         ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                             << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                          >> 0xbU))
                         : ((2U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))
                             ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 0xbU))
                             : ((3U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))
                                 ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                     << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                  >> 0xbU))
                                 : ((4U == (0x3fU & 
                                            ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))
                                     ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                         << 0x15U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                           >> 0xbU))
                                     : ((5U == (0x3fU 
                                                & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    << 2U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0x1eU))))
                                         ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                             << 0x15U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                               >> 0xbU))
                                         : ((6U == 
                                             (0x3fU 
                                              & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))
                                             ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                 << 0x15U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                   >> 0xbU))
                                             : ((7U 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 0x1eU))))
                                                 ? 
                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                  << 0x15U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0xbU))
                                                 : 
                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                  << 0x15U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0xbU))))))))));
    } else {
        if (((((((((9U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU)))) 
                   | (0xaU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                  | (0x18U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                 | (0xbU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU))))) 
                | (0xcU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
               | (0xdU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
              | (0xeU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))) 
             | (0xfU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x1eU)))))) {
            if ((9U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x1eU))))) {
                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg 
                    = (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 0xbU)));
            } else {
                if ((0xaU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))) {
                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg 
                        = (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                     << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                  >> 0xbU)));
                } else {
                    if ((0x18U != (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) {
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg 
                            = (0x1fU & ((0xbU == (0x3fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 0x1eU))))
                                         ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                             << 0x15U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                               >> 0xbU))
                                         : ((0xcU == 
                                             (0x3fU 
                                              & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))
                                             ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                 << 0x15U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                   >> 0xbU))
                                             : ((0xdU 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 0x1eU))))
                                                 ? 
                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                  << 0x15U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0xbU))
                                                 : 
                                                ((0xeU 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 0x1eU))))
                                                  ? 
                                                 ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                   << 0x15U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                     >> 0xbU))
                                                  : 
                                                 ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                   << 0x15U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                     >> 0xbU)))))));
                    }
                }
            }
        } else {
            if (((((((((0x10U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU)))) 
                       | (0x11U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
                      | (0x12U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
                     | (0x13U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))) 
                    | (0x14U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
                   | (0x15U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))) 
                  | (0x16U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                 | (0x17U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU)))))) {
                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg 
                    = (0x1fU & ((0x10U == (0x3fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))
                                 ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                     << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                  >> 0xbU))
                                 : ((0x11U == (0x3fU 
                                               & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0x1eU))))
                                     ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                         << 0x15U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                           >> 0xbU))
                                     : ((0x12U == (0x3fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 0x1eU))))
                                         ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                             << 0x15U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                               >> 0xbU))
                                         : ((0x13U 
                                             == (0x3fU 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     << 2U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 0x1eU))))
                                             ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                 << 0x15U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                   >> 0xbU))
                                             : ((0x14U 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 0x1eU))))
                                                 ? 
                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                  << 0x15U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0xbU))
                                                 : 
                                                ((0x15U 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 0x1eU))))
                                                  ? 
                                                 ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                   << 0x15U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                     >> 0xbU))
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x3fU 
                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                        << 2U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                          >> 0x1eU))))
                                                   ? 
                                                  ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                    << 0x15U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                      >> 0xbU))
                                                   : 
                                                  ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                    << 0x15U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                      >> 0xbU))))))))));
            } else {
                if ((0x19U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) {
                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg 
                        = (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                     << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                  >> 0xbU)));
                } else {
                    if ((0x1bU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) {
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg 
                            = (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                         << 0x15U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                           >> 0xbU)));
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX 
        = (((((((((0x1cU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU)))) 
                  | (0x1dU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                 | (0x1eU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))) 
                | (0x1fU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU))))) 
               | (0x20U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
              | (0x21U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
             | (0x19U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))) 
            | (0x1bU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x1eU)))))
            ? ((0x1cU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))
                ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                               >> 0x1eU)) == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               << 2U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 0x1eU)))
                : ((0x1dU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))
                    ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                         << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x1eU)) != ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                     >> 0x1eU)))
                    : ((0x1eU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))
                        ? VL_LTS_III(1,32,32, ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x1eU)), 
                                     ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 0x1eU)))
                        : ((0x1fU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))
                            ? VL_GTES_III(1,32,32, 
                                          ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 0x1eU)), 
                                          ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                              >> 0x1eU)))
                            : ((0x20U == (0x3fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    << 2U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0x1eU))))
                                ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0x1eU)) 
                                   < ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 0x1eU)))
                                : ((0x21U != (0x3fU 
                                              & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU)))) 
                                   | (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x1eU)) 
                                      >= ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 0x1eU)))))))))
            : (0x1aU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x1eU)))));
    if ((1U & (~ ((((((((1U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU)))) 
                        | (2U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))) 
                       | (3U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
                      | (4U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))) 
                     | (5U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                    | (6U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))) 
                   | (7U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU))))) 
                  | (8U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU)))))))) {
        if ((1U & (~ ((((((((9U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU)))) 
                            | (0xaU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))) 
                           | (0x18U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))) 
                          | (0xbU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))) 
                         | (0xcU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               << 2U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU))))) 
                        | (0xdU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
                       | (0xeU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
                      | (0xfU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU)))))))) {
            if ((1U & (~ ((((((((0x10U == (0x3fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU)))) 
                                | (0x11U == (0x3fU 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                               | (0x12U == (0x3fU & 
                                            ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
                              | (0x13U == (0x3fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
                             | (0x14U == (0x3fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    << 2U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0x1eU))))) 
                            | (0x15U == (0x3fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0x1eU))))) 
                           | (0x16U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))) 
                          | (0x17U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU)))))))) {
                if ((0x19U != (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) {
                    if ((0x1bU != (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) {
                        if ((0x1aU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) {
                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_jmp 
        = (((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
            | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))) 
           | (0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)));
    vlSymsp->TOP__pipeline.__Vtableidx1 = vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE;
    if ((1U & vlSymsp->TOP__pipeline.__Vtablechg1[vlSymsp->TOP__pipeline.__Vtableidx1])) {
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE 
            = vlSymsp->TOP__pipeline.__Vtable1___PVT__my_DE_stage__DOT__type_I_DE
            [vlSymsp->TOP__pipeline.__Vtableidx1];
    }
    if ((2U & vlSymsp->TOP__pipeline.__Vtablechg1[vlSymsp->TOP__pipeline.__Vtableidx1])) {
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE 
            = vlSymsp->TOP__pipeline.__Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE
            [vlSymsp->TOP__pipeline.__Vtableidx1];
    }
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
        = ((0x1000000U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])
            ? ((0x1aU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))
                ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                              >> 0x1eU)) : ((0x1aU 
                                             == (0x3fU 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     << 2U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 0x1eU))))
                                             ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x1eU))
                                             : ((0x1bU 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 0x1eU))))
                                                 ? 
                                                (0xfffffffeU 
                                                 & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        >> 0x1eU)) 
                                                    + 
                                                    ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        >> 0x1eU))))
                                                 : 
                                                ((0x19U 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 0x1eU))))
                                                  ? 
                                                 (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    << 0x1cU) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                      >> 4U)) 
                                                  + 
                                                  ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 2U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 0x1eU)))
                                                  : 0U))))
            : (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                 >> 0x19U) & (IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX))
                ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                     << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  >> 4U)) + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0x1eU)))
                : ((IData)(4U) + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                   << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                >> 4U)))));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__flush_pipe 
        = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
             >> 0x19U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                          >> 0x18U)) & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX) 
                                        != (1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 0x14U))));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE 
        = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
            ? ((0xfffff800U & (VL_NEGATE_I((IData)(
                                                   (1U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 0x14U)))) 
                               << 0xbU)) | (0x7ffU 
                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 9U)))
            : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                ? ((0xfffff800U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 0x14U)))) 
                                   << 0xbU)) | ((0x7e0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 9U)) 
                                                | (0x1fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 4U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x1cU)))))
                : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                    ? ((0xfffff000U & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               >> 0x14U)))) 
                                       << 0xcU)) | 
                       ((0x800U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                   >> 0x11U)) | ((0x7e0U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 9U)) 
                                                 | (0x1eU 
                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        << 4U) 
                                                       | (0xeU 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 0x1cU)))))))
                    : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                        ? (0xfffff000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          << 0xbU))
                        : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                            ? ((0xfff00000U & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       >> 0x14U)))) 
                                               << 0x14U)) 
                               | ((0xff000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               << 0xbU)) 
                                  | ((0x800U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 2U)) 
                                     | ((0x7e0U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 9U)) 
                                        | (0x1eU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 9U))))))
                            : 0U)))));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_branch 
        = ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE)) 
           & (0x18U != (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)));
    vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE = 
        (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg) 
          << 2U) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding) 
                     << 1U) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__flush_pipe)));
}

VL_INLINE_OPT void Vpipeline_pipeline::_sequent__TOP__pipeline__4(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline::_sequent__TOP__pipeline__4\n"); );
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_forward_rs1 
        = ((4U != (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE)) 
           & (((((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                           >> 4U)) == (0x1fU & ((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                                                >> 2U))) 
                & ((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                   >> 1U)) | (((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                         >> 4U)) == 
                               (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                          << 0x18U) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                            >> 8U)))) 
                              & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                 >> 7U))) | (((0x1fU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  >> 4U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                             >> 1U)))) 
                                             & (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE))));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_forward_rs2 
        = ((((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE)) 
             | (3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))) 
            & (0U != (0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                               >> 9U)))) & (((((0x1fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                                                      >> 2U))) 
                                              & ((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                                                 >> 1U)) 
                                             | (((0x1fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 9U)) 
                                                 == 
                                                 (0x1fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                      << 0x18U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                        >> 8U)))) 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                   >> 7U))) 
                                            | (((0x1fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 9U)) 
                                                == 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                            >> 1U)))) 
                                               & (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE))));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next 
        = (((((3U != (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE)) 
              & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_forward_rs1) 
                 | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_forward_rs2))) 
             | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_branch) 
                & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_forward_rs1) 
                   | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_forward_rs2)))) 
            | ((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
               & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_forward_rs1) 
                  | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_forward_rs2)))) 
           | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_jmp) 
               | (0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))) 
              & (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_forward_rs1)));
}

VL_INLINE_OPT void Vpipeline_pipeline::_sequent__TOP__pipeline__5(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline::_sequent__TOP__pipeline__5\n"); );
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdlyvval__my_FE_stage__DOT__PHT__v0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__PHT__v0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__PHT__v1;
    CData/*3:0*/ __Vdlyvdim0__my_FE_stage__DOT__BTB__v0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__BTB__v1;
    IData/*31:0*/ __Vilp;
    QData/*58:0*/ __Vdlyvval__my_FE_stage__DOT__BTB__v0;
    // Body
    __Vdlyvset__my_FE_stage__DOT__PHT__v0 = 0U;
    __Vdlyvset__my_FE_stage__DOT__PHT__v1 = 0U;
    __Vdlyvset__my_FE_stage__DOT__BTB__v1 = 0U;
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR_FE_LATCH 
        = (0xffU & ((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[3U] 
                     << 0x1fU) | (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U] 
                                  >> 1U)));
    if (vlTOPp->reset) {
        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR_FE_LATCH = 0U;
    }
    if ((1U & vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[0U])) {
        __Vdlyvval__my_FE_stage__DOT__PHT__v0 = (3U 
                                                 & ((0x200U 
                                                     & vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[3U])
                                                     ? 
                                                    ((3U 
                                                      == 
                                                      vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT
                                                      [0U])
                                                      ? 3U
                                                      : 
                                                     ((IData)(1U) 
                                                      + 
                                                      vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT
                                                      [0U]))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT
                                                      [0U])
                                                      ? 0U
                                                      : 
                                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT
                                                      [0U] 
                                                      - (IData)(1U)))));
        __Vdlyvset__my_FE_stage__DOT__PHT__v0 = 1U;
    }
    if (vlTOPp->reset) {
        __Vdlyvset__my_FE_stage__DOT__PHT__v1 = 1U;
    }
    __Vdlyvval__my_FE_stage__DOT__BTB__v0 = (VL_ULL(0x7ffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U])) 
                                                 << 0x3fU) 
                                                | (((QData)((IData)(
                                                                    vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[0U])) 
                                                      >> 1U))));
    __Vdlyvdim0__my_FE_stage__DOT__BTB__v0 = (0xfU 
                                              & ((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U] 
                                                  << 4U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
                                                    >> 0x1cU)));
    if (vlTOPp->reset) {
        __Vdlyvset__my_FE_stage__DOT__BTB__v1 = 1U;
    }
    if (__Vdlyvset__my_FE_stage__DOT__PHT__v0) {
        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[0U] 
            = __Vdlyvval__my_FE_stage__DOT__PHT__v0;
    }
    if (__Vdlyvset__my_FE_stage__DOT__PHT__v1) {
        __Vilp = 0U;
        while ((__Vilp <= 0xffU)) {
            vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[__Vdlyvdim0__my_FE_stage__DOT__BTB__v0] 
        = __Vdlyvval__my_FE_stage__DOT__BTB__v0;
    if (__Vdlyvset__my_FE_stage__DOT__BTB__v1) {
        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[0U] = VL_ULL(0);
        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[1U] = VL_ULL(0);
        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[2U] = VL_ULL(0);
        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[3U] = VL_ULL(0);
        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[4U] = VL_ULL(0);
        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[5U] = VL_ULL(0);
        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[6U] = VL_ULL(0);
        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[7U] = VL_ULL(0);
        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[8U] = VL_ULL(0);
        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[9U] = VL_ULL(0);
        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[0xaU] = VL_ULL(0);
        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[0xbU] = VL_ULL(0);
        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[0xcU] = VL_ULL(0);
        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[0xdU] = VL_ULL(0);
        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[0xeU] = VL_ULL(0);
        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[0xfU] = VL_ULL(0);
    }
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_hit_FE 
        = (((0x3ffffffU & (IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB
                                   [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                             >> 2U))] 
                                   >> 0x21U))) == (0x3ffffffU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                      >> 6U))) 
           & (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB
                     [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                               >> 2U))]));
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_target_FE 
        = (IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB
                   [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                             >> 2U))] >> 1U));
}

void Vpipeline_pipeline::_settle__TOP__pipeline__6(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline::_settle__TOP__pipeline__6\n"); );
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp36[3];
    WData/*95:0*/ __Vtemp37[3];
    // Body
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcplus_FE 
        = ((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch);
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_hit_FE 
        = (((0x3ffffffU & (IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB
                                   [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                             >> 2U))] 
                                   >> 0x21U))) == (0x3ffffffU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                      >> 6U))) 
           & (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB
                     [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                               >> 2U))]));
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_target_FE 
        = (IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB
                   [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                             >> 2U))] >> 1U));
    if (((((((((1U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU)))) 
               | (2U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x1eU))))) 
              | (3U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x1eU))))) 
             | (4U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
            | (5U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))) 
           | (6U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x1eU))))) 
          | (7U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                              << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0x1eU))))) 
         | (8U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                             << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0x1eU)))))) {
        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
            = ((1U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))
                ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                               >> 0x1eU)) + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 0x1eU)))
                : ((2U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))
                    ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                         << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x1eU)) - ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                    >> 0x1eU)))
                    : ((3U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))
                        ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                             << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 0x1eU)) & 
                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                             << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                       >> 0x1eU))) : 
                       ((4U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))
                         ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                              << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0x1eU)) 
                            | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                          >> 0x1eU)))
                         : ((5U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))
                             ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 0x1eU)) 
                                ^ ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                              >> 0x1eU)))
                             : ((6U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))
                                 ? VL_LTS_III(32,32,32, 
                                              ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x1eU)), 
                                              ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 0x1eU)))
                                 : ((7U == (0x3fU & 
                                            ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))
                                     ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 0x1eU)) 
                                        < ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                              >> 0x1eU)))
                                     : VL_SHIFTRS_III(32,32,5, 
                                                      ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        << 2U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                          >> 0x1eU)), 
                                                      (0x1fU 
                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                           << 2U) 
                                                          | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                             >> 0x1eU)))))))))));
    } else {
        if (((((((((9U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU)))) 
                   | (0xaU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                  | (0x18U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                 | (0xbU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU))))) 
                | (0xcU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
               | (0xdU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
              | (0xeU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))) 
             | (0xfU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x1eU)))))) {
            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                = ((9U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))
                    ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                         << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x1eU)) >> (0x1fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                        >> 0x1eU))))
                    : ((0xaU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))
                        ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                             << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 0x1eU)) << 
                           (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 0x1eU))))
                        : ((0x18U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))
                            ? (0xfffffffcU & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x1eU)) 
                                              + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 0x1eU))))
                            : ((0xbU == (0x3fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0x1eU))))
                                ? VL_MULS_III(32,32,32, 
                                              ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x1eU)), 
                                              ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 0x1eU)))
                                : ((0xcU == (0x3fU 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))
                                    ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x1eU)) 
                                       + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0x1eU)))
                                    : ((0xdU == (0x3fU 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     << 2U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 0x1eU))))
                                        ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0x1eU)) 
                                           & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               << 2U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0x1eU)))
                                        : ((0xeU == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))
                                            ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x1eU)) 
                                               | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x1eU)))
                                            : (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x1eU)) 
                                               ^ ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x1eU))))))))));
        } else {
            if (((((((((0x10U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU)))) 
                       | (0x11U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
                      | (0x12U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
                     | (0x13U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))) 
                    | (0x14U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
                   | (0x15U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))) 
                  | (0x16U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                 | (0x17U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU)))))) {
                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                    = ((0x10U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))
                        ? VL_LTS_III(32,32,32, ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x1eU)), 
                                     ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0x1eU)))
                        : ((0x11U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))
                            ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x1eU)) 
                               < ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             >> 0x1eU)))
                            : ((0x12U == (0x3fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    << 2U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0x1eU))))
                                ? VL_SHIFTRS_III(32,32,5, 
                                                 ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 0x1eU)), 
                                                 (0x1fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                      << 8U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                        >> 0x18U))))
                                : ((0x13U == (0x3fU 
                                              & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))
                                    ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x1eU)) 
                                       >> (0x1fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                             << 8U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                               >> 0x18U))))
                                    : ((0x14U == (0x3fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 0x1eU))))
                                        ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0x1eU)) 
                                           << (0x1fU 
                                               & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x1eU))))
                                        : ((0x15U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))
                                            ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 0x1eU))
                                            : ((0x16U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     << 2U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 0x1eU))))
                                                ? (
                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                     << 0x1cU) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                       >> 4U)) 
                                                   + 
                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 2U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 0x1eU)))
                                                : (0xfffffffcU 
                                                   & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        << 2U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                          >> 0x1eU)) 
                                                      + 
                                                      ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        << 2U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          >> 0x1eU)))))))))));
            } else {
                if ((0x19U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) {
                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                        = ((IData)(4U) + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                           << 0x1cU) 
                                          | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 4U)));
                } else {
                    if ((0x1bU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) {
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                            = ((IData)(4U) + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                               << 0x1cU) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                 >> 4U)));
                    } else {
                        if ((0x1aU != (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) {
                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__in_alu 
        = (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               >> 0x1eU)));
    if ((1U & (~ ((((((((1U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU)))) 
                        | (2U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))) 
                       | (3U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
                      | (4U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))) 
                     | (5U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                    | (6U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))) 
                   | (7U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU))))) 
                  | (8U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU)))))))) {
        if ((1U & (~ ((((((((9U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU)))) 
                            | (0xaU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))) 
                           | (0x18U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))) 
                          | (0xbU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))) 
                         | (0xcU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               << 2U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU))))) 
                        | (0xdU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
                       | (0xeU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
                      | (0xfU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU)))))))) {
            if ((1U & (~ ((((((((0x10U == (0x3fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU)))) 
                                | (0x11U == (0x3fU 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                               | (0x12U == (0x3fU & 
                                            ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
                              | (0x13U == (0x3fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
                             | (0x14U == (0x3fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    << 2U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0x1eU))))) 
                            | (0x15U == (0x3fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0x1eU))))) 
                           | (0x16U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))) 
                          | (0x17U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU)))))))) {
                if ((0x19U != (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) {
                    if ((0x1bU != (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) {
                        if ((0x1aU != (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) {
                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__in_alu = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding 
        = (((((((((1U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU)))) 
                  | (2U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
                 | (3U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
                | (4U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))) 
               | (5U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x1eU))))) 
              | (6U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x1eU))))) 
             | (7U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
            | (8U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))) 
           | (((((((((9U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU)))) 
                     | (0xaU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
                    | (0x18U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
                   | (0xbU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                  | (0xcU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))) 
                 | (0xdU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU))))) 
                | (0xeU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
               | (0xfU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU)))))
               ? ((9U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU)))) 
                  | ((0xaU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU)))) 
                     | (0x18U != (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))))
               : (((((((((0x10U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU)))) 
                         | (0x11U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))) 
                        | (0x12U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               << 2U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU))))) 
                       | (0x13U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
                      | (0x14U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
                     | (0x15U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))) 
                    | (0x16U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
                   | (0x17U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))) 
                  | ((0x19U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU)))) 
                     | (0x1bU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))))));
    if (((((((((1U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU)))) 
               | (2U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x1eU))))) 
              | (3U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x1eU))))) 
             | (4U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
            | (5U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))) 
           | (6U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x1eU))))) 
          | (7U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                              << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0x1eU))))) 
         | (8U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                             << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0x1eU)))))) {
        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg 
            = (0x1fU & ((1U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))
                         ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                             << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                          >> 0xbU))
                         : ((2U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))
                             ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 0xbU))
                             : ((3U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))
                                 ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                     << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                  >> 0xbU))
                                 : ((4U == (0x3fU & 
                                            ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))
                                     ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                         << 0x15U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                           >> 0xbU))
                                     : ((5U == (0x3fU 
                                                & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    << 2U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0x1eU))))
                                         ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                             << 0x15U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                               >> 0xbU))
                                         : ((6U == 
                                             (0x3fU 
                                              & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))
                                             ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                 << 0x15U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                   >> 0xbU))
                                             : ((7U 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 0x1eU))))
                                                 ? 
                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                  << 0x15U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0xbU))
                                                 : 
                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                  << 0x15U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0xbU))))))))));
    } else {
        if (((((((((9U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU)))) 
                   | (0xaU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                  | (0x18U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                 | (0xbU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU))))) 
                | (0xcU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
               | (0xdU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
              | (0xeU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))) 
             | (0xfU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x1eU)))))) {
            if ((9U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x1eU))))) {
                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg 
                    = (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 0xbU)));
            } else {
                if ((0xaU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))) {
                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg 
                        = (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                     << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                  >> 0xbU)));
                } else {
                    if ((0x18U != (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) {
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg 
                            = (0x1fU & ((0xbU == (0x3fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 0x1eU))))
                                         ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                             << 0x15U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                               >> 0xbU))
                                         : ((0xcU == 
                                             (0x3fU 
                                              & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))
                                             ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                 << 0x15U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                   >> 0xbU))
                                             : ((0xdU 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 0x1eU))))
                                                 ? 
                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                  << 0x15U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0xbU))
                                                 : 
                                                ((0xeU 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 0x1eU))))
                                                  ? 
                                                 ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                   << 0x15U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                     >> 0xbU))
                                                  : 
                                                 ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                   << 0x15U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                     >> 0xbU)))))));
                    }
                }
            }
        } else {
            if (((((((((0x10U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU)))) 
                       | (0x11U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
                      | (0x12U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
                     | (0x13U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))) 
                    | (0x14U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
                   | (0x15U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))) 
                  | (0x16U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                 | (0x17U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU)))))) {
                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg 
                    = (0x1fU & ((0x10U == (0x3fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))
                                 ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                     << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                  >> 0xbU))
                                 : ((0x11U == (0x3fU 
                                               & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0x1eU))))
                                     ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                         << 0x15U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                           >> 0xbU))
                                     : ((0x12U == (0x3fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 0x1eU))))
                                         ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                             << 0x15U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                               >> 0xbU))
                                         : ((0x13U 
                                             == (0x3fU 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     << 2U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 0x1eU))))
                                             ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                 << 0x15U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                   >> 0xbU))
                                             : ((0x14U 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 0x1eU))))
                                                 ? 
                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                  << 0x15U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0xbU))
                                                 : 
                                                ((0x15U 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 0x1eU))))
                                                  ? 
                                                 ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                   << 0x15U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                     >> 0xbU))
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x3fU 
                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                        << 2U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                          >> 0x1eU))))
                                                   ? 
                                                  ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                    << 0x15U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                      >> 0xbU))
                                                   : 
                                                  ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                    << 0x15U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                      >> 0xbU))))))))));
            } else {
                if ((0x19U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) {
                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg 
                        = (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                     << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                  >> 0xbU)));
                } else {
                    if ((0x1bU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) {
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg 
                            = (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                         << 0x15U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                           >> 0xbU)));
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE 
        = ((((0x33U == (0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x15U)))) 
             & (0U == (7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                             >> 1U)))) & (0U == (0x7fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 0xeU))))
            ? 1U : ((((0x33U == (0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 0xbU) 
                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0x15U)))) 
                      & (0U == (7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      >> 1U)))) & (0x20U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 0xeU))))
                     ? 2U : ((((0x33U == (0x7fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 0xbU) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x15U)))) 
                               & (7U == (7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 1U)))) 
                              & (0U == (0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 >> 0xeU))))
                              ? 3U : ((((0x33U == (0x7fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 0xbU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x15U)))) 
                                        & (6U == (7U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 1U)))) 
                                       & (0U == (0x7fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 0xeU))))
                                       ? 4U : ((((0x33U 
                                                  == 
                                                  (0x7fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 0xbU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x15U)))) 
                                                 & (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 1U)))) 
                                                & (0U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 0xeU))))
                                                ? 5U
                                                : (
                                                   (((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           << 0xbU) 
                                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 0x15U)))) 
                                                     & (2U 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 1U)))) 
                                                    & (0U 
                                                       == 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 0xeU))))
                                                    ? 6U
                                                    : 
                                                   ((((0x33U 
                                                       == 
                                                       (0x7fU 
                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            << 0xbU) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x15U)))) 
                                                      & (3U 
                                                         == 
                                                         (7U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 1U)))) 
                                                     & (0U 
                                                        == 
                                                        (0x7fU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 0xeU))))
                                                     ? 7U
                                                     : 
                                                    ((((0x33U 
                                                        == 
                                                        (0x7fU 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             << 0xbU) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x15U)))) 
                                                       & (5U 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              >> 1U)))) 
                                                      & (0x20U 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0xeU))))
                                                      ? 8U
                                                      : 
                                                     ((((0x33U 
                                                         == 
                                                         (0x7fU 
                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              << 0xbU) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 0x15U)))) 
                                                        & (5U 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               >> 1U)))) 
                                                       & (0U 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              >> 0xeU))))
                                                       ? 9U
                                                       : 
                                                      ((((0x33U 
                                                          == 
                                                          (0x7fU 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 0xbU) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 0x15U)))) 
                                                         & (1U 
                                                            == 
                                                            (7U 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                >> 1U)))) 
                                                        & (0U 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               >> 0xeU))))
                                                        ? 0xaU
                                                        : 
                                                       ((((0x33U 
                                                           == 
                                                           (0x7fU 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 0xbU) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x15U)))) 
                                                          & (0U 
                                                             == 
                                                             (7U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 >> 1U)))) 
                                                         & (1U 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                >> 0xeU))))
                                                         ? 0xbU
                                                         : 
                                                        (((0x13U 
                                                           == 
                                                           (0x7fU 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 0xbU) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x15U)))) 
                                                          & (0U 
                                                             == 
                                                             (7U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 >> 1U))))
                                                          ? 0xcU
                                                          : 
                                                         (((0x13U 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 0xbU) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x15U)))) 
                                                           & (7U 
                                                              == 
                                                              (7U 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  >> 1U))))
                                                           ? 0xdU
                                                           : 
                                                          (((0x13U 
                                                             == 
                                                             (0x7fU 
                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  << 0xbU) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 0x15U)))) 
                                                            & (6U 
                                                               == 
                                                               (7U 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   >> 1U))))
                                                            ? 0xeU
                                                            : 
                                                           (((0x13U 
                                                              == 
                                                              (0x7fU 
                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   << 0xbU) 
                                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 0x15U)))) 
                                                             & (4U 
                                                                == 
                                                                (7U 
                                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    >> 1U))))
                                                             ? 0xfU
                                                             : 
                                                            (((0x13U 
                                                               == 
                                                               (0x7fU 
                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    << 0xbU) 
                                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                      >> 0x15U)))) 
                                                              & (2U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     >> 1U))))
                                                              ? 0x10U
                                                              : 
                                                             (((0x13U 
                                                                == 
                                                                (0x7fU 
                                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 0xbU) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x15U)))) 
                                                               & (3U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      >> 1U))))
                                                               ? 0x11U
                                                               : 
                                                              ((((0x13U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       << 0xbU) 
                                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 0x15U)))) 
                                                                 & (5U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        >> 1U)))) 
                                                                & (0x20U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       >> 0xeU))))
                                                                ? 0x12U
                                                                : 
                                                               ((((0x13U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        << 0xbU) 
                                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 0x15U)))) 
                                                                  & (5U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         >> 1U)))) 
                                                                 & (0U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        >> 0xeU))))
                                                                 ? 0x13U
                                                                 : 
                                                                ((((0x13U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         << 0xbU) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 0x15U)))) 
                                                                   & (1U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          >> 1U)))) 
                                                                  & (0U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         >> 0xeU))))
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x37U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        << 0xbU) 
                                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 0x15U))))
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x17U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         << 0xbU) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 0x15U))))
                                                                    ? 0x16U
                                                                    : 
                                                                   (((3U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                           << 0xbU) 
                                                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 0x15U)))) 
                                                                     & (2U 
                                                                        == 
                                                                        (7U 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            >> 1U))))
                                                                     ? 0x17U
                                                                     : 
                                                                    (((0x23U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 0xbU) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 0x15U)))) 
                                                                      & (2U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 1U))))
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x6fU 
                                                                       == 
                                                                       (0x7fU 
                                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 0xbU) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 0x15U))))
                                                                       ? 0x19U
                                                                       : 
                                                                      (((0x67U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              << 0xbU) 
                                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x15U)))) 
                                                                        & (0U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               >> 1U))))
                                                                        ? 0x1bU
                                                                        : 
                                                                       (((0x63U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               << 0xbU) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x15U)))) 
                                                                         & (0U 
                                                                            == 
                                                                            (7U 
                                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 1U))))
                                                                         ? 0x1cU
                                                                         : 
                                                                        (((0x63U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0xbU) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x15U)))) 
                                                                          & (1U 
                                                                             == 
                                                                             (7U 
                                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 1U))))
                                                                          ? 0x1dU
                                                                          : 
                                                                         (((0x63U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x15U)))) 
                                                                           & (4U 
                                                                              == 
                                                                              (7U 
                                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 1U))))
                                                                           ? 0x1eU
                                                                           : 
                                                                          (((0x63U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x15U)))) 
                                                                            & (5U 
                                                                               == 
                                                                               (7U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 1U))))
                                                                            ? 0x1fU
                                                                            : 
                                                                           (((0x63U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x15U)))) 
                                                                             & (6U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 1U))))
                                                                             ? 0x20U
                                                                             : 
                                                                            (((0x63U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x15U)))) 
                                                                              & (7U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 1U))))
                                                                              ? 0x21U
                                                                              : 
                                                                             (((0x73U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x15U)))) 
                                                                               & (2U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 1U))))
                                                                               ? 0x22U
                                                                               : 
                                                                              (((0x73U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x15U)))) 
                                                                                & (1U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 1U))))
                                                                                ? 0x23U
                                                                                : 0x25U))))))))))))))))))))))))))))))))));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX 
        = (((((((((0x1cU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU)))) 
                  | (0x1dU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                 | (0x1eU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))) 
                | (0x1fU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU))))) 
               | (0x20U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
              | (0x21U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
             | (0x19U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))) 
            | (0x1bU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x1eU)))))
            ? ((0x1cU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))
                ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                               >> 0x1eU)) == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               << 2U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 0x1eU)))
                : ((0x1dU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))
                    ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                         << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x1eU)) != ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                     >> 0x1eU)))
                    : ((0x1eU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))
                        ? VL_LTS_III(1,32,32, ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x1eU)), 
                                     ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 0x1eU)))
                        : ((0x1fU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))
                            ? VL_GTES_III(1,32,32, 
                                          ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 0x1eU)), 
                                          ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                              >> 0x1eU)))
                            : ((0x20U == (0x3fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    << 2U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0x1eU))))
                                ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                     << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0x1eU)) 
                                   < ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 0x1eU)))
                                : ((0x21U != (0x3fU 
                                              & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU)))) 
                                   | (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x1eU)) 
                                      >= ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 0x1eU)))))))))
            : (0x1aU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x1eU)))));
    if ((1U & (~ ((((((((1U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU)))) 
                        | (2U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))) 
                       | (3U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1eU))))) 
                      | (4U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          << 2U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1eU))))) 
                     | (5U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                    | (6U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))) 
                   | (7U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU))))) 
                  | (8U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU)))))))) {
        if ((1U & (~ ((((((((9U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU)))) 
                            | (0xaU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))) 
                           | (0x18U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))) 
                          | (0xbU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1eU))))) 
                         | (0xcU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               << 2U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1eU))))) 
                        | (0xdU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
                       | (0xeU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
                      | (0xfU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 2U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU)))))))) {
            if ((1U & (~ ((((((((0x10U == (0x3fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU)))) 
                                | (0x11U == (0x3fU 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) 
                               | (0x12U == (0x3fU & 
                                            ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1eU))))) 
                              | (0x13U == (0x3fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) 
                             | (0x14U == (0x3fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    << 2U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0x1eU))))) 
                            | (0x15U == (0x3fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0x1eU))))) 
                           | (0x16U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x1eU))))) 
                          | (0x17U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU)))))))) {
                if ((0x19U != (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) {
                    if ((0x1bU != (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1eU))))) {
                        if ((0x1aU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1eU))))) {
                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__rs1_MEM 
        = ((0x40U & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])
            ? vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
           [(0x3fffU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                         << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                     >> 0x13U)))] : 
           ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
             << 0xfU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                         >> 0x11U)));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_jmp 
        = (((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
            | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))) 
           | (0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)));
    vlSymsp->TOP__pipeline.__Vtableidx1 = vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE;
    if ((1U & vlSymsp->TOP__pipeline.__Vtablechg1[vlSymsp->TOP__pipeline.__Vtableidx1])) {
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE 
            = vlSymsp->TOP__pipeline.__Vtable1___PVT__my_DE_stage__DOT__type_I_DE
            [vlSymsp->TOP__pipeline.__Vtableidx1];
    }
    if ((2U & vlSymsp->TOP__pipeline.__Vtablechg1[vlSymsp->TOP__pipeline.__Vtableidx1])) {
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE 
            = vlSymsp->TOP__pipeline.__Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE
            [vlSymsp->TOP__pipeline.__Vtableidx1];
    }
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
        = ((0x1000000U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])
            ? ((0x1aU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1eU))))
                ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                    << 2U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                              >> 0x1eU)) : ((0x1aU 
                                             == (0x3fU 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     << 2U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 0x1eU))))
                                             ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x1eU))
                                             : ((0x1bU 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 0x1eU))))
                                                 ? 
                                                (0xfffffffeU 
                                                 & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        >> 0x1eU)) 
                                                    + 
                                                    ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      << 2U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        >> 0x1eU))))
                                                 : 
                                                ((0x19U 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 0x1eU))))
                                                  ? 
                                                 (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    << 0x1cU) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                      >> 4U)) 
                                                  + 
                                                  ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 2U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 0x1eU)))
                                                  : 0U))))
            : (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                 >> 0x19U) & (IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX))
                ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                     << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  >> 4U)) + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0x1eU)))
                : ((IData)(4U) + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                   << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                >> 4U)))));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__flush_pipe 
        = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
             >> 0x19U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                          >> 0x18U)) & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX) 
                                        != (1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 0x14U))));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE 
        = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
            ? ((0xfffff800U & (VL_NEGATE_I((IData)(
                                                   (1U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 0x14U)))) 
                               << 0xbU)) | (0x7ffU 
                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 9U)))
            : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                ? ((0xfffff800U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 0x14U)))) 
                                   << 0xbU)) | ((0x7e0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 9U)) 
                                                | (0x1fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 4U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x1cU)))))
                : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                    ? ((0xfffff000U & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               >> 0x14U)))) 
                                       << 0xcU)) | 
                       ((0x800U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                   >> 0x11U)) | ((0x7e0U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 9U)) 
                                                 | (0x1eU 
                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        << 4U) 
                                                       | (0xeU 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 0x1cU)))))))
                    : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                        ? (0xfffff000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          << 0xbU))
                        : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                            ? ((0xfff00000U & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       >> 0x14U)))) 
                                               << 0x14U)) 
                               | ((0xff000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               << 0xbU)) 
                                  | ((0x800U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 2U)) 
                                     | ((0x7e0U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 9U)) 
                                        | (0x1eU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 9U))))))
                            : 0U)))));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_branch 
        = ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE)) 
           & (0x18U != (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)));
    __Vtemp36[1U] = ((1U & ((IData)((VL_ULL(1) | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__flush_pipe)) 
                                                   << 0x3fU) 
                                                  | (((QData)((IData)(
                                                                      (0xfU 
                                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                           << 0x1aU) 
                                                                          | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                             >> 6U))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (0x3ffffffU 
                                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                              << 0x16U) 
                                                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                >> 0xaU))))) 
                                                         << 0x21U) 
                                                        | ((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX)) 
                                                           << 1U)))))) 
                            >> 0x1fU)) | (0xfffffffeU 
                                          & ((IData)(
                                                     ((VL_ULL(1) 
                                                       | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__flush_pipe)) 
                                                           << 0x3fU) 
                                                          | (((QData)((IData)(
                                                                              (0xfU 
                                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                                << 0x1aU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                >> 6U))))) 
                                                              << 0x3bU) 
                                                             | (((QData)((IData)(
                                                                                (0x3ffffffU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                >> 0xaU))))) 
                                                                 << 0x21U) 
                                                                | ((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX)) 
                                                                   << 1U))))) 
                                                      >> 0x20U)) 
                                             << 1U)));
    __Vtemp37[2U] = ((0x1feU & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  << 0x1eU) | (0x3ffffffcU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 2U))) 
                                | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX) 
                                   << 1U))) | (1U & 
                                               ((IData)(
                                                        ((VL_ULL(1) 
                                                          | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__flush_pipe)) 
                                                              << 0x3fU) 
                                                             | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                                << 0x1aU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                >> 6U))))) 
                                                                 << 0x3bU) 
                                                                | (((QData)((IData)(
                                                                                (0x3ffffffU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                >> 0xaU))))) 
                                                                    << 0x21U) 
                                                                   | ((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX)) 
                                                                      << 1U))))) 
                                                         >> 0x20U)) 
                                                >> 0x1fU)));
    vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[0U] 
        = ((0xfffffffeU & ((IData)((VL_ULL(1) | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__flush_pipe)) 
                                                  << 0x3fU) 
                                                 | (((QData)((IData)(
                                                                     (0xfU 
                                                                      & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                          << 0x1aU) 
                                                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                            >> 6U))))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0x3ffffffU 
                                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                             << 0x16U) 
                                                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                               >> 0xaU))))) 
                                                        << 0x21U) 
                                                       | ((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX)) 
                                                          << 1U)))))) 
                           << 1U)) | (1U & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             >> 0x19U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                               >> 0x18U))));
    vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
        = __Vtemp36[1U];
    vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U] 
        = ((0xfffffe00U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                           << 9U)) | __Vtemp37[2U]);
    vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[3U] 
        = ((0xfffffe00U & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX) 
                           << 9U)) | (0x1ffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                                >> 0x17U)));
    vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE = 
        (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg) 
          << 2U) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding) 
                     << 1U) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__flush_pipe)));
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index_FE 
        = (0xffU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                     >> 2U) ^ ((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[3U] 
                                << 0x1fU) | (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U] 
                                             >> 1U))));
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__branch_predict_FE 
        = (2U <= vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT
           [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index_FE]);
}

VL_INLINE_OPT void Vpipeline_pipeline::_sequent__TOP__pipeline__8(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline::_sequent__TOP__pipeline__8\n"); );
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp40[3];
    WData/*95:0*/ __Vtemp41[3];
    // Body
    __Vtemp40[1U] = ((1U & ((IData)((VL_ULL(1) | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__flush_pipe)) 
                                                   << 0x3fU) 
                                                  | (((QData)((IData)(
                                                                      (0xfU 
                                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                           << 0x1aU) 
                                                                          | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                             >> 6U))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (0x3ffffffU 
                                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                              << 0x16U) 
                                                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                >> 0xaU))))) 
                                                         << 0x21U) 
                                                        | ((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX)) 
                                                           << 1U)))))) 
                            >> 0x1fU)) | (0xfffffffeU 
                                          & ((IData)(
                                                     ((VL_ULL(1) 
                                                       | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__flush_pipe)) 
                                                           << 0x3fU) 
                                                          | (((QData)((IData)(
                                                                              (0xfU 
                                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                                << 0x1aU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                >> 6U))))) 
                                                              << 0x3bU) 
                                                             | (((QData)((IData)(
                                                                                (0x3ffffffU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                >> 0xaU))))) 
                                                                 << 0x21U) 
                                                                | ((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX)) 
                                                                   << 1U))))) 
                                                      >> 0x20U)) 
                                             << 1U)));
    __Vtemp41[2U] = ((0x1feU & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  << 0x1eU) | (0x3ffffffcU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 2U))) 
                                | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX) 
                                   << 1U))) | (1U & 
                                               ((IData)(
                                                        ((VL_ULL(1) 
                                                          | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__flush_pipe)) 
                                                              << 0x3fU) 
                                                             | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                                << 0x1aU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                >> 6U))))) 
                                                                 << 0x3bU) 
                                                                | (((QData)((IData)(
                                                                                (0x3ffffffU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                >> 0xaU))))) 
                                                                    << 0x21U) 
                                                                   | ((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX)) 
                                                                      << 1U))))) 
                                                         >> 0x20U)) 
                                                >> 0x1fU)));
    vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[0U] 
        = ((0xfffffffeU & ((IData)((VL_ULL(1) | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__flush_pipe)) 
                                                  << 0x3fU) 
                                                 | (((QData)((IData)(
                                                                     (0xfU 
                                                                      & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                          << 0x1aU) 
                                                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                            >> 6U))))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0x3ffffffU 
                                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                             << 0x16U) 
                                                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                               >> 0xaU))))) 
                                                        << 0x21U) 
                                                       | ((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX)) 
                                                          << 1U)))))) 
                           << 1U)) | (1U & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             >> 0x19U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                               >> 0x18U))));
    vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[1U] 
        = __Vtemp40[1U];
    vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U] 
        = ((0xfffffe00U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                           << 9U)) | __Vtemp41[2U]);
    vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[3U] 
        = ((0xfffffe00U & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX) 
                           << 9U)) | (0x1ffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                                >> 0x17U)));
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index_FE 
        = (0xffU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                     >> 2U) ^ ((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[3U] 
                                << 0x1fU) | (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE[2U] 
                                             >> 1U))));
}

VL_INLINE_OPT void Vpipeline_pipeline::_sequent__TOP__pipeline__9(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline::_sequent__TOP__pipeline__9\n"); );
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__branch_predict_FE 
        = (2U <= vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT
           [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index_FE]);
}

void Vpipeline_pipeline::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    out1 = VL_RAND_RESET_I(32);
    out2 = VL_RAND_RESET_I(32);
    __PVT__cycle_count = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(106, __PVT__from_AGEX_to_FE);
    __PVT__from_AGEX_to_DE = VL_RAND_RESET_I(7);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            __PVT__my_FE_stage__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    VL_RAND_RESET_W(149, __PVT__my_FE_stage__DOT__FE_latch);
    __PVT__my_FE_stage__DOT__PC_FE_latch = VL_RAND_RESET_I(32);
    __PVT__my_FE_stage__DOT__pcplus_FE = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            __PVT__my_FE_stage__DOT__BTB[__Vi0] = VL_RAND_RESET_Q(59);
    }}
    __PVT__my_FE_stage__DOT__btb_target_FE = VL_RAND_RESET_I(32);
    __PVT__my_FE_stage__DOT__btb_hit_FE = VL_RAND_RESET_I(1);
    __PVT__my_FE_stage__DOT__branch_predict_FE = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            __PVT__my_FE_stage__DOT__PHT[__Vi0] = VL_RAND_RESET_I(2);
    }}
    __PVT__my_FE_stage__DOT__pht_index_FE = VL_RAND_RESET_I(8);
    __PVT__my_FE_stage__DOT__BHR_FE_LATCH = VL_RAND_RESET_I(8);
    __PVT__my_FE_stage__DOT__inst_count_FE = VL_RAND_RESET_I(32);
    __PVT__my_FE_stage__DOT__inst_count_AGEX = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(260, __PVT__my_DE_stage__DOT__DE_latch);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            __PVT__my_DE_stage__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            __PVT__my_DE_stage__DOT__csr_regs[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__my_DE_stage__DOT__is_forward_rs1 = VL_RAND_RESET_I(1);
    __PVT__my_DE_stage__DOT__is_forward_rs2 = VL_RAND_RESET_I(1);
    __PVT__my_DE_stage__DOT__is_branch = VL_RAND_RESET_I(1);
    __PVT__my_DE_stage__DOT__is_jmp = VL_RAND_RESET_I(1);
    __PVT__my_DE_stage__DOT__op_I_DE = VL_RAND_RESET_I(6);
    __PVT__my_DE_stage__DOT__type_I_DE = VL_RAND_RESET_I(4);
    __PVT__my_DE_stage__DOT__type_immediate_DE = VL_RAND_RESET_I(3);
    __PVT__my_DE_stage__DOT__sxt_imm_DE = VL_RAND_RESET_I(32);
    __PVT__my_DE_stage__DOT__stall_next = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(247, __PVT__my_AGEX_stage__DOT__AGEX_latch);
    __PVT__my_AGEX_stage__DOT__br_cond_AGEX = VL_RAND_RESET_I(1);
    __PVT__my_AGEX_stage__DOT__output_AGEX = VL_RAND_RESET_I(32);
    __PVT__my_AGEX_stage__DOT__branch_addr_AGEX = VL_RAND_RESET_I(32);
    __PVT__my_AGEX_stage__DOT__forward_reg = VL_RAND_RESET_I(5);
    __PVT__my_AGEX_stage__DOT__is_forwarding = VL_RAND_RESET_I(1);
    __PVT__my_AGEX_stage__DOT__flush_pipe = VL_RAND_RESET_I(1);
    __PVT__my_AGEX_stage__DOT__in_alu = VL_RAND_RESET_I(6);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            __PVT__my_MEM_stage__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    VL_RAND_RESET_W(245, __PVT__my_MEM_stage__DOT__MEM_latch);
    __PVT__my_MEM_stage__DOT__rs1_MEM = VL_RAND_RESET_I(32);
    __Vtableidx1 = 0;
    __Vtablechg1[0] = 0U;
    __Vtablechg1[1] = 1U;
    __Vtablechg1[2] = 1U;
    __Vtablechg1[3] = 1U;
    __Vtablechg1[4] = 1U;
    __Vtablechg1[5] = 1U;
    __Vtablechg1[6] = 1U;
    __Vtablechg1[7] = 1U;
    __Vtablechg1[8] = 1U;
    __Vtablechg1[9] = 1U;
    __Vtablechg1[10] = 1U;
    __Vtablechg1[11] = 1U;
    __Vtablechg1[12] = 3U;
    __Vtablechg1[13] = 3U;
    __Vtablechg1[14] = 3U;
    __Vtablechg1[15] = 3U;
    __Vtablechg1[16] = 3U;
    __Vtablechg1[17] = 3U;
    __Vtablechg1[18] = 1U;
    __Vtablechg1[19] = 1U;
    __Vtablechg1[20] = 1U;
    __Vtablechg1[21] = 3U;
    __Vtablechg1[22] = 3U;
    __Vtablechg1[23] = 3U;
    __Vtablechg1[24] = 3U;
    __Vtablechg1[25] = 3U;
    __Vtablechg1[26] = 3U;
    __Vtablechg1[27] = 3U;
    __Vtablechg1[28] = 3U;
    __Vtablechg1[29] = 3U;
    __Vtablechg1[30] = 3U;
    __Vtablechg1[31] = 3U;
    __Vtablechg1[32] = 3U;
    __Vtablechg1[33] = 3U;
    __Vtablechg1[34] = 3U;
    __Vtablechg1[35] = 3U;
    __Vtablechg1[36] = 0U;
    __Vtablechg1[37] = 0U;
    __Vtablechg1[38] = 0U;
    __Vtablechg1[39] = 0U;
    __Vtablechg1[40] = 0U;
    __Vtablechg1[41] = 0U;
    __Vtablechg1[42] = 0U;
    __Vtablechg1[43] = 0U;
    __Vtablechg1[44] = 0U;
    __Vtablechg1[45] = 0U;
    __Vtablechg1[46] = 0U;
    __Vtablechg1[47] = 0U;
    __Vtablechg1[48] = 0U;
    __Vtablechg1[49] = 0U;
    __Vtablechg1[50] = 0U;
    __Vtablechg1[51] = 0U;
    __Vtablechg1[52] = 0U;
    __Vtablechg1[53] = 0U;
    __Vtablechg1[54] = 0U;
    __Vtablechg1[55] = 0U;
    __Vtablechg1[56] = 0U;
    __Vtablechg1[57] = 0U;
    __Vtablechg1[58] = 0U;
    __Vtablechg1[59] = 0U;
    __Vtablechg1[60] = 0U;
    __Vtablechg1[61] = 0U;
    __Vtablechg1[62] = 0U;
    __Vtablechg1[63] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[0] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[1] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[2] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[3] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[4] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[5] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[6] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[7] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[8] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[9] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[10] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[11] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[12] = 2U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[13] = 2U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[14] = 2U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[15] = 2U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[16] = 2U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[17] = 2U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[18] = 2U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[19] = 2U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[20] = 2U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[21] = 2U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[22] = 2U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[23] = 2U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[24] = 3U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[25] = 4U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[26] = 2U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[27] = 2U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[28] = 3U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[29] = 3U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[30] = 3U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[31] = 3U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[32] = 3U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[33] = 3U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[34] = 2U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[35] = 2U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[36] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[37] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[38] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[39] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[40] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[41] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[42] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[43] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[44] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[45] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[46] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[47] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[48] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[49] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[50] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[51] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[52] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[53] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[54] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[55] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[56] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[57] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[58] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[59] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[60] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[61] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[62] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[63] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[0] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[1] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[2] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[3] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[4] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[5] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[6] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[7] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[8] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[9] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[10] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[11] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[12] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[13] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[14] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[15] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[16] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[17] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[18] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[19] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[20] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[21] = 3U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[22] = 3U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[23] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[24] = 4U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[25] = 2U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[26] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[27] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[28] = 5U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[29] = 5U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[30] = 5U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[31] = 5U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[32] = 5U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[33] = 5U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[34] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[35] = 1U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[36] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[37] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[38] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[39] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[40] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[41] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[42] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[43] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[44] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[45] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[46] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[47] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[48] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[49] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[50] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[51] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[52] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[53] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[54] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[55] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[56] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[57] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[58] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[59] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[60] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[61] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[62] = 0U;
    __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[63] = 0U;
    VL_RAND_RESET_W(149, __Vdly__my_FE_stage__DOT__FE_latch);
    __Vdlyvset__my_DE_stage__DOT__regs__v0 = 0;
    __Vdlyvdim0__my_DE_stage__DOT__regs__v32 = 0;
    __Vdlyvval__my_DE_stage__DOT__regs__v32 = VL_RAND_RESET_I(32);
    __Vdlyvset__my_DE_stage__DOT__regs__v32 = 0;
}
