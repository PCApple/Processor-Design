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
        vcdp->chgQuad(c+1,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE),33);
        vcdp->chgQuad(c+17,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),43);
        vcdp->chgBus(c+33,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                           [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 2U))]),32);
        vcdp->chgBit(c+41,((1U & (IData)((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE 
                                          >> 0x20U)))));
        vcdp->chgBus(c+49,((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE)),32);
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
        vcdp->chgArray(c+57,(__Vtemp17),132);
        vcdp->chgBus(c+97,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        vcdp->chgBus(c+105,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        vcdp->chgBus(c+113,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        vcdp->chgBus(c+121,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE),32);
        vcdp->chgBit(c+129,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                           >> 0x2aU)))));
        vcdp->chgBus(c+137,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                              >> 0x25U)))),5);
        vcdp->chgBus(c+145,((IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                     >> 5U))),32);
        vcdp->chgBus(c+153,((0xfU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                             >> 1U)))),4);
        vcdp->chgBit(c+161,((1U & (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE))));
        __Vtemp22[0U] = ((0xffffff00U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                         << 8U)) | 
                         (0xffU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]));
        __Vtemp22[1U] = ((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]));
        __Vtemp22[2U] = ((0xffU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U]) 
                         | (0xffffff00U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U]));
        __Vtemp22[3U] = ((0xffU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U]) 
                         | (0xffffff00U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U]));
        __Vtemp22[4U] = ((0xffU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U]) 
                         | (0xffffff00U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U]));
        __Vtemp22[5U] = ((0xffffc000U & ((IData)((((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                   << 0x32U) 
                                                  | (((QData)((IData)(
                                                                      vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                      << 0x12U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                        >> 0xeU)))) 
                                         << 0xeU)) 
                         | ((0x3f00U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U]) 
                            | (0xffU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])));
        __Vtemp22[6U] = ((0x3fffU & ((IData)((((QData)((IData)(
                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                    >> 0xeU)))) 
                                     >> 0x12U)) | (0xffffc000U 
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
                                                      << 0xeU)));
        __Vtemp22[7U] = (0x3fffU & ((IData)(((((QData)((IData)(
                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                    >> 0xeU))) 
                                             >> 0x20U)) 
                                    >> 0x12U));
        vcdp->chgArray(c+169,(__Vtemp22),238);
        vcdp->chgBus(c+233,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX),32);
        vcdp->chgBus(c+241,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX),32);
        vcdp->chgBus(c+249,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                            [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__memaddr_MEM 
                                         >> 2U))]),32);
        vcdp->chgBit(c+257,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__is_wb));
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
        vcdp->chgArray(c+265,(__Vtemp28),238);
    }
}

