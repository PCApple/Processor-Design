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
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 2U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vpipeline::traceChgThis__2(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                            ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                           [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 0xdU) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x13U)))]
                            : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                               [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 0xdU) 
                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0x13U)))]
                                : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                    ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                   [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               << 0xdU) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 0x13U)))]
                                    : 0U)))),32);
        vcdp->chgBus(c+9,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                            ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                           [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 0x18U)))]
                            : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                ? 0U : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                         ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                        [(0x1fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x18U)))]
                                         : 0U)))),32);
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
        vcdp->chgQuad(c+17,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE),33);
        vcdp->chgBus(c+33,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg) 
                             << 1U) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding))),6);
        vcdp->chgQuad(c+41,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),49);
        vcdp->chgBus(c+57,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                           [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 2U))]),32);
        vcdp->chgBit(c+65,((1U & (IData)((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE 
                                          >> 0x20U)))));
        vcdp->chgBus(c+73,((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE)),32);
        __Vtemp11[0U] = (0xfU | (0xfffffff0U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                                << 4U)));
        __Vtemp11[1U] = ((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                  >> 0x1cU)) | (0xfffffff0U 
                                                & (((IData)(4U) 
                                                    + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                                   << 4U)));
        __Vtemp11[2U] = ((0xfU & (((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
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
        __Vtemp11[3U] = ((0xfU & ((IData)((((QData)((IData)(
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
        __Vtemp11[4U] = (0xfU & ((IData)(((((QData)((IData)(
                                                            vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                            [
                                                            (0x3fffU 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                >> 2U))])) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                          >> 0x20U)) 
                                 >> 0x1cU));
        vcdp->chgArray(c+81,(__Vtemp11),132);
        vcdp->chgBus(c+121,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        vcdp->chgBus(c+129,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        vcdp->chgBus(c+137,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        vcdp->chgBus(c+145,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE),32);
        vcdp->chgBit(c+153,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                           >> 0x30U)))));
        vcdp->chgBus(c+161,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                              >> 0x2bU)))),5);
        vcdp->chgBus(c+169,((IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                     >> 0xbU))),32);
        vcdp->chgBus(c+177,((0xfU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                             >> 7U)))),4);
        vcdp->chgBit(c+185,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                           >> 6U)))));
        vcdp->chgBus(c+193,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg),5);
        vcdp->chgBus(c+201,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                              >> 1U)))),5);
        vcdp->chgBit(c+209,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding));
        vcdp->chgBit(c+217,((1U & (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE))));
        __Vtemp16[0U] = ((0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                         << 0xeU)) 
                         | ((0x3c00U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        << 6U)) | (
                                                   ((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg) 
                                                    << 5U) 
                                                   | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding) 
                                                       << 4U) 
                                                      | (0xfU 
                                                         & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])))));
        __Vtemp16[1U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                     >> 0x12U)) | (0xffffc000U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                      << 6U)));
        __Vtemp16[2U] = ((0x3fffU & ((0x3fc0U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 << 6U)) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 0x1aU))) 
                         | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           << 6U)));
        __Vtemp16[3U] = ((0x3fffU & ((0x3fc0U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 6U)) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0x1aU))) 
                         | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           << 6U)));
        __Vtemp16[4U] = ((0x3fffU & ((0x3fc0U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 << 6U)) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x1aU))) 
                         | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           << 6U)));
        __Vtemp16[5U] = ((0xfff00000U & ((IData)((((QData)((IData)(
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
        __Vtemp16[6U] = ((0xfffffU & ((IData)((((QData)((IData)(
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
        __Vtemp16[7U] = (0xfffffU & ((IData)(((((QData)((IData)(
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
        vcdp->chgArray(c+225,(__Vtemp16),244);
        vcdp->chgBit(c+289,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX));
        vcdp->chgBus(c+297,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX),32);
        vcdp->chgBus(c+305,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX),32);
        vcdp->chgBus(c+313,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                            [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__memaddr_MEM 
                                         >> 2U))]),32);
        vcdp->chgBit(c+321,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__is_wb));
    }
}

void Vpipeline::traceChgThis__4(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgArray(c+329,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents),238);
    }
}

void Vpipeline::traceChgThis__5(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+393,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        vcdp->chgBus(c+394,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        vcdp->chgBus(c+395,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        vcdp->chgBus(c+396,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        vcdp->chgBus(c+397,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        vcdp->chgBus(c+398,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        vcdp->chgBus(c+399,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        vcdp->chgBus(c+400,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        vcdp->chgBus(c+401,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        vcdp->chgBus(c+402,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        vcdp->chgBus(c+403,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        vcdp->chgBus(c+404,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        vcdp->chgBus(c+405,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        vcdp->chgBus(c+406,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        vcdp->chgBus(c+407,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        vcdp->chgBus(c+408,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        vcdp->chgBus(c+409,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        vcdp->chgBus(c+410,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        vcdp->chgBus(c+411,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        vcdp->chgBus(c+412,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        vcdp->chgBus(c+413,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        vcdp->chgBus(c+414,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        vcdp->chgBus(c+415,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        vcdp->chgBus(c+416,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        vcdp->chgBus(c+417,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        vcdp->chgBus(c+418,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        vcdp->chgBus(c+419,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        vcdp->chgBus(c+420,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        vcdp->chgBus(c+421,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        vcdp->chgBus(c+422,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        vcdp->chgBus(c+423,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        vcdp->chgBus(c+424,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        vcdp->chgBus(c+649,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[0]),32);
        vcdp->chgBus(c+650,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[1]),32);
        vcdp->chgBus(c+651,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[2]),32);
        vcdp->chgBus(c+652,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[3]),32);
        vcdp->chgBus(c+653,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[4]),32);
        vcdp->chgBus(c+654,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[5]),32);
        vcdp->chgBus(c+655,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[6]),32);
        vcdp->chgBus(c+656,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[7]),32);
        vcdp->chgBus(c+657,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[8]),32);
        vcdp->chgBus(c+658,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[9]),32);
        vcdp->chgBus(c+659,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[10]),32);
        vcdp->chgBus(c+660,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[11]),32);
        vcdp->chgBus(c+661,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[12]),32);
        vcdp->chgBus(c+662,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[13]),32);
        vcdp->chgBus(c+663,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[14]),32);
        vcdp->chgBus(c+664,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[15]),32);
        vcdp->chgBus(c+777,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__i),32);
    }
}

void Vpipeline::traceChgThis__6(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+785,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0]),32);
        vcdp->chgBus(c+786,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[1]),32);
        vcdp->chgBus(c+787,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[2]),32);
        vcdp->chgBus(c+788,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[3]),32);
        vcdp->chgBus(c+789,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[4]),32);
        vcdp->chgBus(c+790,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[5]),32);
        vcdp->chgBus(c+791,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[6]),32);
        vcdp->chgBus(c+792,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[7]),32);
        vcdp->chgBus(c+793,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[8]),32);
        vcdp->chgBus(c+794,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[9]),32);
        vcdp->chgBus(c+795,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[10]),32);
        vcdp->chgBus(c+796,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[11]),32);
        vcdp->chgBus(c+797,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[12]),32);
        vcdp->chgBus(c+798,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[13]),32);
        vcdp->chgBus(c+799,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[14]),32);
        vcdp->chgBus(c+800,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[15]),32);
        vcdp->chgBus(c+801,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[16]),32);
        vcdp->chgBus(c+802,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[17]),32);
        vcdp->chgBus(c+803,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[18]),32);
        vcdp->chgBus(c+804,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[19]),32);
        vcdp->chgBus(c+805,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[20]),32);
        vcdp->chgBus(c+806,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[21]),32);
        vcdp->chgBus(c+807,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[22]),32);
        vcdp->chgBus(c+808,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[23]),32);
        vcdp->chgBus(c+809,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[24]),32);
        vcdp->chgBus(c+810,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[25]),32);
        vcdp->chgBus(c+811,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[26]),32);
        vcdp->chgBus(c+812,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[27]),32);
        vcdp->chgBus(c+813,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[28]),32);
        vcdp->chgBus(c+814,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[29]),32);
        vcdp->chgBus(c+815,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[30]),32);
        vcdp->chgBus(c+816,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[31]),32);
    }
}

