// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


//======================

void Vpipeline::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vpipeline* t = (Vpipeline*)userthis;
    Vpipeline__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vpipeline::traceChgThis(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vpipeline::traceChgThis__2(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp17[5];
    WData/*255:0*/ __Vtemp22[8];
    // Body
    {
        vcdp->chgBit(c+1,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next));
        vcdp->chgQuad(c+9,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE),33);
        vcdp->chgBus(c+25,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE),6);
        vcdp->chgQuad(c+33,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),49);
        vcdp->chgBus(c+49,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                           [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 2U))]),32);
        vcdp->chgBit(c+57,((1U & (IData)((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE 
                                          >> 0x20U)))));
        vcdp->chgBus(c+65,((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE)),32);
        __Vtemp17[0U] = (0xfU | (0xfffffff0U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                                << 4U)));
        __Vtemp17[1U] = ((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                  >> 0x1cU)) | (0xfffffff0U 
                                                & (((IData)(4U) 
                                                    + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                                   << 4U)));
        __Vtemp17[2U] = ((0xfU & (((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                  >> 0x1cU)) | (0xfffffff0U 
                                                & ((IData)(
                                                           (((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                             [
                                                                             (0x3fffU 
                                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                                >> 2U))])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                                   << 4U)));
        __Vtemp17[3U] = ((0xfU & ((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                            [
                                                            (0x3fffU 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                >> 2U))])) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                  >> 0x1cU)) | (0xfffffff0U 
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
                                                   << 4U)));
        __Vtemp17[4U] = (0xfU & ((IData)(((((QData)((IData)(
                                                            vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                            [
                                                            (0x3fffU 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                >> 2U))])) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                          >> 0x20U)) 
                                 >> 0x1cU));
        vcdp->chgArray(c+73,(__Vtemp17),132);
        vcdp->chgBus(c+113,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        vcdp->chgBus(c+121,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        vcdp->chgBus(c+129,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        vcdp->chgBus(c+137,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE),32);
        vcdp->chgBit(c+145,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                           >> 0x30U)))));
        vcdp->chgBus(c+153,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                              >> 0x2bU)))),5);
        vcdp->chgBus(c+161,((IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                     >> 0xbU))),32);
        vcdp->chgBus(c+169,((0xfU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                             >> 7U)))),4);
        vcdp->chgBit(c+177,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                           >> 6U)))));
        vcdp->chgBus(c+185,((0x1fU & ((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                                      >> 1U))),5);
        vcdp->chgBus(c+193,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                              >> 1U)))),5);
        vcdp->chgBit(c+201,((1U & (IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE))));
        vcdp->chgBit(c+209,((1U & (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE))));
        __Vtemp22[0U] = ((0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                         << 0xeU)) 
                         | ((0x3c00U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        << 6U)) | (
                                                   ((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg) 
                                                    << 5U) 
                                                   | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding) 
                                                       << 4U) 
                                                      | (0xfU 
                                                         & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])))));
        __Vtemp22[1U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                     >> 0x12U)) | (0xffffc000U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                      << 6U)));
        __Vtemp22[2U] = ((0x3fffU & ((0x3fc0U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 << 6U)) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 0x1aU))) 
                         | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           << 6U)));
        __Vtemp22[3U] = ((0x3fffU & ((0x3fc0U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 6U)) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0x1aU))) 
                         | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           << 6U)));
        __Vtemp22[4U] = ((0x3fffU & ((0x3fc0U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 << 6U)) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x1aU))) 
                         | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           << 6U)));
        __Vtemp22[5U] = ((0xfff00000U & ((IData)((((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                   << 0x32U) 
                                                  | (((QData)((IData)(
                                                                      vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                      << 0x12U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                        >> 0xeU)))) 
                                         << 0x14U)) 
                         | ((0xfc000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         << 6U)) | 
                            (0x3fffU & ((0x3fc0U & 
                                         (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          << 6U)) | 
                                        (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x1aU)))));
        __Vtemp22[6U] = ((0xfffffU & ((IData)((((QData)((IData)(
                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                   << 0x12U) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                     >> 0xeU)))) 
                                      >> 0xcU)) | (0xfff00000U 
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
                                                      << 0x14U)));
        __Vtemp22[7U] = (0xfffffU & ((IData)(((((QData)((IData)(
                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                   << 0x12U) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                     >> 0xeU))) 
                                              >> 0x20U)) 
                                     >> 0xcU));
        vcdp->chgArray(c+217,(__Vtemp22),244);
        vcdp->chgBus(c+281,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX),32);
        vcdp->chgBus(c+289,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX),32);
        vcdp->chgBus(c+297,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg),5);
        vcdp->chgBit(c+305,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding));
        vcdp->chgBus(c+313,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                            [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__memaddr_MEM 
                                         >> 2U))]),32);
        vcdp->chgBit(c+321,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__is_wb));
    }
}

