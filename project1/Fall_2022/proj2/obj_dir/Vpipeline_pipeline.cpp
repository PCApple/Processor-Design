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
    __Vtemp1[1U] = 0x65737435U;
    __Vtemp1[2U] = 0x74312f74U;
    __Vtemp1[3U] = 0x2f706172U;
    __Vtemp1[4U] = 0x65737473U;
    __Vtemp1[5U] = 0x6a322f74U;
    __Vtemp1[6U] = 0x2f70726fU;
    __Vtemp1[7U] = 0x32303232U;
    __Vtemp1[8U] = 0x616c6c5fU;
    __Vtemp1[9U] = 0x74312f46U;
    __Vtemp1[0xaU] = 0x6f6a6563U;
    __Vtemp1[0xbU] = 0x302f7072U;
    __Vtemp1[0xcU] = 0x53333232U;
    __Vtemp1[0xdU] = 0x75622f43U;
    __Vtemp1[0xeU] = 0x47697448U;
    __Vtemp1[0xfU] = 0x6e74732fU;
    __Vtemp1[0x10U] = 0x63756d65U;
    __Vtemp1[0x11U] = 0x632f446fU;
    __Vtemp1[0x12U] = 0x706f636bU;
    __Vtemp1[0x13U] = 0x6572732fU;
    __Vtemp1[0x14U] = 0x632f5573U;
    __Vtemp1[0x15U] = 0x6d6e742fU;
    __Vtemp1[0x16U] = 0x2fU;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(23, __Vtemp1)
                 , vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                 , 0, ~VL_ULL(0));
    __Vtemp2[0U] = 0x2e6d656dU;
    __Vtemp2[1U] = 0x65737435U;
    __Vtemp2[2U] = 0x74312f74U;
    __Vtemp2[3U] = 0x2f706172U;
    __Vtemp2[4U] = 0x65737473U;
    __Vtemp2[5U] = 0x6a322f74U;
    __Vtemp2[6U] = 0x2f70726fU;
    __Vtemp2[7U] = 0x32303232U;
    __Vtemp2[8U] = 0x616c6c5fU;
    __Vtemp2[9U] = 0x74312f46U;
    __Vtemp2[0xaU] = 0x6f6a6563U;
    __Vtemp2[0xbU] = 0x302f7072U;
    __Vtemp2[0xcU] = 0x53333232U;
    __Vtemp2[0xdU] = 0x75622f43U;
    __Vtemp2[0xeU] = 0x47697448U;
    __Vtemp2[0xfU] = 0x6e74732fU;
    __Vtemp2[0x10U] = 0x63756d65U;
    __Vtemp2[0x11U] = 0x632f446fU;
    __Vtemp2[0x12U] = 0x706f636bU;
    __Vtemp2[0x13U] = 0x6572732fU;
    __Vtemp2[0x14U] = 0x632f5573U;
    __Vtemp2[0x15U] = 0x6d6e742fU;
    __Vtemp2[0x16U] = 0x2fU;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(23, __Vtemp2)
                 , vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                 , 0, ~VL_ULL(0));
}