void Vpipeline::traceChgThis__7(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1041,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        vcdp->chgArray(c+1049,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),132);
        vcdp->chgArray(c+1089,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),238);
        vcdp->chgArray(c+1153,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),244);
        vcdp->chgArray(c+1217,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),244);
        vcdp->chgBit(c+1281,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next));
        vcdp->chgBus(c+1289,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                        >> 4U)))),6);
        vcdp->chgBus(c+1297,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        vcdp->chgBus(c+1305,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        vcdp->chgBus(c+1313,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        vcdp->chgBus(c+1321,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 4U))),32);
        vcdp->chgBus(c+1329,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                            >> 4U))),32);
        vcdp->chgBus(c+1337,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                            >> 4U))),32);
        vcdp->chgBus(c+1345,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                            >> 4U))),32);
        vcdp->chgBus(c+1353,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),4);
        vcdp->chgBus(c+1361,((7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                     << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x10U)))),3);
        vcdp->chgBus(c+1369,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 3U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x1dU)))),7);
        vcdp->chgBus(c+1377,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 4U)))),7);
        vcdp->chgBus(c+1385,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                        >> 5U)))),5);
        vcdp->chgBit(c+1393,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                    >> 4U))));
        vcdp->chgBit(c+1401,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall));
        vcdp->chgBus(c+1409,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1417,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1425,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 8U))),32);
        vcdp->chgBus(c+1433,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1441,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 0x18U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 8U)))),6);
        vcdp->chgBus(c+1449,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 8U))),32);
        vcdp->chgBus(c+1457,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 8U))),32);
        vcdp->chgBus(c+1465,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 8U))),32);
        vcdp->chgBus(c+1473,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       << 0x1cU) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                       >> 4U)))),4);
        vcdp->chgBus(c+1481,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),4);
        vcdp->chgBus(c+1489,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                        << 0x12U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                        >> 0xeU)))),6);
        vcdp->chgBus(c+1497,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1505,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[7U] 
                               << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                           >> 0x14U))),32);
        vcdp->chgBus(c+1513,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                               << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                           >> 0x14U))),32);
        vcdp->chgBus(c+1521,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1529,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1537,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1545,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1553,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                       << 0x16U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                       >> 0xaU)))),4);
        vcdp->chgBus(c+1561,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),4);
        vcdp->chgBus(c+1569,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                        << 0x12U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                        >> 0xeU)))),6);
        vcdp->chgBus(c+1577,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
                               << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                           >> 0x14U))),32);
        vcdp->chgBus(c+1585,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                               << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                           >> 0x14U))),32);
        vcdp->chgBus(c+1593,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1601,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),4);
        vcdp->chgBus(c+1609,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1617,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1625,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1633,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                       << 0x16U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                       >> 0xaU)))),4);
        vcdp->chgBus(c+1641,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                        >> 5U)))),5);
        vcdp->chgBit(c+1649,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                    >> 4U))));
        vcdp->chgBus(c+1657,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
                                        << 5U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                                  >> 0x1bU)))),5);
        vcdp->chgBus(c+1665,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                            >> 0xeU))),32);
    }
}

