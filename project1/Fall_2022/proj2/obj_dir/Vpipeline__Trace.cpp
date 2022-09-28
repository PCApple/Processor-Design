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
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
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
        vcdp->chgBus(c+1,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__i),32);
        vcdp->chgBus(c+9,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__unnamedblk2__DOT__i),32);
    }
}

void Vpipeline::traceChgThis__3(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp11[5];
    WData/*255:0*/ __Vtemp16[8];
    // Body
    {
        vcdp->chgBit(c+17,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next));
        vcdp->chgQuad(c+25,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE),33);
        vcdp->chgBus(c+41,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE),6);
        vcdp->chgQuad(c+49,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),49);
        vcdp->chgBus(c+65,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                           [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 2U))]),32);
        vcdp->chgBit(c+73,((1U & (IData)((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE 
                                          >> 0x20U)))));
        vcdp->chgBus(c+81,((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE)),32);
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
        vcdp->chgArray(c+89,(__Vtemp11),132);
        vcdp->chgBus(c+129,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        vcdp->chgBus(c+137,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        vcdp->chgBus(c+145,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        vcdp->chgBus(c+153,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE),32);
        vcdp->chgBit(c+161,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                           >> 0x30U)))));
        vcdp->chgBus(c+169,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                              >> 0x2bU)))),5);
        vcdp->chgBus(c+177,((IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                     >> 0xbU))),32);
        vcdp->chgBus(c+185,((0xfU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                             >> 7U)))),4);
        vcdp->chgBit(c+193,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                           >> 6U)))));
        vcdp->chgBus(c+201,((0x1fU & ((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                                      >> 1U))),5);
        vcdp->chgBus(c+209,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                              >> 1U)))),5);
        vcdp->chgBit(c+217,((1U & (IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE))));
        vcdp->chgBit(c+225,((1U & (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE))));
        vcdp->chgBit(c+233,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall));
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
        vcdp->chgArray(c+241,(__Vtemp16),244);
        vcdp->chgBit(c+305,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX));
        vcdp->chgBus(c+313,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX),32);
        vcdp->chgBus(c+321,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX),32);
        vcdp->chgBus(c+329,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg),5);
        vcdp->chgBit(c+337,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding));
        vcdp->chgBus(c+345,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                            [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__memaddr_MEM 
                                         >> 2U))]),32);
        vcdp->chgBit(c+353,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__is_wb));
    }
}