VL_INLINE_OPT void Vpipeline_pipeline::_sequent__TOP__pipeline__2(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline::_sequent__TOP__pipeline__2\n"); );
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__my_DE_stage__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__regs__v32;
    CData/*3:0*/ __Vdlyvdim0__my_DE_stage__DOT__csr_regs__v16;
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__csr_regs__v16;
    IData/*31:0*/ __Vdlyvval__my_DE_stage__DOT__regs__v32;
    IData/*31:0*/ __Vdlyvval__my_DE_stage__DOT__csr_regs__v16;
    // Body
    __Vdlyvset__my_DE_stage__DOT__csr_regs__v16 = 0U;
    __Vdlyvset__my_DE_stage__DOT__regs__v32 = 0U;
    __Vdlyvset__my_DE_stage__DOT__regs__v0 = 0U;
    if (vlTOPp->reset) {
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vdlyvset__my_DE_stage__DOT__regs__v0 = 1U;
    } else {
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                       >> 0x30U))))) {
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[(0x1fU 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                                                >> 0x2bU)))] 
                = (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs
                   [(0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                      >> 0x2bU)))] 
                   - (IData)(1U));
            VL_WRITEF("score_regs[%2#] = %10#\n",5,
                      (0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                        >> 0x2bU))),
                      32,vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs
                      [(0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                         >> 0x2bU)))]);
            __Vdlyvval__my_DE_stage__DOT__regs__v32 
                = (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                           >> 0xbU));
            __Vdlyvset__my_DE_stage__DOT__regs__v32 = 1U;
            __Vdlyvdim0__my_DE_stage__DOT__regs__v32 
                = (0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                    >> 0x2bU)));
        } else {
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
    if (__Vdlyvset__my_DE_stage__DOT__regs__v0) {
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[1U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[2U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[3U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[4U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[5U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[6U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[7U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[8U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[9U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0xaU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0xbU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0xcU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0xdU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0xeU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0xfU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0x10U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0x11U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0x12U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0x13U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0x14U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0x15U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0x16U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0x17U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0x18U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0x19U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0x1aU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0x1bU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0x1cU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0x1dU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0x1eU] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__my_DE_stage__DOT__regs__v0) {
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
    if (__Vdlyvset__my_DE_stage__DOT__regs__v0) {
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
    if (__Vdlyvset__my_DE_stage__DOT__regs__v32) {
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[__Vdlyvdim0__my_DE_stage__DOT__regs__v32] 
            = __Vdlyvval__my_DE_stage__DOT__regs__v32;
    }
}

VL_INLINE_OPT void Vpipeline_pipeline::_sequent__TOP__pipeline__3(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline::_sequent__TOP__pipeline__3\n"); );
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__my_MEM_stage__DOT__dmem__v0;
    SData/*13:0*/ __Vdlyvdim0__my_MEM_stage__DOT__dmem__v0;
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__PC_FE_latch;
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__inst_count_FE;
    IData/*31:0*/ __Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    WData/*159:0*/ __Vtemp8[5];
    // Body
    __Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0U;
    __Vdly__my_FE_stage__DOT__inst_count_FE = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE;
    __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch;
    if ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))) {
        if (VL_LIKELY(((0U < vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs
                        [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                    << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x13U)))]) 
                       | (0U < vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs
                          [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x18U)))])))) {
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next = 1U;
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall = 0U;
        } else {
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[(0x1fU 
                                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 0x15U) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 0xbU)))] 
                = ((IData)(1U) + vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs
                   [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                               << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0xbU)))]);
            VL_WRITEF("score_regs[%2#] = %10#\n",5,
                      (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                 << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0xbU))),
                      32,vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs
                      [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0xbU)))]);
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next = 0U;
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall = 0U;
        }
    } else {
        if ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))) {
            if (VL_LIKELY((0U < vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs
                           [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 0xdU) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x13U)))]))) {
                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next = 1U;
                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall = 0U;
            } else {
                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[(0x1fU 
                                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x15U) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0xbU)))] 
                    = ((IData)(1U) + vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs
                       [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                   << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0xbU)))]);
                VL_WRITEF("score_regs[%2#] = %10#\n",
                          5,(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 0x15U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0xbU))),32,
                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs
                          [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      << 0x15U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0xbU)))]);
                if (((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                     | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) {
                    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next = 1U;
                    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall = 1U;
                } else {
                    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next = 0U;
                    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall = 0U;
                }
            }
        } else {
            if ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))) {
                if (((0U < vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs
                      [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x13U)))]) 
                     | (0U < vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs
                        [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                    << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x18U)))]))) {
                    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next = 1U;
                    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall = 0U;
                } else {
                    if (((((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                           | (0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))) 
                          | (0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))) 
                         | (0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) {
                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next = 1U;
                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall = 1U;
                    } else {
                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next = 0U;
                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall = 0U;
                    }
                }
            } else {
                if (VL_UNLIKELY((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE)))) {
                    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[(0x1fU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x15U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0xbU)))] 
                        = ((IData)(1U) + vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs
                           [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 0x15U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0xbU)))]);
                    VL_WRITEF("score_regs[%2#] = %10#\n",
                              5,(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 0x15U) 
                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0xbU))),
                              32,vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs
                              [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          << 0x15U) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0xbU)))]);
                    if ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))) {
                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next = 1U;
                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall = 1U;
                    } else {
                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next = 0U;
                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall = 0U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pipeline.__PVT__cycle_count = ((IData)(vlTOPp->reset)
                                                  ? 0U
                                                  : 
                                                 ((IData)(1U) 
                                                  + vlSymsp->TOP__pipeline.__PVT__cycle_count));
    if (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__wr_mem_MEM) {
        __Vdlyvval__my_MEM_stage__DOT__dmem__v0 = vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__wr_val_MEM;
        __Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 1U;
        __Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 = 
            (0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__memaddr_MEM 
                        >> 2U));
    }
    if (vlTOPp->reset) {
        __Vdly__my_FE_stage__DOT__PC_FE_latch = 0x200U;
        __Vdly__my_FE_stage__DOT__inst_count_FE = 1U;
    } else {
        if (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next) {
            if ((1U & (IData)((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE 
                               >> 0x20U)))) {
                __Vdly__my_FE_stage__DOT__inst_count_FE 
                    = ((IData)(1U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE);
                __Vdly__my_FE_stage__DOT__PC_FE_latch 
                    = (IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE);
            } else {
                __Vdly__my_FE_stage__DOT__PC_FE_latch 
                    = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch;
            }
        } else {
            if ((1U & (IData)((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE 
                               >> 0x20U)))) {
                __Vdly__my_FE_stage__DOT__inst_count_FE 
                    = ((IData)(1U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE);
                __Vdly__my_FE_stage__DOT__PC_FE_latch 
                    = (IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE);
            } else {
                if ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcplus_FE 
                     >= vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)) {
                    __Vdly__my_FE_stage__DOT__inst_count_FE 
                        = ((IData)(1U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE);
                    __Vdly__my_FE_stage__DOT__PC_FE_latch 
                        = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcplus_FE;
                } else {
                    __Vdly__my_FE_stage__DOT__PC_FE_latch 
                        = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch;
                }
            }
        }
    }
    __Vtemp8[1U] = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                                                    ? 
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U]
                                                    : 
                                                   ((0xfU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                                        >> 0x1cU)) 
                                                    | (0xfffffff0U 
                                                       & (((IData)(4U) 
                                                           + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                                          << 4U)))));
    __Vtemp8[2U] = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                                                    ? 
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U]
                                                    : 
                                                   ((0xfU 
                                                     & (((IData)(4U) 
                                                         + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                                        >> 0x1cU)) 
                                                    | (0xfffffff0U 
                                                       & ((IData)(
                                                                  (((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                                [
                                                                                (0x3fffU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                                >> 2U))])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                                          << 4U)))));
    __Vtemp8[3U] = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                                                    ? 
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U]
                                                    : 
                                                   ((0xfU 
                                                     & ((IData)(
                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                                [
                                                                                (0x3fffU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                                >> 2U))])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                                        >> 0x1cU)) 
                                                    | (0xfffffff0U 
                                                       & ((IData)(
                                                                  ((((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                                [
                                                                                (0x3fffU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                                >> 2U))])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                                   >> 0x20U)) 
                                                          << 4U)))));
    __Vtemp8[4U] = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                                                    ? 
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U]
                                                    : 
                                                   (0xfU 
                                                    & ((IData)(
                                                               ((((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                                [
                                                                                (0x3fffU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                                >> 2U))])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                                >> 0x20U)) 
                                                       >> 0x1cU))));
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                                           ? vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]
                                           : (0xfU 
                                              | (0xfffffff0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                                    << 4U)))));
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
        = __Vtemp8[1U];
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
        = __Vtemp8[2U];
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
        = __Vtemp8[3U];
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
        = __Vtemp8[4U];
    if (__Vdlyvset__my_MEM_stage__DOT__dmem__v0) {
        vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem[__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0] 
            = __Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    }
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
        = __Vdly__my_FE_stage__DOT__inst_count_FE;
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
        = __Vdly__my_FE_stage__DOT__PC_FE_latch;
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcplus_FE 
        = ((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch);
}