void Vpipeline::traceChgThis__4(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+329,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        vcdp->chgArray(c+337,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),132);
        vcdp->chgArray(c+377,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),238);
        vcdp->chgArray(c+441,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),238);
        vcdp->chgArray(c+505,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),238);
        vcdp->chgBit(c+569,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__pipeline_stall_DE));
        vcdp->chgBus(c+577,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        vcdp->chgBus(c+585,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        vcdp->chgBus(c+593,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        vcdp->chgBus(c+601,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                              << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 4U))),32);
        vcdp->chgBus(c+609,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                              << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                           >> 4U))),32);
        vcdp->chgBus(c+617,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                              << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                           >> 4U))),32);
        vcdp->chgBus(c+625,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                              << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                           >> 4U))),32);
        vcdp->chgBus(c+633,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),4);
        vcdp->chgBus(c+641,((7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                    << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 0x10U)))),3);
        vcdp->chgBus(c+649,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 3U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 0x1dU)))),7);
        vcdp->chgBus(c+657,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 0x1cU) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 4U)))),7);
        vcdp->chgBit(c+665,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next));
        vcdp->chgBus(c+673,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                              << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           >> 0xeU))),32);
        vcdp->chgBus(c+681,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                              << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0xeU))),32);
        vcdp->chgBus(c+689,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 8U))),32);
        vcdp->chgBus(c+697,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                              << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0xeU))),32);
        vcdp->chgBus(c+705,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       << 0x18U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 8U)))),6);
        vcdp->chgBit(c+713,(((0x1cU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 0x18U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 8U)))) 
                             & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 8U)) 
                                == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 8U))))));
        vcdp->chgBus(c+721,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 8U))),32);
        vcdp->chgBus(c+729,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 8U))),32);
        vcdp->chgBus(c+737,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 8U))),32);
        vcdp->chgBus(c+745,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      << 0x1cU) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 4U)))),4);
        vcdp->chgBus(c+753,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),4);
        vcdp->chgBus(c+761,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                       << 0x18U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                       >> 8U)))),6);
        vcdp->chgBus(c+769,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                           >> 8U))),32);
        vcdp->chgBus(c+777,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[7U] 
                              << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                           >> 0xeU))),32);
        vcdp->chgBus(c+785,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                              << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                           >> 0xeU))),32);
        vcdp->chgBus(c+793,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                           >> 8U))),32);
        vcdp->chgBus(c+801,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                           >> 8U))),32);
        vcdp->chgBus(c+809,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                           >> 8U))),32);
        vcdp->chgBus(c+817,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                           >> 8U))),32);
        vcdp->chgBus(c+825,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                      << 0x1cU) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                   >> 4U)))),4);
        vcdp->chgBus(c+833,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),4);
        vcdp->chgBus(c+841,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                       << 0x18U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                       >> 8U)))),6);
        vcdp->chgBus(c+849,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
                              << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                           >> 0xeU))),32);
        vcdp->chgBus(c+857,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                              << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                           >> 0xeU))),32);
        vcdp->chgBus(c+865,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                           >> 8U))),32);
        vcdp->chgBus(c+873,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),4);
        vcdp->chgBus(c+881,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                           >> 8U))),32);
        vcdp->chgBus(c+889,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                           >> 8U))),32);
        vcdp->chgBus(c+897,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                           >> 8U))),32);
        vcdp->chgBus(c+905,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                      << 0x1cU) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                   >> 4U)))),4);
        vcdp->chgBus(c+913,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
                                       << 0xbU) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                                   >> 0x15U)))),5);
        vcdp->chgBus(c+921,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                              << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                           >> 8U))),32);
    }
}