void Vpipeline::traceChgThis__4(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+361,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        vcdp->chgBus(c+362,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        vcdp->chgBus(c+363,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        vcdp->chgBus(c+364,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        vcdp->chgBus(c+365,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        vcdp->chgBus(c+366,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        vcdp->chgBus(c+367,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        vcdp->chgBus(c+368,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        vcdp->chgBus(c+369,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        vcdp->chgBus(c+370,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        vcdp->chgBus(c+371,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        vcdp->chgBus(c+372,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        vcdp->chgBus(c+373,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        vcdp->chgBus(c+374,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        vcdp->chgBus(c+375,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        vcdp->chgBus(c+376,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        vcdp->chgBus(c+377,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        vcdp->chgBus(c+378,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        vcdp->chgBus(c+379,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        vcdp->chgBus(c+380,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        vcdp->chgBus(c+381,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        vcdp->chgBus(c+382,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        vcdp->chgBus(c+383,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        vcdp->chgBus(c+384,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        vcdp->chgBus(c+385,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        vcdp->chgBus(c+386,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        vcdp->chgBus(c+387,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        vcdp->chgBus(c+388,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        vcdp->chgBus(c+389,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        vcdp->chgBus(c+390,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        vcdp->chgBus(c+391,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        vcdp->chgBus(c+392,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        vcdp->chgBus(c+617,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[0]),32);
        vcdp->chgBus(c+618,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[1]),32);
        vcdp->chgBus(c+619,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[2]),32);
        vcdp->chgBus(c+620,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[3]),32);
        vcdp->chgBus(c+621,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[4]),32);
        vcdp->chgBus(c+622,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[5]),32);
        vcdp->chgBus(c+623,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[6]),32);
        vcdp->chgBus(c+624,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[7]),32);
        vcdp->chgBus(c+625,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[8]),32);
        vcdp->chgBus(c+626,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[9]),32);
        vcdp->chgBus(c+627,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[10]),32);
        vcdp->chgBus(c+628,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[11]),32);
        vcdp->chgBus(c+629,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[12]),32);
        vcdp->chgBus(c+630,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[13]),32);
        vcdp->chgBus(c+631,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[14]),32);
        vcdp->chgBus(c+632,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[15]),32);
    }
}

void Vpipeline::traceChgThis__5(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgArray(c+745,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents),238);
    }
}

void Vpipeline::traceChgThis__6(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+809,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        vcdp->chgArray(c+817,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),132);
        vcdp->chgArray(c+857,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),238);
        vcdp->chgArray(c+921,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),244);
        vcdp->chgArray(c+985,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),244);
        vcdp->chgBus(c+1049,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                        >> 4U)))),6);
        vcdp->chgBus(c+1057,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        vcdp->chgBus(c+1065,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        vcdp->chgBus(c+1073,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        vcdp->chgBus(c+1081,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 4U))),32);
        vcdp->chgBus(c+1089,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                            >> 4U))),32);
        vcdp->chgBus(c+1097,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                            >> 4U))),32);
        vcdp->chgBus(c+1105,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                            >> 4U))),32);
        vcdp->chgBus(c+1113,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),4);
        vcdp->chgBus(c+1121,((7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                     << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x10U)))),3);
        vcdp->chgBus(c+1129,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 3U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x1dU)))),7);
        vcdp->chgBus(c+1137,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 4U)))),7);
        vcdp->chgBus(c+1145,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                        >> 5U)))),5);
        vcdp->chgBit(c+1153,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                    >> 4U))));
        vcdp->chgBus(c+1161,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__unnamedblk3__DOT__i),32);
        vcdp->chgBus(c+1169,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1177,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1185,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 8U))),32);
        vcdp->chgBus(c+1193,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1201,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 0x18U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 8U)))),6);
        vcdp->chgBus(c+1209,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 8U))),32);
        vcdp->chgBus(c+1217,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 8U))),32);
        vcdp->chgBus(c+1225,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 8U))),32);
        vcdp->chgBus(c+1233,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       << 0x1cU) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                       >> 4U)))),4);
        vcdp->chgBus(c+1241,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),4);
        vcdp->chgBus(c+1249,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                        << 0x12U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                        >> 0xeU)))),6);
        vcdp->chgBus(c+1257,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1265,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[7U] 
                               << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                           >> 0x14U))),32);
        vcdp->chgBus(c+1273,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                               << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                           >> 0x14U))),32);
        vcdp->chgBus(c+1281,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1289,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1297,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1305,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1313,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                       << 0x16U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                       >> 0xaU)))),4);
        vcdp->chgBus(c+1321,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),4);
        vcdp->chgBus(c+1329,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                        << 0x12U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                        >> 0xeU)))),6);
        vcdp->chgBus(c+1337,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
                               << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                           >> 0x14U))),32);
        vcdp->chgBus(c+1345,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                               << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                           >> 0x14U))),32);
        vcdp->chgBus(c+1353,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1361,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),4);
        vcdp->chgBus(c+1369,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1377,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1385,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                            >> 0xeU))),32);
        vcdp->chgBus(c+1393,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                       << 0x16U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                       >> 0xaU)))),4);
        vcdp->chgBus(c+1401,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                        >> 5U)))),5);
        vcdp->chgBit(c+1409,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                    >> 4U))));
        vcdp->chgBus(c+1417,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
                                        << 5U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                                  >> 0x1bU)))),5);
        vcdp->chgBus(c+1425,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                               << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                            >> 0xeU))),32);
    }
}