VL_INLINE_OPT void Vpipeline_pipeline::_sequent__TOP__pipeline__3(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline::_sequent__TOP__pipeline__3\n"); );
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]);
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U]);
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U]);
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U]);
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U]);
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U]);
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U]);
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[7U]);
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0xffffff00U 
                                           & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0xffU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                            >> 0x18U)) 
                                          | (0xffffff00U 
                                             & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0xffU & 
                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U]) 
                                          | (0xffffff00U 
                                             & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U])));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0xffU & 
                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U]) 
                                          | (0xffffff00U 
                                             & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U])));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0xffU & 
                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U]) 
                                          | (0xffffff00U 
                                             & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0xffffc000U 
                                           & ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                        << 0x32U) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                           << 0x12U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                             >> 0xeU)))) 
                                              << 0xeU)) 
                                          | ((0x3f00U 
                                              & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U]) 
                                             | (0xffU 
                                                & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U]))));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0x3fffU 
                                           & ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                        << 0x32U) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                           << 0x12U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                             >> 0xeU)))) 
                                              >> 0x12U)) 
                                          | (0xffffc000U 
                                             & ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                           << 0x32U) 
                                                          | (((QData)((IData)(
                                                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                              << 0x12U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                                >> 0xeU))) 
                                                         >> 0x20U)) 
                                                << 0xeU))));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : (0x3fffU & 
                                          ((IData)(
                                                   ((((QData)((IData)(
                                                                      vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                      << 0x32U) 
                                                     | (((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                         << 0x12U) 
                                                        | ((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                           >> 0xeU))) 
                                                    >> 0x20U)) 
                                           >> 0x12U)));
    if (vlTOPp->reset) {
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] = 0U;
    } else {
        if (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next) {
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next = 0U;
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__pipeline_stall_DE = 1U;
        } else {
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next 
                = ((((((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                       | (0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x20U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x21U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)));
        }
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__pipeline_stall_DE)
                ? 0U : ((0xffffff00U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                        [(0x1fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x18U)))] 
                                        << 8U)) | (
                                                   ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE) 
                                                    << 4U) 
                                                   | (0xfU 
                                                      & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]))));
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__pipeline_stall_DE)
                ? 0U : ((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                  [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x18U)))] 
                                  >> 0x18U)) | (0xffffff00U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                   [
                                                   (0x1fU 
                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        << 0xdU) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x13U)))] 
                                                   << 8U))));
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__pipeline_stall_DE)
                ? 0U : ((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                  [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                              << 0xdU) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x13U)))] 
                                  >> 0x18U)) | (0xffffff00U 
                                                & ((IData)(
                                                           (((QData)((IData)(
                                                                             ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                               << 0x1cU) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                                >> 4U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE)))) 
                                                   << 8U))));
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__pipeline_stall_DE)
                ? 0U : ((0xffU & ((IData)((((QData)((IData)(
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                              << 0x1cU) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                >> 4U)))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE)))) 
                                  >> 0x18U)) | (0xffffff00U 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                                << 0x1cU) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                                >> 4U)))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE))) 
                                                            >> 0x20U)) 
                                                   << 8U))));
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__pipeline_stall_DE)
                ? 0U : ((0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                        << 0xaU)) | 
                        ((0xffffff00U & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                         << 8U)) | 
                         (0xffU & ((IData)(((((QData)((IData)(
                                                              ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                << 0x1cU) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                  >> 4U)))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE))) 
                                            >> 0x20U)) 
                                   >> 0x18U)))));
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__pipeline_stall_DE)
                ? 0U : ((0x3fffU & ((0x3c00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                << 0xaU)) 
                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                       >> 0x16U))) 
                        | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                          << 0xaU))));
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__pipeline_stall_DE)
                ? 0U : ((0x3fffU & ((0x3c00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                << 0xaU)) 
                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                       >> 0x16U))) 
                        | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          << 0xaU))));
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__pipeline_stall_DE)
                ? 0U : (0x3fffU & ((0x3c00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               << 0xaU)) 
                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                      >> 0x16U))));
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
    if ((0xcU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                            << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 8U))))) {
        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
            = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                 << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                              >> 8U)) + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          << 0x18U) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 8U)));
    } else {
        if ((1U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 8U))))) {
            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                     << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 8U)) + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 8U)));
        }
    }
    if ((0x1cU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                             << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 8U))))) {
        if ((((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                            >> 8U)) == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                         << 0x18U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 8U)))) {
            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                     << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  >> 0xeU)) + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                << 0x18U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 8U)));
        }
    }
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE 
        = ((((0x33U == (0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 4U)))) 
             & (0U == (7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                              << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x10U))))) 
            & (0U == (0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                << 3U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x1dU)))))
            ? 1U : ((((0x33U == (0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 0x1cU) 
                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 4U)))) 
                      & (0U == (7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 0x10U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x10U))))) 
                     & (0x20U == (0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            << 3U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x1dU)))))
                     ? 2U : ((((0x33U == (0x7fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 0x1cU) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 4U)))) 
                               & (7U == (7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 0x10U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x10U))))) 
                              & (0U == (0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  << 3U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 0x1dU)))))
                              ? 3U : ((((0x33U == (0x7fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 0x1cU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 4U)))) 
                                        & (6U == (7U 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      << 0x10U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 0x10U))))) 
                                       & (0U == (0x7fU 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 3U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0x1dU)))))
                                       ? 4U : ((((0x33U 
                                                  == 
                                                  (0x7fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 0x1cU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 4U)))) 
                                                 & (4U 
                                                    == 
                                                    (7U 
                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                           >> 0x10U))))) 
                                                & (0U 
                                                   == 
                                                   (0x7fU 
                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x1dU)))))
                                                ? 5U
                                                : (
                                                   (((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           << 0x1cU) 
                                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 4U)))) 
                                                     & (2U 
                                                        == 
                                                        (7U 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x10U))))) 
                                                    & (0U 
                                                       == 
                                                       (0x7fU 
                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            << 3U) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x1dU)))))
                                                    ? 6U
                                                    : 
                                                   ((((0x33U 
                                                       == 
                                                       (0x7fU 
                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            << 0x1cU) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 4U)))) 
                                                      & (3U 
                                                         == 
                                                         (7U 
                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 0x10U))))) 
                                                     & (0U 
                                                        == 
                                                        (0x7fU 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             << 3U) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x1dU)))))
                                                     ? 7U
                                                     : 
                                                    ((((0x33U 
                                                        == 
                                                        (0x7fU 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             << 0x1cU) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 4U)))) 
                                                       & (5U 
                                                          == 
                                                          (7U 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 0x10U))))) 
                                                      & (0x20U 
                                                         == 
                                                         (0x7fU 
                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              << 3U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 0x1dU)))))
                                                      ? 8U
                                                      : 
                                                     ((((0x33U 
                                                         == 
                                                         (0x7fU 
                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              << 0x1cU) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 4U)))) 
                                                        & (5U 
                                                           == 
                                                           (7U 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x10U))))) 
                                                       & (0U 
                                                          == 
                                                          (0x7fU 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 3U) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 0x1dU)))))
                                                       ? 9U
                                                       : 
                                                      ((((0x33U 
                                                          == 
                                                          (0x7fU 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 0x1cU) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 4U)))) 
                                                         & (1U 
                                                            == 
                                                            (7U 
                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x10U))))) 
                                                        & (0U 
                                                           == 
                                                           (0x7fU 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 3U) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x1dU)))))
                                                        ? 0xaU
                                                        : 
                                                       ((((0x33U 
                                                           == 
                                                           (0x7fU 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 0x1cU) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 4U)))) 
                                                          & (0U 
                                                             == 
                                                             (7U 
                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  << 0x10U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 0x10U))))) 
                                                         & (1U 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 3U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x1dU)))))
                                                         ? 0xbU
                                                         : 
                                                        (((0x13U 
                                                           == 
                                                           (0x7fU 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 0x1cU) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 4U)))) 
                                                          & (0U 
                                                             == 
                                                             (7U 
                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  << 0x10U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 0x10U)))))
                                                          ? 0xcU
                                                          : 
                                                         (((0x13U 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 0x1cU) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 4U)))) 
                                                           & (7U 
                                                              == 
                                                              (7U 
                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   << 0x10U) 
                                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 0x10U)))))
                                                           ? 0xdU
                                                           : 
                                                          (((0x13U 
                                                             == 
                                                             (0x7fU 
                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  << 0x1cU) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 4U)))) 
                                                            & (6U 
                                                               == 
                                                               (7U 
                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    << 0x10U) 
                                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                      >> 0x10U)))))
                                                            ? 0xeU
                                                            : 
                                                           (((0x13U 
                                                              == 
                                                              (0x7fU 
                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   << 0x1cU) 
                                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 4U)))) 
                                                             & (4U 
                                                                == 
                                                                (7U 
                                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x10U)))))
                                                             ? 0xfU
                                                             : 
                                                            (((0x13U 
                                                               == 
                                                               (0x7fU 
                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    << 0x1cU) 
                                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                      >> 4U)))) 
                                                              & (2U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      << 0x10U) 
                                                                     | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 0x10U)))))
                                                              ? 0x10U
                                                              : 
                                                             (((0x13U 
                                                                == 
                                                                (0x7fU 
                                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 0x1cU) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 4U)))) 
                                                               & (3U 
                                                                  == 
                                                                  (7U 
                                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       << 0x10U) 
                                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 0x10U)))))
                                                               ? 0x11U
                                                               : 
                                                              ((((0x13U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       << 0x1cU) 
                                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 4U)))) 
                                                                 & (5U 
                                                                    == 
                                                                    (7U 
                                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         << 0x10U) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 0x10U))))) 
                                                                & (0x20U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        << 3U) 
                                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 0x1dU)))))
                                                                ? 0x12U
                                                                : 
                                                               ((((0x13U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        << 0x1cU) 
                                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 4U)))) 
                                                                  & (5U 
                                                                     == 
                                                                     (7U 
                                                                      & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          << 0x10U) 
                                                                         | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0x10U))))) 
                                                                 & (0U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         << 3U) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 0x1dU)))))
                                                                 ? 0x13U
                                                                 : 
                                                                ((((0x13U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         << 0x1cU) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 4U)))) 
                                                                   & (1U 
                                                                      == 
                                                                      (7U 
                                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                           << 0x10U) 
                                                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 0x10U))))) 
                                                                  & (0U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          << 3U) 
                                                                         | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0x1dU)))))
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x37U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        << 0x1cU) 
                                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 4U))))
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x17U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         << 0x1cU) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 4U))))
                                                                    ? 0x16U
                                                                    : 
                                                                   (((3U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                           << 0x1cU) 
                                                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 4U)))) 
                                                                     & (2U 
                                                                        == 
                                                                        (7U 
                                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             << 0x10U) 
                                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 0x10U)))))
                                                                     ? 0x17U
                                                                     : 
                                                                    (((0x23U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 0x1cU) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 4U)))) 
                                                                      & (2U 
                                                                         == 
                                                                         (7U 
                                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              << 0x10U) 
                                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x6fU 
                                                                       == 
                                                                       (0x7fU 
                                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 0x1cU) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 4U))))
                                                                       ? 0x19U
                                                                       : 
                                                                      (((0x67U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              << 0x1cU) 
                                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                        & (0U 
                                                                           == 
                                                                           (7U 
                                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                        ? 0x1bU
                                                                        : 
                                                                       (((0x63U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               << 0x1cU) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                         & (0U 
                                                                            == 
                                                                            (7U 
                                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                         ? 0x1cU
                                                                         : 
                                                                        (((0x63U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                          & (1U 
                                                                             == 
                                                                             (7U 
                                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                          ? 0x1dU
                                                                          : 
                                                                         (((0x63U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                           & (4U 
                                                                              == 
                                                                              (7U 
                                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                           ? 0x1eU
                                                                           : 
                                                                          (((0x63U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                            & (5U 
                                                                               == 
                                                                               (7U 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                            ? 0x1fU
                                                                            : 
                                                                           (((0x63U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                             & (6U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                             ? 0x20U
                                                                             : 
                                                                            (((0x63U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                              & (7U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                              ? 0x21U
                                                                              : 
                                                                             (((0x73U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                               & (2U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                               ? 0x22U
                                                                               : 
                                                                              (((0x73U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                                & (1U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                                ? 0x23U
                                                                                : 0x25U))))))))))))))))))))))))))))))))));
    vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE = 
        (((QData)((IData)(((0x1cU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                << 0x18U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 8U)))) 
                           & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 8U)) 
                              == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 8U)))))) 
          << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX)));
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
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE 
        = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
            ? ((0xfffff800U & (VL_NEGATE_I((IData)(
                                                   (1U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 3U)))) 
                               << 0xbU)) | (0x7ffU 
                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 8U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x18U))))
            : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                ? ((0xfffff800U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 3U)))) 
                                   << 0xbU)) | ((0x7e0U 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 8U) 
                                                    | (0xe0U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x18U)))) 
                                                | (0x1fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 0x15U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0xbU)))))
                : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                    ? ((0xfffff000U & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               >> 3U)))) 
                                       << 0xcU)) | 
                       ((0x800U & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U]) 
                        | ((0x7e0U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 8U) | (0xe0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 0x18U)))) 
                           | (0x1eU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 0x15U) | 
                                       (0x1ffffeU & 
                                        (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                         >> 0xbU)))))))
                    : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                        ? (0xfffff000U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 0x1cU) 
                                          | (0xffff000U 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 4U))))
                        : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                            ? ((0xfff00000U & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       >> 3U)))) 
                                               << 0x14U)) 
                               | ((0xff000U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 0x1cU) 
                                               | (0xffff000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 4U)))) 
                                  | ((0x800U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0xdU)) 
                                     | ((0x7e0U & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 8U) 
                                                   | (0xe0U 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x18U)))) 
                                        | (0x1eU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             << 8U) 
                                            | (0xfeU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x18U))))))))
                            : 0U)))));
}

