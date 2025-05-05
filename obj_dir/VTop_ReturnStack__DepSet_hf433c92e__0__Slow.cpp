// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_ReturnStack.h"
#include "VTop__Syms.h"

VL_ATTR_COLD void VTop_ReturnStack___stl_sequent__TOP__Top__soc__core__ifetch__bp__retStack__0(VTop_ReturnStack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VTop_ReturnStack___stl_sequent__TOP__Top__soc__core__ifetch__bp__retStack__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __PVT__unnamedblk2__DOT__queueRel;
    __PVT__unnamedblk2__DOT__queueRel = 0;
    CData/*4:0*/ __PVT__unnamedblk2__DOT__recRel;
    __PVT__unnamedblk2__DOT__recRel = 0;
    // Body
    vlSelfRef.__PVT__qindex = (7U & (IData)(vlSelfRef.__PVT__qindex_r));
    vlSelfRef.__PVT__qindexEnd = (7U & (IData)(vlSelfRef.__PVT__qindexEnd_r));
    vlSelfRef.__PVT__queueFull = ((IData)(vlSelfRef.__PVT__qindex_r) 
                                  == (0xfU & ((IData)(8U) 
                                              + (IData)(vlSelfRef.__PVT__qindexEnd_r))));
    vlSelfRef.__PVT__queueEmpty = ((IData)(vlSelfRef.__PVT__qindexEnd_r) 
                                   == (IData)(vlSelfRef.__PVT__qindex_r));
    vlSelfRef.__PVT__addrToPush = (0x7fffffffU & ((IData)(1U) 
                                                  + 
                                                  ((0x7ffffff8U 
                                                    & vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__pcRegNoInc) 
                                                   | (7U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_predBr 
                                                                 >> 7U))))));
    vlSelfRef.__PVT__rindex = vlSelfRef.__PVT__rindexReg;
    if (vlSelfRef.__PVT__forwardRindex) {
        vlSelfRef.__PVT__rindex = vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__recRIdx;
    } else if (((IData)((0x11ULL == (0x31ULL & vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_predBr))) 
                & (IData)(vlSelfRef.__PVT__lastValid))) {
        vlSelfRef.__PVT__rindex = (0x1fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__rindex)));
    } else if (((IData)((0x31ULL == (0x31ULL & vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_predBr))) 
                & (IData)(vlSelfRef.__PVT__lastValid))) {
        vlSelfRef.__PVT__rindex = (0x1fU & ((IData)(vlSelfRef.__PVT__rindex) 
                                            - (IData)(1U)));
    }
    __PVT__unnamedblk2__DOT__queueRel = (0x1fU & ((IData)(
                                                          vlSelfRef.__PVT__rrqueue
                                                          [
                                                          (7U 
                                                           & ((IData)(vlSelfRef.__PVT__qindex_r) 
                                                              - (IData)(1U)))]) 
                                                  - (IData)(vlSelfRef.__PVT__recoveryBase)));
    __PVT__unnamedblk2__DOT__recRel = (0x1fU & ((IData)(vlSelfRef.__PVT__recoveryID) 
                                                - (IData)(vlSelfRef.__PVT__recoveryBase)));
    vlSelfRef.__PVT__recoveryContinue_c = ((~ (IData)(vlSelfRef.__PVT__queueEmpty)) 
                                           & (((IData)(__PVT__unnamedblk2__DOT__queueRel) 
                                               > (IData)(__PVT__unnamedblk2__DOT__recRel)) 
                                              | (((IData)(__PVT__unnamedblk2__DOT__queueRel) 
                                                  == (IData)(__PVT__unnamedblk2__DOT__recRel)) 
                                                 & ((IData)(vlSelfRef.__PVT__recoveryOverwOwn)
                                                     ? 
                                                    ((7U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__rrqueue
                                                                 [
                                                                 (7U 
                                                                  & ((IData)(vlSelfRef.__PVT__qindex_r) 
                                                                     - (IData)(1U)))] 
                                                                 >> 5U))) 
                                                     >= (IData)(vlSelfRef.__PVT__recoveryOffs))
                                                     : 
                                                    ((7U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__rrqueue
                                                                 [
                                                                 (7U 
                                                                  & ((IData)(vlSelfRef.__PVT__qindex_r) 
                                                                     - (IData)(1U)))] 
                                                                 >> 5U))) 
                                                     > (IData)(vlSelfRef.__PVT__recoveryOffs))))));
}