void Vpipeline::traceChgThis__3(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*255:0*/ __Vtemp28[8];
    // Body
    {
        __Vtemp28[0U] = ((0xffffff00U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                         [(0x1fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             << 8U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0x18U)))] 
                                         << 8U)) | 
                         (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE) 
                           << 4U) | (0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])));
        __Vtemp28[1U] = ((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
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
                                                    << 8U)));
        __Vtemp28[2U] = ((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
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
                                                    << 8U)));
        __Vtemp28[3U] = ((0xffU & ((IData)((((QData)((IData)(
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
                                                    << 8U)));
        __Vtemp28[4U] = ((0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                         << 0xaU)) 
                         | ((0xffffff00U & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                            << 8U)) 
                            | (0xffU & ((IData)(((((QData)((IData)(
                                                                   ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                     << 0x1cU) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                       >> 4U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE))) 
                                                 >> 0x20U)) 
                                        >> 0x18U))));
        __Vtemp28[5U] = ((0x3fffU & ((0x3c00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                 << 0xaU)) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                        >> 0x16U))) 
                         | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                           << 0xaU)));
        __Vtemp28[6U] = ((0x3fffU & ((0x3c00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 << 0xaU)) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                        >> 0x16U))) 
                         | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           << 0xaU)));
        __Vtemp28[7U] = (0x3fffU & ((0x3c00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 0xaU)) 
                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x16U)));
        vcdp->chgArray(c+329,(__Vtemp28),238);
    }
}

void Vpipeline::traceChgThis__4(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+393,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        vcdp->chgArray(c+401,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),132);
        vcdp->chgArray(c+441,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),238);
        vcdp->chgArray(c+505,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),244);
        vcdp->chgArray(c+569,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),244);
        vcdp->chgBus(c+633,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                       << 0x1cU) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                       >> 4U)))),6);
        vcdp->chgBus(c+641,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        vcdp->chgBus(c+649,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        vcdp->chgBus(c+657,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        vcdp->chgBus(c+665,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                              << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 4U))),32);
        vcdp->chgBus(c+673,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                              << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                           >> 4U))),32);
        vcdp->chgBus(c+681,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                              << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                           >> 4U))),32);
        vcdp->chgBus(c+689,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                              << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                           >> 4U))),32);
        vcdp->chgBus(c+697,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),4);
        vcdp->chgBus(c+705,((7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                    << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 0x10U)))),3);
        vcdp->chgBus(c+713,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 3U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 0x1dU)))),7);
        vcdp->chgBus(c+721,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 0x1cU) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 4U)))),7);
        vcdp->chgBus(c+729,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                       >> 5U)))),5);
        vcdp->chgBit(c+737,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 4U))));
        vcdp->chgBus(c+745,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                              << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           >> 0xeU))),32);
        vcdp->chgBus(c+753,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                              << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0xeU))),32);
        vcdp->chgBus(c+761,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 8U))),32);
        vcdp->chgBus(c+769,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                              << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0xeU))),32);
        vcdp->chgBus(c+777,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 0x18U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 8U)))),6);
        vcdp->chgBit(c+785,(((0x1cU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 0x18U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 8U))))
                              ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 8U)) 
                                 == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      << 0x18U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 8U)))
                              : ((0x1dU == (0x3fU & 
                                            ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 8U))))
                                  ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       << 0x18U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 8U)) != (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                      >> 8U)))
                                  : ((0x1eU == (0x3fU 
                                                & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 8U))))
                                      ? VL_LTES_III(1,32,32, 
                                                    ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      << 0x18U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        >> 8U)), 
                                                    ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      << 0x18U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                        >> 8U)))
                                      : ((0x1fU == 
                                          (0x3fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 0x18U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 8U)))) 
                                         & VL_GTES_III(1,32,32, 
                                                       ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                           >> 8U)), 
                                                       ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                           >> 8U)))))))));
        vcdp->chgBus(c+793,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 8U))),32);
        vcdp->chgBus(c+801,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 8U))),32);
        vcdp->chgBus(c+809,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 8U))),32);
        vcdp->chgBus(c+817,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      << 0x1cU) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 4U)))),4);
        vcdp->chgBus(c+825,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),4);
        vcdp->chgBus(c+833,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                       << 0x12U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                       >> 0xeU)))),6);
        vcdp->chgBus(c+841,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                              << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                           >> 0xeU))),32);
        vcdp->chgBus(c+849,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[7U] 
                              << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                          >> 0x14U))),32);
        vcdp->chgBus(c+857,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                              << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                          >> 0x14U))),32);
        vcdp->chgBus(c+865,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                              << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                           >> 0xeU))),32);
        vcdp->chgBus(c+873,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                              << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                           >> 0xeU))),32);
        vcdp->chgBus(c+881,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                              << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                           >> 0xeU))),32);
        vcdp->chgBus(c+889,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                              << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                           >> 0xeU))),32);
        vcdp->chgBus(c+897,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                      << 0x16U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                   >> 0xaU)))),4);
        vcdp->chgBus(c+905,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),4);
        vcdp->chgBus(c+913,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                       << 0x12U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                       >> 0xeU)))),6);
        vcdp->chgBus(c+921,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
                              << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                          >> 0x14U))),32);
        vcdp->chgBus(c+929,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                              << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                          >> 0x14U))),32);
        vcdp->chgBus(c+937,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                              << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                           >> 0xeU))),32);
        vcdp->chgBus(c+945,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),4);
        vcdp->chgBus(c+953,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                              << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                           >> 0xeU))),32);
        vcdp->chgBus(c+961,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                              << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                           >> 0xeU))),32);
        vcdp->chgBus(c+969,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                              << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                           >> 0xeU))),32);
        vcdp->chgBus(c+977,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                      << 0x16U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                   >> 0xaU)))),4);
        vcdp->chgBus(c+985,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                       >> 5U)))),5);
        vcdp->chgBit(c+993,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                   >> 4U))));
        vcdp->chgBus(c+1001,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
                                        << 5U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                                  >> 0x1bU)))),5);
        vcdp->chgBus(c+1009,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                            >> 0xeU))),32);
    }
}