VL_INLINE_OPT void Vpipeline_pipeline::_sequent__TOP__pipeline__4(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline::_sequent__TOP__pipeline__4\n"); );
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]);
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U]);
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U]);
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U]);
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U]);
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U]);
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U]);
    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[7U]);
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0xffffc000U 
                                           & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                              << 0xeU)) 
                                          | ((0x3c00U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 << 6U)) 
                                             | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg) 
                                                 << 5U) 
                                                | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding) 
                                                    << 4U) 
                                                   | (0xfU 
                                                      & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))))));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0x3fffU 
                                           & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                              >> 0x12U)) 
                                          | (0xffffc000U 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                << 6U))));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0x3fffU 
                                           & ((0x3fc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  << 6U)) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 0x1aU))) 
                                          | (0xffffc000U 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                << 6U))));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0x3fffU 
                                           & ((0x3fc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  << 6U)) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x1aU))) 
                                          | (0xffffc000U 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 6U))));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0x3fffU 
                                           & ((0x3fc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 6U)) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0x1aU))) 
                                          | (0xffffc000U 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                << 6U))));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0xfff00000U 
                                           & ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                        << 0x32U) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                           << 0x12U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                             >> 0xeU)))) 
                                              << 0x14U)) 
                                          | ((0xfc000U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 << 6U)) 
                                             | (0x3fffU 
                                                & ((0x3fc0U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       << 6U)) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      >> 0x1aU))))));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((0xfffffU 
                                           & ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                        << 0x32U) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                           << 0x12U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                             >> 0xeU)))) 
                                              >> 0xcU)) 
                                          | (0xfff00000U 
                                             & ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                           << 0x32U) 
                                                          | (((QData)((IData)(
                                                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                              << 0x12U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                                >> 0xeU))) 
                                                         >> 0x20U)) 
                                                << 0x14U))));
    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : (0xfffffU 
                                          & ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                        << 0x32U) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                           << 0x12U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                             >> 0xeU))) 
                                                      >> 0x20U)) 
                                             >> 0xcU)));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                                           ? ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall)
                                               ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[0U]
                                               : 0U)
                                           : vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[0U]));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                                           ? ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall)
                                               ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[1U]
                                               : 0U)
                                           : vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[1U]));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                                           ? ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall)
                                               ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[2U]
                                               : 0U)
                                           : vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[2U]));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                                           ? ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall)
                                               ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[3U]
                                               : 0U)
                                           : vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[3U]));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                                           ? ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall)
                                               ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[4U]
                                               : 0U)
                                           : vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[4U]));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                                           ? ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall)
                                               ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[5U]
                                               : 0U)
                                           : vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[5U]));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                                           ? ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall)
                                               ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[6U]
                                               : 0U)
                                           : vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[6U]));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next)
                                           ? ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall)
                                               ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[7U]
                                               : 0U)
                                           : vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[7U]));
    if (((((((((0xcU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 8U)))) 
               | (1U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 8U))))) 
              | (0x16U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 8U))))) 
             | (3U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 8U))))) 
            | (0xbU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 8U))))) 
           | (2U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 8U))))) 
          | (4U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 8U))))) 
         | (5U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                             << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 8U)))))) {
        if (VL_UNLIKELY((0xcU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 0x18U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 8U)))))) {
            VL_WRITEF("in ADDI\n");
            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                     << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 8U)) + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 8U)));
        } else {
            if (VL_UNLIKELY((1U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 8U)))))) {
                VL_WRITEF("in ADD\n");
                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                    = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                         << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 8U)) + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  << 0x18U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                    >> 8U)));
            } else {
                if (VL_UNLIKELY((0x16U == (0x3fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 0x18U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 8U)))))) {
                    VL_WRITEF("in AUIPC\n");
                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                        = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                             << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0xeU)) 
                           + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 8U)));
                } else {
                    if (VL_UNLIKELY((3U == (0x3fU & 
                                            ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 8U)))))) {
                        VL_WRITEF("in AND\n");
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                            = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 8U)) 
                               & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 8U)));
                    } else {
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                            = ((0xbU == (0x3fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 8U))))
                                ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                     << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 8U)) 
                                   * ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       << 0x18U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                       >> 8U))) : (
                                                   (2U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                           >> 8U))))
                                                    ? 
                                                   (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      << 0x18U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        >> 8U)) 
                                                    - 
                                                    ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      << 0x18U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                        >> 8U)))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                            >> 8U))))
                                                     ? 
                                                    (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       << 0x18U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                         >> 8U)) 
                                                     | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                           >> 8U)))
                                                     : 
                                                    (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       << 0x18U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                         >> 8U)) 
                                                     ^ 
                                                     ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       << 0x18U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                         >> 8U))))));
                    }
                }
            }
        }
    } else {
        if (((((((((0xdU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 0x18U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 8U)))) | 
                   (0xeU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 0x18U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 8U))))) | 
                  (0xfU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      << 0x18U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 8U))))) 
                 | (0x25U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 0x18U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 8U))))) 
                | (0x1cU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 0x18U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 8U))))) | 
               (0x1dU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 8U))))) 
              | (0x1eU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 8U))))) 
             | (0x1fU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 8U)))))) {
            if ((0xdU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 8U))))) {
                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                    = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                         << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 8U)) & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 0x18U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 8U)));
            } else {
                if ((0xeU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 0x18U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 8U))))) {
                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                        = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                             << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 8U)) | 
                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                             << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                          >> 8U)));
                } else {
                    if ((0xfU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 0x18U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 8U))))) {
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                            = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 8U)) 
                               ^ ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 8U)));
                    } else {
                        if (VL_UNLIKELY((0x25U == (0x3fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       << 0x18U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 8U)))))) {
                            VL_WRITEF("in INVALID\n");
                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX = 0U;
                        } else {
                            if (VL_UNLIKELY((0x1cU 
                                             == (0x3fU 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 8U)))))) {
                                VL_WRITEF("in BEQ\n");
                                if ((((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       << 0x18U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 8U)) == (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                      >> 8U)))) {
                                    VL_WRITEF("BEQ is true, rs1 = %10#, rs2 = %10#\n",
                                              32,((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 8U)),
                                              32,((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                     >> 8U)));
                                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                        = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             << 0x12U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0xeU)) 
                                           + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 8U)));
                                } else {
                                    VL_WRITEF("BEQ is false, rs1 = %10#, rs2 = %10#\n",
                                              32,((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 8U)),
                                              32,((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                     >> 8U)));
                                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                        = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 0x12U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0xeU));
                                }
                            } else {
                                if (VL_UNLIKELY((0x1dU 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      << 0x18U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 8U)))))) {
                                    VL_WRITEF("BNE_I\n");
                                    if ((((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           << 0x18U) 
                                          | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 8U)) 
                                         != ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 8U)))) {
                                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                            = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                 << 0x12U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0xeU)) 
                                               + ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 8U)));
                                    } else {
                                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                            = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                << 0x12U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0xeU));
                                    }
                                } else {
                                    if ((0x1eU == (0x3fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       << 0x18U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 8U))))) {
                                        VL_WRITEF("BLT_I\n");
                                        if ((((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 8U)) 
                                             <= ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  << 0x18U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                    >> 8U)))) {
                                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                                = (
                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                     << 0x12U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       >> 0xeU)) 
                                                   + 
                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 8U)));
                                        } else {
                                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                                = (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    << 0x12U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0xeU));
                                        }
                                    } else {
                                        VL_WRITEF("BGE_I\n");
                                        if ((((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 8U)) 
                                             >= ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  << 0x18U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                    >> 8U)))) {
                                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                                = (
                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                     << 0x12U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       >> 0xeU)) 
                                                   + 
                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 8U)));
                                        } else {
                                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                                = (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    << 0x12U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0xeU));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (VL_UNLIKELY((0x20U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 8U)))))) {
                VL_WRITEF("BLTU\n");
                if ((((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                       << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                    >> 8U)) <= ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 8U)))) {
                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                        = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                             << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0xeU)) 
                           + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 8U)));
                } else {
                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                        = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                            << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0xeU));
                }
            } else {
                if (VL_UNLIKELY((0x21U == (0x3fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 0x18U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 8U)))))) {
                    VL_WRITEF("BGEU_I\n");
                    if ((((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                           << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 8U)) >= 
                         ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                           << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 8U)))) {
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                            = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                 << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0xeU)) 
                               + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 8U)));
                    } else {
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                            = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0xeU));
                    }
                } else {
                    if (VL_UNLIKELY((0x19U == (0x3fU 
                                               & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 8U)))))) {
                        VL_WRITEF("in JAL\n");
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                            = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                 << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0xeU)) 
                               + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 8U)));
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                            = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0xeU));
                    } else {
                        if (VL_UNLIKELY((0x1bU == (0x3fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       << 0x18U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 8U)))))) {
                            VL_WRITEF("in JALR\n");
                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                = (0xfffffffeU & ((
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      >> 8U)) 
                                                  + 
                                                  ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 8U))));
                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0xeU));
                        } else {
                            if ((0x1aU == (0x3fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 0x18U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 8U))))) {
                                VL_WRITEF("in JR\n");
                                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding = 0U;
                                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg = 0U;
                                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                    = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0x18U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 8U));
                            } else {
                                VL_WRITEF("in default\n");
                                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX = 0U;
                                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 0U;
                                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE = 
        (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX)) 
          << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX)));
}

