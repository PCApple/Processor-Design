// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


void Vpipeline::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vpipeline__Syms* __restrict vlSymsp = static_cast<Vpipeline__Syms*>(userp);
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vpipeline::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vpipeline__Syms* __restrict vlSymsp = static_cast<Vpipeline__Syms*>(userp);
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp17[5];
    WData/*255:0*/ __Vtemp22[8];
    WData/*255:0*/ __Vtemp28[8];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
            tracep->chgWData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),132);
            tracep->chgWData(oldp+6,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),238);
            tracep->chgWData(oldp+14,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),244);
            tracep->chgWData(oldp+22,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),244);
            tracep->chgBit(oldp+30,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next));
            tracep->chgQData(oldp+31,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE),33);
            tracep->chgCData(oldp+33,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE),6);
            tracep->chgCData(oldp+34,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                 << 0x1cU) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                   >> 4U)))),6);
            tracep->chgQData(oldp+35,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),49);
            tracep->chgIData(oldp+37,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
            tracep->chgIData(oldp+38,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                      [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                   >> 2U))]),32);
            tracep->chgIData(oldp+39,(((IData)(4U) 
                                       + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
            tracep->chgBit(oldp+40,((1U & (IData)((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE 
                                                   >> 0x20U)))));
            tracep->chgIData(oldp+41,((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE)),32);
            __Vtemp17[0U] = (0xfU | (0xfffffff0U & 
                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                      << 4U)));
            __Vtemp17[1U] = ((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                      >> 0x1cU)) | 
                             (0xfffffff0U & (((IData)(4U) 
                                              + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                             << 4U)));
            __Vtemp17[2U] = ((0xfU & (((IData)(4U) 
                                       + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                      >> 0x1cU)) | 
                             (0xfffffff0U & ((IData)(
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
                                      >> 0x1cU)) | 
                             (0xfffffff0U & ((IData)(
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
            tracep->chgWData(oldp+42,(__Vtemp17),132);
            tracep->chgIData(oldp+47,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
            tracep->chgIData(oldp+48,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 4U))),32);
            tracep->chgIData(oldp+49,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                        >> 4U))),32);
            tracep->chgIData(oldp+50,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                        >> 4U))),32);
            tracep->chgIData(oldp+51,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                        >> 4U))),32);
            tracep->chgCData(oldp+52,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),4);
            tracep->chgCData(oldp+53,((7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x10U)))),3);
            tracep->chgCData(oldp+54,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 3U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x1dU)))),7);
            tracep->chgCData(oldp+55,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 0x1cU) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 4U)))),7);
            tracep->chgCData(oldp+56,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
            tracep->chgCData(oldp+57,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
            tracep->chgCData(oldp+58,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
            tracep->chgIData(oldp+59,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE),32);
            tracep->chgBit(oldp+60,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                   >> 0x30U)))));
            tracep->chgCData(oldp+61,((0x1fU & (IData)(
                                                       (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                        >> 0x2bU)))),5);
            tracep->chgIData(oldp+62,((IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                               >> 0xbU))),32);
            tracep->chgCData(oldp+63,((0xfU & (IData)(
                                                      (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                       >> 7U)))),4);
            tracep->chgBit(oldp+64,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                   >> 6U)))));
            tracep->chgCData(oldp+65,((0x1fU & ((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                                                >> 1U))),5);
            tracep->chgCData(oldp+66,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                 << 0x1bU) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                   >> 5U)))),5);
            tracep->chgCData(oldp+67,((0x1fU & (IData)(
                                                       (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                        >> 1U)))),5);
            tracep->chgBit(oldp+68,((1U & (IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE))));
            tracep->chgBit(oldp+69,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                           >> 4U))));
            tracep->chgBit(oldp+70,((1U & (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE))));
            __Vtemp22[0U] = ((0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                             << 0xeU)) 
                             | ((0x3c00U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            << 6U)) 
                                | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg) 
                                    << 5U) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding) 
                                               << 4U) 
                                              | (0xfU 
                                                 & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])))));
            __Vtemp22[1U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                         >> 0x12U)) 
                             | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                               << 6U)));
            __Vtemp22[2U] = ((0x3fffU & ((0x3fc0U & 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           << 6U)) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 0x1aU))) 
                             | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               << 6U)));
            __Vtemp22[3U] = ((0x3fffU & ((0x3fc0U & 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           << 6U)) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 0x1aU))) 
                             | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               << 6U)));
            __Vtemp22[4U] = ((0x3fffU & ((0x3fc0U & 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           << 6U)) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 0x1aU))) 
                             | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               << 6U)));
            __Vtemp22[5U] = ((0xfff00000U & ((IData)(
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
                             | ((0xfc000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             << 6U)) 
                                | (0x3fffU & ((0x3fc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  << 6U)) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x1aU)))));
            __Vtemp22[6U] = ((0xfffffU & ((IData)((
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                    << 0x32U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                       << 0x12U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                         >> 0xeU)))) 
                                          >> 0xcU)) 
                             | (0xfff00000U & ((IData)(
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
            __Vtemp22[7U] = (0xfffffU & ((IData)(((
                                                   ((QData)((IData)(
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
            tracep->chgWData(oldp+71,(__Vtemp22),244);
            tracep->chgIData(oldp+79,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                        << 0x12U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                        >> 0xeU))),32);
            tracep->chgIData(oldp+80,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                        << 0x12U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0xeU))),32);
            tracep->chgIData(oldp+81,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        << 0x18U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 8U))),32);
            tracep->chgIData(oldp+82,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 0x12U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0xeU))),32);
            tracep->chgCData(oldp+83,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 8U)))),6);
            tracep->chgBit(oldp+84,(((0x1cU == (0x3fU 
                                                & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 8U))))
                                      ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           << 0x18U) 
                                          | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 8U)) 
                                         == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 8U)))
                                      : ((0x1dU == 
                                          (0x3fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 0x18U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 8U))))
                                          ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 8U)) 
                                             != ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  << 0x18U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                    >> 8U)))
                                          : ((0x1eU 
                                              == (0x3fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      << 0x18U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 8U))))
                                              ? (((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 8U)) 
                                                 <= 
                                                 ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                     >> 8U)))
                                              : ((0x1fU 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       << 0x18U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 8U)))) 
                                                 & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      << 0x18U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        >> 8U)) 
                                                    >= 
                                                    ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      << 0x18U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                        >> 8U)))))))));
            tracep->chgIData(oldp+85,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        << 0x18U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 8U))),32);
            tracep->chgIData(oldp+86,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0x18U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 8U))),32);
            tracep->chgIData(oldp+87,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        << 0x18U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 8U))),32);
            tracep->chgCData(oldp+88,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                << 0x1cU) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 4U)))),4);
            tracep->chgIData(oldp+89,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX),32);
            tracep->chgIData(oldp+90,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX),32);
            tracep->chgCData(oldp+91,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg),5);
            tracep->chgBit(oldp+92,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding));
            tracep->chgCData(oldp+93,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),4);
            tracep->chgCData(oldp+94,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                                 << 0x12U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                                   >> 0xeU)))),6);
            tracep->chgIData(oldp+95,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                        << 0x12U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                        >> 0xeU))),32);
            tracep->chgIData(oldp+96,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[7U] 
                                        << 0xcU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                        >> 0x14U))),32);
            tracep->chgIData(oldp+97,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                        << 0xcU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                        >> 0x14U))),32);
            tracep->chgIData(oldp+98,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                        << 0x12U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                        >> 0xeU))),32);
            tracep->chgIData(oldp+99,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                        << 0x12U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                        >> 0xeU))),32);
            tracep->chgIData(oldp+100,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                         << 0x12U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                           >> 0xeU))),32);
            tracep->chgIData(oldp+101,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                         << 0x12U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                           >> 0xeU))),32);
            tracep->chgCData(oldp+102,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                 << 0x16U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                   >> 0xaU)))),4);
            tracep->chgCData(oldp+103,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),4);
            tracep->chgIData(oldp+104,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                       [(0x3fffU & 
                                         (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__memaddr_MEM 
                                          >> 2U))]),32);
            tracep->chgCData(oldp+105,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                                  << 0x12U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                                    >> 0xeU)))),6);
            tracep->chgIData(oldp+106,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
                                         << 0xcU) | 
                                        (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                         >> 0x14U))),32);
            tracep->chgIData(oldp+107,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                         << 0xcU) | 
                                        (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                         >> 0x14U))),32);
            tracep->chgIData(oldp+108,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                         << 0x12U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                           >> 0xeU))),32);
            tracep->chgCData(oldp+109,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),4);
            tracep->chgIData(oldp+110,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                         << 0x12U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                           >> 0xeU))),32);
            tracep->chgIData(oldp+111,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                         << 0x12U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                           >> 0xeU))),32);
            tracep->chgIData(oldp+112,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                         << 0x12U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                           >> 0xeU))),32);
            tracep->chgCData(oldp+113,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                 << 0x16U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                   >> 0xaU)))),4);
            tracep->chgCData(oldp+114,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                  << 0x1bU) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                    >> 5U)))),5);
            tracep->chgBit(oldp+115,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                            >> 4U))));
            tracep->chgBit(oldp+116,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__is_wb));
            tracep->chgCData(oldp+117,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                                    >> 0x1bU)))),5);
            tracep->chgIData(oldp+118,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                         << 0x12U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                           >> 0xeU))),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            __Vtemp28[0U] = ((0xffffff00U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                             [(0x1fU 
                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x18U)))] 
                                             << 8U)) 
                             | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE) 
                                 << 4U) | (0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])));
            __Vtemp28[1U] = ((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                       [(0x1fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x18U)))] 
                                       >> 0x18U)) | 
                             (0xffffff00U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                             [(0x1fU 
                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 0xdU) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x13U)))] 
                                             << 8U)));
            __Vtemp28[2U] = ((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                       [(0x1fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 0xdU) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x13U)))] 
                                       >> 0x18U)) | 
                             (0xffffff00U & ((IData)(
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
                                       >> 0x18U)) | 
                             (0xffffff00U & ((IData)(
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
                                | (0xffU & ((IData)(
                                                    ((((QData)((IData)(
                                                                       ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                         << 0x1cU) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                           >> 4U)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE))) 
                                                     >> 0x20U)) 
                                            >> 0x18U))));
            __Vtemp28[5U] = ((0x3fffU & ((0x3c00U & 
                                          (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                           << 0xaU)) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                            >> 0x16U))) 
                             | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                               << 0xaU)));
            __Vtemp28[6U] = ((0x3fffU & ((0x3c00U & 
                                          (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           << 0xaU)) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                            >> 0x16U))) 
                             | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               << 0xaU)));
            __Vtemp28[7U] = (0x3fffU & ((0x3c00U & 
                                         (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          << 0xaU)) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x16U)));
            tracep->chgWData(oldp+119,(__Vtemp28),238);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+127,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
            tracep->chgIData(oldp+128,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
            tracep->chgIData(oldp+129,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
            tracep->chgIData(oldp+130,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
            tracep->chgIData(oldp+131,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
            tracep->chgIData(oldp+132,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
            tracep->chgIData(oldp+133,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
            tracep->chgIData(oldp+134,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
            tracep->chgIData(oldp+135,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
            tracep->chgIData(oldp+136,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
            tracep->chgIData(oldp+137,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
            tracep->chgIData(oldp+138,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
            tracep->chgIData(oldp+139,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
            tracep->chgIData(oldp+140,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
            tracep->chgIData(oldp+141,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
            tracep->chgIData(oldp+142,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
            tracep->chgIData(oldp+143,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
            tracep->chgIData(oldp+144,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
            tracep->chgIData(oldp+145,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
            tracep->chgIData(oldp+146,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
            tracep->chgIData(oldp+147,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
            tracep->chgIData(oldp+148,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
            tracep->chgIData(oldp+149,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
            tracep->chgIData(oldp+150,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
            tracep->chgIData(oldp+151,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
            tracep->chgIData(oldp+152,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
            tracep->chgIData(oldp+153,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
            tracep->chgIData(oldp+154,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
            tracep->chgIData(oldp+155,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
            tracep->chgIData(oldp+156,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
            tracep->chgIData(oldp+157,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
            tracep->chgIData(oldp+158,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
            tracep->chgIData(oldp+159,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[0]),32);
            tracep->chgIData(oldp+160,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[1]),32);
            tracep->chgIData(oldp+161,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[2]),32);
            tracep->chgIData(oldp+162,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[3]),32);
            tracep->chgIData(oldp+163,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[4]),32);
            tracep->chgIData(oldp+164,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[5]),32);
            tracep->chgIData(oldp+165,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[6]),32);
            tracep->chgIData(oldp+166,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[7]),32);
            tracep->chgIData(oldp+167,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[8]),32);
            tracep->chgIData(oldp+168,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[9]),32);
            tracep->chgIData(oldp+169,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[10]),32);
            tracep->chgIData(oldp+170,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[11]),32);
            tracep->chgIData(oldp+171,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[12]),32);
            tracep->chgIData(oldp+172,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[13]),32);
            tracep->chgIData(oldp+173,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[14]),32);
            tracep->chgIData(oldp+174,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[15]),32);
        }
        tracep->chgBit(oldp+175,(vlTOPp->clk));
        tracep->chgBit(oldp+176,(vlTOPp->reset));
        tracep->chgIData(oldp+177,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0]),32);
        tracep->chgIData(oldp+178,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1]),32);
        tracep->chgIData(oldp+179,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2]),32);
        tracep->chgIData(oldp+180,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3]),32);
        tracep->chgIData(oldp+181,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4]),32);
        tracep->chgIData(oldp+182,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5]),32);
        tracep->chgIData(oldp+183,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6]),32);
        tracep->chgIData(oldp+184,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7]),32);
        tracep->chgIData(oldp+185,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8]),32);
        tracep->chgIData(oldp+186,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9]),32);
        tracep->chgIData(oldp+187,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[10]),32);
        tracep->chgIData(oldp+188,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[11]),32);
        tracep->chgIData(oldp+189,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[12]),32);
        tracep->chgIData(oldp+190,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[13]),32);
        tracep->chgIData(oldp+191,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[14]),32);
        tracep->chgIData(oldp+192,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[15]),32);
        tracep->chgIData(oldp+193,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[16]),32);
        tracep->chgIData(oldp+194,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[17]),32);
        tracep->chgIData(oldp+195,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[18]),32);
        tracep->chgIData(oldp+196,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[19]),32);
        tracep->chgIData(oldp+197,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[20]),32);
        tracep->chgIData(oldp+198,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[21]),32);
        tracep->chgIData(oldp+199,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[22]),32);
        tracep->chgIData(oldp+200,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[23]),32);
        tracep->chgIData(oldp+201,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[24]),32);
        tracep->chgIData(oldp+202,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[25]),32);
        tracep->chgIData(oldp+203,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[26]),32);
        tracep->chgIData(oldp+204,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[27]),32);
        tracep->chgIData(oldp+205,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[28]),32);
        tracep->chgIData(oldp+206,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[29]),32);
        tracep->chgIData(oldp+207,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[30]),32);
        tracep->chgIData(oldp+208,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[31]),32);
        tracep->chgIData(oldp+209,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0]),32);
        tracep->chgIData(oldp+210,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1]),32);
        tracep->chgIData(oldp+211,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2]),32);
        tracep->chgIData(oldp+212,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3]),32);
        tracep->chgIData(oldp+213,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4]),32);
        tracep->chgIData(oldp+214,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5]),32);
        tracep->chgIData(oldp+215,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6]),32);
        tracep->chgIData(oldp+216,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7]),32);
        tracep->chgIData(oldp+217,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[8]),32);
        tracep->chgIData(oldp+218,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[9]),32);
        tracep->chgIData(oldp+219,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[10]),32);
        tracep->chgIData(oldp+220,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[11]),32);
        tracep->chgIData(oldp+221,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[12]),32);
        tracep->chgIData(oldp+222,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[13]),32);
        tracep->chgIData(oldp+223,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[14]),32);
        tracep->chgIData(oldp+224,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[15]),32);
        tracep->chgIData(oldp+225,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[16]),32);
        tracep->chgIData(oldp+226,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[17]),32);
        tracep->chgIData(oldp+227,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[18]),32);
        tracep->chgIData(oldp+228,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[19]),32);
        tracep->chgIData(oldp+229,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[20]),32);
        tracep->chgIData(oldp+230,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[21]),32);
        tracep->chgIData(oldp+231,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[22]),32);
        tracep->chgIData(oldp+232,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[23]),32);
        tracep->chgIData(oldp+233,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[24]),32);
        tracep->chgIData(oldp+234,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[25]),32);
        tracep->chgIData(oldp+235,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[26]),32);
        tracep->chgIData(oldp+236,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[27]),32);
        tracep->chgIData(oldp+237,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[28]),32);
        tracep->chgIData(oldp+238,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[29]),32);
        tracep->chgIData(oldp+239,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[30]),32);
        tracep->chgIData(oldp+240,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[31]),32);
    }
}

void Vpipeline::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vpipeline__Syms* __restrict vlSymsp = static_cast<Vpipeline__Syms*>(userp);
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