void Vpipeline::traceChgThis__5(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+929,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        vcdp->chgBus(c+930,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        vcdp->chgBus(c+931,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        vcdp->chgBus(c+932,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        vcdp->chgBus(c+933,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        vcdp->chgBus(c+934,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        vcdp->chgBus(c+935,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        vcdp->chgBus(c+936,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        vcdp->chgBus(c+937,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        vcdp->chgBus(c+938,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        vcdp->chgBus(c+939,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        vcdp->chgBus(c+940,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        vcdp->chgBus(c+941,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        vcdp->chgBus(c+942,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        vcdp->chgBus(c+943,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        vcdp->chgBus(c+944,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        vcdp->chgBus(c+945,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        vcdp->chgBus(c+946,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        vcdp->chgBus(c+947,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        vcdp->chgBus(c+948,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        vcdp->chgBus(c+949,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        vcdp->chgBus(c+950,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        vcdp->chgBus(c+951,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        vcdp->chgBus(c+952,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        vcdp->chgBus(c+953,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        vcdp->chgBus(c+954,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        vcdp->chgBus(c+955,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        vcdp->chgBus(c+956,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        vcdp->chgBus(c+957,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        vcdp->chgBus(c+958,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        vcdp->chgBus(c+959,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        vcdp->chgBus(c+960,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        vcdp->chgBus(c+1185,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[0]),32);
        vcdp->chgBus(c+1186,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[1]),32);
        vcdp->chgBus(c+1187,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[2]),32);
        vcdp->chgBus(c+1188,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[3]),32);
        vcdp->chgBus(c+1189,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[4]),32);
        vcdp->chgBus(c+1190,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[5]),32);
        vcdp->chgBus(c+1191,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[6]),32);
        vcdp->chgBus(c+1192,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[7]),32);
        vcdp->chgBus(c+1193,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[8]),32);
        vcdp->chgBus(c+1194,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[9]),32);
        vcdp->chgBus(c+1195,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[10]),32);
        vcdp->chgBus(c+1196,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[11]),32);
        vcdp->chgBus(c+1197,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[12]),32);
        vcdp->chgBus(c+1198,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[13]),32);
        vcdp->chgBus(c+1199,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[14]),32);
        vcdp->chgBus(c+1200,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[15]),32);
    }
}

void Vpipeline::traceChgThis__6(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1313,(vlTOPp->clk));
        vcdp->chgBit(c+1321,(vlTOPp->reset));
        vcdp->chgBus(c+1329,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0]),32);
        vcdp->chgBus(c+1330,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1]),32);
        vcdp->chgBus(c+1331,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2]),32);
        vcdp->chgBus(c+1332,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3]),32);
        vcdp->chgBus(c+1333,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4]),32);
        vcdp->chgBus(c+1334,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5]),32);
        vcdp->chgBus(c+1335,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6]),32);
        vcdp->chgBus(c+1336,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7]),32);
        vcdp->chgBus(c+1337,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8]),32);
        vcdp->chgBus(c+1338,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9]),32);
        vcdp->chgBus(c+1339,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[10]),32);
        vcdp->chgBus(c+1340,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[11]),32);
        vcdp->chgBus(c+1341,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[12]),32);
        vcdp->chgBus(c+1342,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[13]),32);
        vcdp->chgBus(c+1343,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[14]),32);
        vcdp->chgBus(c+1344,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[15]),32);
        vcdp->chgBus(c+1345,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[16]),32);
        vcdp->chgBus(c+1346,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[17]),32);
        vcdp->chgBus(c+1347,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[18]),32);
        vcdp->chgBus(c+1348,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[19]),32);
        vcdp->chgBus(c+1349,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[20]),32);
        vcdp->chgBus(c+1350,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[21]),32);
        vcdp->chgBus(c+1351,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[22]),32);
        vcdp->chgBus(c+1352,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[23]),32);
        vcdp->chgBus(c+1353,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[24]),32);
        vcdp->chgBus(c+1354,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[25]),32);
        vcdp->chgBus(c+1355,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[26]),32);
        vcdp->chgBus(c+1356,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[27]),32);
        vcdp->chgBus(c+1357,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[28]),32);
        vcdp->chgBus(c+1358,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[29]),32);
        vcdp->chgBus(c+1359,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[30]),32);
        vcdp->chgBus(c+1360,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[31]),32);
        vcdp->chgBus(c+1585,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0]),32);
        vcdp->chgBus(c+1586,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1]),32);
        vcdp->chgBus(c+1587,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2]),32);
        vcdp->chgBus(c+1588,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3]),32);
        vcdp->chgBus(c+1589,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4]),32);
        vcdp->chgBus(c+1590,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5]),32);
        vcdp->chgBus(c+1591,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6]),32);
        vcdp->chgBus(c+1592,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7]),32);
        vcdp->chgBus(c+1593,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[8]),32);
        vcdp->chgBus(c+1594,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[9]),32);
        vcdp->chgBus(c+1595,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[10]),32);
        vcdp->chgBus(c+1596,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[11]),32);
        vcdp->chgBus(c+1597,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[12]),32);
        vcdp->chgBus(c+1598,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[13]),32);
        vcdp->chgBus(c+1599,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[14]),32);
        vcdp->chgBus(c+1600,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[15]),32);
        vcdp->chgBus(c+1601,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[16]),32);
        vcdp->chgBus(c+1602,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[17]),32);
        vcdp->chgBus(c+1603,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[18]),32);
        vcdp->chgBus(c+1604,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[19]),32);
        vcdp->chgBus(c+1605,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[20]),32);
        vcdp->chgBus(c+1606,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[21]),32);
        vcdp->chgBus(c+1607,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[22]),32);
        vcdp->chgBus(c+1608,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[23]),32);
        vcdp->chgBus(c+1609,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[24]),32);
        vcdp->chgBus(c+1610,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[25]),32);
        vcdp->chgBus(c+1611,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[26]),32);
        vcdp->chgBus(c+1612,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[27]),32);
        vcdp->chgBus(c+1613,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[28]),32);
        vcdp->chgBus(c+1614,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[29]),32);
        vcdp->chgBus(c+1615,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[30]),32);
        vcdp->chgBus(c+1616,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[31]),32);
    }
}