void Vpipeline_pipeline::_settle__TOP__pipeline__5(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline::_settle__TOP__pipeline__5\n"); );
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp31[5];
    // Body
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcplus_FE 
        = ((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch);
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE 
        = ((((0x33U == (0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 4U)))) 
             & (0U == (7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                              << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x10U))))) 
            & (0U == (0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                << 3U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x1dU)))))
            ? 1U : ((((0x33U == (0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 0x1cU) 
                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 4U)))) 
                      & (0U == (7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 0x10U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x10U))))) 
                     & (0x20U == (0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            << 3U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x1dU)))))
                     ? 2U : ((((0x33U == (0x7fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 0x1cU) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 4U)))) 
                               & (7U == (7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 0x10U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x10U))))) 
                              & (0U == (0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  << 3U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 0x1dU)))))
                              ? 3U : ((((0x33U == (0x7fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 0x1cU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 4U)))) 
                                        & (6U == (7U 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      << 0x10U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 0x10U))))) 
                                       & (0U == (0x7fU 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 3U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0x1dU)))))
                                       ? 4U : ((((0x33U 
                                                  == 
                                                  (0x7fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 0x1cU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 4U)))) 
                                                 & (4U 
                                                    == 
                                                    (7U 
                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                           >> 0x10U))))) 
                                                & (0U 
                                                   == 
                                                   (0x7fU 
                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x1dU)))))
                                                ? 5U
                                                : (
                                                   (((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           << 0x1cU) 
                                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 4U)))) 
                                                     & (2U 
                                                        == 
                                                        (7U 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x10U))))) 
                                                    & (0U 
                                                       == 
                                                       (0x7fU 
                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            << 3U) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x1dU)))))
                                                    ? 6U
                                                    : 
                                                   ((((0x33U 
                                                       == 
                                                       (0x7fU 
                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            << 0x1cU) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 4U)))) 
                                                      & (3U 
                                                         == 
                                                         (7U 
                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 0x10U))))) 
                                                     & (0U 
                                                        == 
                                                        (0x7fU 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             << 3U) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x1dU)))))
                                                     ? 7U
                                                     : 
                                                    ((((0x33U 
                                                        == 
                                                        (0x7fU 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             << 0x1cU) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 4U)))) 
                                                       & (5U 
                                                          == 
                                                          (7U 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 0x10U))))) 
                                                      & (0x20U 
                                                         == 
                                                         (0x7fU 
                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              << 3U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 0x1dU)))))
                                                      ? 8U
                                                      : 
                                                     ((((0x33U 
                                                         == 
                                                         (0x7fU 
                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              << 0x1cU) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 4U)))) 
                                                        & (5U 
                                                           == 
                                                           (7U 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x10U))))) 
                                                       & (0U 
                                                          == 
                                                          (0x7fU 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 3U) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 0x1dU)))))
                                                       ? 9U
                                                       : 
                                                      ((((0x33U 
                                                          == 
                                                          (0x7fU 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 0x1cU) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 4U)))) 
                                                         & (1U 
                                                            == 
                                                            (7U 
                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x10U))))) 
                                                        & (0U 
                                                           == 
                                                           (0x7fU 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 3U) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x1dU)))))
                                                        ? 0xaU
                                                        : 
                                                       ((((0x33U 
                                                           == 
                                                           (0x7fU 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 0x1cU) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 4U)))) 
                                                          & (0U 
                                                             == 
                                                             (7U 
                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  << 0x10U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 0x10U))))) 
                                                         & (1U 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 3U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x1dU)))))
                                                         ? 0xbU
                                                         : 
                                                        (((0x13U 
                                                           == 
                                                           (0x7fU 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 0x1cU) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 4U)))) 
                                                          & (0U 
                                                             == 
                                                             (7U 
                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  << 0x10U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 0x10U)))))
                                                          ? 0xcU
                                                          : 
                                                         (((0x13U 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 0x1cU) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 4U)))) 
                                                           & (7U 
                                                              == 
                                                              (7U 
                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   << 0x10U) 
                                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 0x10U)))))
                                                           ? 0xdU
                                                           : 
                                                          (((0x13U 
                                                             == 
                                                             (0x7fU 
                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  << 0x1cU) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 4U)))) 
                                                            & (6U 
                                                               == 
                                                               (7U 
                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    << 0x10U) 
                                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                      >> 0x10U)))))
                                                            ? 0xeU
                                                            : 
                                                           (((0x13U 
                                                              == 
                                                              (0x7fU 
                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   << 0x1cU) 
                                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 4U)))) 
                                                             & (4U 
                                                                == 
                                                                (7U 
                                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x10U)))))
                                                             ? 0xfU
                                                             : 
                                                            (((0x13U 
                                                               == 
                                                               (0x7fU 
                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    << 0x1cU) 
                                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                      >> 4U)))) 
                                                              & (2U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      << 0x10U) 
                                                                     | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 0x10U)))))
                                                              ? 0x10U
                                                              : 
                                                             (((0x13U 
                                                                == 
                                                                (0x7fU 
                                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 0x1cU) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 4U)))) 
                                                               & (3U 
                                                                  == 
                                                                  (7U 
                                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       << 0x10U) 
                                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 0x10U)))))
                                                               ? 0x11U
                                                               : 
                                                              ((((0x13U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       << 0x1cU) 
                                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 4U)))) 
                                                                 & (5U 
                                                                    == 
                                                                    (7U 
                                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         << 0x10U) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 0x10U))))) 
                                                                & (0x20U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        << 3U) 
                                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 0x1dU)))))
                                                                ? 0x12U
                                                                : 
                                                               ((((0x13U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        << 0x1cU) 
                                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 4U)))) 
                                                                  & (5U 
                                                                     == 
                                                                     (7U 
                                                                      & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          << 0x10U) 
                                                                         | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0x10U))))) 
                                                                 & (0U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         << 3U) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 0x1dU)))))
                                                                 ? 0x13U
                                                                 : 
                                                                ((((0x13U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         << 0x1cU) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 4U)))) 
                                                                   & (1U 
                                                                      == 
                                                                      (7U 
                                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                           << 0x10U) 
                                                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 0x10U))))) 
                                                                  & (0U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          << 3U) 
                                                                         | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0x1dU)))))
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x37U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        << 0x1cU) 
                                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 4U))))
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x17U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         << 0x1cU) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 4U))))
                                                                    ? 0x16U
                                                                    : 
                                                                   (((3U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                           << 0x1cU) 
                                                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 4U)))) 
                                                                     & (2U 
                                                                        == 
                                                                        (7U 
                                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             << 0x10U) 
                                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 0x10U)))))
                                                                     ? 0x17U
                                                                     : 
                                                                    (((0x23U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 0x1cU) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 4U)))) 
                                                                      & (2U 
                                                                         == 
                                                                         (7U 
                                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              << 0x10U) 
                                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x6fU 
                                                                       == 
                                                                       (0x7fU 
                                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 0x1cU) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 4U))))
                                                                       ? 0x19U
                                                                       : 
                                                                      (((0x67U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              << 0x1cU) 
                                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                        & (0U 
                                                                           == 
                                                                           (7U 
                                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                        ? 0x1bU
                                                                        : 
                                                                       (((0x63U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               << 0x1cU) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                         & (0U 
                                                                            == 
                                                                            (7U 
                                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                         ? 0x1cU
                                                                         : 
                                                                        (((0x63U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                          & (1U 
                                                                             == 
                                                                             (7U 
                                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                          ? 0x1dU
                                                                          : 
                                                                         (((0x63U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                           & (4U 
                                                                              == 
                                                                              (7U 
                                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                           ? 0x1eU
                                                                           : 
                                                                          (((0x63U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                            & (5U 
                                                                               == 
                                                                               (7U 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                            ? 0x1fU
                                                                            : 
                                                                           (((0x63U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                             & (6U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                             ? 0x20U
                                                                             : 
                                                                            (((0x63U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                              & (7U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                              ? 0x21U
                                                                              : 
                                                                             (((0x73U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                               & (2U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                               ? 0x22U
                                                                               : 
                                                                              (((0x73U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                                & (1U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                                ? 0x23U
                                                                                : 0x25U))))))))))))))))))))))))))))))))));
    if (((((((((0xcU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 8U)))) 
               | (1U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 8U))))) 
              | (0x16U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 8U))))) 
             | (3U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 8U))))) 
            | (0xbU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 8U))))) 
           | (2U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 8U))))) 
          | (4U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 8U))))) 
         | (5U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                             << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 8U)))))) {
        if (VL_UNLIKELY((0xcU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 0x18U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 8U)))))) {
            VL_WRITEF("in ADDI\n");
            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                     << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 8U)) + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 8U)));
        } else {
            if (VL_UNLIKELY((1U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 8U)))))) {
                VL_WRITEF("in ADD\n");
                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                    = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                         << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 8U)) + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  << 0x18U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                    >> 8U)));
            } else {
                if (VL_UNLIKELY((0x16U == (0x3fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 0x18U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 8U)))))) {
                    VL_WRITEF("in AUIPC\n");
                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                        = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                             << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0xeU)) 
                           + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 8U)));
                } else {
                    if (VL_UNLIKELY((3U == (0x3fU & 
                                            ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 8U)))))) {
                        VL_WRITEF("in AND\n");
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                            = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 8U)) 
                               & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 8U)));
                    } else {
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                            = ((0xbU == (0x3fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 8U))))
                                ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                     << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 8U)) 
                                   * ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       << 0x18U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                       >> 8U))) : (
                                                   (2U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                           >> 8U))))
                                                    ? 
                                                   (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      << 0x18U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        >> 8U)) 
                                                    - 
                                                    ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      << 0x18U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                        >> 8U)))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                            >> 8U))))
                                                     ? 
                                                    (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       << 0x18U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                         >> 8U)) 
                                                     | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                           >> 8U)))
                                                     : 
                                                    (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       << 0x18U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                         >> 8U)) 
                                                     ^ 
                                                     ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       << 0x18U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                         >> 8U))))));
                    }
                }
            }
        }
    } else {
        if (((((((((0xdU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 0x18U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 8U)))) | 
                   (0xeU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 0x18U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 8U))))) | 
                  (0xfU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      << 0x18U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 8U))))) 
                 | (0x25U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 0x18U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 8U))))) 
                | (0x1cU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 0x18U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 8U))))) | 
               (0x1dU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 8U))))) 
              | (0x1eU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 8U))))) 
             | (0x1fU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 8U)))))) {
            if ((0xdU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 8U))))) {
                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                    = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                         << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 8U)) & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 0x18U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 8U)));
            } else {
                if ((0xeU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 0x18U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 8U))))) {
                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                        = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                             << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 8U)) | 
                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                             << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                          >> 8U)));
                } else {
                    if ((0xfU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 0x18U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 8U))))) {
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                            = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 8U)) 
                               ^ ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 8U)));
                    } else {
                        if (VL_UNLIKELY((0x25U == (0x3fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       << 0x18U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 8U)))))) {
                            VL_WRITEF("in INVALID\n");
                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX = 0U;
                        } else {
                            if (VL_UNLIKELY((0x1cU 
                                             == (0x3fU 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 8U)))))) {
                                VL_WRITEF("in BEQ\n");
                                if ((((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       << 0x18U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 8U)) == (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                      >> 8U)))) {
                                    VL_WRITEF("BEQ is true, rs1 = %10#, rs2 = %10#\n",
                                              32,((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 8U)),
                                              32,((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                     >> 8U)));
                                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                        = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             << 0x12U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0xeU)) 
                                           + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 8U)));
                                } else {
                                    VL_WRITEF("BEQ is false, rs1 = %10#, rs2 = %10#\n",
                                              32,((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 8U)),
                                              32,((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                     >> 8U)));
                                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                        = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 0x12U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0xeU));
                                }
                            } else {
                                if (VL_UNLIKELY((0x1dU 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      << 0x18U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 8U)))))) {
                                    VL_WRITEF("BNE_I\n");
                                    if ((((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           << 0x18U) 
                                          | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 8U)) 
                                         != ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 8U)))) {
                                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                            = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                 << 0x12U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0xeU)) 
                                               + ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 8U)));
                                    } else {
                                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                            = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                << 0x12U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0xeU));
                                    }
                                } else {
                                    if ((0x1eU == (0x3fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       << 0x18U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 8U))))) {
                                        VL_WRITEF("BLT_I\n");
                                        if ((((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 8U)) 
                                             <= ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  << 0x18U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                    >> 8U)))) {
                                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                                = (
                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                     << 0x12U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       >> 0xeU)) 
                                                   + 
                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 8U)));
                                        } else {
                                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                                = (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    << 0x12U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0xeU));
                                        }
                                    } else {
                                        VL_WRITEF("BGE_I\n");
                                        if ((((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 8U)) 
                                             >= ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  << 0x18U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                    >> 8U)))) {
                                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                                = (
                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                     << 0x12U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       >> 0xeU)) 
                                                   + 
                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 8U)));
                                        } else {
                                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                                = (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    << 0x12U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0xeU));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (VL_UNLIKELY((0x20U == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 8U)))))) {
                VL_WRITEF("BLTU\n");
                if ((((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                       << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                    >> 8U)) <= ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 8U)))) {
                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                        = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                             << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0xeU)) 
                           + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 8U)));
                } else {
                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                    vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                        = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                            << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0xeU));
                }
            } else {
                if (VL_UNLIKELY((0x21U == (0x3fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 0x18U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 8U)))))) {
                    VL_WRITEF("BGEU_I\n");
                    if ((((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                           << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 8U)) >= 
                         ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                           << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 8U)))) {
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                            = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                 << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0xeU)) 
                               + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 8U)));
                    } else {
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                            = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0xeU));
                    }
                } else {
                    if (VL_UNLIKELY((0x19U == (0x3fU 
                                               & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 8U)))))) {
                        VL_WRITEF("in JAL\n");
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                            = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                 << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0xeU)) 
                               + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 8U)));
                        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                            = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0xeU));
                    } else {
                        if (VL_UNLIKELY((0x1bU == (0x3fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       << 0x18U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 8U)))))) {
                            VL_WRITEF("in JALR\n");
                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                = (0xfffffffeU & ((
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      >> 8U)) 
                                                  + 
                                                  ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 8U))));
                            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0xeU));
                        } else {
                            if ((0x1aU == (0x3fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 0x18U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 8U))))) {
                                VL_WRITEF("in JR\n");
                                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding = 0U;
                                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg = 0U;
                                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 1U;
                                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX 
                                    = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0x18U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 8U));
                            } else {
                                VL_WRITEF("in default\n");
                                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX = 0U;
                                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX = 0U;
                                vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
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
    vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE = 
        (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX)) 
          << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX)));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE 
        = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
            ? ((0xfffff800U & (VL_NEGATE_I((IData)(
                                                   (1U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 3U)))) 
                               << 0xbU)) | (0x7ffU 
                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 8U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x18U))))
            : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                ? ((0xfffff800U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 3U)))) 
                                   << 0xbU)) | ((0x7e0U 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 8U) 
                                                    | (0xe0U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x18U)))) 
                                                | (0x1fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 0x15U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0xbU)))))
                : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                    ? ((0xfffff000U & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               >> 3U)))) 
                                       << 0xcU)) | 
                       ((0x800U & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U]) 
                        | ((0x7e0U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 8U) | (0xe0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 0x18U)))) 
                           | (0x1eU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 0x15U) | 
                                       (0x1ffffeU & 
                                        (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                         >> 0xbU)))))))
                    : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                        ? (0xfffff000U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 0x1cU) 
                                          | (0xffff000U 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 4U))))
                        : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                            ? ((0xfff00000U & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       >> 3U)))) 
                                               << 0x14U)) 
                               | ((0xff000U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 0x1cU) 
                                               | (0xffff000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 4U)))) 
                                  | ((0x800U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0xdU)) 
                                     | ((0x7e0U & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 8U) 
                                                   | (0xe0U 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x18U)))) 
                                        | (0x1eU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             << 8U) 
                                            | (0xfeU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x18U))))))))
                            : 0U)))));
    __Vtemp31[1U] = ((0xffU & (((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                 ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            << 8U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x18U)))]
                                 : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                     ? 0U : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                              ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                             [(0x1fU 
                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x18U)))]
                                              : 0U))) 
                               >> 0x18U)) | (0xffffff00U 
                                             & (((1U 
                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                                  ? 
                                                 vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                 [(0x1fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 0xdU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x13U)))]
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                                   ? 
                                                  vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                  [
                                                  (0x1fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 0xdU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x13U)))]
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                                    ? 
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                   [
                                                   (0x1fU 
                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        << 0xdU) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x13U)))]
                                                    : 0U))) 
                                                << 8U)));
    __Vtemp31[2U] = ((0xffU & (((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                 ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            << 0xdU) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x13U)))]
                                 : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                     ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                    [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 0xdU) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x13U)))]
                                     : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                         ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                        [(0x1fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 0xdU) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x13U)))]
                                         : 0U))) >> 0x18U)) 
                     | (0xffffff00U & ((IData)((((QData)((IData)(
                                                                 ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                   << 0x1cU) 
                                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                     >> 4U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE)))) 
                                       << 8U)));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[0U] 
        = ((0xffffff00U & (((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                             ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                            [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x18U)))]
                             : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                 ? 0U : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                          ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                         [(0x1fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             << 8U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0x18U)))]
                                          : 0U))) << 8U)) 
           | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE) 
               << 4U) | (0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[1U] 
        = __Vtemp31[1U];
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[2U] 
        = __Vtemp31[2U];
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[3U] 
        = ((0xffU & ((IData)((((QData)((IData)(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                 << 0x1cU) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                   >> 4U)))) 
                               << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE)))) 
                     >> 0x18U)) | (0xffffff00U & ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                               << 0x1cU) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                                >> 4U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE))) 
                                                           >> 0x20U)) 
                                                  << 8U)));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[4U] 
        = ((0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                           << 0xaU)) | ((0xffffff00U 
                                         & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                            << 8U)) 
                                        | (0xffU & 
                                           ((IData)(
                                                    ((((QData)((IData)(
                                                                       ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                         << 0x1cU) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                           >> 4U)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE))) 
                                                     >> 0x20U)) 
                                            >> 0x18U))));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[5U] 
        = ((0x3fffU & ((0x3c00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                   << 0xaU)) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                >> 0x16U))) 
           | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                             << 0xaU)));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[6U] 
        = ((0x3fffU & ((0x3c00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                   << 0xaU)) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                >> 0x16U))) 
           | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                             << 0xaU)));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[7U] 
        = (0x3fffU & ((0x3c00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0xaU)) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0x16U)));
}

