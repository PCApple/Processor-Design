// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline_WB_STAGE.h"
#include "Vpipeline__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vpipeline_WB_STAGE) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vpipeline_WB_STAGE::__Vconfigure(Vpipeline__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vpipeline_WB_STAGE::~Vpipeline_WB_STAGE() {
}

VL_INLINE_OPT void Vpipeline_WB_STAGE::_sequent__TOP__pipeline__my_WB_stage__1(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_WB_STAGE::_sequent__TOP__pipeline__my_WB_stage__1\n"); );
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vdly__reg10_val_latch;
    IData/*31:0*/ __Vdlyvval__WB_counters__v0;
    IData/*31:0*/ __Vdlyvval__WB_counters__v1;
    IData/*31:0*/ __Vdlyvval__WB_counters__v2;
    IData/*31:0*/ __Vdlyvval__WB_counters__v3;
    IData/*31:0*/ __Vdlyvval__WB_counters__v4;
    IData/*31:0*/ __Vdlyvval__WB_counters__v5;
    IData/*31:0*/ __Vdlyvval__WB_counters__v6;
    // Body
    __Vdly__reg10_val_latch = vlSymsp->TOP__pipeline__my_WB_stage.__PVT__reg10_val_latch;
    if (vlTOPp->reset) {
        __Vdly__reg10_val_latch = 0U;
    }
    if ((((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
           >> 4U) & (0xaU == (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                        << 0x1aU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                        >> 6U))))) 
         & (0U == vlSymsp->TOP__pipeline__my_WB_stage.__PVT__reg10_val_latch))) {
        __Vdly__reg10_val_latch = 0xffU;
    }
    __Vdlyvval__WB_counters__v0 = ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                    << 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                                >> 0x15U));
    __Vdlyvval__WB_counters__v1 = ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
                                    << 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                                >> 0x15U));
    __Vdlyvval__WB_counters__v2 = (1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                         >> 4U));
    __Vdlyvval__WB_counters__v3 = ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                    << 0x11U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                 >> 0xfU));
    __Vdlyvval__WB_counters__v4 = ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                    << 0x11U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                                 >> 0xfU));
    __Vdlyvval__WB_counters__v5 = (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                             << 0x11U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                               >> 0xfU)));
    __Vdlyvval__WB_counters__v6 = (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                             << 0x1aU) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                               >> 6U)));
    vlSymsp->TOP__pipeline__my_WB_stage.__PVT__reg10_val_latch 
        = __Vdly__reg10_val_latch;
    vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U] 
        = __Vdlyvval__WB_counters__v0;
    vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U] 
        = __Vdlyvval__WB_counters__v1;
    vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U] 
        = __Vdlyvval__WB_counters__v2;
    vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U] 
        = __Vdlyvval__WB_counters__v3;
    vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U] 
        = __Vdlyvval__WB_counters__v4;
    vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U] 
        = __Vdlyvval__WB_counters__v5;
    vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U] 
        = __Vdlyvval__WB_counters__v6;
}

VL_INLINE_OPT void Vpipeline_WB_STAGE::_sequent__TOP__pipeline__my_WB_stage__2(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_WB_STAGE::_sequent__TOP__pipeline__my_WB_stage__2\n"); );
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
        = (((QData)((IData)((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                   >> 4U)))) << 0x30U) 
           | (((QData)((IData)((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                            >> 6U))))) 
               << 0x2bU) | (((QData)((IData)(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                               << 0x11U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                 >> 0xfU)))) 
                             << 0xbU) | (QData)((IData)(
                                                        (0x3fU 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                             << 0x1bU) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                               >> 5U))))))));
}

VL_INLINE_OPT void Vpipeline_WB_STAGE::_sequent__TOP__pipeline__my_WB_stage__3(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_WB_STAGE::_sequent__TOP__pipeline__my_WB_stage__3\n"); );
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__last_WB_value__v0;
    CData/*0:0*/ __Vdlyvset__last_WB_value__v0;
    IData/*31:0*/ __Vdlyvval__last_WB_value__v0;
    // Body
    __Vdlyvset__last_WB_value__v0 = 0U;
    if ((0x10U & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])) {
        __Vdlyvval__last_WB_value__v0 = ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                          << 0x11U) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                            >> 0xfU));
        __Vdlyvset__last_WB_value__v0 = 1U;
        __Vdlyvdim0__last_WB_value__v0 = (0x1fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                    << 0x1aU) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                      >> 6U)));
    }
    if (__Vdlyvset__last_WB_value__v0) {
        vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[__Vdlyvdim0__last_WB_value__v0] 
            = __Vdlyvval__last_WB_value__v0;
    }
}

void Vpipeline_WB_STAGE::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_WB_STAGE::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(245, __PVT__from_MEM_latch);
    __PVT__from_WB_to_FE = VL_RAND_RESET_I(1);
    __PVT__from_WB_to_DE = VL_RAND_RESET_Q(49);
    __PVT__from_WB_to_AGEX = VL_RAND_RESET_I(1);
    __PVT__from_WB_to_MEM = VL_RAND_RESET_I(1);
    __PVT__reg10_val = VL_RAND_RESET_I(32);
    __PVT__reg10_val_latch = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            last_WB_value[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            WB_counters[__Vi0] = VL_RAND_RESET_I(32);
    }}
}
