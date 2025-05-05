// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Rename__WC5.h"
#include "VTop__Syms.h"

VL_ATTR_COLD void VTop_Rename__WC5___stl_sequent__TOP__Top__soc__core__rn__0(VTop_Rename__WC5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Rename__WC5___stl_sequent__TOP__Top__soc__core__rn__0\n"); );
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
    vlSelfRef.__PVT__TB_tags[3U] = vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__OUT_issueTags
        [3U];
    vlSelfRef.__PVT__TB_tags[2U] = vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__OUT_issueTags
        [2U];
    vlSelfRef.__PVT__TB_tags[1U] = vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__OUT_issueTags
        [1U];
    vlSelfRef.__PVT__TB_tags[0U] = vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__OUT_issueTags
        [0U];
    vlSelfRef.__PVT__scSuccessful[0U] = (1U & (~ (IData)(vlSelfRef.__PVT__failSc)));
    vlSelfRef.__PVT__scSuccessful[1U] = 1U;
    vlSelfRef.__PVT__scSuccessful[2U] = 1U;
    vlSelfRef.__PVT__scSuccessful[3U] = 1U;
    vlSelfRef.__PVT__TB_tagsValid[3U] = vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__OUT_issueTagsValid
        [3U];
    vlSelfRef.__PVT__TB_tagsValid[2U] = vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__OUT_issueTagsValid
        [2U];
    vlSelfRef.__PVT__TB_tagsValid[1U] = vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__OUT_issueTagsValid
        [1U];
    vlSelfRef.__PVT__TB_tagsValid[0U] = vlSymsp->TOP__Top__soc__core__rn__tb.__PVT__OUT_issueTagsValid
        [0U];
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