VL_INLINE_OPT void Vpipeline_pipeline::_multiclk__TOP__pipeline__6(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline::_multiclk__TOP__pipeline__6\n"); );
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp37[5];
    // Body
    __Vtemp37[1U] = ((0xffU & (((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                 ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            << 8U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x18U)))]
                                 : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                     ? 0U : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                              ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                             [(0x1fU 
                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x18U)))]
                                              : 0U))) 
                               >> 0x18U)) | (0xffffff00U 
                                             & (((1U 
                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                                  ? 
                                                 vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                 [(0x1fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 0xdU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x13U)))]
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                                   ? 
                                                  vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                  [
                                                  (0x1fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 0xdU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x13U)))]
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                                    ? 
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                   [
                                                   (0x1fU 
                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x13U)))]
                                                    : 0U))) 
                                                << 8U)));
    __Vtemp37[2U] = ((0xffU & (((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                 ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            << 0xdU) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x13U)))]
                                 : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                     ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                    [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 0xdU) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x18U))))
            : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                ? ((0xfffff800U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 3U)))) 
                                   << 0xbU)) | ((0x7e0U 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 8U) 
                                                    | (0xe0U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x18U)))) 
                                                | (0x1fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 0x15U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0xbU)))))
                : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                    ? ((0xfffff000U & (VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               >> 3U)))) 
                                       << 0xcU)) | 
                       ((0x800U & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U]) 
                        | ((0x7e0U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 8U) | (0xe0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 0x18U)))) 
                           | (0x1eU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 0x15U) | 
                                       (0x1ffffeU & 
                                        (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                         >> 0xbU)))))))
                    : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                        ? (0xfffff000U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 0x1cU) 
                                          | (0xffff000U 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 4U))))
                        : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                            ? ((0xfff00000U & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       >> 3U)))) 
                                               << 0x14U)) 
                               | ((0xff000U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 0x1cU) 
                                               | (0xffff000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 4U)))) 
                                  | ((0x800U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0xdU)) 
                                     | ((0x7e0U & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 8U) 
                                                   | (0xe0U 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x18U)))) 
                                        | (0x1eU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             << 8U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0x18U)))]
                                          : 0U))) << 8U)) 
           | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE) 
               << 4U) | (0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[1U] 
        = __Vtemp37[1U];
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[2U] 
        = __Vtemp37[2U];
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[3U] 
        = ((0xffU & ((IData)((((QData)((IData)(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                 << 0x1cU) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                   >> 4U)))) 
                               << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE)))) 
                     >> 0x18U)) | (0xffffff00U & ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                               << 0x1cU) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                                >> 4U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE))) 
                                                           >> 0x20U)) 
                                                  << 8U)));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[4U] 
        = ((0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                           << 0xaU)) | ((0xffffff00U 
                                         & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                            << 8U)) 
                                        | (0xffU & 
                                           ((IData)(
                                                    ((((QData)((IData)(
                                                                       ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                         << 0x1cU) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                           >> 4U)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE))) 
                                                     >> 0x20U)) 
                                            >> 0x18U))));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[5U] 
        = ((0x3fffU & ((0x3c00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                   << 0xaU)) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                >> 0x16U))) 
           | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                             << 0xaU)));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[6U] 
        = ((0x3fffU & ((0x3c00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                   << 0xaU)) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                >> 0x16U))) 
           | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                             << 0xaU)));
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents[7U] 
        = (0x3fffU & ((0x3c00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0xaU)) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0x16U)));
}