void Vpipeline::traceChgThis__7(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1433,(vlTOPp->clk));
        vcdp->chgBit(c+1441,(vlTOPp->reset));
        vcdp->chgBus(c+1449,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0]),32);
        vcdp->chgBus(c+1450,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1]),32);
        vcdp->chgBus(c+1451,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2]),32);
        vcdp->chgBus(c+1452,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3]),32);
        vcdp->chgBus(c+1453,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4]),32);
        vcdp->chgBus(c+1454,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5]),32);
        vcdp->chgBus(c+1455,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6]),32);
        vcdp->chgBus(c+1456,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7]),32);
        vcdp->chgBus(c+1457,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8]),32);
        vcdp->chgBus(c+1458,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9]),32);
        vcdp->chgBus(c+1459,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[10]),32);
        vcdp->chgBus(c+1460,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[11]),32);
        vcdp->chgBus(c+1461,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[12]),32);
        vcdp->chgBus(c+1462,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[13]),32);
        vcdp->chgBus(c+1463,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[14]),32);
        vcdp->chgBus(c+1464,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[15]),32);
        vcdp->chgBus(c+1465,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[16]),32);
        vcdp->chgBus(c+1466,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[17]),32);
        vcdp->chgBus(c+1467,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[18]),32);
        vcdp->chgBus(c+1468,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[19]),32);
        vcdp->chgBus(c+1469,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[20]),32);
        vcdp->chgBus(c+1470,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[21]),32);
        vcdp->chgBus(c+1471,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[22]),32);
        vcdp->chgBus(c+1472,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[23]),32);
        vcdp->chgBus(c+1473,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[24]),32);
        vcdp->chgBus(c+1474,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[25]),32);
        vcdp->chgBus(c+1475,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[26]),32);
        vcdp->chgBus(c+1476,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[27]),32);
        vcdp->chgBus(c+1477,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[28]),32);
        vcdp->chgBus(c+1478,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[29]),32);
        vcdp->chgBus(c+1479,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[30]),32);
        vcdp->chgBus(c+1480,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[31]),32);
        vcdp->chgBus(c+1705,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0]),32);
        vcdp->chgBus(c+1706,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1]),32);
        vcdp->chgBus(c+1707,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2]),32);
        vcdp->chgBus(c+1708,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3]),32);
        vcdp->chgBus(c+1709,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4]),32);
        vcdp->chgBus(c+1710,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5]),32);
        vcdp->chgBus(c+1711,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6]),32);
        vcdp->chgBus(c+1712,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7]),32);
        vcdp->chgBus(c+1713,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[8]),32);
        vcdp->chgBus(c+1714,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[9]),32);
        vcdp->chgBus(c+1715,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[10]),32);
        vcdp->chgBus(c+1716,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[11]),32);
        vcdp->chgBus(c+1717,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[12]),32);
        vcdp->chgBus(c+1718,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[13]),32);
        vcdp->chgBus(c+1719,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[14]),32);
        vcdp->chgBus(c+1720,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[15]),32);
        vcdp->chgBus(c+1721,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[16]),32);
        vcdp->chgBus(c+1722,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[17]),32);
        vcdp->chgBus(c+1723,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[18]),32);
        vcdp->chgBus(c+1724,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[19]),32);
        vcdp->chgBus(c+1725,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[20]),32);
        vcdp->chgBus(c+1726,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[21]),32);
        vcdp->chgBus(c+1727,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[22]),32);
        vcdp->chgBus(c+1728,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[23]),32);
        vcdp->chgBus(c+1729,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[24]),32);
        vcdp->chgBus(c+1730,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[25]),32);
        vcdp->chgBus(c+1731,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[26]),32);
        vcdp->chgBus(c+1732,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[27]),32);
        vcdp->chgBus(c+1733,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[28]),32);
        vcdp->chgBus(c+1734,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[29]),32);
        vcdp->chgBus(c+1735,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[30]),32);
        vcdp->chgBus(c+1736,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[31]),32);
    }
}
