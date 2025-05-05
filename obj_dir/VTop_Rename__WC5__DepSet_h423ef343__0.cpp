// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Rename__WC5.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_Rename__WC5___ico_sequent__TOP__Top__soc__core__rn__0(VTop_Rename__WC5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Rename__WC5___ico_sequent__TOP__Top__soc__core__rn__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vlvbound_hc447bc94__0;
    __Vlvbound_hc447bc94__0 = 0;
    CData/*6:0*/ __Vlvbound_h9bdd01a5__0;
    __Vlvbound_h9bdd01a5__0 = 0;
    CData/*2:0*/ __Vfunc_scheduler__DOT__GetCandidates__0__Vfuncout;
    __Vfunc_scheduler__DOT__GetCandidates__0__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_scheduler__DOT__GetCandidates__0__fu;
    __Vfunc_scheduler__DOT__GetCandidates__0__fu = 0;
    CData/*6:0*/ __Vfunc_scheduler__DOT__GetCandidates__0__storeSqN;
    __Vfunc_scheduler__DOT__GetCandidates__0__storeSqN = 0;
    CData/*2:0*/ __Vfunc_scheduler__DOT__GetCandidates__0__retval;
    __Vfunc_scheduler__DOT__GetCandidates__0__retval = 0;
    // Body
    vlSelfRef.__PVT__RAT_commitValid[0U] = (vlSelfRef.__PVT__IN_comUOp
                                            [0U] & 
                                            (0U != 
                                             (0x1fU 
                                              & (vlSelfRef.__PVT__IN_comUOp
                                                 [0U] 
                                                 >> 0x12U))));
    vlSelfRef.__PVT__RAT_commitValid[1U] = (vlSelfRef.__PVT__IN_comUOp
                                            [1U] & 
                                            (0U != 
                                             (0x1fU 
                                              & (vlSelfRef.__PVT__IN_comUOp
                                                 [1U] 
                                                 >> 0x12U))));
    vlSelfRef.__PVT__RAT_commitValid[2U] = (vlSelfRef.__PVT__IN_comUOp
                                            [2U] & 
                                            (0U != 
                                             (0x1fU 
                                              & (vlSelfRef.__PVT__IN_comUOp
                                                 [2U] 
                                                 >> 0x12U))));
    vlSelfRef.__PVT__RAT_commitValid[3U] = (vlSelfRef.__PVT__IN_comUOp
                                            [3U] & 
                                            (0U != 
                                             (0x1fU 
                                              & (vlSelfRef.__PVT__IN_comUOp
                                                 [3U] 
                                                 >> 0x12U))));
    vlSelfRef.__PVT__TB_commitValid[0U] = (1U & vlSelfRef.__PVT__IN_comUOp
                                           [0U]);
    vlSelfRef.__PVT__TB_commitValid[1U] = (1U & vlSelfRef.__PVT__IN_comUOp
                                           [1U]);
    vlSelfRef.__PVT__TB_commitValid[2U] = (1U & vlSelfRef.__PVT__IN_comUOp
                                           [2U]);
    vlSelfRef.__PVT__TB_commitValid[3U] = (1U & vlSelfRef.__PVT__IN_comUOp
                                           [3U]);
    vlSelfRef.__PVT__isNewestCommit[0U] = (vlSelfRef.__PVT__IN_comUOp
                                           [0U] & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelfRef.__PVT__IN_comUOp
                                                       [0U] 
                                                       >> 0x12U))));
    if ((1U & vlSelfRef.__PVT__IN_comUOp[0U])) {
        if ((vlSelfRef.__PVT__IN_comUOp[1U] & ((0x1fU 
                                                & (vlSelfRef.__PVT__IN_comUOp
                                                   [1U] 
                                                   >> 0x12U)) 
                                               == (0x1fU 
                                                   & (vlSelfRef.__PVT__IN_comUOp
                                                      [0U] 
                                                      >> 0x12U))))) {
            vlSelfRef.__PVT__isNewestCommit[0U] = 0U;
        }
        if ((vlSelfRef.__PVT__IN_comUOp[2U] & ((0x1fU 
                                                & (vlSelfRef.__PVT__IN_comUOp
                                                   [2U] 
                                                   >> 0x12U)) 
                                               == (0x1fU 
                                                   & (vlSelfRef.__PVT__IN_comUOp
                                                      [0U] 
                                                      >> 0x12U))))) {
            vlSelfRef.__PVT__isNewestCommit[0U] = 0U;
        }
        if ((vlSelfRef.__PVT__IN_comUOp[3U] & ((0x1fU 
                                                & (vlSelfRef.__PVT__IN_comUOp
                                                   [3U] 
                                                   >> 0x12U)) 
                                               == (0x1fU 
                                                   & (vlSelfRef.__PVT__IN_comUOp
                                                      [0U] 
                                                      >> 0x12U))))) {
            vlSelfRef.__PVT__isNewestCommit[0U] = 0U;
        }
    }
    vlSelfRef.__PVT__isNewestCommit[1U] = (vlSelfRef.__PVT__IN_comUOp
                                           [1U] & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelfRef.__PVT__IN_comUOp
                                                       [1U] 
                                                       >> 0x12U))));
    if ((1U & vlSelfRef.__PVT__IN_comUOp[1U])) {
        if ((vlSelfRef.__PVT__IN_comUOp[2U] & ((0x1fU 
                                                & (vlSelfRef.__PVT__IN_comUOp
                                                   [2U] 
                                                   >> 0x12U)) 
                                               == (0x1fU 
                                                   & (vlSelfRef.__PVT__IN_comUOp
                                                      [1U] 
                                                      >> 0x12U))))) {
            vlSelfRef.__PVT__isNewestCommit[1U] = 0U;
        }
        if ((vlSelfRef.__PVT__IN_comUOp[3U] & ((0x1fU 
                                                & (vlSelfRef.__PVT__IN_comUOp
                                                   [3U] 
                                                   >> 0x12U)) 
                                               == (0x1fU 
                                                   & (vlSelfRef.__PVT__IN_comUOp
                                                      [1U] 
                                                      >> 0x12U))))) {
            vlSelfRef.__PVT__isNewestCommit[1U] = 0U;
        }
    }
    vlSelfRef.__PVT__isNewestCommit[2U] = (vlSelfRef.__PVT__IN_comUOp
                                           [2U] & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelfRef.__PVT__IN_comUOp
                                                       [2U] 
                                                       >> 0x12U))));
    if ((1U & vlSelfRef.__PVT__IN_comUOp[2U])) {
        if ((vlSelfRef.__PVT__IN_comUOp[3U] & ((0x1fU 
                                                & (vlSelfRef.__PVT__IN_comUOp
                                                   [3U] 
                                                   >> 0x12U)) 
                                               == (0x1fU 
                                                   & (vlSelfRef.__PVT__IN_comUOp
                                                      [2U] 
                                                      >> 0x12U))))) {
            vlSelfRef.__PVT__isNewestCommit[2U] = 0U;
        }
    }
    vlSelfRef.__PVT__isNewestCommit[3U] = (vlSelfRef.__PVT__IN_comUOp
                                           [3U] & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelfRef.__PVT__IN_comUOp
                                                       [3U] 
                                                       >> 0x12U))));
    vlSelfRef.__PVT__RAT_commitTags[0U] = (0x7fU & 
                                           (vlSelfRef.__PVT__IN_comUOp
                                            [0U] >> 0xbU));
    vlSelfRef.__PVT__RAT_commitTags[1U] = (0x7fU & 
                                           (vlSelfRef.__PVT__IN_comUOp
                                            [1U] >> 0xbU));
    vlSelfRef.__PVT__RAT_commitTags[2U] = (0x7fU & 
                                           (vlSelfRef.__PVT__IN_comUOp
                                            [2U] >> 0xbU));
    vlSelfRef.__PVT__RAT_commitTags[3U] = (0x7fU & 
                                           (vlSelfRef.__PVT__IN_comUOp
                                            [3U] >> 0xbU));
    vlSelfRef.__PVT__RAT_commitIDs[0U] = (0x1fU & (
                                                   vlSelfRef.__PVT__IN_comUOp
                                                   [0U] 
                                                   >> 0x12U));
    vlSelfRef.__PVT__RAT_commitIDs[1U] = (0x1fU & (
                                                   vlSelfRef.__PVT__IN_comUOp
                                                   [1U] 
                                                   >> 0x12U));
    vlSelfRef.__PVT__RAT_commitIDs[2U] = (0x1fU & (
                                                   vlSelfRef.__PVT__IN_comUOp
                                                   [2U] 
                                                   >> 0x12U));
    vlSelfRef.__PVT__RAT_commitIDs[3U] = (0x1fU & (
                                                   vlSelfRef.__PVT__IN_comUOp
                                                   [3U] 
                                                   >> 0x12U));
    vlSelfRef.__PVT__RAT_issueIDs[0U] = (0x1fU & (vlSelfRef.__PVT__IN_uop
                                                  [0U][0U] 
                                                  >> 0x14U));
    vlSelfRef.__PVT__RAT_issueIDs[1U] = (0x1fU & (vlSelfRef.__PVT__IN_uop
                                                  [1U][0U] 
                                                  >> 0x14U));
    vlSelfRef.__PVT__RAT_issueIDs[2U] = (0x1fU & (vlSelfRef.__PVT__IN_uop
                                                  [2U][0U] 
                                                  >> 0x14U));
    vlSelfRef.__PVT__RAT_issueIDs[3U] = (0x1fU & (vlSelfRef.__PVT__IN_uop
                                                  [3U][0U] 
                                                  >> 0x14U));
    vlSelfRef.__PVT__RAT_lookupIDs[0U] = (0x1fU & (
                                                   (vlSelfRef.__PVT__IN_uop
                                                    [0U][1U] 
                                                    << 1U) 
                                                   | (vlSelfRef.__PVT__IN_uop
                                                      [0U][0U] 
                                                      >> 0x1fU)));
    vlSelfRef.__PVT__RAT_lookupIDs[1U] = (0x1fU & (
                                                   vlSelfRef.__PVT__IN_uop
                                                   [0U][0U] 
                                                   >> 0x1aU));
    vlSelfRef.__PVT__RAT_lookupIDs[2U] = (0x1fU & (
                                                   (vlSelfRef.__PVT__IN_uop
                                                    [1U][1U] 
                                                    << 1U) 
                                                   | (vlSelfRef.__PVT__IN_uop
                                                      [1U][0U] 
                                                      >> 0x1fU)));
    vlSelfRef.__PVT__RAT_lookupIDs[3U] = (0x1fU & (
                                                   vlSelfRef.__PVT__IN_uop
                                                   [1U][0U] 
                                                   >> 0x1aU));
    vlSelfRef.__PVT__RAT_lookupIDs[4U] = (0x1fU & (
                                                   (vlSelfRef.__PVT__IN_uop
                                                    [2U][1U] 
                                                    << 1U) 
                                                   | (vlSelfRef.__PVT__IN_uop
                                                      [2U][0U] 
                                                      >> 0x1fU)));
    vlSelfRef.__PVT__RAT_lookupIDs[5U] = (0x1fU & (
                                                   vlSelfRef.__PVT__IN_uop
                                                   [2U][0U] 
                                                   >> 0x1aU));
    vlSelfRef.__PVT__RAT_lookupIDs[6U] = (0x1fU & (
                                                   (vlSelfRef.__PVT__IN_uop
                                                    [3U][1U] 
                                                    << 1U) 
                                                   | (vlSelfRef.__PVT__IN_uop
                                                      [3U][0U] 
                                                      >> 0x1fU)));
    vlSelfRef.__PVT__RAT_lookupIDs[7U] = (0x1fU & (
                                                   vlSelfRef.__PVT__IN_uop
                                                   [3U][0U] 
                                                   >> 0x1aU));
    vlSelfRef.__PVT__portStall = (0xeU & (IData)(vlSelfRef.__PVT__portStall));
    vlSelfRef.__PVT__portStall = ((0xeU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (1U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls)));
    vlSelfRef.__PVT__portStall = ((0xeU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (1U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                              >> 4U))));
    vlSelfRef.__PVT__portStall = ((0xeU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (1U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                              >> 8U))));
    vlSelfRef.__PVT__portStall = ((0xeU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (1U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                              >> 0xcU))));
    vlSelfRef.__PVT__portStall = ((0xeU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (1U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                              >> 0x10U))));
    vlSelfRef.__PVT__portStall = ((0xeU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (1U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                              >> 0x14U))));
    vlSelfRef.__PVT__portStall = ((0xeU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (1U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                              >> 0x18U))));
    vlSelfRef.__PVT__portStall = (0xdU & (IData)(vlSelfRef.__PVT__portStall));
    vlSelfRef.__PVT__portStall = ((0xdU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (2U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls)));
    vlSelfRef.__PVT__portStall = ((0xdU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xffffffeU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 4U)))));
    vlSelfRef.__PVT__portStall = ((0xdU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xfffffeU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 8U)))));
    vlSelfRef.__PVT__portStall = ((0xdU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xffffeU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0xcU)))));
    vlSelfRef.__PVT__portStall = ((0xdU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xfffeU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0x10U)))));
    vlSelfRef.__PVT__portStall = ((0xdU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xffeU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0x14U)))));
    vlSelfRef.__PVT__portStall = ((0xdU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xfeU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0x18U)))));
    vlSelfRef.__PVT__portStall = (0xbU & (IData)(vlSelfRef.__PVT__portStall));
    vlSelfRef.__PVT__portStall = ((0xbU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (4U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls)));
    vlSelfRef.__PVT__portStall = ((0xbU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xffffffcU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 4U)))));
    vlSelfRef.__PVT__portStall = ((0xbU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xfffffcU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 8U)))));
    vlSelfRef.__PVT__portStall = ((0xbU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xffffcU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0xcU)))));
    vlSelfRef.__PVT__portStall = ((0xbU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xfffcU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0x10U)))));
    vlSelfRef.__PVT__portStall = ((0xbU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xffcU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0x14U)))));
    vlSelfRef.__PVT__portStall = ((0xbU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xfcU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0x18U)))));
    vlSelfRef.__PVT__portStall = (7U & (IData)(vlSelfRef.__PVT__portStall));
    vlSelfRef.__PVT__portStall = ((7U & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (8U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls)));
    vlSelfRef.__PVT__portStall = ((7U & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xffffff8U 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 4U)))));
    vlSelfRef.__PVT__portStall = ((7U & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xfffff8U 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 8U)))));
    vlSelfRef.__PVT__portStall = ((7U & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xffff8U 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0xcU)))));
    vlSelfRef.__PVT__portStall = ((7U & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xfff8U 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0x10U)))));
    vlSelfRef.__PVT__portStall = ((7U & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xff8U 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0x14U)))));
    vlSelfRef.__PVT__portStall = ((7U & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | ((IData)((((IData)(vlSelfRef.__PVT__portStall) 
                                               >> 3U) 
                                              | (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0x1bU))) 
                                     << 3U));
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitValid[3U] 
        = vlSelfRef.__PVT__RAT_commitValid[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitValid[2U] 
        = vlSelfRef.__PVT__RAT_commitValid[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitValid[1U] 
        = vlSelfRef.__PVT__RAT_commitValid[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitValid[0U] 
        = vlSelfRef.__PVT__RAT_commitValid[0U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitValid[3U] 
        = vlSelfRef.__PVT__TB_commitValid[3U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitValid[2U] 
        = vlSelfRef.__PVT__TB_commitValid[2U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitValid[1U] 
        = vlSelfRef.__PVT__TB_commitValid[1U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitValid[0U] 
        = vlSelfRef.__PVT__TB_commitValid[0U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitNewest[3U] 
        = vlSelfRef.__PVT__isNewestCommit[3U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitNewest[2U] 
        = vlSelfRef.__PVT__isNewestCommit[2U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitNewest[1U] 
        = vlSelfRef.__PVT__isNewestCommit[1U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitNewest[0U] 
        = vlSelfRef.__PVT__isNewestCommit[0U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitTags[3U] 
        = vlSelfRef.__PVT__RAT_commitTags[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitTags[2U] 
        = vlSelfRef.__PVT__RAT_commitTags[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitTags[1U] 
        = vlSelfRef.__PVT__RAT_commitTags[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitTags[0U] 
        = vlSelfRef.__PVT__RAT_commitTags[0U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitTagDst[3U] 
        = vlSelfRef.__PVT__RAT_commitTags[3U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitTagDst[2U] 
        = vlSelfRef.__PVT__RAT_commitTags[2U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitTagDst[1U] 
        = vlSelfRef.__PVT__RAT_commitTags[1U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitTagDst[0U] 
        = vlSelfRef.__PVT__RAT_commitTags[0U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitIDs[3U] 
        = vlSelfRef.__PVT__RAT_commitIDs[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitIDs[2U] 
        = vlSelfRef.__PVT__RAT_commitIDs[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitIDs[1U] 
        = vlSelfRef.__PVT__RAT_commitIDs[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitIDs[0U] 
        = vlSelfRef.__PVT__RAT_commitIDs[0U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueIDs[3U] 
        = vlSelfRef.__PVT__RAT_issueIDs[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueIDs[2U] 
        = vlSelfRef.__PVT__RAT_issueIDs[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueIDs[1U] 
        = vlSelfRef.__PVT__RAT_issueIDs[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueIDs[0U] 
        = vlSelfRef.__PVT__RAT_issueIDs[0U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_lookupIDs[7U] 
        = vlSelfRef.__PVT__RAT_lookupIDs[7U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_lookupIDs[6U] 
        = vlSelfRef.__PVT__RAT_lookupIDs[6U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_lookupIDs[5U] 
        = vlSelfRef.__PVT__RAT_lookupIDs[5U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_lookupIDs[4U] 
        = vlSelfRef.__PVT__RAT_lookupIDs[4U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_lookupIDs[3U] 
        = vlSelfRef.__PVT__RAT_lookupIDs[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_lookupIDs[2U] 
        = vlSelfRef.__PVT__RAT_lookupIDs[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_lookupIDs[1U] 
        = vlSelfRef.__PVT__RAT_lookupIDs[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_lookupIDs[0U] 
        = vlSelfRef.__PVT__RAT_lookupIDs[0U];
    vlSelfRef.__PVT__OUT_stall = (0U != (IData)(vlSelfRef.__PVT__portStall));
    vlSelfRef.__PVT__nextCounterSqN = vlSelfRef.__PVT__counterSqN;
    if (((IData)(vlSymsp->TOP__Top__soc__core.mispredFlush) 
         & vlSelfRef.__PVT__IN_uop[0U][0U])) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
    vlSelfRef.__PVT__isSc[0U] = ((3U == (0xfU & (vlSelfRef.__PVT__IN_uop
                                                 [0U][0U] 
                                                 >> 0xaU))) 
                                 & (6U == (0x3fU & 
                                           (vlSelfRef.__PVT__IN_uop
                                            [0U][0U] 
                                            >> 0xeU))));
    vlSelfRef.__PVT__TB_tagNeeded[0U] = (((((0U != 
                                             (0x1fU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [0U][0U] 
                                                 >> 0x14U))) 
                                            | (0xaU 
                                               == (0xfU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [0U][0U] 
                                                      >> 0xaU)))) 
                                           & (9U != 
                                              (0xfU 
                                               & (vlSelfRef.__PVT__IN_uop
                                                  [0U][0U] 
                                                  >> 0xaU)))) 
                                          & (0xcU != 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [0U][0U] 
                                                 >> 0xaU)))) 
                                         & (~ vlSelfRef.__PVT__isSc
                                            [0U]));
    if (((((~ vlSelfRef.__PVT__TB_tagsValid[0U]) & 
           vlSelfRef.__PVT__IN_uop[0U][0U]) & (IData)(vlSymsp->TOP__Top__soc__core.frontendEn)) 
         & vlSelfRef.__PVT__TB_tagNeeded[0U])) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
    if (((IData)(vlSymsp->TOP__Top__soc__core.mispredFlush) 
         & vlSelfRef.__PVT__IN_uop[1U][0U])) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
    vlSelfRef.__PVT__isSc[1U] = ((3U == (0xfU & (vlSelfRef.__PVT__IN_uop
                                                 [1U][0U] 
                                                 >> 0xaU))) 
                                 & (6U == (0x3fU & 
                                           (vlSelfRef.__PVT__IN_uop
                                            [1U][0U] 
                                            >> 0xeU))));
    vlSelfRef.__PVT__TB_tagNeeded[1U] = (((((0U != 
                                             (0x1fU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [1U][0U] 
                                                 >> 0x14U))) 
                                            | (0xaU 
                                               == (0xfU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [1U][0U] 
                                                      >> 0xaU)))) 
                                           & (9U != 
                                              (0xfU 
                                               & (vlSelfRef.__PVT__IN_uop
                                                  [1U][0U] 
                                                  >> 0xaU)))) 
                                          & (0xcU != 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [1U][0U] 
                                                 >> 0xaU)))) 
                                         & (~ vlSelfRef.__PVT__isSc
                                            [1U]));
    if (((((~ vlSelfRef.__PVT__TB_tagsValid[1U]) & 
           vlSelfRef.__PVT__IN_uop[1U][0U]) & (IData)(vlSymsp->TOP__Top__soc__core.frontendEn)) 
         & vlSelfRef.__PVT__TB_tagNeeded[1U])) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
    if (((IData)(vlSymsp->TOP__Top__soc__core.mispredFlush) 
         & vlSelfRef.__PVT__IN_uop[2U][0U])) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
    vlSelfRef.__PVT__isSc[2U] = ((3U == (0xfU & (vlSelfRef.__PVT__IN_uop
                                                 [2U][0U] 
                                                 >> 0xaU))) 
                                 & (6U == (0x3fU & 
                                           (vlSelfRef.__PVT__IN_uop
                                            [2U][0U] 
                                            >> 0xeU))));
    vlSelfRef.__PVT__TB_tagNeeded[2U] = (((((0U != 
                                             (0x1fU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [2U][0U] 
                                                 >> 0x14U))) 
                                            | (0xaU 
                                               == (0xfU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [2U][0U] 
                                                      >> 0xaU)))) 
                                           & (9U != 
                                              (0xfU 
                                               & (vlSelfRef.__PVT__IN_uop
                                                  [2U][0U] 
                                                  >> 0xaU)))) 
                                          & (0xcU != 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [2U][0U] 
                                                 >> 0xaU)))) 
                                         & (~ vlSelfRef.__PVT__isSc
                                            [2U]));
    if (((((~ vlSelfRef.__PVT__TB_tagsValid[2U]) & 
           vlSelfRef.__PVT__IN_uop[2U][0U]) & (IData)(vlSymsp->TOP__Top__soc__core.frontendEn)) 
         & vlSelfRef.__PVT__TB_tagNeeded[2U])) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
    if (((IData)(vlSymsp->TOP__Top__soc__core.mispredFlush) 
         & vlSelfRef.__PVT__IN_uop[3U][0U])) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
    vlSelfRef.__PVT__isSc[3U] = ((3U == (0xfU & (vlSelfRef.__PVT__IN_uop
                                                 [3U][0U] 
                                                 >> 0xaU))) 
                                 & (6U == (0x3fU & 
                                           (vlSelfRef.__PVT__IN_uop
                                            [3U][0U] 
                                            >> 0xeU))));
    vlSelfRef.__PVT__TB_tagNeeded[3U] = (((((0U != 
                                             (0x1fU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [3U][0U] 
                                                 >> 0x14U))) 
                                            | (0xaU 
                                               == (0xfU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [3U][0U] 
                                                      >> 0xaU)))) 
                                           & (9U != 
                                              (0xfU 
                                               & (vlSelfRef.__PVT__IN_uop
                                                  [3U][0U] 
                                                  >> 0xaU)))) 
                                          & (0xcU != 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [3U][0U] 
                                                 >> 0xaU)))) 
                                         & (~ vlSelfRef.__PVT__isSc
                                            [3U]));
    if (((((~ vlSelfRef.__PVT__TB_tagsValid[3U]) & 
           vlSelfRef.__PVT__IN_uop[3U][0U]) & (IData)(vlSymsp->TOP__Top__soc__core.frontendEn)) 
         & vlSelfRef.__PVT__TB_tagNeeded[3U])) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
    vlSelfRef.__PVT__RAT_issueSqNs[0U] = vlSelfRef.__PVT__nextCounterSqN;
    vlSelfRef.__PVT__RAT_issueValid[0U] = (((((~ (IData)(vlSymsp->TOP.rst)) 
                                              & (~ 
                                                 vlSymsp->TOP__Top__soc__core.branch[0U])) 
                                             & (IData)(vlSymsp->TOP__Top__soc__core.frontendEn)) 
                                            & (~ (IData)(vlSelfRef.__PVT__OUT_stall))) 
                                           & vlSelfRef.__PVT__IN_uop
                                           [0U][0U]);
    vlSelfRef.__PVT__RAT_issueAvail[0U] = ((9U == (0xfU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [0U][0U] 
                                                      >> 0xaU))) 
                                           | vlSelfRef.__PVT__isSc
                                           [0U]);
    if (vlSelfRef.__PVT__RAT_issueValid[0U]) {
        vlSelfRef.__PVT__TB_issueValid[0U] = (1U & 
                                              vlSelfRef.__PVT__TB_tagNeeded
                                              [0U]);
        vlSelfRef.__PVT__nextCounterSqN = (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__nextCounterSqN)));
    } else {
        vlSelfRef.__PVT__TB_issueValid[0U] = 0U;
    }
    vlSelfRef.__PVT__RAT_issueSqNs[1U] = vlSelfRef.__PVT__nextCounterSqN;
    vlSelfRef.__PVT__RAT_issueValid[1U] = (((((~ (IData)(vlSymsp->TOP.rst)) 
                                              & (~ 
                                                 vlSymsp->TOP__Top__soc__core.branch[0U])) 
                                             & (IData)(vlSymsp->TOP__Top__soc__core.frontendEn)) 
                                            & (~ (IData)(vlSelfRef.__PVT__OUT_stall))) 
                                           & vlSelfRef.__PVT__IN_uop
                                           [1U][0U]);
    vlSelfRef.__PVT__RAT_issueAvail[1U] = ((9U == (0xfU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [1U][0U] 
                                                      >> 0xaU))) 
                                           | vlSelfRef.__PVT__isSc
                                           [1U]);
    if (vlSelfRef.__PVT__RAT_issueValid[1U]) {
        vlSelfRef.__PVT__TB_issueValid[1U] = (1U & 
                                              vlSelfRef.__PVT__TB_tagNeeded
                                              [1U]);
        vlSelfRef.__PVT__nextCounterSqN = (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__nextCounterSqN)));
    } else {
        vlSelfRef.__PVT__TB_issueValid[1U] = 0U;
    }
    vlSelfRef.__PVT__RAT_issueSqNs[2U] = vlSelfRef.__PVT__nextCounterSqN;
    vlSelfRef.__PVT__RAT_issueValid[2U] = (((((~ (IData)(vlSymsp->TOP.rst)) 
                                              & (~ 
                                                 vlSymsp->TOP__Top__soc__core.branch[0U])) 
                                             & (IData)(vlSymsp->TOP__Top__soc__core.frontendEn)) 
                                            & (~ (IData)(vlSelfRef.__PVT__OUT_stall))) 
                                           & vlSelfRef.__PVT__IN_uop
                                           [2U][0U]);
    vlSelfRef.__PVT__RAT_issueAvail[2U] = ((9U == (0xfU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [2U][0U] 
                                                      >> 0xaU))) 
                                           | vlSelfRef.__PVT__isSc
                                           [2U]);
    if (vlSelfRef.__PVT__RAT_issueValid[2U]) {
        vlSelfRef.__PVT__TB_issueValid[2U] = (1U & 
                                              vlSelfRef.__PVT__TB_tagNeeded
                                              [2U]);
        vlSelfRef.__PVT__nextCounterSqN = (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__nextCounterSqN)));
    } else {
        vlSelfRef.__PVT__TB_issueValid[2U] = 0U;
    }
    vlSelfRef.__PVT__RAT_issueSqNs[3U] = vlSelfRef.__PVT__nextCounterSqN;
    vlSelfRef.__PVT__RAT_issueValid[3U] = (((((~ (IData)(vlSymsp->TOP.rst)) 
                                              & (~ 
                                                 vlSymsp->TOP__Top__soc__core.branch[0U])) 
                                             & (IData)(vlSymsp->TOP__Top__soc__core.frontendEn)) 
                                            & (~ (IData)(vlSelfRef.__PVT__OUT_stall))) 
                                           & vlSelfRef.__PVT__IN_uop
                                           [3U][0U]);
    vlSelfRef.__PVT__RAT_issueAvail[3U] = ((9U == (0xfU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [3U][0U] 
                                                      >> 0xaU))) 
                                           | vlSelfRef.__PVT__isSc
                                           [3U]);
    if (vlSelfRef.__PVT__RAT_issueValid[3U]) {
        vlSelfRef.__PVT__TB_issueValid[3U] = (1U & 
                                              vlSelfRef.__PVT__TB_tagNeeded
                                              [3U]);
        vlSelfRef.__PVT__nextCounterSqN = (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__nextCounterSqN)));
    } else {
        vlSelfRef.__PVT__TB_issueValid[3U] = 0U;
    }
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueValid[3U] 
        = vlSelfRef.__PVT__RAT_issueValid[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueValid[2U] 
        = vlSelfRef.__PVT__RAT_issueValid[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueValid[1U] 
        = vlSelfRef.__PVT__RAT_issueValid[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueValid[0U] 
        = vlSelfRef.__PVT__RAT_issueValid[0U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueAvail[3U] 
        = vlSelfRef.__PVT__RAT_issueAvail[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueAvail[2U] 
        = vlSelfRef.__PVT__RAT_issueAvail[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueAvail[1U] 
        = vlSelfRef.__PVT__RAT_issueAvail[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueAvail[0U] 
        = vlSelfRef.__PVT__RAT_issueAvail[0U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_issueValid[3U] 
        = vlSelfRef.__PVT__TB_issueValid[3U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_issueValid[2U] 
        = vlSelfRef.__PVT__TB_issueValid[2U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_issueValid[1U] 
        = vlSelfRef.__PVT__TB_issueValid[1U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_issueValid[0U] 
        = vlSelfRef.__PVT__TB_issueValid[0U];
    vlSelfRef.__PVT__cycleValid = ((~ vlSymsp->TOP__Top__soc__core.branch[0U]) 
                                   & ((~ (IData)(vlSelfRef.__PVT__OUT_stall)) 
                                      & (IData)(vlSymsp->TOP__Top__soc__core.frontendEn)));
    vlSelfRef.__PVT__newTags[0U] = (vlSelfRef.__PVT__TB_issueValid
                                    [0U] ? vlSelfRef.__PVT__TB_tags
                                    [0U] : ((9U == 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [0U][0U] 
                                                 >> 0xaU)))
                                             ? (0x40U 
                                                | (0x3fU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [0U][1U] 
                                                      >> 0x10U)))
                                             : (vlSelfRef.__PVT__isSc
                                                [0U]
                                                 ? 
                                                (0x40U 
                                                 | (1U 
                                                    & (~ 
                                                       vlSelfRef.__PVT__scSuccessful
                                                       [0U])))
                                                 : 0x40U)));
    vlSelfRef.__PVT__newTags[1U] = (vlSelfRef.__PVT__TB_issueValid
                                    [1U] ? vlSelfRef.__PVT__TB_tags
                                    [1U] : ((9U == 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [1U][0U] 
                                                 >> 0xaU)))
                                             ? (0x40U 
                                                | (0x3fU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [1U][1U] 
                                                      >> 0x10U)))
                                             : (vlSelfRef.__PVT__isSc
                                                [1U]
                                                 ? 
                                                (0x40U 
                                                 | (1U 
                                                    & (~ 
                                                       vlSelfRef.__PVT__scSuccessful
                                                       [1U])))
                                                 : 0x40U)));
    vlSelfRef.__PVT__newTags[2U] = (vlSelfRef.__PVT__TB_issueValid
                                    [2U] ? vlSelfRef.__PVT__TB_tags
                                    [2U] : ((9U == 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [2U][0U] 
                                                 >> 0xaU)))
                                             ? (0x40U 
                                                | (0x3fU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [2U][1U] 
                                                      >> 0x10U)))
                                             : (vlSelfRef.__PVT__isSc
                                                [2U]
                                                 ? 
                                                (0x40U 
                                                 | (1U 
                                                    & (~ 
                                                       vlSelfRef.__PVT__scSuccessful
                                                       [2U])))
                                                 : 0x40U)));
    vlSelfRef.__PVT__newTags[3U] = (vlSelfRef.__PVT__TB_issueValid
                                    [3U] ? vlSelfRef.__PVT__TB_tags
                                    [3U] : ((9U == 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [3U][0U] 
                                                 >> 0xaU)))
                                             ? (0x40U 
                                                | (0x3fU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [3U][1U] 
                                                      >> 0x10U)))
                                             : (vlSelfRef.__PVT__isSc
                                                [3U]
                                                 ? 
                                                (0x40U 
                                                 | (1U 
                                                    & (~ 
                                                       vlSelfRef.__PVT__scSuccessful
                                                       [3U])))
                                                 : 0x40U)));
    vlSelfRef.__PVT__loadSqNs[0U] = vlSelfRef.__PVT__counterLoadSqN;
    __Vlvbound_hc447bc94__0 = vlSelfRef.__PVT__loadSqNs
        [0U];
    vlSelfRef.__PVT__loadSqNs[1U] = __Vlvbound_hc447bc94__0;
    if ((((IData)(vlSelfRef.__PVT__cycleValid) & vlSelfRef.__PVT__IN_uop
          [0U][0U]) & (~ (vlSelfRef.__PVT__isSc[0U] 
                          & (~ vlSelfRef.__PVT__scSuccessful
                             [0U]))))) {
        if (((0xaU == (0xfU & (vlSelfRef.__PVT__IN_uop
                               [0U][0U] >> 0xaU))) 
             | ((3U == (0xfU & (vlSelfRef.__PVT__IN_uop
                                [0U][0U] >> 0xaU))) 
                & (6U > (0x3fU & (vlSelfRef.__PVT__IN_uop
                                  [0U][0U] >> 0xeU)))))) {
            vlSelfRef.__Vlvbound_hc447bc94__1 = (0x7fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    vlSelfRef.__PVT__loadSqNs
                                                    [0U]));
            vlSelfRef.__PVT__loadSqNs[1U] = vlSelfRef.__Vlvbound_hc447bc94__1;
        }
    }
    __Vlvbound_hc447bc94__0 = vlSelfRef.__PVT__loadSqNs
        [1U];
    vlSelfRef.__PVT__loadSqNs[2U] = __Vlvbound_hc447bc94__0;
    if ((((IData)(vlSelfRef.__PVT__cycleValid) & vlSelfRef.__PVT__IN_uop
          [1U][0U]) & (~ (vlSelfRef.__PVT__isSc[1U] 
                          & (~ vlSelfRef.__PVT__scSuccessful
                             [1U]))))) {
        if (((0xaU == (0xfU & (vlSelfRef.__PVT__IN_uop
                               [1U][0U] >> 0xaU))) 
             | ((3U == (0xfU & (vlSelfRef.__PVT__IN_uop
                                [1U][0U] >> 0xaU))) 
                & (6U > (0x3fU & (vlSelfRef.__PVT__IN_uop
                                  [1U][0U] >> 0xeU)))))) {
            vlSelfRef.__Vlvbound_hc447bc94__1 = (0x7fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    vlSelfRef.__PVT__loadSqNs
                                                    [1U]));
            vlSelfRef.__PVT__loadSqNs[2U] = vlSelfRef.__Vlvbound_hc447bc94__1;
        }
    }
    __Vlvbound_hc447bc94__0 = vlSelfRef.__PVT__loadSqNs
        [2U];
    vlSelfRef.__PVT__loadSqNs[3U] = __Vlvbound_hc447bc94__0;
    if ((((IData)(vlSelfRef.__PVT__cycleValid) & vlSelfRef.__PVT__IN_uop
          [2U][0U]) & (~ (vlSelfRef.__PVT__isSc[2U] 
                          & (~ vlSelfRef.__PVT__scSuccessful
                             [2U]))))) {
        if (((0xaU == (0xfU & (vlSelfRef.__PVT__IN_uop
                               [2U][0U] >> 0xaU))) 
             | ((3U == (0xfU & (vlSelfRef.__PVT__IN_uop
                                [2U][0U] >> 0xaU))) 
                & (6U > (0x3fU & (vlSelfRef.__PVT__IN_uop
                                  [2U][0U] >> 0xeU)))))) {
            vlSelfRef.__Vlvbound_hc447bc94__1 = (0x7fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    vlSelfRef.__PVT__loadSqNs
                                                    [2U]));
            vlSelfRef.__PVT__loadSqNs[3U] = vlSelfRef.__Vlvbound_hc447bc94__1;
        }
    }
    __Vlvbound_hc447bc94__0 = vlSelfRef.__PVT__loadSqNs
        [3U];
    vlSelfRef.__PVT__loadSqNs[4U] = __Vlvbound_hc447bc94__0;
    vlSelfRef.__PVT__storeSqNs[0U] = vlSelfRef.__PVT__counterStoreSqN;
    __Vlvbound_h9bdd01a5__0 = vlSelfRef.__PVT__storeSqNs
        [0U];
    vlSelfRef.__PVT__storeSqNs[1U] = __Vlvbound_h9bdd01a5__0;
    if ((((IData)(vlSelfRef.__PVT__cycleValid) & vlSelfRef.__PVT__IN_uop
          [0U][0U]) & (~ (vlSelfRef.__PVT__isSc[0U] 
                          & (~ vlSelfRef.__PVT__scSuccessful
                             [0U]))))) {
        if (((0xaU == (0xfU & (vlSelfRef.__PVT__IN_uop
                               [0U][0U] >> 0xaU))) 
             | ((3U == (0xfU & (vlSelfRef.__PVT__IN_uop
                                [0U][0U] >> 0xaU))) 
                & (6U <= (0x3fU & (vlSelfRef.__PVT__IN_uop
                                   [0U][0U] >> 0xeU)))))) {
            vlSelfRef.__Vlvbound_h9bdd01a5__1 = (0x7fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    vlSelfRef.__PVT__storeSqNs
                                                    [0U]));
            vlSelfRef.__PVT__storeSqNs[1U] = vlSelfRef.__Vlvbound_h9bdd01a5__1;
        }
    }
    __Vlvbound_h9bdd01a5__0 = vlSelfRef.__PVT__storeSqNs
        [1U];
    vlSelfRef.__PVT__storeSqNs[2U] = __Vlvbound_h9bdd01a5__0;
    if ((((IData)(vlSelfRef.__PVT__cycleValid) & vlSelfRef.__PVT__IN_uop
          [1U][0U]) & (~ (vlSelfRef.__PVT__isSc[1U] 
                          & (~ vlSelfRef.__PVT__scSuccessful
                             [1U]))))) {
        if (((0xaU == (0xfU & (vlSelfRef.__PVT__IN_uop
                               [1U][0U] >> 0xaU))) 
             | ((3U == (0xfU & (vlSelfRef.__PVT__IN_uop
                                [1U][0U] >> 0xaU))) 
                & (6U <= (0x3fU & (vlSelfRef.__PVT__IN_uop
                                   [1U][0U] >> 0xeU)))))) {
            vlSelfRef.__Vlvbound_h9bdd01a5__1 = (0x7fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    vlSelfRef.__PVT__storeSqNs
                                                    [1U]));
            vlSelfRef.__PVT__storeSqNs[2U] = vlSelfRef.__Vlvbound_h9bdd01a5__1;
        }
    }
    __Vlvbound_h9bdd01a5__0 = vlSelfRef.__PVT__storeSqNs
        [2U];
    vlSelfRef.__PVT__storeSqNs[3U] = __Vlvbound_h9bdd01a5__0;
    if ((((IData)(vlSelfRef.__PVT__cycleValid) & vlSelfRef.__PVT__IN_uop
          [2U][0U]) & (~ (vlSelfRef.__PVT__isSc[2U] 
                          & (~ vlSelfRef.__PVT__scSuccessful
                             [2U]))))) {
        if (((0xaU == (0xfU & (vlSelfRef.__PVT__IN_uop
                               [2U][0U] >> 0xaU))) 
             | ((3U == (0xfU & (vlSelfRef.__PVT__IN_uop
                                [2U][0U] >> 0xaU))) 
                & (6U <= (0x3fU & (vlSelfRef.__PVT__IN_uop
                                   [2U][0U] >> 0xeU)))))) {
            vlSelfRef.__Vlvbound_h9bdd01a5__1 = (0x7fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    vlSelfRef.__PVT__storeSqNs
                                                    [2U]));
            vlSelfRef.__PVT__storeSqNs[3U] = vlSelfRef.__Vlvbound_h9bdd01a5__1;
        }
    }
    __Vlvbound_h9bdd01a5__0 = vlSelfRef.__PVT__storeSqNs
        [3U];
    vlSelfRef.__PVT__storeSqNs[4U] = __Vlvbound_h9bdd01a5__0;
    if ((((IData)(vlSelfRef.__PVT__cycleValid) & vlSelfRef.__PVT__IN_uop
          [3U][0U]) & (~ (vlSelfRef.__PVT__isSc[3U] 
                          & (~ vlSelfRef.__PVT__scSuccessful
                             [3U]))))) {
        if (((0xaU == (0xfU & (vlSelfRef.__PVT__IN_uop
                               [3U][0U] >> 0xaU))) 
             | ((3U == (0xfU & (vlSelfRef.__PVT__IN_uop
                                [3U][0U] >> 0xaU))) 
                & (6U > (0x3fU & (vlSelfRef.__PVT__IN_uop
                                  [3U][0U] >> 0xeU)))))) {
            vlSelfRef.__Vlvbound_hc447bc94__1 = (0x7fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    vlSelfRef.__PVT__loadSqNs
                                                    [3U]));
            vlSelfRef.__PVT__loadSqNs[4U] = vlSelfRef.__Vlvbound_hc447bc94__1;
        }
        if (((0xaU == (0xfU & (vlSelfRef.__PVT__IN_uop
                               [3U][0U] >> 0xaU))) 
             | ((3U == (0xfU & (vlSelfRef.__PVT__IN_uop
                                [3U][0U] >> 0xaU))) 
                & (6U <= (0x3fU & (vlSelfRef.__PVT__IN_uop
                                   [3U][0U] >> 0xeU)))))) {
            vlSelfRef.__Vlvbound_h9bdd01a5__1 = (0x7fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    vlSelfRef.__PVT__storeSqNs
                                                    [3U]));
            vlSelfRef.__PVT__storeSqNs[4U] = vlSelfRef.__Vlvbound_h9bdd01a5__1;
        }
    }
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueTags[3U] 
        = vlSelfRef.__PVT__newTags[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueTags[2U] 
        = vlSelfRef.__PVT__newTags[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueTags[1U] 
        = vlSelfRef.__PVT__newTags[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueTags[0U] 
        = vlSelfRef.__PVT__newTags[0U];
    vlSelfRef.__Vcellinp__scheduler__IN_uopStoreSqN[3U] 
        = vlSelfRef.__PVT__storeSqNs[4U];
    vlSelfRef.__Vcellinp__scheduler__IN_uopStoreSqN[2U] 
        = vlSelfRef.__PVT__storeSqNs[3U];
    vlSelfRef.__Vcellinp__scheduler__IN_uopStoreSqN[1U] 
        = vlSelfRef.__PVT__storeSqNs[2U];
    vlSelfRef.__Vcellinp__scheduler__IN_uopStoreSqN[0U] 
        = vlSelfRef.__PVT__storeSqNs[1U];
    __Vfunc_scheduler__DOT__GetCandidates__0__storeSqN 
        = vlSelfRef.__Vcellinp__scheduler__IN_uopStoreSqN
        [0U];
    __Vfunc_scheduler__DOT__GetCandidates__0__fu = 
        (0xfU & (vlSelfRef.__PVT__IN_uop[0U][0U] >> 0xaU));
    __Vfunc_scheduler__DOT__GetCandidates__0__retval = 0U;
    if ((8U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
        if ((4U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
            if ((2U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
                if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
            } else if ((1U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
                if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
            }
        } else if ((2U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
            if ((1U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
                if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
            } else {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (7U & VL_SHIFTL_III(3,32,32, (IData)(1U), 
                                          (1U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__storeSqN))));
            }
        } else if ((1U & (~ (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
            if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
            if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
        }
    } else if ((4U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
        if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
        if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
        if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
    } else if ((2U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
        if ((1U & (~ (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
            if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
            if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
        }
    } else {
        if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
        if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
        if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
    }
    __Vfunc_scheduler__DOT__GetCandidates__0__Vfuncout 
        = __Vfunc_scheduler__DOT__GetCandidates__0__retval;
    vlSelfRef.__PVT__scheduler__DOT__candidates[0U] 
        = __Vfunc_scheduler__DOT__GetCandidates__0__Vfuncout;
    __Vfunc_scheduler__DOT__GetCandidates__0__storeSqN 
        = vlSelfRef.__Vcellinp__scheduler__IN_uopStoreSqN
        [1U];
    __Vfunc_scheduler__DOT__GetCandidates__0__fu = 
        (0xfU & (vlSelfRef.__PVT__IN_uop[1U][0U] >> 0xaU));
    __Vfunc_scheduler__DOT__GetCandidates__0__retval = 0U;
    if ((8U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
        if ((4U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
            if ((2U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
                if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
            } else if ((1U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
                if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
            }
        } else if ((2U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
            if ((1U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
                if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
            } else {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (7U & VL_SHIFTL_III(3,32,32, (IData)(1U), 
                                          (1U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__storeSqN))));
            }
        } else if ((1U & (~ (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
            if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
            if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
        }
    } else if ((4U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
        if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
        if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
        if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
    } else if ((2U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
        if ((1U & (~ (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
            if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
            if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
        }
    } else {
        if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
        if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
        if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
    }
    __Vfunc_scheduler__DOT__GetCandidates__0__Vfuncout 
        = __Vfunc_scheduler__DOT__GetCandidates__0__retval;
    vlSelfRef.__PVT__scheduler__DOT__candidates[1U] 
        = __Vfunc_scheduler__DOT__GetCandidates__0__Vfuncout;
    __Vfunc_scheduler__DOT__GetCandidates__0__storeSqN 
        = vlSelfRef.__Vcellinp__scheduler__IN_uopStoreSqN
        [2U];
    __Vfunc_scheduler__DOT__GetCandidates__0__fu = 
        (0xfU & (vlSelfRef.__PVT__IN_uop[2U][0U] >> 0xaU));
    __Vfunc_scheduler__DOT__GetCandidates__0__retval = 0U;
    if ((8U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
        if ((4U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
            if ((2U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
                if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
            } else if ((1U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
                if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
            }
        } else if ((2U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
            if ((1U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
                if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
            } else {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (7U & VL_SHIFTL_III(3,32,32, (IData)(1U), 
                                          (1U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__storeSqN))));
            }
        } else if ((1U & (~ (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
            if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
            if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
        }
    } else if ((4U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
        if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
        if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
        if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
    } else if ((2U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
        if ((1U & (~ (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
            if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
            if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
        }
    } else {
        if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
        if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
        if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
    }
    __Vfunc_scheduler__DOT__GetCandidates__0__Vfuncout 
        = __Vfunc_scheduler__DOT__GetCandidates__0__retval;
    vlSelfRef.__PVT__scheduler__DOT__candidates[2U] 
        = __Vfunc_scheduler__DOT__GetCandidates__0__Vfuncout;
    __Vfunc_scheduler__DOT__GetCandidates__0__storeSqN 
        = vlSelfRef.__Vcellinp__scheduler__IN_uopStoreSqN
        [3U];
    __Vfunc_scheduler__DOT__GetCandidates__0__fu = 
        (0xfU & (vlSelfRef.__PVT__IN_uop[3U][0U] >> 0xaU));
    __Vfunc_scheduler__DOT__GetCandidates__0__retval = 0U;
    if ((8U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
        if ((4U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
            if ((2U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
                if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
            } else if ((1U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
                if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
            }
        } else if ((2U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
            if ((1U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
                if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
                if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                    __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                        = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
                }
            } else {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (7U & VL_SHIFTL_III(3,32,32, (IData)(1U), 
                                          (1U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__storeSqN))));
            }
        } else if ((1U & (~ (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
            if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
            if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
        }
    } else if ((4U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
        if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
        if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
        if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
    } else if ((2U & (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu))) {
        if ((1U & (~ (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
            if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
            if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
                __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                    = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
            }
        }
    } else {
        if ((1U & (0xc23U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (1U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
        if ((1U & (0x413U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (2U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
        if ((1U & (0x15U >> (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__fu)))) {
            __Vfunc_scheduler__DOT__GetCandidates__0__retval 
                = (4U | (IData)(__Vfunc_scheduler__DOT__GetCandidates__0__retval));
        }
    }
    __Vfunc_scheduler__DOT__GetCandidates__0__Vfuncout 
        = __Vfunc_scheduler__DOT__GetCandidates__0__retval;
    vlSelfRef.__PVT__scheduler__DOT__candidates[3U] 
        = __Vfunc_scheduler__DOT__GetCandidates__0__Vfuncout;
}

VL_INLINE_OPT void VTop_Rename__WC5___ico_sequent__TOP__Top__soc__core__rn__1(VTop_Rename__WC5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Rename__WC5___ico_sequent__TOP__Top__soc__core__rn__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_h6f0eb655__0;
    __Vlvbound_h6f0eb655__0 = 0;
    CData/*6:0*/ __Vlvbound_h7bfcb1bb__0;
    __Vlvbound_h7bfcb1bb__0 = 0;
    // Body
    __Vlvbound_h7bfcb1bb__0 = (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                        [0U] >> 0xdU));
    vlSelfRef.__PVT__RAT_wbTags[0U] = __Vlvbound_h7bfcb1bb__0;
    __Vlvbound_h7bfcb1bb__0 = (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                        [1U] >> 0xdU));
    vlSelfRef.__PVT__RAT_wbTags[1U] = __Vlvbound_h7bfcb1bb__0;
    __Vlvbound_h7bfcb1bb__0 = (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                        [2U] >> 0xdU));
    vlSelfRef.__PVT__RAT_wbTags[2U] = __Vlvbound_h7bfcb1bb__0;
    __Vlvbound_h7bfcb1bb__0 = (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                        [3U] >> 0xdU));
    vlSelfRef.__PVT__RAT_wbTags[3U] = __Vlvbound_h7bfcb1bb__0;
    __Vlvbound_h7bfcb1bb__0 = (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                        [4U] >> 0xdU));
    vlSelfRef.__PVT__RAT_wbTags[4U] = __Vlvbound_h7bfcb1bb__0;
    __Vlvbound_h6f0eb655__0 = (1U & (vlSelfRef.__PVT__IN_flagsUOps
                                     [0U] & (~ (vlSelfRef.__PVT__IN_flagsUOps
                                                [0U] 
                                                >> 0x13U))));
    vlSelfRef.__PVT__RAT_wbValid[0U] = __Vlvbound_h6f0eb655__0;
    __Vlvbound_h6f0eb655__0 = (1U & (vlSelfRef.__PVT__IN_flagsUOps
                                     [1U] & (~ (vlSelfRef.__PVT__IN_flagsUOps
                                                [1U] 
                                                >> 0x13U))));
    vlSelfRef.__PVT__RAT_wbValid[1U] = __Vlvbound_h6f0eb655__0;
    __Vlvbound_h6f0eb655__0 = (1U & (vlSelfRef.__PVT__IN_flagsUOps
                                     [2U] & (~ (vlSelfRef.__PVT__IN_flagsUOps
                                                [2U] 
                                                >> 0x13U))));
    vlSelfRef.__PVT__RAT_wbValid[2U] = __Vlvbound_h6f0eb655__0;
    __Vlvbound_h6f0eb655__0 = (1U & (vlSelfRef.__PVT__IN_flagsUOps
                                     [3U] & (~ (vlSelfRef.__PVT__IN_flagsUOps
                                                [3U] 
                                                >> 0x13U))));
    vlSelfRef.__PVT__RAT_wbValid[3U] = __Vlvbound_h6f0eb655__0;
    __Vlvbound_h6f0eb655__0 = (1U & (vlSelfRef.__PVT__IN_flagsUOps
                                     [4U] & (~ (vlSelfRef.__PVT__IN_flagsUOps
                                                [4U] 
                                                >> 0x13U))));
    vlSelfRef.__PVT__RAT_wbValid[4U] = __Vlvbound_h6f0eb655__0;
    vlSelfRef.__PVT__RAT_commitPrevTags[3U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_commitPrevTags
        [3U];
    vlSelfRef.__PVT__RAT_commitPrevTags[2U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_commitPrevTags
        [2U];
    vlSelfRef.__PVT__RAT_commitPrevTags[1U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_commitPrevTags
        [1U];
    vlSelfRef.__PVT__RAT_commitPrevTags[0U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_commitPrevTags
        [0U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbTag[4U] 
        = vlSelfRef.__PVT__RAT_wbTags[4U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbTag[3U] 
        = vlSelfRef.__PVT__RAT_wbTags[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbTag[2U] 
        = vlSelfRef.__PVT__RAT_wbTags[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbTag[1U] 
        = vlSelfRef.__PVT__RAT_wbTags[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbTag[0U] 
        = vlSelfRef.__PVT__RAT_wbTags[0U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbValid[4U] 
        = vlSelfRef.__PVT__RAT_wbValid[4U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbValid[3U] 
        = vlSelfRef.__PVT__RAT_wbValid[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbValid[2U] 
        = vlSelfRef.__PVT__RAT_wbValid[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbValid[1U] 
        = vlSelfRef.__PVT__RAT_wbValid[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbValid[0U] 
        = vlSelfRef.__PVT__RAT_wbValid[0U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_RAT_commitPrevTags[3U] 
        = vlSelfRef.__PVT__RAT_commitPrevTags[3U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_RAT_commitPrevTags[2U] 
        = vlSelfRef.__PVT__RAT_commitPrevTags[2U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_RAT_commitPrevTags[1U] 
        = vlSelfRef.__PVT__RAT_commitPrevTags[1U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_RAT_commitPrevTags[0U] 
        = vlSelfRef.__PVT__RAT_commitPrevTags[0U];
}

VL_INLINE_OPT void VTop_Rename__WC5___ico_sequent__TOP__Top__soc__core__rn__2(VTop_Rename__WC5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Rename__WC5___ico_sequent__TOP__Top__soc__core__rn__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RAT_lookupSpecTag[7U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_lookupSpecTag
        [7U];
    vlSelfRef.__PVT__RAT_lookupSpecTag[6U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_lookupSpecTag
        [6U];
    vlSelfRef.__PVT__RAT_lookupSpecTag[5U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_lookupSpecTag
        [5U];
    vlSelfRef.__PVT__RAT_lookupSpecTag[4U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_lookupSpecTag
        [4U];
    vlSelfRef.__PVT__RAT_lookupSpecTag[3U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_lookupSpecTag
        [3U];
    vlSelfRef.__PVT__RAT_lookupSpecTag[2U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_lookupSpecTag
        [2U];
    vlSelfRef.__PVT__RAT_lookupSpecTag[1U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_lookupSpecTag
        [1U];
    vlSelfRef.__PVT__RAT_lookupSpecTag[0U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_lookupSpecTag
        [0U];
    vlSelfRef.__PVT__RAT_lookupAvail[7U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_lookupAvail
        [7U];
    vlSelfRef.__PVT__RAT_lookupAvail[6U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_lookupAvail
        [6U];
    vlSelfRef.__PVT__RAT_lookupAvail[5U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_lookupAvail
        [5U];
    vlSelfRef.__PVT__RAT_lookupAvail[4U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_lookupAvail
        [4U];
    vlSelfRef.__PVT__RAT_lookupAvail[3U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_lookupAvail
        [3U];
    vlSelfRef.__PVT__RAT_lookupAvail[2U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_lookupAvail
        [2U];
    vlSelfRef.__PVT__RAT_lookupAvail[1U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_lookupAvail
        [1U];
    vlSelfRef.__PVT__RAT_lookupAvail[0U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_lookupAvail
        [0U];
}

VL_INLINE_OPT void VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__0(VTop_Rename__WC5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__OUT_uop__v0;
    __VdlySet__OUT_uop__v0 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v4;
    __VdlySet__OUT_uop__v4 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v5;
    __VdlySet__OUT_uop__v5 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v6;
    __VdlySet__OUT_uop__v6 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v7;
    __VdlySet__OUT_uop__v7 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v8;
    __VdlySet__OUT_uop__v8 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v9;
    __VdlySet__OUT_uop__v9 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v10;
    __VdlySet__OUT_uop__v10 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v11;
    __VdlySet__OUT_uop__v11 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v12;
    __VdlySet__OUT_uop__v12 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v13;
    __VdlySet__OUT_uop__v13 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v14;
    __VdlySet__OUT_uop__v14 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v15;
    __VdlySet__OUT_uop__v15 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v16;
    __VdlySet__OUT_uop__v16 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v17;
    __VdlySet__OUT_uop__v17 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v18;
    __VdlySet__OUT_uop__v18 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v19;
    __VdlySet__OUT_uop__v19 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v20;
    __VdlySet__OUT_uop__v20 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v21;
    __VdlySet__OUT_uop__v21 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v22;
    __VdlySet__OUT_uop__v22 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v23;
    __VdlySet__OUT_uop__v23 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v24;
    __VdlySet__OUT_uop__v24 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v25;
    __VdlySet__OUT_uop__v25 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v26;
    __VdlySet__OUT_uop__v26 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v27;
    __VdlySet__OUT_uop__v27 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v28;
    __VdlySet__OUT_uop__v28 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v29;
    __VdlySet__OUT_uop__v29 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v30;
    __VdlySet__OUT_uop__v30 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v31;
    __VdlySet__OUT_uop__v31 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v32;
    __VdlySet__OUT_uop__v32 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v33;
    __VdlySet__OUT_uop__v33 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v34;
    __VdlySet__OUT_uop__v34 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v35;
    __VdlySet__OUT_uop__v35 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v36;
    __VdlySet__OUT_uop__v36 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v37;
    __VdlySet__OUT_uop__v37 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v38;
    __VdlySet__OUT_uop__v38 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v39;
    __VdlySet__OUT_uop__v39 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v40;
    __VdlySet__OUT_uop__v40 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v41;
    __VdlySet__OUT_uop__v41 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v42;
    __VdlySet__OUT_uop__v42 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v43;
    __VdlySet__OUT_uop__v43 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v44;
    __VdlySet__OUT_uop__v44 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v45;
    __VdlySet__OUT_uop__v45 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v46;
    __VdlySet__OUT_uop__v46 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v47;
    __VdlySet__OUT_uop__v47 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v48;
    __VdlySet__OUT_uop__v48 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v49;
    __VdlySet__OUT_uop__v49 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v50;
    __VdlySet__OUT_uop__v50 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v51;
    __VdlySet__OUT_uop__v51 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v52;
    __VdlySet__OUT_uop__v52 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v53;
    __VdlySet__OUT_uop__v53 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v54;
    __VdlySet__OUT_uop__v54 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v55;
    __VdlySet__OUT_uop__v55 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v56;
    __VdlySet__OUT_uop__v56 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v57;
    __VdlySet__OUT_uop__v57 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v58;
    __VdlySet__OUT_uop__v58 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v59;
    __VdlySet__OUT_uop__v59 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v60;
    __VdlySet__OUT_uop__v60 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v61;
    __VdlySet__OUT_uop__v61 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v62;
    __VdlySet__OUT_uop__v62 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v63;
    __VdlySet__OUT_uop__v63 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v64;
    __VdlySet__OUT_uop__v64 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v65;
    __VdlySet__OUT_uop__v65 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v66;
    __VdlySet__OUT_uop__v66 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v67;
    __VdlySet__OUT_uop__v67 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v68;
    __VdlySet__OUT_uop__v68 = 0;
    VlWide<5>/*128:0*/ __VdlyVal__OUT_uop__v69;
    VL_ZERO_W(129, __VdlyVal__OUT_uop__v69);
    CData/*0:0*/ __VdlySet__OUT_uop__v69;
    __VdlySet__OUT_uop__v69 = 0;
    CData/*4:0*/ __VdlyVal__OUT_uop__v70;
    __VdlyVal__OUT_uop__v70 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v70;
    __VdlySet__OUT_uop__v70 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v71;
    __VdlySet__OUT_uop__v71 = 0;
    CData/*6:0*/ __VdlyVal__OUT_uop__v72;
    __VdlyVal__OUT_uop__v72 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v72;
    __VdlySet__OUT_uop__v72 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v74;
    __VdlySet__OUT_uop__v74 = 0;
    VlWide<5>/*128:0*/ __VdlyVal__OUT_uop__v75;
    VL_ZERO_W(129, __VdlyVal__OUT_uop__v75);
    CData/*0:0*/ __VdlySet__OUT_uop__v75;
    __VdlySet__OUT_uop__v75 = 0;
    CData/*4:0*/ __VdlyVal__OUT_uop__v76;
    __VdlyVal__OUT_uop__v76 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v76;
    __VdlySet__OUT_uop__v76 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v77;
    __VdlySet__OUT_uop__v77 = 0;
    CData/*6:0*/ __VdlyVal__OUT_uop__v78;
    __VdlyVal__OUT_uop__v78 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v78;
    __VdlySet__OUT_uop__v78 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v80;
    __VdlySet__OUT_uop__v80 = 0;
    VlWide<5>/*128:0*/ __VdlyVal__OUT_uop__v81;
    VL_ZERO_W(129, __VdlyVal__OUT_uop__v81);
    CData/*0:0*/ __VdlySet__OUT_uop__v81;
    __VdlySet__OUT_uop__v81 = 0;
    CData/*4:0*/ __VdlyVal__OUT_uop__v82;
    __VdlyVal__OUT_uop__v82 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v82;
    __VdlySet__OUT_uop__v82 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v83;
    __VdlySet__OUT_uop__v83 = 0;
    CData/*6:0*/ __VdlyVal__OUT_uop__v84;
    __VdlyVal__OUT_uop__v84 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v84;
    __VdlySet__OUT_uop__v84 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v86;
    __VdlySet__OUT_uop__v86 = 0;
    VlWide<5>/*128:0*/ __VdlyVal__OUT_uop__v87;
    VL_ZERO_W(129, __VdlyVal__OUT_uop__v87);
    CData/*0:0*/ __VdlySet__OUT_uop__v87;
    __VdlySet__OUT_uop__v87 = 0;
    CData/*4:0*/ __VdlyVal__OUT_uop__v88;
    __VdlyVal__OUT_uop__v88 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v88;
    __VdlySet__OUT_uop__v88 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v89;
    __VdlySet__OUT_uop__v89 = 0;
    CData/*6:0*/ __VdlyVal__OUT_uop__v90;
    __VdlyVal__OUT_uop__v90 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v90;
    __VdlySet__OUT_uop__v90 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v92;
    __VdlySet__OUT_uop__v92 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v93;
    __VdlySet__OUT_uop__v93 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v94;
    __VdlySet__OUT_uop__v94 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v95;
    __VdlySet__OUT_uop__v95 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v96;
    __VdlySet__OUT_uop__v96 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v97;
    __VdlySet__OUT_uop__v97 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v98;
    __VdlySet__OUT_uop__v98 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v99;
    __VdlySet__OUT_uop__v99 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v100;
    __VdlySet__OUT_uop__v100 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v101;
    __VdlySet__OUT_uop__v101 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v102;
    __VdlySet__OUT_uop__v102 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v103;
    __VdlySet__OUT_uop__v103 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v104;
    __VdlySet__OUT_uop__v104 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v105;
    __VdlySet__OUT_uop__v105 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v106;
    __VdlySet__OUT_uop__v106 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v107;
    __VdlySet__OUT_uop__v107 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v108;
    __VdlySet__OUT_uop__v108 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v109;
    __VdlySet__OUT_uop__v109 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v110;
    __VdlySet__OUT_uop__v110 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v111;
    __VdlySet__OUT_uop__v111 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v112;
    __VdlySet__OUT_uop__v112 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v113;
    __VdlySet__OUT_uop__v113 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v114;
    __VdlySet__OUT_uop__v114 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v115;
    __VdlySet__OUT_uop__v115 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v116;
    __VdlySet__OUT_uop__v116 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v117;
    __VdlySet__OUT_uop__v117 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v118;
    __VdlySet__OUT_uop__v118 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v119;
    __VdlySet__OUT_uop__v119 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v120;
    __VdlySet__OUT_uop__v120 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v121;
    __VdlySet__OUT_uop__v121 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v122;
    __VdlySet__OUT_uop__v122 = 0;
    CData/*0:0*/ __VdlySet__OUT_uop__v123;
    __VdlySet__OUT_uop__v123 = 0;
    // Body
    __VdlySet__OUT_uop__v0 = 0U;
    __VdlySet__OUT_uop__v4 = 0U;
    __VdlySet__OUT_uop__v5 = 0U;
    __VdlySet__OUT_uop__v6 = 0U;
    __VdlySet__OUT_uop__v7 = 0U;
    __VdlySet__OUT_uop__v8 = 0U;
    __VdlySet__OUT_uop__v9 = 0U;
    __VdlySet__OUT_uop__v10 = 0U;
    __VdlySet__OUT_uop__v11 = 0U;
    __VdlySet__OUT_uop__v12 = 0U;
    __VdlySet__OUT_uop__v13 = 0U;
    __VdlySet__OUT_uop__v14 = 0U;
    __VdlySet__OUT_uop__v15 = 0U;
    __VdlySet__OUT_uop__v16 = 0U;
    __VdlySet__OUT_uop__v17 = 0U;
    __VdlySet__OUT_uop__v18 = 0U;
    __VdlySet__OUT_uop__v19 = 0U;
    __VdlySet__OUT_uop__v20 = 0U;
    __VdlySet__OUT_uop__v21 = 0U;
    __VdlySet__OUT_uop__v22 = 0U;
    __VdlySet__OUT_uop__v23 = 0U;
    __VdlySet__OUT_uop__v24 = 0U;
    __VdlySet__OUT_uop__v25 = 0U;
    __VdlySet__OUT_uop__v26 = 0U;
    __VdlySet__OUT_uop__v27 = 0U;
    __VdlySet__OUT_uop__v28 = 0U;
    __VdlySet__OUT_uop__v29 = 0U;
    __VdlySet__OUT_uop__v30 = 0U;
    __VdlySet__OUT_uop__v31 = 0U;
    __VdlySet__OUT_uop__v32 = 0U;
    __VdlySet__OUT_uop__v33 = 0U;
    __VdlySet__OUT_uop__v34 = 0U;
    __VdlySet__OUT_uop__v35 = 0U;
    __VdlySet__OUT_uop__v36 = 0U;
    __VdlySet__OUT_uop__v37 = 0U;
    __VdlySet__OUT_uop__v38 = 0U;
    __VdlySet__OUT_uop__v39 = 0U;
    __VdlySet__OUT_uop__v40 = 0U;
    __VdlySet__OUT_uop__v41 = 0U;
    __VdlySet__OUT_uop__v42 = 0U;
    __VdlySet__OUT_uop__v43 = 0U;
    __VdlySet__OUT_uop__v44 = 0U;
    __VdlySet__OUT_uop__v45 = 0U;
    __VdlySet__OUT_uop__v46 = 0U;
    __VdlySet__OUT_uop__v47 = 0U;
    __VdlySet__OUT_uop__v48 = 0U;
    __VdlySet__OUT_uop__v49 = 0U;
    __VdlySet__OUT_uop__v50 = 0U;
    __VdlySet__OUT_uop__v51 = 0U;
    __VdlySet__OUT_uop__v52 = 0U;
    __VdlySet__OUT_uop__v53 = 0U;
    __VdlySet__OUT_uop__v54 = 0U;
    __VdlySet__OUT_uop__v55 = 0U;
    __VdlySet__OUT_uop__v56 = 0U;
    __VdlySet__OUT_uop__v57 = 0U;
    __VdlySet__OUT_uop__v58 = 0U;
    __VdlySet__OUT_uop__v59 = 0U;
    __VdlySet__OUT_uop__v60 = 0U;
    __VdlySet__OUT_uop__v61 = 0U;
    __VdlySet__OUT_uop__v62 = 0U;
    __VdlySet__OUT_uop__v63 = 0U;
    __VdlySet__OUT_uop__v64 = 0U;
    __VdlySet__OUT_uop__v65 = 0U;
    __VdlySet__OUT_uop__v66 = 0U;
    __VdlySet__OUT_uop__v67 = 0U;
    __VdlySet__OUT_uop__v68 = 0U;
    __VdlySet__OUT_uop__v69 = 0U;
    __VdlySet__OUT_uop__v70 = 0U;
    __VdlySet__OUT_uop__v71 = 0U;
    __VdlySet__OUT_uop__v72 = 0U;
    __VdlySet__OUT_uop__v74 = 0U;
    __VdlySet__OUT_uop__v75 = 0U;
    __VdlySet__OUT_uop__v76 = 0U;
    __VdlySet__OUT_uop__v77 = 0U;
    __VdlySet__OUT_uop__v78 = 0U;
    __VdlySet__OUT_uop__v80 = 0U;
    __VdlySet__OUT_uop__v81 = 0U;
    __VdlySet__OUT_uop__v82 = 0U;
    __VdlySet__OUT_uop__v83 = 0U;
    __VdlySet__OUT_uop__v84 = 0U;
    __VdlySet__OUT_uop__v86 = 0U;
    __VdlySet__OUT_uop__v87 = 0U;
    __VdlySet__OUT_uop__v88 = 0U;
    __VdlySet__OUT_uop__v89 = 0U;
    __VdlySet__OUT_uop__v90 = 0U;
    __VdlySet__OUT_uop__v92 = 0U;
    __VdlySet__OUT_uop__v93 = 0U;
    __VdlySet__OUT_uop__v94 = 0U;
    __VdlySet__OUT_uop__v95 = 0U;
    __VdlySet__OUT_uop__v96 = 0U;
    __VdlySet__OUT_uop__v97 = 0U;
    __VdlySet__OUT_uop__v98 = 0U;
    __VdlySet__OUT_uop__v99 = 0U;
    __VdlySet__OUT_uop__v100 = 0U;
    __VdlySet__OUT_uop__v101 = 0U;
    __VdlySet__OUT_uop__v102 = 0U;
    __VdlySet__OUT_uop__v103 = 0U;
    __VdlySet__OUT_uop__v104 = 0U;
    __VdlySet__OUT_uop__v105 = 0U;
    __VdlySet__OUT_uop__v106 = 0U;
    __VdlySet__OUT_uop__v107 = 0U;
    __VdlySet__OUT_uop__v108 = 0U;
    __VdlySet__OUT_uop__v109 = 0U;
    __VdlySet__OUT_uop__v110 = 0U;
    __VdlySet__OUT_uop__v111 = 0U;
    __VdlySet__OUT_uop__v112 = 0U;
    __VdlySet__OUT_uop__v113 = 0U;
    __VdlySet__OUT_uop__v114 = 0U;
    __VdlySet__OUT_uop__v115 = 0U;
    __VdlySet__OUT_uop__v116 = 0U;
    __VdlySet__OUT_uop__v117 = 0U;
    __VdlySet__OUT_uop__v118 = 0U;
    __VdlySet__OUT_uop__v119 = 0U;
    __VdlySet__OUT_uop__v120 = 0U;
    __VdlySet__OUT_uop__v121 = 0U;
    __VdlySet__OUT_uop__v122 = 0U;
    __VdlySet__OUT_uop__v123 = 0U;
    if (vlSymsp->TOP.rst) {
        __VdlySet__OUT_uop__v0 = 1U;
    } else {
        if ((1U & vlSymsp->TOP__Top__soc__core.branch[0U])) {
            if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                 (0x7fU 
                                                  & (((vlSelfRef.__PVT__OUT_uop
                                                       [0U][1U] 
                                                       << 0xbU) 
                                                      | (vlSelfRef.__PVT__OUT_uop
                                                         [0U][1U] 
                                                         >> 0x15U)) 
                                                     - 
                                                     ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                       << 0xbU) 
                                                      | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                         >> 0x15U))))))) {
                __VdlySet__OUT_uop__v4 = 1U;
            }
            if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                 (0x7fU 
                                                  & (((vlSelfRef.__PVT__OUT_uop
                                                       [1U][1U] 
                                                       << 0xbU) 
                                                      | (vlSelfRef.__PVT__OUT_uop
                                                         [1U][1U] 
                                                         >> 0x15U)) 
                                                     - 
                                                     ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                       << 0xbU) 
                                                      | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                         >> 0x15U))))))) {
                __VdlySet__OUT_uop__v5 = 1U;
            }
            if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                 (0x7fU 
                                                  & (((vlSelfRef.__PVT__OUT_uop
                                                       [2U][1U] 
                                                       << 0xbU) 
                                                      | (vlSelfRef.__PVT__OUT_uop
                                                         [2U][1U] 
                                                         >> 0x15U)) 
                                                     - 
                                                     ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                       << 0xbU) 
                                                      | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                         >> 0x15U))))))) {
                __VdlySet__OUT_uop__v6 = 1U;
            }
            if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                 (0x7fU 
                                                  & (((vlSelfRef.__PVT__OUT_uop
                                                       [3U][1U] 
                                                       << 0xbU) 
                                                      | (vlSelfRef.__PVT__OUT_uop
                                                         [3U][1U] 
                                                         >> 0x15U)) 
                                                     - 
                                                     ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                       << 0xbU) 
                                                      | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                         >> 0x15U))))))) {
                __VdlySet__OUT_uop__v7 = 1U;
            }
        }
        if ((0U != (IData)(vlSelfRef.__PVT__portStall))) {
            if ((1U & (vlSelfRef.__PVT__IN_flagsUOps
                       [0U] & (~ (vlSelfRef.__PVT__IN_flagsUOps
                                  [0U] >> 0x13U))))) {
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [0U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [0U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [0U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v8 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [0U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [0U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v9 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [0U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [0U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [0U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v10 = 1U;
                    }
                }
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [1U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [1U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [0U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v11 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [1U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [0U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v12 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [1U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [1U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [0U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v13 = 1U;
                    }
                }
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [2U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [2U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [0U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v14 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [2U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [0U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v15 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [2U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [2U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [0U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v16 = 1U;
                    }
                }
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [3U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [3U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [0U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v17 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [3U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [0U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v18 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [3U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [3U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [0U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v19 = 1U;
                    }
                }
            }
            if ((1U & (vlSelfRef.__PVT__IN_flagsUOps
                       [1U] & (~ (vlSelfRef.__PVT__IN_flagsUOps
                                  [1U] >> 0x13U))))) {
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [0U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [0U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [1U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v20 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [0U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [1U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v21 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [0U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [0U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [1U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v22 = 1U;
                    }
                }
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [1U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [1U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [1U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v23 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [1U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [1U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v24 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [1U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [1U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [1U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v25 = 1U;
                    }
                }
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [2U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [2U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [1U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v26 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [2U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [1U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v27 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [2U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [2U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [1U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v28 = 1U;
                    }
                }
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [3U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [3U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [1U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v29 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [3U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [1U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v30 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [3U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [3U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [1U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v31 = 1U;
                    }
                }
            }
            if ((1U & (vlSelfRef.__PVT__IN_flagsUOps
                       [2U] & (~ (vlSelfRef.__PVT__IN_flagsUOps
                                  [2U] >> 0x13U))))) {
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [0U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [0U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [2U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v32 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [0U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [2U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v33 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [0U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [0U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [2U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v34 = 1U;
                    }
                }
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [1U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [1U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [2U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v35 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [1U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [2U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v36 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [1U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [1U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [2U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v37 = 1U;
                    }
                }
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [2U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [2U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [2U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v38 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [2U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [2U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v39 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [2U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [2U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [2U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v40 = 1U;
                    }
                }
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [3U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [3U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [2U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v41 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [3U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [2U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v42 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [3U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [3U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [2U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v43 = 1U;
                    }
                }
            }
            if ((1U & (vlSelfRef.__PVT__IN_flagsUOps
                       [3U] & (~ (vlSelfRef.__PVT__IN_flagsUOps
                                  [3U] >> 0x13U))))) {
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [0U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [0U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [3U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v44 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [0U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [3U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v45 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [0U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [0U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [3U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v46 = 1U;
                    }
                }
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [1U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [1U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [3U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v47 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [1U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [3U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v48 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [1U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [1U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [3U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v49 = 1U;
                    }
                }
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [2U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [2U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [3U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v50 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [2U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [3U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v51 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [2U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [2U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [3U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v52 = 1U;
                    }
                }
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [3U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [3U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [3U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v53 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [3U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [3U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v54 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [3U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [3U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [3U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v55 = 1U;
                    }
                }
            }
            if ((1U & (vlSelfRef.__PVT__IN_flagsUOps
                       [4U] & (~ (vlSelfRef.__PVT__IN_flagsUOps
                                  [4U] >> 0x13U))))) {
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [0U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [0U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [4U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v56 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [0U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [4U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v57 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [0U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [0U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [4U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v58 = 1U;
                    }
                }
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [1U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [1U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [4U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v59 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [1U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [4U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v60 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [1U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [1U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [4U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v61 = 1U;
                    }
                }
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [2U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [2U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [4U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v62 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [2U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [4U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v63 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [2U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [2U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [4U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v64 = 1U;
                    }
                }
                if ((0U != (0x7fU & (vlSelfRef.__PVT__OUT_uop
                                     [3U][0U] >> 1U)))) {
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [3U][2U] >> 0xdU)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [4U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v65 = 1U;
                    }
                    if (((0x7fU & (vlSelfRef.__PVT__OUT_uop
                                   [3U][2U] >> 5U)) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [4U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v66 = 1U;
                    }
                    if (((0x7fU & ((vlSelfRef.__PVT__OUT_uop
                                    [3U][2U] << 4U) 
                                   | (vlSelfRef.__PVT__OUT_uop
                                      [3U][1U] >> 0x1cU))) 
                         == (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                      [4U] >> 0xdU)))) {
                        __VdlySet__OUT_uop__v67 = 1U;
                    }
                }
            }
        }
        if (vlSelfRef.__PVT__cycleValid) {
            __VdlySet__OUT_uop__v68 = 1U;
            if ((1U & vlSelfRef.__PVT__IN_uop[0U][0U])) {
                __VdlyVal__OUT_uop__v69[0U] = (0xffU 
                                               | ((0xfff00000U 
                                                   & __VdlyVal__OUT_uop__v69[0U]) 
                                                  | ((vlSelfRef.__PVT__loadSqNs
                                                      [0U] 
                                                      << 0xdU) 
                                                     | ((0x1e00U 
                                                         & (vlSelfRef.__PVT__IN_uop
                                                            [0U][0U] 
                                                            >> 1U)) 
                                                        | (0x100U 
                                                           & (vlSelfRef.__PVT__IN_uop
                                                              [0U][0U] 
                                                              << 7U))))));
                __VdlyVal__OUT_uop__v69[0U] = ((0xc00fffffU 
                                                & __VdlyVal__OUT_uop__v69[0U]) 
                                               | (0xfff00000U 
                                                  & ((0x38000000U 
                                                      & (vlSelfRef.__PVT__IN_uop
                                                         [0U][0U] 
                                                         << 0x19U)) 
                                                     | (vlSelfRef.__PVT__storeSqNs
                                                        [1U] 
                                                        << 0x14U))));
                __VdlyVal__OUT_uop__v69[0U] = ((0x3fffffffU 
                                                & __VdlyVal__OUT_uop__v69[0U]) 
                                               | (0xc0000000U 
                                                  & (vlSelfRef.__PVT__IN_uop
                                                     [0U][0U] 
                                                     << 0x19U)));
                __VdlyVal__OUT_uop__v69[1U] = ((0xfffffff8U 
                                                & __VdlyVal__OUT_uop__v69[1U]) 
                                               | (7U 
                                                  & (vlSelfRef.__PVT__IN_uop
                                                     [0U][0U] 
                                                     >> 7U)));
                __VdlyVal__OUT_uop__v69[1U] = ((0xffe00007U 
                                                & __VdlyVal__OUT_uop__v69[1U]) 
                                               | (0xfffffff8U 
                                                  & ((vlSelfRef.__PVT__newTags
                                                      [0U] 
                                                      << 0xeU) 
                                                     | (0x3ff8U 
                                                        & (vlSelfRef.__PVT__IN_uop
                                                           [0U][0U] 
                                                           >> 0xbU)))));
                __VdlyVal__OUT_uop__v69[1U] = ((0x1fffffU 
                                                & __VdlyVal__OUT_uop__v69[1U]) 
                                               | (vlSelfRef.__PVT__RAT_issueSqNs
                                                  [0U] 
                                                  << 0x15U));
                __VdlyVal__OUT_uop__v69[2U] = ((0xfffffff8U 
                                                & __VdlyVal__OUT_uop__v69[2U]) 
                                               | (0x1fffffU 
                                                  & (4U 
                                                     | (vlSelfRef.__PVT__RAT_issueSqNs
                                                        [0U] 
                                                        >> 0xbU))));
                __VdlyVal__OUT_uop__v69[2U] = ((0xffe00007U 
                                                & __VdlyVal__OUT_uop__v69[2U]) 
                                               | (0xfffffff8U 
                                                  & (8U 
                                                     | (((vlSelfRef.__PVT__RAT_lookupAvail
                                                          [0U] 
                                                          << 0x14U) 
                                                         | ((vlSelfRef.__PVT__RAT_lookupSpecTag
                                                             [0U] 
                                                             << 0xdU) 
                                                            | (vlSelfRef.__PVT__RAT_lookupAvail
                                                               [1U] 
                                                               << 0xcU))) 
                                                        | ((vlSelfRef.__PVT__RAT_lookupSpecTag
                                                            [1U] 
                                                            << 5U) 
                                                           | (0x10U 
                                                              & (vlSelfRef.__PVT__IN_uop
                                                                 [0U][0U] 
                                                                 >> 0x15U)))))));
                __VdlyVal__OUT_uop__v69[2U] = ((0x1fffffU 
                                                & __VdlyVal__OUT_uop__v69[2U]) 
                                               | ((IData)(
                                                          (0xfffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelfRef.__PVT__IN_uop
                                                                               [0U][2U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__IN_uop
                                                                                [0U][1U])) 
                                                                 >> 4U)))) 
                                                  << 0x15U));
                __VdlyVal__OUT_uop__v69[3U] = (((IData)(
                                                        (0xfffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelfRef.__PVT__IN_uop
                                                                             [0U][2U])) 
                                                             << 0x1cU) 
                                                            | ((QData)((IData)(
                                                                               vlSelfRef.__PVT__IN_uop
                                                                               [0U][1U])) 
                                                               >> 4U)))) 
                                                >> 0xbU) 
                                               | ((IData)(
                                                          ((0xfffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelfRef.__PVT__IN_uop
                                                                                [0U][2U])) 
                                                                << 0x1cU) 
                                                               | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__IN_uop
                                                                                [0U][1U])) 
                                                                  >> 4U))) 
                                                           >> 0x20U)) 
                                                  << 0x15U));
                __VdlyVal__OUT_uop__v69[4U] = (1U & 
                                               ((IData)(
                                                        ((0xfffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelfRef.__PVT__IN_uop
                                                                              [0U][2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__IN_uop
                                                                                [0U][1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                >> 0xbU));
                __VdlySet__OUT_uop__v69 = 1U;
                if ((0xcU == (0xfU & (vlSelfRef.__PVT__IN_uop
                                      [0U][0U] >> 0xaU)))) {
                    __VdlyVal__OUT_uop__v70 = (0x1fU 
                                               & (vlSelfRef.__PVT__IN_uop
                                                  [0U][0U] 
                                                  >> 0xeU));
                    __VdlySet__OUT_uop__v70 = 1U;
                }
                if ((vlSelfRef.__PVT__isSc[0U] & (~ 
                                                  vlSelfRef.__PVT__scSuccessful
                                                  [0U]))) {
                    __VdlySet__OUT_uop__v71 = 1U;
                }
                if ((0xaU == (0xfU & (vlSelfRef.__PVT__IN_uop
                                      [0U][0U] >> 0xaU)))) {
                    __VdlyVal__OUT_uop__v72 = vlSelfRef.__PVT__newTags
                        [0U];
                    __VdlySet__OUT_uop__v72 = 1U;
                }
            }
            __VdlySet__OUT_uop__v74 = 1U;
            if ((1U & vlSelfRef.__PVT__IN_uop[1U][0U])) {
                __VdlyVal__OUT_uop__v75[0U] = (0xffU 
                                               | ((0xfff00000U 
                                                   & __VdlyVal__OUT_uop__v75[0U]) 
                                                  | ((vlSelfRef.__PVT__loadSqNs
                                                      [1U] 
                                                      << 0xdU) 
                                                     | ((0x1e00U 
                                                         & (vlSelfRef.__PVT__IN_uop
                                                            [1U][0U] 
                                                            >> 1U)) 
                                                        | (0x100U 
                                                           & (vlSelfRef.__PVT__IN_uop
                                                              [1U][0U] 
                                                              << 7U))))));
                __VdlyVal__OUT_uop__v75[0U] = ((0xc00fffffU 
                                                & __VdlyVal__OUT_uop__v75[0U]) 
                                               | (0xfff00000U 
                                                  & ((0x38000000U 
                                                      & (vlSelfRef.__PVT__IN_uop
                                                         [1U][0U] 
                                                         << 0x19U)) 
                                                     | (vlSelfRef.__PVT__storeSqNs
                                                        [2U] 
                                                        << 0x14U))));
                __VdlyVal__OUT_uop__v75[0U] = ((0x3fffffffU 
                                                & __VdlyVal__OUT_uop__v75[0U]) 
                                               | (0xc0000000U 
                                                  & (vlSelfRef.__PVT__IN_uop
                                                     [1U][0U] 
                                                     << 0x19U)));
                __VdlyVal__OUT_uop__v75[1U] = ((0xfffffff8U 
                                                & __VdlyVal__OUT_uop__v75[1U]) 
                                               | (7U 
                                                  & (vlSelfRef.__PVT__IN_uop
                                                     [1U][0U] 
                                                     >> 7U)));
                __VdlyVal__OUT_uop__v75[1U] = ((0xffe00007U 
                                                & __VdlyVal__OUT_uop__v75[1U]) 
                                               | (0xfffffff8U 
                                                  & ((vlSelfRef.__PVT__newTags
                                                      [1U] 
                                                      << 0xeU) 
                                                     | (0x3ff8U 
                                                        & (vlSelfRef.__PVT__IN_uop
                                                           [1U][0U] 
                                                           >> 0xbU)))));
                __VdlyVal__OUT_uop__v75[1U] = ((0x1fffffU 
                                                & __VdlyVal__OUT_uop__v75[1U]) 
                                               | (vlSelfRef.__PVT__RAT_issueSqNs
                                                  [1U] 
                                                  << 0x15U));
                __VdlyVal__OUT_uop__v75[2U] = ((0xfffffff8U 
                                                & __VdlyVal__OUT_uop__v75[2U]) 
                                               | (0x1fffffU 
                                                  & (4U 
                                                     | (vlSelfRef.__PVT__RAT_issueSqNs
                                                        [1U] 
                                                        >> 0xbU))));
                __VdlyVal__OUT_uop__v75[2U] = ((0xffe00007U 
                                                & __VdlyVal__OUT_uop__v75[2U]) 
                                               | (0xfffffff8U 
                                                  & (8U 
                                                     | (((vlSelfRef.__PVT__RAT_lookupAvail
                                                          [2U] 
                                                          << 0x14U) 
                                                         | ((vlSelfRef.__PVT__RAT_lookupSpecTag
                                                             [2U] 
                                                             << 0xdU) 
                                                            | (vlSelfRef.__PVT__RAT_lookupAvail
                                                               [3U] 
                                                               << 0xcU))) 
                                                        | ((vlSelfRef.__PVT__RAT_lookupSpecTag
                                                            [3U] 
                                                            << 5U) 
                                                           | (0x10U 
                                                              & (vlSelfRef.__PVT__IN_uop
                                                                 [1U][0U] 
                                                                 >> 0x15U)))))));
                __VdlyVal__OUT_uop__v75[2U] = ((0x1fffffU 
                                                & __VdlyVal__OUT_uop__v75[2U]) 
                                               | ((IData)(
                                                          (0xfffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelfRef.__PVT__IN_uop
                                                                               [1U][2U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__IN_uop
                                                                                [1U][1U])) 
                                                                 >> 4U)))) 
                                                  << 0x15U));
                __VdlyVal__OUT_uop__v75[3U] = (((IData)(
                                                        (0xfffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelfRef.__PVT__IN_uop
                                                                             [1U][2U])) 
                                                             << 0x1cU) 
                                                            | ((QData)((IData)(
                                                                               vlSelfRef.__PVT__IN_uop
                                                                               [1U][1U])) 
                                                               >> 4U)))) 
                                                >> 0xbU) 
                                               | ((IData)(
                                                          ((0xfffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelfRef.__PVT__IN_uop
                                                                                [1U][2U])) 
                                                                << 0x1cU) 
                                                               | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__IN_uop
                                                                                [1U][1U])) 
                                                                  >> 4U))) 
                                                           >> 0x20U)) 
                                                  << 0x15U));
                __VdlyVal__OUT_uop__v75[4U] = (1U & 
                                               ((IData)(
                                                        ((0xfffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelfRef.__PVT__IN_uop
                                                                              [1U][2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__IN_uop
                                                                                [1U][1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                >> 0xbU));
                __VdlySet__OUT_uop__v75 = 1U;
                if ((0xcU == (0xfU & (vlSelfRef.__PVT__IN_uop
                                      [1U][0U] >> 0xaU)))) {
                    __VdlyVal__OUT_uop__v76 = (0x1fU 
                                               & (vlSelfRef.__PVT__IN_uop
                                                  [1U][0U] 
                                                  >> 0xeU));
                    __VdlySet__OUT_uop__v76 = 1U;
                }
                if ((vlSelfRef.__PVT__isSc[1U] & (~ 
                                                  vlSelfRef.__PVT__scSuccessful
                                                  [1U]))) {
                    __VdlySet__OUT_uop__v77 = 1U;
                }
                if ((0xaU == (0xfU & (vlSelfRef.__PVT__IN_uop
                                      [1U][0U] >> 0xaU)))) {
                    __VdlyVal__OUT_uop__v78 = vlSelfRef.__PVT__newTags
                        [1U];
                    __VdlySet__OUT_uop__v78 = 1U;
                }
            }
            __VdlySet__OUT_uop__v80 = 1U;
            if ((1U & vlSelfRef.__PVT__IN_uop[2U][0U])) {
                __VdlyVal__OUT_uop__v81[0U] = (0xffU 
                                               | ((0xfff00000U 
                                                   & __VdlyVal__OUT_uop__v81[0U]) 
                                                  | ((vlSelfRef.__PVT__loadSqNs
                                                      [2U] 
                                                      << 0xdU) 
                                                     | ((0x1e00U 
                                                         & (vlSelfRef.__PVT__IN_uop
                                                            [2U][0U] 
                                                            >> 1U)) 
                                                        | (0x100U 
                                                           & (vlSelfRef.__PVT__IN_uop
                                                              [2U][0U] 
                                                              << 7U))))));
                __VdlyVal__OUT_uop__v81[0U] = ((0xc00fffffU 
                                                & __VdlyVal__OUT_uop__v81[0U]) 
                                               | (0xfff00000U 
                                                  & ((0x38000000U 
                                                      & (vlSelfRef.__PVT__IN_uop
                                                         [2U][0U] 
                                                         << 0x19U)) 
                                                     | (vlSelfRef.__PVT__storeSqNs
                                                        [3U] 
                                                        << 0x14U))));
                __VdlyVal__OUT_uop__v81[0U] = ((0x3fffffffU 
                                                & __VdlyVal__OUT_uop__v81[0U]) 
                                               | (0xc0000000U 
                                                  & (vlSelfRef.__PVT__IN_uop
                                                     [2U][0U] 
                                                     << 0x19U)));
                __VdlyVal__OUT_uop__v81[1U] = ((0xfffffff8U 
                                                & __VdlyVal__OUT_uop__v81[1U]) 
                                               | (7U 
                                                  & (vlSelfRef.__PVT__IN_uop
                                                     [2U][0U] 
                                                     >> 7U)));
                __VdlyVal__OUT_uop__v81[1U] = ((0xffe00007U 
                                                & __VdlyVal__OUT_uop__v81[1U]) 
                                               | (0xfffffff8U 
                                                  & ((vlSelfRef.__PVT__newTags
                                                      [2U] 
                                                      << 0xeU) 
                                                     | (0x3ff8U 
                                                        & (vlSelfRef.__PVT__IN_uop
                                                           [2U][0U] 
                                                           >> 0xbU)))));
                __VdlyVal__OUT_uop__v81[1U] = ((0x1fffffU 
                                                & __VdlyVal__OUT_uop__v81[1U]) 
                                               | (vlSelfRef.__PVT__RAT_issueSqNs
                                                  [2U] 
                                                  << 0x15U));
                __VdlyVal__OUT_uop__v81[2U] = ((0xfffffff8U 
                                                & __VdlyVal__OUT_uop__v81[2U]) 
                                               | (0x1fffffU 
                                                  & (4U 
                                                     | (vlSelfRef.__PVT__RAT_issueSqNs
                                                        [2U] 
                                                        >> 0xbU))));
                __VdlyVal__OUT_uop__v81[2U] = ((0xffe00007U 
                                                & __VdlyVal__OUT_uop__v81[2U]) 
                                               | (0xfffffff8U 
                                                  & (8U 
                                                     | (((vlSelfRef.__PVT__RAT_lookupAvail
                                                          [4U] 
                                                          << 0x14U) 
                                                         | ((vlSelfRef.__PVT__RAT_lookupSpecTag
                                                             [4U] 
                                                             << 0xdU) 
                                                            | (vlSelfRef.__PVT__RAT_lookupAvail
                                                               [5U] 
                                                               << 0xcU))) 
                                                        | ((vlSelfRef.__PVT__RAT_lookupSpecTag
                                                            [5U] 
                                                            << 5U) 
                                                           | (0x10U 
                                                              & (vlSelfRef.__PVT__IN_uop
                                                                 [2U][0U] 
                                                                 >> 0x15U)))))));
                __VdlyVal__OUT_uop__v81[2U] = ((0x1fffffU 
                                                & __VdlyVal__OUT_uop__v81[2U]) 
                                               | ((IData)(
                                                          (0xfffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelfRef.__PVT__IN_uop
                                                                               [2U][2U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__IN_uop
                                                                                [2U][1U])) 
                                                                 >> 4U)))) 
                                                  << 0x15U));
                __VdlyVal__OUT_uop__v81[3U] = (((IData)(
                                                        (0xfffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelfRef.__PVT__IN_uop
                                                                             [2U][2U])) 
                                                             << 0x1cU) 
                                                            | ((QData)((IData)(
                                                                               vlSelfRef.__PVT__IN_uop
                                                                               [2U][1U])) 
                                                               >> 4U)))) 
                                                >> 0xbU) 
                                               | ((IData)(
                                                          ((0xfffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelfRef.__PVT__IN_uop
                                                                                [2U][2U])) 
                                                                << 0x1cU) 
                                                               | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__IN_uop
                                                                                [2U][1U])) 
                                                                  >> 4U))) 
                                                           >> 0x20U)) 
                                                  << 0x15U));
                __VdlyVal__OUT_uop__v81[4U] = (1U & 
                                               ((IData)(
                                                        ((0xfffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelfRef.__PVT__IN_uop
                                                                              [2U][2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__IN_uop
                                                                                [2U][1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                >> 0xbU));
                __VdlySet__OUT_uop__v81 = 1U;
                if ((0xcU == (0xfU & (vlSelfRef.__PVT__IN_uop
                                      [2U][0U] >> 0xaU)))) {
                    __VdlyVal__OUT_uop__v82 = (0x1fU 
                                               & (vlSelfRef.__PVT__IN_uop
                                                  [2U][0U] 
                                                  >> 0xeU));
                    __VdlySet__OUT_uop__v82 = 1U;
                }
                if ((vlSelfRef.__PVT__isSc[2U] & (~ 
                                                  vlSelfRef.__PVT__scSuccessful
                                                  [2U]))) {
                    __VdlySet__OUT_uop__v83 = 1U;
                }
                if ((0xaU == (0xfU & (vlSelfRef.__PVT__IN_uop
                                      [2U][0U] >> 0xaU)))) {
                    __VdlyVal__OUT_uop__v84 = vlSelfRef.__PVT__newTags
                        [2U];
                    __VdlySet__OUT_uop__v84 = 1U;
                }
            }
            __VdlySet__OUT_uop__v86 = 1U;
            if ((1U & vlSelfRef.__PVT__IN_uop[3U][0U])) {
                __VdlyVal__OUT_uop__v87[0U] = (0xffU 
                                               | ((0xfff00000U 
                                                   & __VdlyVal__OUT_uop__v87[0U]) 
                                                  | ((vlSelfRef.__PVT__loadSqNs
                                                      [3U] 
                                                      << 0xdU) 
                                                     | ((0x1e00U 
                                                         & (vlSelfRef.__PVT__IN_uop
                                                            [3U][0U] 
                                                            >> 1U)) 
                                                        | (0x100U 
                                                           & (vlSelfRef.__PVT__IN_uop
                                                              [3U][0U] 
                                                              << 7U))))));
                __VdlyVal__OUT_uop__v87[0U] = ((0xc00fffffU 
                                                & __VdlyVal__OUT_uop__v87[0U]) 
                                               | (0xfff00000U 
                                                  & ((0x38000000U 
                                                      & (vlSelfRef.__PVT__IN_uop
                                                         [3U][0U] 
                                                         << 0x19U)) 
                                                     | (vlSelfRef.__PVT__storeSqNs
                                                        [4U] 
                                                        << 0x14U))));
                __VdlyVal__OUT_uop__v87[0U] = ((0x3fffffffU 
                                                & __VdlyVal__OUT_uop__v87[0U]) 
                                               | (0xc0000000U 
                                                  & (vlSelfRef.__PVT__IN_uop
                                                     [3U][0U] 
                                                     << 0x19U)));
                __VdlyVal__OUT_uop__v87[1U] = ((0xfffffff8U 
                                                & __VdlyVal__OUT_uop__v87[1U]) 
                                               | (7U 
                                                  & (vlSelfRef.__PVT__IN_uop
                                                     [3U][0U] 
                                                     >> 7U)));
                __VdlyVal__OUT_uop__v87[1U] = ((0xffe00007U 
                                                & __VdlyVal__OUT_uop__v87[1U]) 
                                               | (0xfffffff8U 
                                                  & ((vlSelfRef.__PVT__newTags
                                                      [3U] 
                                                      << 0xeU) 
                                                     | (0x3ff8U 
                                                        & (vlSelfRef.__PVT__IN_uop
                                                           [3U][0U] 
                                                           >> 0xbU)))));
                __VdlyVal__OUT_uop__v87[1U] = ((0x1fffffU 
                                                & __VdlyVal__OUT_uop__v87[1U]) 
                                               | (vlSelfRef.__PVT__RAT_issueSqNs
                                                  [3U] 
                                                  << 0x15U));
                __VdlyVal__OUT_uop__v87[2U] = ((0xfffffff8U 
                                                & __VdlyVal__OUT_uop__v87[2U]) 
                                               | (0x1fffffU 
                                                  & (4U 
                                                     | (vlSelfRef.__PVT__RAT_issueSqNs
                                                        [3U] 
                                                        >> 0xbU))));
                __VdlyVal__OUT_uop__v87[2U] = ((0xffe00007U 
                                                & __VdlyVal__OUT_uop__v87[2U]) 
                                               | (0xfffffff8U 
                                                  & (8U 
                                                     | (((vlSelfRef.__PVT__RAT_lookupAvail
                                                          [6U] 
                                                          << 0x14U) 
                                                         | ((vlSelfRef.__PVT__RAT_lookupSpecTag
                                                             [6U] 
                                                             << 0xdU) 
                                                            | (vlSelfRef.__PVT__RAT_lookupAvail
                                                               [7U] 
                                                               << 0xcU))) 
                                                        | ((vlSelfRef.__PVT__RAT_lookupSpecTag
                                                            [7U] 
                                                            << 5U) 
                                                           | (0x10U 
                                                              & (vlSelfRef.__PVT__IN_uop
                                                                 [3U][0U] 
                                                                 >> 0x15U)))))));
                __VdlyVal__OUT_uop__v87[2U] = ((0x1fffffU 
                                                & __VdlyVal__OUT_uop__v87[2U]) 
                                               | ((IData)(
                                                          (0xfffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelfRef.__PVT__IN_uop
                                                                               [3U][2U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__IN_uop
                                                                                [3U][1U])) 
                                                                 >> 4U)))) 
                                                  << 0x15U));
                __VdlyVal__OUT_uop__v87[3U] = (((IData)(
                                                        (0xfffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelfRef.__PVT__IN_uop
                                                                             [3U][2U])) 
                                                             << 0x1cU) 
                                                            | ((QData)((IData)(
                                                                               vlSelfRef.__PVT__IN_uop
                                                                               [3U][1U])) 
                                                               >> 4U)))) 
                                                >> 0xbU) 
                                               | ((IData)(
                                                          ((0xfffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelfRef.__PVT__IN_uop
                                                                                [3U][2U])) 
                                                                << 0x1cU) 
                                                               | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__IN_uop
                                                                                [3U][1U])) 
                                                                  >> 4U))) 
                                                           >> 0x20U)) 
                                                  << 0x15U));
                __VdlyVal__OUT_uop__v87[4U] = (1U & 
                                               ((IData)(
                                                        ((0xfffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelfRef.__PVT__IN_uop
                                                                              [3U][2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__IN_uop
                                                                                [3U][1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                >> 0xbU));
                __VdlySet__OUT_uop__v87 = 1U;
                if ((0xcU == (0xfU & (vlSelfRef.__PVT__IN_uop
                                      [3U][0U] >> 0xaU)))) {
                    __VdlyVal__OUT_uop__v88 = (0x1fU 
                                               & (vlSelfRef.__PVT__IN_uop
                                                  [3U][0U] 
                                                  >> 0xeU));
                    __VdlySet__OUT_uop__v88 = 1U;
                }
                if ((vlSelfRef.__PVT__isSc[3U] & (~ 
                                                  vlSelfRef.__PVT__scSuccessful
                                                  [3U]))) {
                    __VdlySet__OUT_uop__v89 = 1U;
                }
                if ((0xaU == (0xfU & (vlSelfRef.__PVT__IN_uop
                                      [3U][0U] >> 0xaU)))) {
                    __VdlyVal__OUT_uop__v90 = vlSelfRef.__PVT__newTags
                        [3U];
                    __VdlySet__OUT_uop__v90 = 1U;
                }
            }
        } else {
            __VdlySet__OUT_uop__v92 = 1U;
            if ((1U & (~ vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls))) {
                __VdlySet__OUT_uop__v93 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 4U)))) {
                __VdlySet__OUT_uop__v94 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 8U)))) {
                __VdlySet__OUT_uop__v95 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 0xcU)))) {
                __VdlySet__OUT_uop__v96 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 0x10U)))) {
                __VdlySet__OUT_uop__v97 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 0x14U)))) {
                __VdlySet__OUT_uop__v98 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 0x18U)))) {
                __VdlySet__OUT_uop__v99 = 1U;
            }
            __VdlySet__OUT_uop__v100 = 1U;
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 1U)))) {
                __VdlySet__OUT_uop__v101 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 5U)))) {
                __VdlySet__OUT_uop__v102 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 9U)))) {
                __VdlySet__OUT_uop__v103 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 0xdU)))) {
                __VdlySet__OUT_uop__v104 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 0x11U)))) {
                __VdlySet__OUT_uop__v105 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 0x15U)))) {
                __VdlySet__OUT_uop__v106 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 0x19U)))) {
                __VdlySet__OUT_uop__v107 = 1U;
            }
            __VdlySet__OUT_uop__v108 = 1U;
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 2U)))) {
                __VdlySet__OUT_uop__v109 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 6U)))) {
                __VdlySet__OUT_uop__v110 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 0xaU)))) {
                __VdlySet__OUT_uop__v111 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 0xeU)))) {
                __VdlySet__OUT_uop__v112 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 0x12U)))) {
                __VdlySet__OUT_uop__v113 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 0x16U)))) {
                __VdlySet__OUT_uop__v114 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 0x1aU)))) {
                __VdlySet__OUT_uop__v115 = 1U;
            }
            __VdlySet__OUT_uop__v116 = 1U;
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 3U)))) {
                __VdlySet__OUT_uop__v117 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 7U)))) {
                __VdlySet__OUT_uop__v118 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 0xbU)))) {
                __VdlySet__OUT_uop__v119 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 0xfU)))) {
                __VdlySet__OUT_uop__v120 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 0x13U)))) {
                __VdlySet__OUT_uop__v121 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 0x17U)))) {
                __VdlySet__OUT_uop__v122 = 1U;
            }
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                          >> 0x1bU)))) {
                __VdlySet__OUT_uop__v123 = 1U;
            }
        }
    }
    if (__VdlySet__OUT_uop__v0) {
        vlSelfRef.__PVT__OUT_uop[0U][0U] = 0U;
        vlSelfRef.__PVT__OUT_uop[0U][1U] = 0U;
        vlSelfRef.__PVT__OUT_uop[0U][2U] = 0U;
        vlSelfRef.__PVT__OUT_uop[0U][3U] = 0U;
        vlSelfRef.__PVT__OUT_uop[0U][4U] = 0U;
        vlSelfRef.__PVT__OUT_uop[1U][0U] = 0U;
        vlSelfRef.__PVT__OUT_uop[1U][1U] = 0U;
        vlSelfRef.__PVT__OUT_uop[1U][2U] = 0U;
        vlSelfRef.__PVT__OUT_uop[1U][3U] = 0U;
        vlSelfRef.__PVT__OUT_uop[1U][4U] = 0U;
        vlSelfRef.__PVT__OUT_uop[2U][0U] = 0U;
        vlSelfRef.__PVT__OUT_uop[2U][1U] = 0U;
        vlSelfRef.__PVT__OUT_uop[2U][2U] = 0U;
        vlSelfRef.__PVT__OUT_uop[2U][3U] = 0U;
        vlSelfRef.__PVT__OUT_uop[2U][4U] = 0U;
        vlSelfRef.__PVT__OUT_uop[3U][0U] = 0U;
        vlSelfRef.__PVT__OUT_uop[3U][1U] = 0U;
        vlSelfRef.__PVT__OUT_uop[3U][2U] = 0U;
        vlSelfRef.__PVT__OUT_uop[3U][3U] = 0U;
        vlSelfRef.__PVT__OUT_uop[3U][4U] = 0U;
    }
    if (__VdlySet__OUT_uop__v4) {
        vlSelfRef.__PVT__OUT_uop[0U][0U] = 0U;
        vlSelfRef.__PVT__OUT_uop[0U][1U] = 0U;
        vlSelfRef.__PVT__OUT_uop[0U][2U] = 0U;
        vlSelfRef.__PVT__OUT_uop[0U][3U] = 0U;
        vlSelfRef.__PVT__OUT_uop[0U][4U] = 0U;
    }
    if (__VdlySet__OUT_uop__v5) {
        vlSelfRef.__PVT__OUT_uop[1U][0U] = 0U;
        vlSelfRef.__PVT__OUT_uop[1U][1U] = 0U;
        vlSelfRef.__PVT__OUT_uop[1U][2U] = 0U;
        vlSelfRef.__PVT__OUT_uop[1U][3U] = 0U;
        vlSelfRef.__PVT__OUT_uop[1U][4U] = 0U;
    }
    if (__VdlySet__OUT_uop__v6) {
        vlSelfRef.__PVT__OUT_uop[2U][0U] = 0U;
        vlSelfRef.__PVT__OUT_uop[2U][1U] = 0U;
        vlSelfRef.__PVT__OUT_uop[2U][2U] = 0U;
        vlSelfRef.__PVT__OUT_uop[2U][3U] = 0U;
        vlSelfRef.__PVT__OUT_uop[2U][4U] = 0U;
    }
    if (__VdlySet__OUT_uop__v7) {
        vlSelfRef.__PVT__OUT_uop[3U][0U] = 0U;
        vlSelfRef.__PVT__OUT_uop[3U][1U] = 0U;
        vlSelfRef.__PVT__OUT_uop[3U][2U] = 0U;
        vlSelfRef.__PVT__OUT_uop[3U][3U] = 0U;
        vlSelfRef.__PVT__OUT_uop[3U][4U] = 0U;
    }
    if (__VdlySet__OUT_uop__v8) {
        vlSelfRef.__PVT__OUT_uop[0U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [0U][2U]);
    }
    if (__VdlySet__OUT_uop__v9) {
        vlSelfRef.__PVT__OUT_uop[0U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [0U][2U]);
    }
    if (__VdlySet__OUT_uop__v10) {
        vlSelfRef.__PVT__OUT_uop[0U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [0U][2U]);
    }
    if (__VdlySet__OUT_uop__v11) {
        vlSelfRef.__PVT__OUT_uop[1U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [1U][2U]);
    }
    if (__VdlySet__OUT_uop__v12) {
        vlSelfRef.__PVT__OUT_uop[1U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [1U][2U]);
    }
    if (__VdlySet__OUT_uop__v13) {
        vlSelfRef.__PVT__OUT_uop[1U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [1U][2U]);
    }
    if (__VdlySet__OUT_uop__v14) {
        vlSelfRef.__PVT__OUT_uop[2U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [2U][2U]);
    }
    if (__VdlySet__OUT_uop__v15) {
        vlSelfRef.__PVT__OUT_uop[2U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [2U][2U]);
    }
    if (__VdlySet__OUT_uop__v16) {
        vlSelfRef.__PVT__OUT_uop[2U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [2U][2U]);
    }
    if (__VdlySet__OUT_uop__v17) {
        vlSelfRef.__PVT__OUT_uop[3U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [3U][2U]);
    }
    if (__VdlySet__OUT_uop__v18) {
        vlSelfRef.__PVT__OUT_uop[3U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [3U][2U]);
    }
    if (__VdlySet__OUT_uop__v19) {
        vlSelfRef.__PVT__OUT_uop[3U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [3U][2U]);
    }
    if (__VdlySet__OUT_uop__v20) {
        vlSelfRef.__PVT__OUT_uop[0U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [0U][2U]);
    }
    if (__VdlySet__OUT_uop__v21) {
        vlSelfRef.__PVT__OUT_uop[0U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [0U][2U]);
    }
    if (__VdlySet__OUT_uop__v22) {
        vlSelfRef.__PVT__OUT_uop[0U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [0U][2U]);
    }
    if (__VdlySet__OUT_uop__v23) {
        vlSelfRef.__PVT__OUT_uop[1U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [1U][2U]);
    }
    if (__VdlySet__OUT_uop__v24) {
        vlSelfRef.__PVT__OUT_uop[1U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [1U][2U]);
    }
    if (__VdlySet__OUT_uop__v25) {
        vlSelfRef.__PVT__OUT_uop[1U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [1U][2U]);
    }
    if (__VdlySet__OUT_uop__v26) {
        vlSelfRef.__PVT__OUT_uop[2U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [2U][2U]);
    }
    if (__VdlySet__OUT_uop__v27) {
        vlSelfRef.__PVT__OUT_uop[2U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [2U][2U]);
    }
    if (__VdlySet__OUT_uop__v28) {
        vlSelfRef.__PVT__OUT_uop[2U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [2U][2U]);
    }
    if (__VdlySet__OUT_uop__v29) {
        vlSelfRef.__PVT__OUT_uop[3U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [3U][2U]);
    }
    if (__VdlySet__OUT_uop__v30) {
        vlSelfRef.__PVT__OUT_uop[3U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [3U][2U]);
    }
    if (__VdlySet__OUT_uop__v31) {
        vlSelfRef.__PVT__OUT_uop[3U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [3U][2U]);
    }
    if (__VdlySet__OUT_uop__v32) {
        vlSelfRef.__PVT__OUT_uop[0U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [0U][2U]);
    }
    if (__VdlySet__OUT_uop__v33) {
        vlSelfRef.__PVT__OUT_uop[0U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [0U][2U]);
    }
    if (__VdlySet__OUT_uop__v34) {
        vlSelfRef.__PVT__OUT_uop[0U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [0U][2U]);
    }
    if (__VdlySet__OUT_uop__v35) {
        vlSelfRef.__PVT__OUT_uop[1U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [1U][2U]);
    }
    if (__VdlySet__OUT_uop__v36) {
        vlSelfRef.__PVT__OUT_uop[1U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [1U][2U]);
    }
    if (__VdlySet__OUT_uop__v37) {
        vlSelfRef.__PVT__OUT_uop[1U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [1U][2U]);
    }
    if (__VdlySet__OUT_uop__v38) {
        vlSelfRef.__PVT__OUT_uop[2U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [2U][2U]);
    }
    if (__VdlySet__OUT_uop__v39) {
        vlSelfRef.__PVT__OUT_uop[2U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [2U][2U]);
    }
    if (__VdlySet__OUT_uop__v40) {
        vlSelfRef.__PVT__OUT_uop[2U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [2U][2U]);
    }
    if (__VdlySet__OUT_uop__v41) {
        vlSelfRef.__PVT__OUT_uop[3U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [3U][2U]);
    }
    if (__VdlySet__OUT_uop__v42) {
        vlSelfRef.__PVT__OUT_uop[3U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [3U][2U]);
    }
    if (__VdlySet__OUT_uop__v43) {
        vlSelfRef.__PVT__OUT_uop[3U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [3U][2U]);
    }
    if (__VdlySet__OUT_uop__v44) {
        vlSelfRef.__PVT__OUT_uop[0U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [0U][2U]);
    }
    if (__VdlySet__OUT_uop__v45) {
        vlSelfRef.__PVT__OUT_uop[0U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [0U][2U]);
    }
    if (__VdlySet__OUT_uop__v46) {
        vlSelfRef.__PVT__OUT_uop[0U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [0U][2U]);
    }
    if (__VdlySet__OUT_uop__v47) {
        vlSelfRef.__PVT__OUT_uop[1U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [1U][2U]);
    }
    if (__VdlySet__OUT_uop__v48) {
        vlSelfRef.__PVT__OUT_uop[1U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [1U][2U]);
    }
    if (__VdlySet__OUT_uop__v49) {
        vlSelfRef.__PVT__OUT_uop[1U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [1U][2U]);
    }
    if (__VdlySet__OUT_uop__v50) {
        vlSelfRef.__PVT__OUT_uop[2U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [2U][2U]);
    }
    if (__VdlySet__OUT_uop__v51) {
        vlSelfRef.__PVT__OUT_uop[2U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [2U][2U]);
    }
    if (__VdlySet__OUT_uop__v52) {
        vlSelfRef.__PVT__OUT_uop[2U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [2U][2U]);
    }
    if (__VdlySet__OUT_uop__v53) {
        vlSelfRef.__PVT__OUT_uop[3U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [3U][2U]);
    }
    if (__VdlySet__OUT_uop__v54) {
        vlSelfRef.__PVT__OUT_uop[3U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [3U][2U]);
    }
    if (__VdlySet__OUT_uop__v55) {
        vlSelfRef.__PVT__OUT_uop[3U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [3U][2U]);
    }
    if (__VdlySet__OUT_uop__v56) {
        vlSelfRef.__PVT__OUT_uop[0U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [0U][2U]);
    }
    if (__VdlySet__OUT_uop__v57) {
        vlSelfRef.__PVT__OUT_uop[0U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [0U][2U]);
    }
    if (__VdlySet__OUT_uop__v58) {
        vlSelfRef.__PVT__OUT_uop[0U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [0U][2U]);
    }
    if (__VdlySet__OUT_uop__v59) {
        vlSelfRef.__PVT__OUT_uop[1U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [1U][2U]);
    }
    if (__VdlySet__OUT_uop__v60) {
        vlSelfRef.__PVT__OUT_uop[1U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [1U][2U]);
    }
    if (__VdlySet__OUT_uop__v61) {
        vlSelfRef.__PVT__OUT_uop[1U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [1U][2U]);
    }
    if (__VdlySet__OUT_uop__v62) {
        vlSelfRef.__PVT__OUT_uop[2U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [2U][2U]);
    }
    if (__VdlySet__OUT_uop__v63) {
        vlSelfRef.__PVT__OUT_uop[2U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [2U][2U]);
    }
    if (__VdlySet__OUT_uop__v64) {
        vlSelfRef.__PVT__OUT_uop[2U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [2U][2U]);
    }
    if (__VdlySet__OUT_uop__v65) {
        vlSelfRef.__PVT__OUT_uop[3U][2U] = (0x100000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [3U][2U]);
    }
    if (__VdlySet__OUT_uop__v66) {
        vlSelfRef.__PVT__OUT_uop[3U][2U] = (0x1000U 
                                            | vlSelfRef.__PVT__OUT_uop
                                            [3U][2U]);
    }
    if (__VdlySet__OUT_uop__v67) {
        vlSelfRef.__PVT__OUT_uop[3U][2U] = (8U | vlSelfRef.__PVT__OUT_uop
                                            [3U][2U]);
    }
    if (__VdlySet__OUT_uop__v68) {
        vlSelfRef.__PVT__OUT_uop[0U][0U] = 0U;
        vlSelfRef.__PVT__OUT_uop[0U][1U] = 0U;
        vlSelfRef.__PVT__OUT_uop[0U][2U] = 0U;
        vlSelfRef.__PVT__OUT_uop[0U][3U] = 0U;
        vlSelfRef.__PVT__OUT_uop[0U][4U] = 0U;
    }
    if (__VdlySet__OUT_uop__v69) {
        vlSelfRef.__PVT__OUT_uop[0U][0U] = __VdlyVal__OUT_uop__v69[0U];
        vlSelfRef.__PVT__OUT_uop[0U][1U] = __VdlyVal__OUT_uop__v69[1U];
        vlSelfRef.__PVT__OUT_uop[0U][2U] = __VdlyVal__OUT_uop__v69[2U];
        vlSelfRef.__PVT__OUT_uop[0U][3U] = __VdlyVal__OUT_uop__v69[3U];
        vlSelfRef.__PVT__OUT_uop[0U][4U] = __VdlyVal__OUT_uop__v69[4U];
    }
    if (__VdlySet__OUT_uop__v70) {
        vlSelfRef.__PVT__OUT_uop[0U][1U] = ((0xffffc1ffU 
                                             & vlSelfRef.__PVT__OUT_uop
                                             [0U][1U]) 
                                            | ((IData)(__VdlyVal__OUT_uop__v70) 
                                               << 9U));
    }
    if (__VdlySet__OUT_uop__v71) {
        vlSelfRef.__PVT__OUT_uop[0U][0U] = (0x1200U 
                                            | (0xffffe1ffU 
                                               & vlSelfRef.__PVT__OUT_uop
                                               [0U][0U]));
    }
    if (__VdlySet__OUT_uop__v72) {
        vlSelfRef.__PVT__OUT_uop[0U][1U] = ((0xfffffffU 
                                             & vlSelfRef.__PVT__OUT_uop
                                             [0U][1U]) 
                                            | ((IData)(__VdlyVal__OUT_uop__v72) 
                                               << 0x1cU));
        vlSelfRef.__PVT__OUT_uop[0U][2U] = ((0xfffffff8U 
                                             & vlSelfRef.__PVT__OUT_uop
                                             [0U][2U]) 
                                            | ((IData)(__VdlyVal__OUT_uop__v72) 
                                               >> 4U));
        vlSelfRef.__PVT__OUT_uop[0U][2U] = (0xfffffff7U 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [0U][2U]);
    }
    if (__VdlySet__OUT_uop__v74) {
        vlSelfRef.__PVT__OUT_uop[1U][0U] = 0U;
        vlSelfRef.__PVT__OUT_uop[1U][1U] = 0U;
        vlSelfRef.__PVT__OUT_uop[1U][2U] = 0U;
        vlSelfRef.__PVT__OUT_uop[1U][3U] = 0U;
        vlSelfRef.__PVT__OUT_uop[1U][4U] = 0U;
    }
    if (__VdlySet__OUT_uop__v75) {
        vlSelfRef.__PVT__OUT_uop[1U][0U] = __VdlyVal__OUT_uop__v75[0U];
        vlSelfRef.__PVT__OUT_uop[1U][1U] = __VdlyVal__OUT_uop__v75[1U];
        vlSelfRef.__PVT__OUT_uop[1U][2U] = __VdlyVal__OUT_uop__v75[2U];
        vlSelfRef.__PVT__OUT_uop[1U][3U] = __VdlyVal__OUT_uop__v75[3U];
        vlSelfRef.__PVT__OUT_uop[1U][4U] = __VdlyVal__OUT_uop__v75[4U];
    }
    if (__VdlySet__OUT_uop__v76) {
        vlSelfRef.__PVT__OUT_uop[1U][1U] = ((0xffffc1ffU 
                                             & vlSelfRef.__PVT__OUT_uop
                                             [1U][1U]) 
                                            | ((IData)(__VdlyVal__OUT_uop__v76) 
                                               << 9U));
    }
    if (__VdlySet__OUT_uop__v77) {
        vlSelfRef.__PVT__OUT_uop[1U][0U] = (0x1200U 
                                            | (0xffffe1ffU 
                                               & vlSelfRef.__PVT__OUT_uop
                                               [1U][0U]));
    }
    if (__VdlySet__OUT_uop__v78) {
        vlSelfRef.__PVT__OUT_uop[1U][1U] = ((0xfffffffU 
                                             & vlSelfRef.__PVT__OUT_uop
                                             [1U][1U]) 
                                            | ((IData)(__VdlyVal__OUT_uop__v78) 
                                               << 0x1cU));
        vlSelfRef.__PVT__OUT_uop[1U][2U] = ((0xfffffff8U 
                                             & vlSelfRef.__PVT__OUT_uop
                                             [1U][2U]) 
                                            | ((IData)(__VdlyVal__OUT_uop__v78) 
                                               >> 4U));
        vlSelfRef.__PVT__OUT_uop[1U][2U] = (0xfffffff7U 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [1U][2U]);
    }
    if (__VdlySet__OUT_uop__v80) {
        vlSelfRef.__PVT__OUT_uop[2U][0U] = 0U;
        vlSelfRef.__PVT__OUT_uop[2U][1U] = 0U;
        vlSelfRef.__PVT__OUT_uop[2U][2U] = 0U;
        vlSelfRef.__PVT__OUT_uop[2U][3U] = 0U;
        vlSelfRef.__PVT__OUT_uop[2U][4U] = 0U;
    }
    if (__VdlySet__OUT_uop__v81) {
        vlSelfRef.__PVT__OUT_uop[2U][0U] = __VdlyVal__OUT_uop__v81[0U];
        vlSelfRef.__PVT__OUT_uop[2U][1U] = __VdlyVal__OUT_uop__v81[1U];
        vlSelfRef.__PVT__OUT_uop[2U][2U] = __VdlyVal__OUT_uop__v81[2U];
        vlSelfRef.__PVT__OUT_uop[2U][3U] = __VdlyVal__OUT_uop__v81[3U];
        vlSelfRef.__PVT__OUT_uop[2U][4U] = __VdlyVal__OUT_uop__v81[4U];
    }
    if (__VdlySet__OUT_uop__v82) {
        vlSelfRef.__PVT__OUT_uop[2U][1U] = ((0xffffc1ffU 
                                             & vlSelfRef.__PVT__OUT_uop
                                             [2U][1U]) 
                                            | ((IData)(__VdlyVal__OUT_uop__v82) 
                                               << 9U));
    }
    if (__VdlySet__OUT_uop__v83) {
        vlSelfRef.__PVT__OUT_uop[2U][0U] = (0x1200U 
                                            | (0xffffe1ffU 
                                               & vlSelfRef.__PVT__OUT_uop
                                               [2U][0U]));
    }
    if (__VdlySet__OUT_uop__v84) {
        vlSelfRef.__PVT__OUT_uop[2U][1U] = ((0xfffffffU 
                                             & vlSelfRef.__PVT__OUT_uop
                                             [2U][1U]) 
                                            | ((IData)(__VdlyVal__OUT_uop__v84) 
                                               << 0x1cU));
        vlSelfRef.__PVT__OUT_uop[2U][2U] = ((0xfffffff8U 
                                             & vlSelfRef.__PVT__OUT_uop
                                             [2U][2U]) 
                                            | ((IData)(__VdlyVal__OUT_uop__v84) 
                                               >> 4U));
        vlSelfRef.__PVT__OUT_uop[2U][2U] = (0xfffffff7U 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [2U][2U]);
    }
    if (__VdlySet__OUT_uop__v86) {
        vlSelfRef.__PVT__OUT_uop[3U][0U] = 0U;
        vlSelfRef.__PVT__OUT_uop[3U][1U] = 0U;
        vlSelfRef.__PVT__OUT_uop[3U][2U] = 0U;
        vlSelfRef.__PVT__OUT_uop[3U][3U] = 0U;
        vlSelfRef.__PVT__OUT_uop[3U][4U] = 0U;
    }
    if (__VdlySet__OUT_uop__v87) {
        vlSelfRef.__PVT__OUT_uop[3U][0U] = __VdlyVal__OUT_uop__v87[0U];
        vlSelfRef.__PVT__OUT_uop[3U][1U] = __VdlyVal__OUT_uop__v87[1U];
        vlSelfRef.__PVT__OUT_uop[3U][2U] = __VdlyVal__OUT_uop__v87[2U];
        vlSelfRef.__PVT__OUT_uop[3U][3U] = __VdlyVal__OUT_uop__v87[3U];
        vlSelfRef.__PVT__OUT_uop[3U][4U] = __VdlyVal__OUT_uop__v87[4U];
    }
    if (__VdlySet__OUT_uop__v88) {
        vlSelfRef.__PVT__OUT_uop[3U][1U] = ((0xffffc1ffU 
                                             & vlSelfRef.__PVT__OUT_uop
                                             [3U][1U]) 
                                            | ((IData)(__VdlyVal__OUT_uop__v88) 
                                               << 9U));
    }
    if (__VdlySet__OUT_uop__v89) {
        vlSelfRef.__PVT__OUT_uop[3U][0U] = (0x1200U 
                                            | (0xffffe1ffU 
                                               & vlSelfRef.__PVT__OUT_uop
                                               [3U][0U]));
    }
    if (__VdlySet__OUT_uop__v90) {
        vlSelfRef.__PVT__OUT_uop[3U][1U] = ((0xfffffffU 
                                             & vlSelfRef.__PVT__OUT_uop
                                             [3U][1U]) 
                                            | ((IData)(__VdlyVal__OUT_uop__v90) 
                                               << 0x1cU));
        vlSelfRef.__PVT__OUT_uop[3U][2U] = ((0xfffffff8U 
                                             & vlSelfRef.__PVT__OUT_uop
                                             [3U][2U]) 
                                            | ((IData)(__VdlyVal__OUT_uop__v90) 
                                               >> 4U));
        vlSelfRef.__PVT__OUT_uop[3U][2U] = (0xfffffff7U 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [3U][2U]);
    }
    if (__VdlySet__OUT_uop__v92) {
        vlSelfRef.__PVT__OUT_uop[0U][0U] = (0xfffffffeU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [0U][0U]);
    }
    if (__VdlySet__OUT_uop__v93) {
        vlSelfRef.__PVT__OUT_uop[0U][0U] = (0xfffffffdU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [0U][0U]);
    }
    if (__VdlySet__OUT_uop__v94) {
        vlSelfRef.__PVT__OUT_uop[0U][0U] = (0xfffffffbU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [0U][0U]);
    }
    if (__VdlySet__OUT_uop__v95) {
        vlSelfRef.__PVT__OUT_uop[0U][0U] = (0xfffffff7U 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [0U][0U]);
    }
    if (__VdlySet__OUT_uop__v96) {
        vlSelfRef.__PVT__OUT_uop[0U][0U] = (0xffffffefU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [0U][0U]);
    }
    if (__VdlySet__OUT_uop__v97) {
        vlSelfRef.__PVT__OUT_uop[0U][0U] = (0xffffffdfU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [0U][0U]);
    }
    if (__VdlySet__OUT_uop__v98) {
        vlSelfRef.__PVT__OUT_uop[0U][0U] = (0xffffffbfU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [0U][0U]);
    }
    if (__VdlySet__OUT_uop__v99) {
        vlSelfRef.__PVT__OUT_uop[0U][0U] = (0xffffff7fU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [0U][0U]);
    }
    if (__VdlySet__OUT_uop__v100) {
        vlSelfRef.__PVT__OUT_uop[1U][0U] = (0xfffffffeU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [1U][0U]);
    }
    if (__VdlySet__OUT_uop__v101) {
        vlSelfRef.__PVT__OUT_uop[1U][0U] = (0xfffffffdU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [1U][0U]);
    }
    if (__VdlySet__OUT_uop__v102) {
        vlSelfRef.__PVT__OUT_uop[1U][0U] = (0xfffffffbU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [1U][0U]);
    }
    if (__VdlySet__OUT_uop__v103) {
        vlSelfRef.__PVT__OUT_uop[1U][0U] = (0xfffffff7U 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [1U][0U]);
    }
    if (__VdlySet__OUT_uop__v104) {
        vlSelfRef.__PVT__OUT_uop[1U][0U] = (0xffffffefU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [1U][0U]);
    }
    if (__VdlySet__OUT_uop__v105) {
        vlSelfRef.__PVT__OUT_uop[1U][0U] = (0xffffffdfU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [1U][0U]);
    }
    if (__VdlySet__OUT_uop__v106) {
        vlSelfRef.__PVT__OUT_uop[1U][0U] = (0xffffffbfU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [1U][0U]);
    }
    if (__VdlySet__OUT_uop__v107) {
        vlSelfRef.__PVT__OUT_uop[1U][0U] = (0xffffff7fU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [1U][0U]);
    }
    if (__VdlySet__OUT_uop__v108) {
        vlSelfRef.__PVT__OUT_uop[2U][0U] = (0xfffffffeU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [2U][0U]);
    }
    if (__VdlySet__OUT_uop__v109) {
        vlSelfRef.__PVT__OUT_uop[2U][0U] = (0xfffffffdU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [2U][0U]);
    }
    if (__VdlySet__OUT_uop__v110) {
        vlSelfRef.__PVT__OUT_uop[2U][0U] = (0xfffffffbU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [2U][0U]);
    }
    if (__VdlySet__OUT_uop__v111) {
        vlSelfRef.__PVT__OUT_uop[2U][0U] = (0xfffffff7U 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [2U][0U]);
    }
    if (__VdlySet__OUT_uop__v112) {
        vlSelfRef.__PVT__OUT_uop[2U][0U] = (0xffffffefU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [2U][0U]);
    }
    if (__VdlySet__OUT_uop__v113) {
        vlSelfRef.__PVT__OUT_uop[2U][0U] = (0xffffffdfU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [2U][0U]);
    }
    if (__VdlySet__OUT_uop__v114) {
        vlSelfRef.__PVT__OUT_uop[2U][0U] = (0xffffffbfU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [2U][0U]);
    }
    if (__VdlySet__OUT_uop__v115) {
        vlSelfRef.__PVT__OUT_uop[2U][0U] = (0xffffff7fU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [2U][0U]);
    }
    if (__VdlySet__OUT_uop__v116) {
        vlSelfRef.__PVT__OUT_uop[3U][0U] = (0xfffffffeU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [3U][0U]);
    }
    if (__VdlySet__OUT_uop__v117) {
        vlSelfRef.__PVT__OUT_uop[3U][0U] = (0xfffffffdU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [3U][0U]);
    }
    if (__VdlySet__OUT_uop__v118) {
        vlSelfRef.__PVT__OUT_uop[3U][0U] = (0xfffffffbU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [3U][0U]);
    }
    if (__VdlySet__OUT_uop__v119) {
        vlSelfRef.__PVT__OUT_uop[3U][0U] = (0xfffffff7U 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [3U][0U]);
    }
    if (__VdlySet__OUT_uop__v120) {
        vlSelfRef.__PVT__OUT_uop[3U][0U] = (0xffffffefU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [3U][0U]);
    }
    if (__VdlySet__OUT_uop__v121) {
        vlSelfRef.__PVT__OUT_uop[3U][0U] = (0xffffffdfU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [3U][0U]);
    }
    if (__VdlySet__OUT_uop__v122) {
        vlSelfRef.__PVT__OUT_uop[3U][0U] = (0xffffffbfU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [3U][0U]);
    }
    if (__VdlySet__OUT_uop__v123) {
        vlSelfRef.__PVT__OUT_uop[3U][0U] = (0xffffff7fU 
                                            & vlSelfRef.__PVT__OUT_uop
                                            [3U][0U]);
    }
}

VL_INLINE_OPT void VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__1(VTop_Rename__WC5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__OUT_uopOrdering__v0;
    __VdlySet__OUT_uopOrdering__v0 = 0;
    CData/*1:0*/ __VdlyVal__OUT_uopOrdering__v4;
    __VdlyVal__OUT_uopOrdering__v4 = 0;
    CData/*0:0*/ __VdlySet__OUT_uopOrdering__v4;
    __VdlySet__OUT_uopOrdering__v4 = 0;
    CData/*1:0*/ __VdlyVal__OUT_uopOrdering__v5;
    __VdlyVal__OUT_uopOrdering__v5 = 0;
    CData/*0:0*/ __VdlySet__OUT_uopOrdering__v5;
    __VdlySet__OUT_uopOrdering__v5 = 0;
    CData/*1:0*/ __VdlyVal__OUT_uopOrdering__v6;
    __VdlyVal__OUT_uopOrdering__v6 = 0;
    CData/*0:0*/ __VdlySet__OUT_uopOrdering__v6;
    __VdlySet__OUT_uopOrdering__v6 = 0;
    CData/*1:0*/ __VdlyVal__OUT_uopOrdering__v7;
    __VdlyVal__OUT_uopOrdering__v7 = 0;
    CData/*0:0*/ __VdlySet__OUT_uopOrdering__v7;
    __VdlySet__OUT_uopOrdering__v7 = 0;
    // Body
    __VdlySet__OUT_uopOrdering__v0 = 0U;
    __VdlySet__OUT_uopOrdering__v4 = 0U;
    __VdlySet__OUT_uopOrdering__v5 = 0U;
    __VdlySet__OUT_uopOrdering__v6 = 0U;
    __VdlySet__OUT_uopOrdering__v7 = 0U;
    if (vlSymsp->TOP.rst) {
        __VdlySet__OUT_uopOrdering__v0 = 1U;
        vlSelfRef.__PVT__scheduler__DOT__prio_r = 0U;
        vlSelfRef.__PVT__counterLoadSqN = 0U;
        vlSelfRef.__PVT__counterStoreSqN = 0x7fU;
        vlSelfRef.__PVT__counterSqN = 0U;
        vlSelfRef.__PVT__failSc = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__cycleValid) & 
             vlSelfRef.__PVT__IN_uop[0U][0U])) {
            vlSelfRef.__PVT__scheduler__DOT__prio_r 
                = vlSelfRef.__PVT__scheduler__DOT__modTable
                [(7U & ((IData)(1U) + vlSelfRef.__PVT__SCHED_uopOrder
                        [0U]))];
        }
        if (((IData)(vlSelfRef.__PVT__cycleValid) & 
             vlSelfRef.__PVT__IN_uop[1U][0U])) {
            vlSelfRef.__PVT__scheduler__DOT__prio_r 
                = vlSelfRef.__PVT__scheduler__DOT__modTable
                [(7U & ((IData)(1U) + vlSelfRef.__PVT__SCHED_uopOrder
                        [1U]))];
        }
        if (((IData)(vlSelfRef.__PVT__cycleValid) & 
             vlSelfRef.__PVT__IN_uop[2U][0U])) {
            vlSelfRef.__PVT__scheduler__DOT__prio_r 
                = vlSelfRef.__PVT__scheduler__DOT__modTable
                [(7U & ((IData)(1U) + vlSelfRef.__PVT__SCHED_uopOrder
                        [2U]))];
        }
        if (((IData)(vlSelfRef.__PVT__cycleValid) & 
             vlSelfRef.__PVT__IN_uop[3U][0U])) {
            vlSelfRef.__PVT__scheduler__DOT__prio_r 
                = vlSelfRef.__PVT__scheduler__DOT__modTable
                [(7U & ((IData)(1U) + vlSelfRef.__PVT__SCHED_uopOrder
                        [3U]))];
        }
        if ((1U & vlSymsp->TOP__Top__soc__core.branch[0U])) {
            vlSelfRef.__PVT__counterLoadSqN = (0x7fU 
                                               & ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                   << 0x19U) 
                                                  | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                     >> 7U)));
            vlSelfRef.__PVT__counterStoreSqN = (0x7fU 
                                                & ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                    << 0x12U) 
                                                   | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                      >> 0xeU)));
            vlSelfRef.__PVT__counterSqN = (0x7fU & 
                                           ((IData)(1U) 
                                            + ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                << 0xbU) 
                                               | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                  >> 0x15U))));
            vlSelfRef.__PVT__failSc = (1U & (vlSymsp->TOP__Top__soc__core.branch[2U] 
                                             >> 4U));
        } else {
            vlSelfRef.__PVT__counterLoadSqN = (0x7fU 
                                               & vlSelfRef.__PVT__loadSqNs
                                               [4U]);
            vlSelfRef.__PVT__counterStoreSqN = (0x7fU 
                                                & vlSelfRef.__PVT__storeSqNs
                                                [4U]);
        }
        if (vlSelfRef.__PVT__cycleValid) {
            if ((1U & vlSelfRef.__PVT__IN_uop[0U][0U])) {
                __VdlyVal__OUT_uopOrdering__v4 = vlSelfRef.__PVT__SCHED_uopOrder
                    [0U];
                __VdlySet__OUT_uopOrdering__v4 = 1U;
                vlSelfRef.__PVT__failSc = 0U;
            }
            if ((1U & vlSelfRef.__PVT__IN_uop[1U][0U])) {
                __VdlyVal__OUT_uopOrdering__v5 = vlSelfRef.__PVT__SCHED_uopOrder
                    [1U];
                __VdlySet__OUT_uopOrdering__v5 = 1U;
                vlSelfRef.__PVT__failSc = 0U;
            }
            if ((1U & vlSelfRef.__PVT__IN_uop[2U][0U])) {
                __VdlyVal__OUT_uopOrdering__v6 = vlSelfRef.__PVT__SCHED_uopOrder
                    [2U];
                __VdlySet__OUT_uopOrdering__v6 = 1U;
                vlSelfRef.__PVT__failSc = 0U;
            }
            if ((1U & vlSelfRef.__PVT__IN_uop[3U][0U])) {
                __VdlyVal__OUT_uopOrdering__v7 = vlSelfRef.__PVT__SCHED_uopOrder
                    [3U];
                __VdlySet__OUT_uopOrdering__v7 = 1U;
                vlSelfRef.__PVT__failSc = 0U;
            }
            vlSelfRef.__PVT__counterSqN = vlSelfRef.__PVT__nextCounterSqN;
        }
    }
    if (__VdlySet__OUT_uopOrdering__v0) {
        vlSelfRef.__PVT__OUT_uopOrdering[0U] = 0U;
        vlSelfRef.__PVT__OUT_uopOrdering[1U] = 0U;
        vlSelfRef.__PVT__OUT_uopOrdering[2U] = 0U;
        vlSelfRef.__PVT__OUT_uopOrdering[3U] = 0U;
    }
    if (__VdlySet__OUT_uopOrdering__v4) {
        vlSelfRef.__PVT__OUT_uopOrdering[0U] = __VdlyVal__OUT_uopOrdering__v4;
    }
    if (__VdlySet__OUT_uopOrdering__v5) {
        vlSelfRef.__PVT__OUT_uopOrdering[1U] = __VdlyVal__OUT_uopOrdering__v5;
    }
    if (__VdlySet__OUT_uopOrdering__v6) {
        vlSelfRef.__PVT__OUT_uopOrdering[2U] = __VdlyVal__OUT_uopOrdering__v6;
    }
    if (__VdlySet__OUT_uopOrdering__v7) {
        vlSelfRef.__PVT__OUT_uopOrdering[3U] = __VdlyVal__OUT_uopOrdering__v7;
    }
}

VL_INLINE_OPT void VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__2(VTop_Rename__WC5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RAT_issueIDs[0U] = (0x1fU & (vlSelfRef.__PVT__IN_uop
                                                  [0U][0U] 
                                                  >> 0x14U));
    vlSelfRef.__PVT__RAT_issueIDs[1U] = (0x1fU & (vlSelfRef.__PVT__IN_uop
                                                  [1U][0U] 
                                                  >> 0x14U));
    vlSelfRef.__PVT__RAT_issueIDs[2U] = (0x1fU & (vlSelfRef.__PVT__IN_uop
                                                  [2U][0U] 
                                                  >> 0x14U));
    vlSelfRef.__PVT__RAT_issueIDs[3U] = (0x1fU & (vlSelfRef.__PVT__IN_uop
                                                  [3U][0U] 
                                                  >> 0x14U));
    vlSelfRef.__PVT__RAT_lookupIDs[0U] = (0x1fU & (
                                                   (vlSelfRef.__PVT__IN_uop
                                                    [0U][1U] 
                                                    << 1U) 
                                                   | (vlSelfRef.__PVT__IN_uop
                                                      [0U][0U] 
                                                      >> 0x1fU)));
    vlSelfRef.__PVT__RAT_lookupIDs[1U] = (0x1fU & (
                                                   vlSelfRef.__PVT__IN_uop
                                                   [0U][0U] 
                                                   >> 0x1aU));
    vlSelfRef.__PVT__RAT_lookupIDs[2U] = (0x1fU & (
                                                   (vlSelfRef.__PVT__IN_uop
                                                    [1U][1U] 
                                                    << 1U) 
                                                   | (vlSelfRef.__PVT__IN_uop
                                                      [1U][0U] 
                                                      >> 0x1fU)));
    vlSelfRef.__PVT__RAT_lookupIDs[3U] = (0x1fU & (
                                                   vlSelfRef.__PVT__IN_uop
                                                   [1U][0U] 
                                                   >> 0x1aU));
    vlSelfRef.__PVT__RAT_lookupIDs[4U] = (0x1fU & (
                                                   (vlSelfRef.__PVT__IN_uop
                                                    [2U][1U] 
                                                    << 1U) 
                                                   | (vlSelfRef.__PVT__IN_uop
                                                      [2U][0U] 
                                                      >> 0x1fU)));
    vlSelfRef.__PVT__RAT_lookupIDs[5U] = (0x1fU & (
                                                   vlSelfRef.__PVT__IN_uop
                                                   [2U][0U] 
                                                   >> 0x1aU));
    vlSelfRef.__PVT__RAT_lookupIDs[6U] = (0x1fU & (
                                                   (vlSelfRef.__PVT__IN_uop
                                                    [3U][1U] 
                                                    << 1U) 
                                                   | (vlSelfRef.__PVT__IN_uop
                                                      [3U][0U] 
                                                      >> 0x1fU)));
    vlSelfRef.__PVT__RAT_lookupIDs[7U] = (0x1fU & (
                                                   vlSelfRef.__PVT__IN_uop
                                                   [3U][0U] 
                                                   >> 0x1aU));
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueIDs[3U] 
        = vlSelfRef.__PVT__RAT_issueIDs[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueIDs[2U] 
        = vlSelfRef.__PVT__RAT_issueIDs[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueIDs[1U] 
        = vlSelfRef.__PVT__RAT_issueIDs[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueIDs[0U] 
        = vlSelfRef.__PVT__RAT_issueIDs[0U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_lookupIDs[7U] 
        = vlSelfRef.__PVT__RAT_lookupIDs[7U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_lookupIDs[6U] 
        = vlSelfRef.__PVT__RAT_lookupIDs[6U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_lookupIDs[5U] 
        = vlSelfRef.__PVT__RAT_lookupIDs[5U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_lookupIDs[4U] 
        = vlSelfRef.__PVT__RAT_lookupIDs[4U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_lookupIDs[3U] 
        = vlSelfRef.__PVT__RAT_lookupIDs[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_lookupIDs[2U] 
        = vlSelfRef.__PVT__RAT_lookupIDs[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_lookupIDs[1U] 
        = vlSelfRef.__PVT__RAT_lookupIDs[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_lookupIDs[0U] 
        = vlSelfRef.__PVT__RAT_lookupIDs[0U];
}

VL_INLINE_OPT void VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__3(VTop_Rename__WC5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__3\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TB_tagsValid[3U] = vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__OUT_issueTagsValid
        [3U];
    vlSelfRef.__PVT__TB_tagsValid[2U] = vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__OUT_issueTagsValid
        [2U];
    vlSelfRef.__PVT__TB_tagsValid[1U] = vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__OUT_issueTagsValid
        [1U];
    vlSelfRef.__PVT__TB_tagsValid[0U] = vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__OUT_issueTagsValid
        [0U];
}

VL_INLINE_OPT void VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__4(VTop_Rename__WC5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__4\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RAT_commitValid[0U] = (vlSelfRef.__PVT__IN_comUOp
                                            [0U] & 
                                            (0U != 
                                             (0x1fU 
                                              & (vlSelfRef.__PVT__IN_comUOp
                                                 [0U] 
                                                 >> 0x12U))));
    vlSelfRef.__PVT__RAT_commitValid[1U] = (vlSelfRef.__PVT__IN_comUOp
                                            [1U] & 
                                            (0U != 
                                             (0x1fU 
                                              & (vlSelfRef.__PVT__IN_comUOp
                                                 [1U] 
                                                 >> 0x12U))));
    vlSelfRef.__PVT__RAT_commitValid[2U] = (vlSelfRef.__PVT__IN_comUOp
                                            [2U] & 
                                            (0U != 
                                             (0x1fU 
                                              & (vlSelfRef.__PVT__IN_comUOp
                                                 [2U] 
                                                 >> 0x12U))));
    vlSelfRef.__PVT__RAT_commitValid[3U] = (vlSelfRef.__PVT__IN_comUOp
                                            [3U] & 
                                            (0U != 
                                             (0x1fU 
                                              & (vlSelfRef.__PVT__IN_comUOp
                                                 [3U] 
                                                 >> 0x12U))));
    vlSelfRef.__PVT__TB_commitValid[0U] = (1U & vlSelfRef.__PVT__IN_comUOp
                                           [0U]);
    vlSelfRef.__PVT__TB_commitValid[1U] = (1U & vlSelfRef.__PVT__IN_comUOp
                                           [1U]);
    vlSelfRef.__PVT__TB_commitValid[2U] = (1U & vlSelfRef.__PVT__IN_comUOp
                                           [2U]);
    vlSelfRef.__PVT__TB_commitValid[3U] = (1U & vlSelfRef.__PVT__IN_comUOp
                                           [3U]);
    vlSelfRef.__PVT__isNewestCommit[0U] = (vlSelfRef.__PVT__IN_comUOp
                                           [0U] & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelfRef.__PVT__IN_comUOp
                                                       [0U] 
                                                       >> 0x12U))));
    if ((1U & vlSelfRef.__PVT__IN_comUOp[0U])) {
        if ((vlSelfRef.__PVT__IN_comUOp[1U] & ((0x1fU 
                                                & (vlSelfRef.__PVT__IN_comUOp
                                                   [1U] 
                                                   >> 0x12U)) 
                                               == (0x1fU 
                                                   & (vlSelfRef.__PVT__IN_comUOp
                                                      [0U] 
                                                      >> 0x12U))))) {
            vlSelfRef.__PVT__isNewestCommit[0U] = 0U;
        }
        if ((vlSelfRef.__PVT__IN_comUOp[2U] & ((0x1fU 
                                                & (vlSelfRef.__PVT__IN_comUOp
                                                   [2U] 
                                                   >> 0x12U)) 
                                               == (0x1fU 
                                                   & (vlSelfRef.__PVT__IN_comUOp
                                                      [0U] 
                                                      >> 0x12U))))) {
            vlSelfRef.__PVT__isNewestCommit[0U] = 0U;
        }
        if ((vlSelfRef.__PVT__IN_comUOp[3U] & ((0x1fU 
                                                & (vlSelfRef.__PVT__IN_comUOp
                                                   [3U] 
                                                   >> 0x12U)) 
                                               == (0x1fU 
                                                   & (vlSelfRef.__PVT__IN_comUOp
                                                      [0U] 
                                                      >> 0x12U))))) {
            vlSelfRef.__PVT__isNewestCommit[0U] = 0U;
        }
    }
    vlSelfRef.__PVT__isNewestCommit[1U] = (vlSelfRef.__PVT__IN_comUOp
                                           [1U] & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelfRef.__PVT__IN_comUOp
                                                       [1U] 
                                                       >> 0x12U))));
    if ((1U & vlSelfRef.__PVT__IN_comUOp[1U])) {
        if ((vlSelfRef.__PVT__IN_comUOp[2U] & ((0x1fU 
                                                & (vlSelfRef.__PVT__IN_comUOp
                                                   [2U] 
                                                   >> 0x12U)) 
                                               == (0x1fU 
                                                   & (vlSelfRef.__PVT__IN_comUOp
                                                      [1U] 
                                                      >> 0x12U))))) {
            vlSelfRef.__PVT__isNewestCommit[1U] = 0U;
        }
        if ((vlSelfRef.__PVT__IN_comUOp[3U] & ((0x1fU 
                                                & (vlSelfRef.__PVT__IN_comUOp
                                                   [3U] 
                                                   >> 0x12U)) 
                                               == (0x1fU 
                                                   & (vlSelfRef.__PVT__IN_comUOp
                                                      [1U] 
                                                      >> 0x12U))))) {
            vlSelfRef.__PVT__isNewestCommit[1U] = 0U;
        }
    }
    vlSelfRef.__PVT__isNewestCommit[2U] = (vlSelfRef.__PVT__IN_comUOp
                                           [2U] & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelfRef.__PVT__IN_comUOp
                                                       [2U] 
                                                       >> 0x12U))));
    if ((1U & vlSelfRef.__PVT__IN_comUOp[2U])) {
        if ((vlSelfRef.__PVT__IN_comUOp[3U] & ((0x1fU 
                                                & (vlSelfRef.__PVT__IN_comUOp
                                                   [3U] 
                                                   >> 0x12U)) 
                                               == (0x1fU 
                                                   & (vlSelfRef.__PVT__IN_comUOp
                                                      [2U] 
                                                      >> 0x12U))))) {
            vlSelfRef.__PVT__isNewestCommit[2U] = 0U;
        }
    }
    vlSelfRef.__PVT__isNewestCommit[3U] = (vlSelfRef.__PVT__IN_comUOp
                                           [3U] & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelfRef.__PVT__IN_comUOp
                                                       [3U] 
                                                       >> 0x12U))));
    vlSelfRef.__PVT__RAT_commitTags[0U] = (0x7fU & 
                                           (vlSelfRef.__PVT__IN_comUOp
                                            [0U] >> 0xbU));
    vlSelfRef.__PVT__RAT_commitTags[1U] = (0x7fU & 
                                           (vlSelfRef.__PVT__IN_comUOp
                                            [1U] >> 0xbU));
    vlSelfRef.__PVT__RAT_commitTags[2U] = (0x7fU & 
                                           (vlSelfRef.__PVT__IN_comUOp
                                            [2U] >> 0xbU));
    vlSelfRef.__PVT__RAT_commitTags[3U] = (0x7fU & 
                                           (vlSelfRef.__PVT__IN_comUOp
                                            [3U] >> 0xbU));
    vlSelfRef.__PVT__RAT_commitIDs[0U] = (0x1fU & (
                                                   vlSelfRef.__PVT__IN_comUOp
                                                   [0U] 
                                                   >> 0x12U));
    vlSelfRef.__PVT__RAT_commitIDs[1U] = (0x1fU & (
                                                   vlSelfRef.__PVT__IN_comUOp
                                                   [1U] 
                                                   >> 0x12U));
    vlSelfRef.__PVT__RAT_commitIDs[2U] = (0x1fU & (
                                                   vlSelfRef.__PVT__IN_comUOp
                                                   [2U] 
                                                   >> 0x12U));
    vlSelfRef.__PVT__RAT_commitIDs[3U] = (0x1fU & (
                                                   vlSelfRef.__PVT__IN_comUOp
                                                   [3U] 
                                                   >> 0x12U));
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitValid[3U] 
        = vlSelfRef.__PVT__RAT_commitValid[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitValid[2U] 
        = vlSelfRef.__PVT__RAT_commitValid[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitValid[1U] 
        = vlSelfRef.__PVT__RAT_commitValid[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitValid[0U] 
        = vlSelfRef.__PVT__RAT_commitValid[0U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitValid[3U] 
        = vlSelfRef.__PVT__TB_commitValid[3U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitValid[2U] 
        = vlSelfRef.__PVT__TB_commitValid[2U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitValid[1U] 
        = vlSelfRef.__PVT__TB_commitValid[1U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitValid[0U] 
        = vlSelfRef.__PVT__TB_commitValid[0U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitNewest[3U] 
        = vlSelfRef.__PVT__isNewestCommit[3U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitNewest[2U] 
        = vlSelfRef.__PVT__isNewestCommit[2U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitNewest[1U] 
        = vlSelfRef.__PVT__isNewestCommit[1U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitNewest[0U] 
        = vlSelfRef.__PVT__isNewestCommit[0U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitTags[3U] 
        = vlSelfRef.__PVT__RAT_commitTags[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitTags[2U] 
        = vlSelfRef.__PVT__RAT_commitTags[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitTags[1U] 
        = vlSelfRef.__PVT__RAT_commitTags[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitTags[0U] 
        = vlSelfRef.__PVT__RAT_commitTags[0U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitTagDst[3U] 
        = vlSelfRef.__PVT__RAT_commitTags[3U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitTagDst[2U] 
        = vlSelfRef.__PVT__RAT_commitTags[2U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitTagDst[1U] 
        = vlSelfRef.__PVT__RAT_commitTags[1U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_commitTagDst[0U] 
        = vlSelfRef.__PVT__RAT_commitTags[0U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitIDs[3U] 
        = vlSelfRef.__PVT__RAT_commitIDs[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitIDs[2U] 
        = vlSelfRef.__PVT__RAT_commitIDs[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitIDs[1U] 
        = vlSelfRef.__PVT__RAT_commitIDs[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_commitIDs[0U] 
        = vlSelfRef.__PVT__RAT_commitIDs[0U];
}

VL_INLINE_OPT void VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__5(VTop_Rename__WC5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__5\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RAT_commitPrevTags[3U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_commitPrevTags
        [3U];
    vlSelfRef.__PVT__RAT_commitPrevTags[2U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_commitPrevTags
        [2U];
    vlSelfRef.__PVT__RAT_commitPrevTags[1U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_commitPrevTags
        [1U];
    vlSelfRef.__PVT__RAT_commitPrevTags[0U] = vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__OUT_commitPrevTags
        [0U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_RAT_commitPrevTags[3U] 
        = vlSelfRef.__PVT__RAT_commitPrevTags[3U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_RAT_commitPrevTags[2U] 
        = vlSelfRef.__PVT__RAT_commitPrevTags[2U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_RAT_commitPrevTags[1U] 
        = vlSelfRef.__PVT__RAT_commitPrevTags[1U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_RAT_commitPrevTags[0U] 
        = vlSelfRef.__PVT__RAT_commitPrevTags[0U];
}

VL_INLINE_OPT void VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__6(VTop_Rename__WC5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__6\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TB_tags[3U] = vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__OUT_issueTags
        [3U];
    vlSelfRef.__PVT__TB_tags[2U] = vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__OUT_issueTags
        [2U];
    vlSelfRef.__PVT__TB_tags[1U] = vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__OUT_issueTags
        [1U];
    vlSelfRef.__PVT__TB_tags[0U] = vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__OUT_issueTags
        [0U];
    vlSelfRef.__PVT__portStall = (0xeU & (IData)(vlSelfRef.__PVT__portStall));
    vlSelfRef.__PVT__portStall = ((0xeU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (1U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls)));
    vlSelfRef.__PVT__portStall = ((0xeU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (1U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                              >> 4U))));
    vlSelfRef.__PVT__portStall = ((0xeU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (1U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                              >> 8U))));
    vlSelfRef.__PVT__portStall = ((0xeU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (1U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                              >> 0xcU))));
    vlSelfRef.__PVT__portStall = ((0xeU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (1U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                              >> 0x10U))));
    vlSelfRef.__PVT__portStall = ((0xeU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (1U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                              >> 0x14U))));
    vlSelfRef.__PVT__portStall = ((0xeU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (1U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                              >> 0x18U))));
    vlSelfRef.__PVT__portStall = (0xdU & (IData)(vlSelfRef.__PVT__portStall));
    vlSelfRef.__PVT__portStall = ((0xdU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (2U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls)));
    vlSelfRef.__PVT__portStall = ((0xdU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xffffffeU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 4U)))));
    vlSelfRef.__PVT__portStall = ((0xdU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xfffffeU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 8U)))));
    vlSelfRef.__PVT__portStall = ((0xdU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xffffeU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0xcU)))));
    vlSelfRef.__PVT__portStall = ((0xdU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xfffeU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0x10U)))));
    vlSelfRef.__PVT__portStall = ((0xdU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xffeU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0x14U)))));
    vlSelfRef.__PVT__portStall = ((0xdU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xfeU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0x18U)))));
    vlSelfRef.__PVT__portStall = (0xbU & (IData)(vlSelfRef.__PVT__portStall));
    vlSelfRef.__PVT__portStall = ((0xbU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (4U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls)));
    vlSelfRef.__PVT__portStall = ((0xbU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xffffffcU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 4U)))));
    vlSelfRef.__PVT__portStall = ((0xbU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xfffffcU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 8U)))));
    vlSelfRef.__PVT__portStall = ((0xbU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xffffcU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0xcU)))));
    vlSelfRef.__PVT__portStall = ((0xbU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xfffcU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0x10U)))));
    vlSelfRef.__PVT__portStall = ((0xbU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xffcU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0x14U)))));
    vlSelfRef.__PVT__portStall = ((0xbU & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xfcU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0x18U)))));
    vlSelfRef.__PVT__portStall = (7U & (IData)(vlSelfRef.__PVT__portStall));
    vlSelfRef.__PVT__portStall = ((7U & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (8U & ((IData)(vlSelfRef.__PVT__portStall) 
                                           | vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls)));
    vlSelfRef.__PVT__portStall = ((7U & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xffffff8U 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 4U)))));
    vlSelfRef.__PVT__portStall = ((7U & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xfffff8U 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 8U)))));
    vlSelfRef.__PVT__portStall = ((7U & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xffff8U 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0xcU)))));
    vlSelfRef.__PVT__portStall = ((7U & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xfff8U 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0x10U)))));
    vlSelfRef.__PVT__portStall = ((7U & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(vlSelfRef.__PVT__portStall)) 
                                           | (0xff8U 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0x14U)))));
    vlSelfRef.__PVT__portStall = ((7U & (IData)(vlSelfRef.__PVT__portStall)) 
                                  | ((IData)((((IData)(vlSelfRef.__PVT__portStall) 
                                               >> 3U) 
                                              | (vlSymsp->TOP__Top__soc__core.__PVT__IQ_stalls 
                                                 >> 0x1bU))) 
                                     << 3U));
    vlSelfRef.__PVT__scSuccessful[0U] = (1U & (~ (IData)(vlSelfRef.__PVT__failSc)));
    vlSelfRef.__PVT__scSuccessful[1U] = 1U;
    vlSelfRef.__PVT__scSuccessful[2U] = 1U;
    vlSelfRef.__PVT__scSuccessful[3U] = 1U;
    vlSelfRef.__PVT__OUT_stall = (0U != (IData)(vlSelfRef.__PVT__portStall));
    vlSelfRef.__PVT__nextCounterSqN = vlSelfRef.__PVT__counterSqN;
    if (((IData)(vlSymsp->TOP__Top__soc__core.mispredFlush) 
         & vlSelfRef.__PVT__IN_uop[0U][0U])) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
    vlSelfRef.__PVT__isSc[0U] = ((3U == (0xfU & (vlSelfRef.__PVT__IN_uop
                                                 [0U][0U] 
                                                 >> 0xaU))) 
                                 & (6U == (0x3fU & 
                                           (vlSelfRef.__PVT__IN_uop
                                            [0U][0U] 
                                            >> 0xeU))));
    vlSelfRef.__PVT__TB_tagNeeded[0U] = (((((0U != 
                                             (0x1fU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [0U][0U] 
                                                 >> 0x14U))) 
                                            | (0xaU 
                                               == (0xfU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [0U][0U] 
                                                      >> 0xaU)))) 
                                           & (9U != 
                                              (0xfU 
                                               & (vlSelfRef.__PVT__IN_uop
                                                  [0U][0U] 
                                                  >> 0xaU)))) 
                                          & (0xcU != 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [0U][0U] 
                                                 >> 0xaU)))) 
                                         & (~ vlSelfRef.__PVT__isSc
                                            [0U]));
    if (((((~ vlSelfRef.__PVT__TB_tagsValid[0U]) & 
           vlSelfRef.__PVT__IN_uop[0U][0U]) & (IData)(vlSymsp->TOP__Top__soc__core.frontendEn)) 
         & vlSelfRef.__PVT__TB_tagNeeded[0U])) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
    if (((IData)(vlSymsp->TOP__Top__soc__core.mispredFlush) 
         & vlSelfRef.__PVT__IN_uop[1U][0U])) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
    vlSelfRef.__PVT__isSc[1U] = ((3U == (0xfU & (vlSelfRef.__PVT__IN_uop
                                                 [1U][0U] 
                                                 >> 0xaU))) 
                                 & (6U == (0x3fU & 
                                           (vlSelfRef.__PVT__IN_uop
                                            [1U][0U] 
                                            >> 0xeU))));
    vlSelfRef.__PVT__TB_tagNeeded[1U] = (((((0U != 
                                             (0x1fU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [1U][0U] 
                                                 >> 0x14U))) 
                                            | (0xaU 
                                               == (0xfU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [1U][0U] 
                                                      >> 0xaU)))) 
                                           & (9U != 
                                              (0xfU 
                                               & (vlSelfRef.__PVT__IN_uop
                                                  [1U][0U] 
                                                  >> 0xaU)))) 
                                          & (0xcU != 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [1U][0U] 
                                                 >> 0xaU)))) 
                                         & (~ vlSelfRef.__PVT__isSc
                                            [1U]));
    if (((((~ vlSelfRef.__PVT__TB_tagsValid[1U]) & 
           vlSelfRef.__PVT__IN_uop[1U][0U]) & (IData)(vlSymsp->TOP__Top__soc__core.frontendEn)) 
         & vlSelfRef.__PVT__TB_tagNeeded[1U])) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
    if (((IData)(vlSymsp->TOP__Top__soc__core.mispredFlush) 
         & vlSelfRef.__PVT__IN_uop[2U][0U])) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
    vlSelfRef.__PVT__isSc[2U] = ((3U == (0xfU & (vlSelfRef.__PVT__IN_uop
                                                 [2U][0U] 
                                                 >> 0xaU))) 
                                 & (6U == (0x3fU & 
                                           (vlSelfRef.__PVT__IN_uop
                                            [2U][0U] 
                                            >> 0xeU))));
    vlSelfRef.__PVT__TB_tagNeeded[2U] = (((((0U != 
                                             (0x1fU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [2U][0U] 
                                                 >> 0x14U))) 
                                            | (0xaU 
                                               == (0xfU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [2U][0U] 
                                                      >> 0xaU)))) 
                                           & (9U != 
                                              (0xfU 
                                               & (vlSelfRef.__PVT__IN_uop
                                                  [2U][0U] 
                                                  >> 0xaU)))) 
                                          & (0xcU != 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [2U][0U] 
                                                 >> 0xaU)))) 
                                         & (~ vlSelfRef.__PVT__isSc
                                            [2U]));
    if (((((~ vlSelfRef.__PVT__TB_tagsValid[2U]) & 
           vlSelfRef.__PVT__IN_uop[2U][0U]) & (IData)(vlSymsp->TOP__Top__soc__core.frontendEn)) 
         & vlSelfRef.__PVT__TB_tagNeeded[2U])) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
    if (((IData)(vlSymsp->TOP__Top__soc__core.mispredFlush) 
         & vlSelfRef.__PVT__IN_uop[3U][0U])) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
    vlSelfRef.__PVT__isSc[3U] = ((3U == (0xfU & (vlSelfRef.__PVT__IN_uop
                                                 [3U][0U] 
                                                 >> 0xaU))) 
                                 & (6U == (0x3fU & 
                                           (vlSelfRef.__PVT__IN_uop
                                            [3U][0U] 
                                            >> 0xeU))));
    vlSelfRef.__PVT__TB_tagNeeded[3U] = (((((0U != 
                                             (0x1fU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [3U][0U] 
                                                 >> 0x14U))) 
                                            | (0xaU 
                                               == (0xfU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [3U][0U] 
                                                      >> 0xaU)))) 
                                           & (9U != 
                                              (0xfU 
                                               & (vlSelfRef.__PVT__IN_uop
                                                  [3U][0U] 
                                                  >> 0xaU)))) 
                                          & (0xcU != 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [3U][0U] 
                                                 >> 0xaU)))) 
                                         & (~ vlSelfRef.__PVT__isSc
                                            [3U]));
    if (((((~ vlSelfRef.__PVT__TB_tagsValid[3U]) & 
           vlSelfRef.__PVT__IN_uop[3U][0U]) & (IData)(vlSymsp->TOP__Top__soc__core.frontendEn)) 
         & vlSelfRef.__PVT__TB_tagNeeded[3U])) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
    vlSelfRef.__PVT__RAT_issueSqNs[0U] = vlSelfRef.__PVT__nextCounterSqN;
    vlSelfRef.__PVT__RAT_issueValid[0U] = (((((~ (IData)(vlSymsp->TOP.rst)) 
                                              & (~ 
                                                 vlSymsp->TOP__Top__soc__core.branch[0U])) 
                                             & (IData)(vlSymsp->TOP__Top__soc__core.frontendEn)) 
                                            & (~ (IData)(vlSelfRef.__PVT__OUT_stall))) 
                                           & vlSelfRef.__PVT__IN_uop
                                           [0U][0U]);
    vlSelfRef.__PVT__RAT_issueAvail[0U] = ((9U == (0xfU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [0U][0U] 
                                                      >> 0xaU))) 
                                           | vlSelfRef.__PVT__isSc
                                           [0U]);
    if (vlSelfRef.__PVT__RAT_issueValid[0U]) {
        vlSelfRef.__PVT__TB_issueValid[0U] = (1U & 
                                              vlSelfRef.__PVT__TB_tagNeeded
                                              [0U]);
        vlSelfRef.__PVT__nextCounterSqN = (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__nextCounterSqN)));
    } else {
        vlSelfRef.__PVT__TB_issueValid[0U] = 0U;
    }
    vlSelfRef.__PVT__RAT_issueSqNs[1U] = vlSelfRef.__PVT__nextCounterSqN;
    vlSelfRef.__PVT__RAT_issueValid[1U] = (((((~ (IData)(vlSymsp->TOP.rst)) 
                                              & (~ 
                                                 vlSymsp->TOP__Top__soc__core.branch[0U])) 
                                             & (IData)(vlSymsp->TOP__Top__soc__core.frontendEn)) 
                                            & (~ (IData)(vlSelfRef.__PVT__OUT_stall))) 
                                           & vlSelfRef.__PVT__IN_uop
                                           [1U][0U]);
    vlSelfRef.__PVT__RAT_issueAvail[1U] = ((9U == (0xfU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [1U][0U] 
                                                      >> 0xaU))) 
                                           | vlSelfRef.__PVT__isSc
                                           [1U]);
    if (vlSelfRef.__PVT__RAT_issueValid[1U]) {
        vlSelfRef.__PVT__TB_issueValid[1U] = (1U & 
                                              vlSelfRef.__PVT__TB_tagNeeded
                                              [1U]);
        vlSelfRef.__PVT__nextCounterSqN = (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__nextCounterSqN)));
    } else {
        vlSelfRef.__PVT__TB_issueValid[1U] = 0U;
    }
    vlSelfRef.__PVT__RAT_issueSqNs[2U] = vlSelfRef.__PVT__nextCounterSqN;
    vlSelfRef.__PVT__RAT_issueValid[2U] = (((((~ (IData)(vlSymsp->TOP.rst)) 
                                              & (~ 
                                                 vlSymsp->TOP__Top__soc__core.branch[0U])) 
                                             & (IData)(vlSymsp->TOP__Top__soc__core.frontendEn)) 
                                            & (~ (IData)(vlSelfRef.__PVT__OUT_stall))) 
                                           & vlSelfRef.__PVT__IN_uop
                                           [2U][0U]);
    vlSelfRef.__PVT__RAT_issueAvail[2U] = ((9U == (0xfU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [2U][0U] 
                                                      >> 0xaU))) 
                                           | vlSelfRef.__PVT__isSc
                                           [2U]);
    if (vlSelfRef.__PVT__RAT_issueValid[2U]) {
        vlSelfRef.__PVT__TB_issueValid[2U] = (1U & 
                                              vlSelfRef.__PVT__TB_tagNeeded
                                              [2U]);
        vlSelfRef.__PVT__nextCounterSqN = (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__nextCounterSqN)));
    } else {
        vlSelfRef.__PVT__TB_issueValid[2U] = 0U;
    }
    vlSelfRef.__PVT__RAT_issueSqNs[3U] = vlSelfRef.__PVT__nextCounterSqN;
    vlSelfRef.__PVT__RAT_issueValid[3U] = (((((~ (IData)(vlSymsp->TOP.rst)) 
                                              & (~ 
                                                 vlSymsp->TOP__Top__soc__core.branch[0U])) 
                                             & (IData)(vlSymsp->TOP__Top__soc__core.frontendEn)) 
                                            & (~ (IData)(vlSelfRef.__PVT__OUT_stall))) 
                                           & vlSelfRef.__PVT__IN_uop
                                           [3U][0U]);
    vlSelfRef.__PVT__RAT_issueAvail[3U] = ((9U == (0xfU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [3U][0U] 
                                                      >> 0xaU))) 
                                           | vlSelfRef.__PVT__isSc
                                           [3U]);
    if (vlSelfRef.__PVT__RAT_issueValid[3U]) {
        vlSelfRef.__PVT__TB_issueValid[3U] = (1U & 
                                              vlSelfRef.__PVT__TB_tagNeeded
                                              [3U]);
        vlSelfRef.__PVT__nextCounterSqN = (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__nextCounterSqN)));
    } else {
        vlSelfRef.__PVT__TB_issueValid[3U] = 0U;
    }
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueValid[3U] 
        = vlSelfRef.__PVT__RAT_issueValid[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueValid[2U] 
        = vlSelfRef.__PVT__RAT_issueValid[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueValid[1U] 
        = vlSelfRef.__PVT__RAT_issueValid[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueValid[0U] 
        = vlSelfRef.__PVT__RAT_issueValid[0U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueAvail[3U] 
        = vlSelfRef.__PVT__RAT_issueAvail[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueAvail[2U] 
        = vlSelfRef.__PVT__RAT_issueAvail[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueAvail[1U] 
        = vlSelfRef.__PVT__RAT_issueAvail[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueAvail[0U] 
        = vlSelfRef.__PVT__RAT_issueAvail[0U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_issueValid[3U] 
        = vlSelfRef.__PVT__TB_issueValid[3U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_issueValid[2U] 
        = vlSelfRef.__PVT__TB_issueValid[2U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_issueValid[1U] 
        = vlSelfRef.__PVT__TB_issueValid[1U];
    vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__IN_issueValid[0U] 
        = vlSelfRef.__PVT__TB_issueValid[0U];
    vlSelfRef.__PVT__cycleValid = ((~ vlSymsp->TOP__Top__soc__core.branch[0U]) 
                                   & ((~ (IData)(vlSelfRef.__PVT__OUT_stall)) 
                                      & (IData)(vlSymsp->TOP__Top__soc__core.frontendEn)));
    vlSelfRef.__PVT__newTags[0U] = (vlSelfRef.__PVT__TB_issueValid
                                    [0U] ? vlSelfRef.__PVT__TB_tags
                                    [0U] : ((9U == 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [0U][0U] 
                                                 >> 0xaU)))
                                             ? (0x40U 
                                                | (0x3fU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [0U][1U] 
                                                      >> 0x10U)))
                                             : (vlSelfRef.__PVT__isSc
                                                [0U]
                                                 ? 
                                                (0x40U 
                                                 | (1U 
                                                    & (~ 
                                                       vlSelfRef.__PVT__scSuccessful
                                                       [0U])))
                                                 : 0x40U)));
    vlSelfRef.__PVT__newTags[1U] = (vlSelfRef.__PVT__TB_issueValid
                                    [1U] ? vlSelfRef.__PVT__TB_tags
                                    [1U] : ((9U == 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [1U][0U] 
                                                 >> 0xaU)))
                                             ? (0x40U 
                                                | (0x3fU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [1U][1U] 
                                                      >> 0x10U)))
                                             : (vlSelfRef.__PVT__isSc
                                                [1U]
                                                 ? 
                                                (0x40U 
                                                 | (1U 
                                                    & (~ 
                                                       vlSelfRef.__PVT__scSuccessful
                                                       [1U])))
                                                 : 0x40U)));
    vlSelfRef.__PVT__newTags[2U] = (vlSelfRef.__PVT__TB_issueValid
                                    [2U] ? vlSelfRef.__PVT__TB_tags
                                    [2U] : ((9U == 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [2U][0U] 
                                                 >> 0xaU)))
                                             ? (0x40U 
                                                | (0x3fU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [2U][1U] 
                                                      >> 0x10U)))
                                             : (vlSelfRef.__PVT__isSc
                                                [2U]
                                                 ? 
                                                (0x40U 
                                                 | (1U 
                                                    & (~ 
                                                       vlSelfRef.__PVT__scSuccessful
                                                       [2U])))
                                                 : 0x40U)));
    vlSelfRef.__PVT__newTags[3U] = (vlSelfRef.__PVT__TB_issueValid
                                    [3U] ? vlSelfRef.__PVT__TB_tags
                                    [3U] : ((9U == 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__IN_uop
                                                 [3U][0U] 
                                                 >> 0xaU)))
                                             ? (0x40U 
                                                | (0x3fU 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [3U][1U] 
                                                      >> 0x10U)))
                                             : (vlSelfRef.__PVT__isSc
                                                [3U]
                                                 ? 
                                                (0x40U 
                                                 | (1U 
                                                    & (~ 
                                                       vlSelfRef.__PVT__scSuccessful
                                                       [3U])))
                                                 : 0x40U)));
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueTags[3U] 
        = vlSelfRef.__PVT__newTags[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueTags[2U] 
        = vlSelfRef.__PVT__newTags[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueTags[1U] 
        = vlSelfRef.__PVT__newTags[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_issueTags[0U] 
        = vlSelfRef.__PVT__newTags[0U];
}

VL_INLINE_OPT void VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__8(VTop_Rename__WC5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__8\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_h6f0eb655__0;
    __Vlvbound_h6f0eb655__0 = 0;
    CData/*6:0*/ __Vlvbound_h7bfcb1bb__0;
    __Vlvbound_h7bfcb1bb__0 = 0;
    // Body
    __Vlvbound_h7bfcb1bb__0 = (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                        [0U] >> 0xdU));
    vlSelfRef.__PVT__RAT_wbTags[0U] = __Vlvbound_h7bfcb1bb__0;
    __Vlvbound_h7bfcb1bb__0 = (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                        [1U] >> 0xdU));
    vlSelfRef.__PVT__RAT_wbTags[1U] = __Vlvbound_h7bfcb1bb__0;
    __Vlvbound_h7bfcb1bb__0 = (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                        [2U] >> 0xdU));
    vlSelfRef.__PVT__RAT_wbTags[2U] = __Vlvbound_h7bfcb1bb__0;
    __Vlvbound_h7bfcb1bb__0 = (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                        [3U] >> 0xdU));
    vlSelfRef.__PVT__RAT_wbTags[3U] = __Vlvbound_h7bfcb1bb__0;
    __Vlvbound_h7bfcb1bb__0 = (0x7fU & (vlSelfRef.__PVT__IN_flagsUOps
                                        [4U] >> 0xdU));
    vlSelfRef.__PVT__RAT_wbTags[4U] = __Vlvbound_h7bfcb1bb__0;
    __Vlvbound_h6f0eb655__0 = (1U & (vlSelfRef.__PVT__IN_flagsUOps
                                     [0U] & (~ (vlSelfRef.__PVT__IN_flagsUOps
                                                [0U] 
                                                >> 0x13U))));
    vlSelfRef.__PVT__RAT_wbValid[0U] = __Vlvbound_h6f0eb655__0;
    __Vlvbound_h6f0eb655__0 = (1U & (vlSelfRef.__PVT__IN_flagsUOps
                                     [1U] & (~ (vlSelfRef.__PVT__IN_flagsUOps
                                                [1U] 
                                                >> 0x13U))));
    vlSelfRef.__PVT__RAT_wbValid[1U] = __Vlvbound_h6f0eb655__0;
    __Vlvbound_h6f0eb655__0 = (1U & (vlSelfRef.__PVT__IN_flagsUOps
                                     [2U] & (~ (vlSelfRef.__PVT__IN_flagsUOps
                                                [2U] 
                                                >> 0x13U))));
    vlSelfRef.__PVT__RAT_wbValid[2U] = __Vlvbound_h6f0eb655__0;
    __Vlvbound_h6f0eb655__0 = (1U & (vlSelfRef.__PVT__IN_flagsUOps
                                     [3U] & (~ (vlSelfRef.__PVT__IN_flagsUOps
                                                [3U] 
                                                >> 0x13U))));
    vlSelfRef.__PVT__RAT_wbValid[3U] = __Vlvbound_h6f0eb655__0;
    __Vlvbound_h6f0eb655__0 = (1U & (vlSelfRef.__PVT__IN_flagsUOps
                                     [4U] & (~ (vlSelfRef.__PVT__IN_flagsUOps
                                                [4U] 
                                                >> 0x13U))));
    vlSelfRef.__PVT__RAT_wbValid[4U] = __Vlvbound_h6f0eb655__0;
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbTag[4U] 
        = vlSelfRef.__PVT__RAT_wbTags[4U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbTag[3U] 
        = vlSelfRef.__PVT__RAT_wbTags[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbTag[2U] 
        = vlSelfRef.__PVT__RAT_wbTags[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbTag[1U] 
        = vlSelfRef.__PVT__RAT_wbTags[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbTag[0U] 
        = vlSelfRef.__PVT__RAT_wbTags[0U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbValid[4U] 
        = vlSelfRef.__PVT__RAT_wbValid[4U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbValid[3U] 
        = vlSelfRef.__PVT__RAT_wbValid[3U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbValid[2U] 
        = vlSelfRef.__PVT__RAT_wbValid[2U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbValid[1U] 
        = vlSelfRef.__PVT__RAT_wbValid[1U];
    vlSymsp->TOP__Top__soc__core__rn__rt.__PVT__IN_wbValid[0U] 
        = vlSelfRef.__PVT__RAT_wbValid[0U];
}