void Vpipeline_pipeline::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    __PVT__cycle_count = VL_RAND_RESET_I(32);
    __PVT__from_AGEX_to_FE = VL_RAND_RESET_Q(33);
    __PVT__from_MEM_to_FE = VL_RAND_RESET_I(1);
    __PVT__from_MEM_to_AGEX = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            __PVT__my_FE_stage__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    VL_RAND_RESET_W(132, __PVT__my_FE_stage__DOT__FE_latch);
    __PVT__my_FE_stage__DOT__PC_FE_latch = VL_RAND_RESET_I(32);
    __PVT__my_FE_stage__DOT__pcplus_FE = VL_RAND_RESET_I(32);
    __PVT__my_FE_stage__DOT__inst_count_FE = VL_RAND_RESET_I(32);
    __PVT__my_FE_stage__DOT__inst_count_AGEX = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(238, __PVT__my_DE_stage__DOT__DE_latch);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            __PVT__my_DE_stage__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            __PVT__my_DE_stage__DOT__score_regs[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            __PVT__my_DE_stage__DOT__csr_regs[__Vi0] = VL_RAND_RESET_I(32);
    }}
    VL_RAND_RESET_W(238, __PVT__my_DE_stage__DOT__DE_latch_contents);
    __PVT__my_DE_stage__DOT__op_I_DE = VL_RAND_RESET_I(6);
    __PVT__my_DE_stage__DOT__type_I_DE = VL_RAND_RESET_I(4);
    __PVT__my_DE_stage__DOT__type_immediate_DE = VL_RAND_RESET_I(3);
    __PVT__my_DE_stage__DOT__sxt_imm_DE = VL_RAND_RESET_I(32);
    __PVT__my_DE_stage__DOT__stall_next = VL_RAND_RESET_I(1);
    __PVT__my_DE_stage__DOT__continue_stall = VL_RAND_RESET_I(1);
    __PVT__my_DE_stage__DOT__unnamedblk1__DOT__i = 0;
    VL_RAND_RESET_W(244, __PVT__my_AGEX_stage__DOT__AGEX_latch);
    __PVT__my_AGEX_stage__DOT__br_cond_AGEX = VL_RAND_RESET_I(1);
    __PVT__my_AGEX_stage__DOT__output_AGEX = VL_RAND_RESET_I(32);
    __PVT__my_AGEX_stage__DOT__branch_addr_AGEX = VL_RAND_RESET_I(32);
    __PVT__my_AGEX_stage__DOT__forward_reg = VL_RAND_RESET_I(5);
    __PVT__my_AGEX_stage__DOT__is_forwarding = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            __PVT__my_MEM_stage__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    VL_RAND_RESET_W(244, __PVT__my_MEM_stage__DOT__MEM_latch);
    __PVT__my_MEM_stage__DOT__memaddr_MEM = VL_RAND_RESET_I(32);
    __PVT__my_MEM_stage__DOT__wr_val_MEM = VL_RAND_RESET_I(32);
    __PVT__my_MEM_stage__DOT__wr_mem_MEM = VL_RAND_RESET_I(1);
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
}