void Vpipeline::traceChgThis__8(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1673,(vlTOPp->clk));
        vcdp->chgBit(c+1681,(vlTOPp->reset));
        vcdp->chgBus(c+1689,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0]),32);
        vcdp->chgBus(c+1690,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1]),32);
        vcdp->chgBus(c+1691,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2]),32);
        vcdp->chgBus(c+1692,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3]),32);
        vcdp->chgBus(c+1693,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4]),32);
        vcdp->chgBus(c+1694,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5]),32);
        vcdp->chgBus(c+1695,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6]),32);
        vcdp->chgBus(c+1696,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7]),32);
        vcdp->chgBus(c+1697,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8]),32);
        vcdp->chgBus(c+1698,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9]),32);
        vcdp->chgBus(c+1699,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[10]),32);
        vcdp->chgBus(c+1700,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[11]),32);
        vcdp->chgBus(c+1701,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[12]),32);
        vcdp->chgBus(c+1702,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[13]),32);
        vcdp->chgBus(c+1703,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[14]),32);
        vcdp->chgBus(c+1704,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[15]),32);
        vcdp->chgBus(c+1705,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[16]),32);
        vcdp->chgBus(c+1706,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[17]),32);
        vcdp->chgBus(c+1707,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[18]),32);
        vcdp->chgBus(c+1708,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[19]),32);
        vcdp->chgBus(c+1709,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[20]),32);
        vcdp->chgBus(c+1710,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[21]),32);
        vcdp->chgBus(c+1711,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[22]),32);
        vcdp->chgBus(c+1712,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[23]),32);
        vcdp->chgBus(c+1713,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[24]),32);
        vcdp->chgBus(c+1714,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[25]),32);
        vcdp->chgBus(c+1715,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[26]),32);
        vcdp->chgBus(c+1716,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[27]),32);
        vcdp->chgBus(c+1717,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[28]),32);
        vcdp->chgBus(c+1718,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[29]),32);
        vcdp->chgBus(c+1719,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[30]),32);
        vcdp->chgBus(c+1720,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[31]),32);
        vcdp->chgBus(c+1945,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0]),32);
        vcdp->chgBus(c+1946,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1]),32);
        vcdp->chgBus(c+1947,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2]),32);
        vcdp->chgBus(c+1948,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3]),32);
        vcdp->chgBus(c+1949,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4]),32);
        vcdp->chgBus(c+1950,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5]),32);
        vcdp->chgBus(c+1951,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6]),32);
        vcdp->chgBus(c+1952,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7]),32);
        vcdp->chgBus(c+1953,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[8]),32);
        vcdp->chgBus(c+1954,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[9]),32);
        vcdp->chgBus(c+1955,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[10]),32);
        vcdp->chgBus(c+1956,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[11]),32);
        vcdp->chgBus(c+1957,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[12]),32);
        vcdp->chgBus(c+1958,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[13]),32);
        vcdp->chgBus(c+1959,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[14]),32);
        vcdp->chgBus(c+1960,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[15]),32);
        vcdp->chgBus(c+1961,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[16]),32);
        vcdp->chgBus(c+1962,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[17]),32);
        vcdp->chgBus(c+1963,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[18]),32);
        vcdp->chgBus(c+1964,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[19]),32);
        vcdp->chgBus(c+1965,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[20]),32);
        vcdp->chgBus(c+1966,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[21]),32);
        vcdp->chgBus(c+1967,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[22]),32);
        vcdp->chgBus(c+1968,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[23]),32);
        vcdp->chgBus(c+1969,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[24]),32);
        vcdp->chgBus(c+1970,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[25]),32);
        vcdp->chgBus(c+1971,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[26]),32);
        vcdp->chgBus(c+1972,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[27]),32);
        vcdp->chgBus(c+1973,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[28]),32);
        vcdp->chgBus(c+1974,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[29]),32);
        vcdp->chgBus(c+1975,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[30]),32);
        vcdp->chgBus(c+1976,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[31]),32);
    }
}