void Vpipeline::traceChgThis__5(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1017,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        vcdp->chgBus(c+1018,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        vcdp->chgBus(c+1019,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        vcdp->chgBus(c+1020,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        vcdp->chgBus(c+1021,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        vcdp->chgBus(c+1022,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        vcdp->chgBus(c+1023,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        vcdp->chgBus(c+1024,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        vcdp->chgBus(c+1025,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        vcdp->chgBus(c+1026,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        vcdp->chgBus(c+1027,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        vcdp->chgBus(c+1028,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        vcdp->chgBus(c+1029,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        vcdp->chgBus(c+1030,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        vcdp->chgBus(c+1031,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        vcdp->chgBus(c+1032,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        vcdp->chgBus(c+1033,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        vcdp->chgBus(c+1034,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        vcdp->chgBus(c+1035,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        vcdp->chgBus(c+1036,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        vcdp->chgBus(c+1037,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        vcdp->chgBus(c+1038,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        vcdp->chgBus(c+1039,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        vcdp->chgBus(c+1040,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        vcdp->chgBus(c+1041,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        vcdp->chgBus(c+1042,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        vcdp->chgBus(c+1043,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        vcdp->chgBus(c+1044,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        vcdp->chgBus(c+1045,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        vcdp->chgBus(c+1046,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        vcdp->chgBus(c+1047,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        vcdp->chgBus(c+1048,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        vcdp->chgBus(c+1273,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[0]),32);
        vcdp->chgBus(c+1274,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[1]),32);
        vcdp->chgBus(c+1275,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[2]),32);
        vcdp->chgBus(c+1276,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[3]),32);
        vcdp->chgBus(c+1277,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[4]),32);
        vcdp->chgBus(c+1278,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[5]),32);
        vcdp->chgBus(c+1279,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[6]),32);
        vcdp->chgBus(c+1280,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[7]),32);
        vcdp->chgBus(c+1281,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[8]),32);
        vcdp->chgBus(c+1282,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[9]),32);
        vcdp->chgBus(c+1283,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[10]),32);
        vcdp->chgBus(c+1284,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[11]),32);
        vcdp->chgBus(c+1285,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[12]),32);
        vcdp->chgBus(c+1286,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[13]),32);
        vcdp->chgBus(c+1287,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[14]),32);
        vcdp->chgBus(c+1288,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[15]),32);
    }
}

void Vpipeline::traceChgThis__6(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1401,(vlTOPp->clk));
        vcdp->chgBit(c+1409,(vlTOPp->reset));
        vcdp->chgBus(c+1417,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0]),32);
        vcdp->chgBus(c+1418,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1]),32);
        vcdp->chgBus(c+1419,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2]),32);
        vcdp->chgBus(c+1420,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3]),32);
        vcdp->chgBus(c+1421,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4]),32);
        vcdp->chgBus(c+1422,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5]),32);
        vcdp->chgBus(c+1423,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6]),32);
        vcdp->chgBus(c+1424,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7]),32);
        vcdp->chgBus(c+1425,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8]),32);
        vcdp->chgBus(c+1426,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9]),32);
        vcdp->chgBus(c+1427,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[10]),32);
        vcdp->chgBus(c+1428,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[11]),32);
        vcdp->chgBus(c+1429,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[12]),32);
        vcdp->chgBus(c+1430,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[13]),32);
        vcdp->chgBus(c+1431,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[14]),32);
        vcdp->chgBus(c+1432,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[15]),32);
        vcdp->chgBus(c+1433,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[16]),32);
        vcdp->chgBus(c+1434,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[17]),32);
        vcdp->chgBus(c+1435,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[18]),32);
        vcdp->chgBus(c+1436,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[19]),32);
        vcdp->chgBus(c+1437,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[20]),32);
        vcdp->chgBus(c+1438,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[21]),32);
        vcdp->chgBus(c+1439,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[22]),32);
        vcdp->chgBus(c+1440,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[23]),32);
        vcdp->chgBus(c+1441,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[24]),32);
        vcdp->chgBus(c+1442,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[25]),32);
        vcdp->chgBus(c+1443,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[26]),32);
        vcdp->chgBus(c+1444,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[27]),32);
        vcdp->chgBus(c+1445,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[28]),32);
        vcdp->chgBus(c+1446,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[29]),32);
        vcdp->chgBus(c+1447,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[30]),32);
        vcdp->chgBus(c+1448,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[31]),32);
        vcdp->chgBus(c+1673,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0]),32);
        vcdp->chgBus(c+1674,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1]),32);
        vcdp->chgBus(c+1675,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2]),32);
        vcdp->chgBus(c+1676,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3]),32);
        vcdp->chgBus(c+1677,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4]),32);
        vcdp->chgBus(c+1678,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5]),32);
        vcdp->chgBus(c+1679,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6]),32);
        vcdp->chgBus(c+1680,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7]),32);
        vcdp->chgBus(c+1681,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[8]),32);
        vcdp->chgBus(c+1682,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[9]),32);
        vcdp->chgBus(c+1683,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[10]),32);
        vcdp->chgBus(c+1684,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[11]),32);
        vcdp->chgBus(c+1685,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[12]),32);
        vcdp->chgBus(c+1686,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[13]),32);
        vcdp->chgBus(c+1687,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[14]),32);
        vcdp->chgBus(c+1688,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[15]),32);
        vcdp->chgBus(c+1689,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[16]),32);
        vcdp->chgBus(c+1690,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[17]),32);
        vcdp->chgBus(c+1691,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[18]),32);
        vcdp->chgBus(c+1692,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[19]),32);
        vcdp->chgBus(c+1693,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[20]),32);
        vcdp->chgBus(c+1694,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[21]),32);
        vcdp->chgBus(c+1695,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[22]),32);
        vcdp->chgBus(c+1696,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[23]),32);
        vcdp->chgBus(c+1697,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[24]),32);
        vcdp->chgBus(c+1698,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[25]),32);
        vcdp->chgBus(c+1699,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[26]),32);
        vcdp->chgBus(c+1700,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[27]),32);
        vcdp->chgBus(c+1701,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[28]),32);
        vcdp->chgBus(c+1702,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[29]),32);
        vcdp->chgBus(c+1703,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[30]),32);
        vcdp->chgBus(c+1704,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[31]),32);
    }
}
