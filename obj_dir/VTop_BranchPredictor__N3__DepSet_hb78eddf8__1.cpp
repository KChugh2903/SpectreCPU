// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_BranchPredictor__N3.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__9(VTop_BranchPredictor__N3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__9\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ tagePredictor__DOT____Vlvbound_h318462da__0;
    tagePredictor__DOT____Vlvbound_h318462da__0 = 0;
    CData/*0:0*/ tagePredictor__DOT____Vlvbound_h9d606a70__0;
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = 0;
    // Body
    tagePredictor__DOT____Vlvbound_h318462da__0 = (0x1ffU 
                                                   & (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                      >> 0xaU));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[0U] 
        = tagePredictor__DOT____Vlvbound_h318462da__0;
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [0U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__updHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__updHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[0U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [0U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [0U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[0U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [0U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[0U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [0U] 
                                                       >> 3U) 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__updHistory 
                                                                >> 3U)) 
                                                       ^ (IData)(vlSelfRef.__PVT__updHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[0U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h318462da__0 = (0x1ffU 
                                                   & (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                      >> 0xaU));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[1U] 
        = tagePredictor__DOT____Vlvbound_h318462da__0;
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [1U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__updHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__updHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[1U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [1U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [1U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[1U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [1U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[1U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x18ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [1U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[1U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x30ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [1U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[1U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x60ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [1U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[1U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0xc0ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [1U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[1U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [1U] 
                                                       >> 7U) 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__updHistory 
                                                                >> 7U)) 
                                                       ^ (IData)(vlSelfRef.__PVT__updHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[1U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h318462da__0 = (0x1ffU 
                                                   & (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                      >> 0xaU));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = tagePredictor__DOT____Vlvbound_h318462da__0;
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [2U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__updHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__updHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x18ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x30ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x60ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0xc0ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x180ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x300ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x600ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [2U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc00ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x1800ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x3000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x6000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 6U) 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__updHistory 
                                                                >> 0xfU)) 
                                                       ^ (IData)(vlSelfRef.__PVT__updHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h318462da__0 = (0x1ffU 
                                                   & (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                      >> 0xaU));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = tagePredictor__DOT____Vlvbound_h318462da__0;
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [3U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__updHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__updHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x18ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x30ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x60ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0xc0ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x180ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x300ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x600ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [3U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc00ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x1800ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x3000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x6000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x18000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x30000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x60000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc0000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [3U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x180000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x300000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x600000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc00000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x1800000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x3000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x6000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x18000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [3U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x30000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x60000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc0000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 4U) 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__updHistory 
                                                                >> 0x1fU)) 
                                                       ^ (IData)(vlSelfRef.__PVT__updHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h318462da__0 = (0x1ffU 
                                                   & (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                      >> 0xaU));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = tagePredictor__DOT____Vlvbound_h318462da__0;
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [4U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__updHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__updHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x18ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x30ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x60ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0xc0ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x180ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x300ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x600ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc00ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x1800ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x3000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x6000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x18000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x30000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x60000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc0000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x180000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x300000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x600000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc00000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x1800000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x3000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x6000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x18000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x30000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x60000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc0000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x180000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x300000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x600000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc00000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x1800000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x3000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x6000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x18000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x30000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x60000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc0000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x180000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x300000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x600000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc00000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x1800000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x3000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x6000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x18000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x30000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x60000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc0000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x180000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x300000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x600000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc00000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x1800000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x3000000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x6000000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc000000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [4U] 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__updHistory 
                                                                >> 0x3fU)) 
                                                       ^ (IData)(vlSelfRef.__PVT__updHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
}

VL_INLINE_OPT void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__10(VTop_BranchPredictor__N3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__10\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*14:0*/ __Vdly__tagePredictor__DOT__basePredictor__DOT__write_r;
    __Vdly__tagePredictor__DOT__basePredictor__DOT__write_r = 0;
    SData/*12:0*/ __Vdly__tagePredictor__DOT__basePredictor__DOT__resetIdx;
    __Vdly__tagePredictor__DOT__basePredictor__DOT__resetIdx = 0;
    CData/*1:0*/ __Vdly__tagePredictor__DOT__basePredictor__DOT__writeTempReg;
    __Vdly__tagePredictor__DOT__basePredictor__DOT__writeTempReg = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__basePredictor__DOT__pred__v0;
    __VdlyVal__tagePredictor__DOT__basePredictor__DOT__pred__v0 = 0;
    SData/*11:0*/ __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__pred__v0;
    __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__pred__v0 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v0;
    __VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v0 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__basePredictor__DOT__hist__v0;
    __VdlyVal__tagePredictor__DOT__basePredictor__DOT__hist__v0 = 0;
    SData/*11:0*/ __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__hist__v0;
    __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__hist__v0 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__basePredictor__DOT__pred__v1;
    __VdlyVal__tagePredictor__DOT__basePredictor__DOT__pred__v1 = 0;
    SData/*11:0*/ __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__pred__v1;
    __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__pred__v1 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v1;
    __VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v1 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__basePredictor__DOT__hist__v1;
    __VdlyVal__tagePredictor__DOT__basePredictor__DOT__hist__v1 = 0;
    SData/*11:0*/ __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__hist__v1;
    __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__hist__v1 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__basePredictor__DOT__pred__v2;
    __VdlyVal__tagePredictor__DOT__basePredictor__DOT__pred__v2 = 0;
    SData/*11:0*/ __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__pred__v2;
    __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__pred__v2 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v2;
    __VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v2 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__basePredictor__DOT__hist__v2;
    __VdlyVal__tagePredictor__DOT__basePredictor__DOT__hist__v2 = 0;
    SData/*11:0*/ __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__hist__v2;
    __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__hist__v2 = 0;
    SData/*11:0*/ __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__pred__v3;
    __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__pred__v3 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v3;
    __VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v3 = 0;
    SData/*11:0*/ __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__hist__v3;
    __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__hist__v3 = 0;
    // Body
    __Vdly__tagePredictor__DOT__basePredictor__DOT__write_r 
        = vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_r;
    __Vdly__tagePredictor__DOT__basePredictor__DOT__resetIdx 
        = vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__resetIdx;
    __Vdly__tagePredictor__DOT__basePredictor__DOT__writeTempReg 
        = vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__writeTempReg;
    __VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v0 = 0U;
    __VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v1 = 0U;
    __VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v2 = 0U;
    __VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v3 = 0U;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrCnt 
        = vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrCnt;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__resetIdx 
        = vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__resetIdx;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit 
        = vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrCnt 
        = vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrCnt;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__resetIdx 
        = vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__resetIdx;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit 
        = vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrCnt 
        = vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrCnt;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__resetIdx 
        = vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__resetIdx;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit 
        = vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrCnt 
        = vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrCnt;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__resetIdx 
        = vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__resetIdx;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit 
        = vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrCnt 
        = vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrCnt;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__resetIdx 
        = vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__resetIdx;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit 
        = vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
    vlSelfRef.tagePredictor__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__tage__IN_writeUseful 
        = ((1U & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[0U] 
                  >> 4U)) != (1U & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                    >> 0xbU)));
    vlSelfRef.tagePredictor__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__tage__IN_writeCorrect 
        = ((1U & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[0U] 
                  >> 4U)) == (1U & ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                    >> 1U)));
    vlSelfRef.__PVT__recRIdx = (0x1fU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[0U] 
                                         >> 6U));
    if ((2U == (3U & ((IData)(vlSelfRef.__PVT__recovery) 
                      >> 4U)))) {
        vlSelfRef.__PVT__recRIdx = (0x1fU & ((IData)(vlSelfRef.__PVT__recRIdx) 
                                             - (IData)(1U)));
    } else if ((1U == (3U & ((IData)(vlSelfRef.__PVT__recovery) 
                             >> 4U)))) {
        vlSelfRef.__PVT__recRIdx = (0x1fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__recRIdx)));
    }
    if (vlSymsp->TOP.rst) {
        __Vdly__tagePredictor__DOT__basePredictor__DOT__write_r = 0U;
        __Vdly__tagePredictor__DOT__basePredictor__DOT__resetIdx = 0U;
        __Vdly__tagePredictor__DOT__basePredictor__DOT__writeTempReg = 0U;
    } else if ((0x1000U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__resetIdx))) {
        if ((1U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_c))) {
            __Vdly__tagePredictor__DOT__basePredictor__DOT__writeTempReg 
                = ((vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__pred
                    [(0xfffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_c) 
                                >> 3U))] << 1U) | vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__hist
                   [(0xfffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_c) 
                               >> 3U))]);
        }
        if ((1U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_r))) {
            if (((3U != (IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__writeTempReg)) 
                 & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_r) 
                    >> 2U))) {
                __VdlyVal__tagePredictor__DOT__basePredictor__DOT__pred__v0 
                    = (1U & (((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__writeTempReg)) 
                             >> 1U));
                __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__pred__v0 
                    = (0xfffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_r) 
                                 >> 3U));
                __VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v0 = 1U;
                __VdlyVal__tagePredictor__DOT__basePredictor__DOT__hist__v0 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__writeTempReg)));
                __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__hist__v0 
                    = (0xfffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_r) 
                                 >> 3U));
            }
            if (((0U != (IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__writeTempReg)) 
                 & (~ ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_r) 
                       >> 2U)))) {
                __VdlyVal__tagePredictor__DOT__basePredictor__DOT__pred__v1 
                    = (1U & (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__writeTempReg) 
                              - (IData)(1U)) >> 1U));
                __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__pred__v1 
                    = (0xfffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_r) 
                                 >> 3U));
                __VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v1 = 1U;
                __VdlyVal__tagePredictor__DOT__basePredictor__DOT__hist__v1 
                    = (1U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__writeTempReg) 
                             - (IData)(1U)));
                __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__hist__v1 
                    = (0xfffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_r) 
                                 >> 3U));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_r))) {
                __VdlyVal__tagePredictor__DOT__basePredictor__DOT__pred__v2 
                    = (1U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_r) 
                             >> 2U));
                __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__pred__v2 
                    = (0xfffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_r) 
                                 >> 3U));
                __VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v2 = 1U;
                __VdlyVal__tagePredictor__DOT__basePredictor__DOT__hist__v2 
                    = (1U & (~ ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_r) 
                                >> 2U)));
                __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__hist__v2 
                    = (0xfffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_r) 
                                 >> 3U));
            }
        }
        __Vdly__tagePredictor__DOT__basePredictor__DOT__write_r 
            = vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_c;
    } else {
        __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__pred__v3 
            = (0xfffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__resetIdx));
        __VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v3 = 1U;
        __VdlyDim0__tagePredictor__DOT__basePredictor__DOT__hist__v3 
            = (0xfffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__resetIdx));
        __Vdly__tagePredictor__DOT__basePredictor__DOT__resetIdx 
            = (0x1fffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__resetIdx)));
    }
    vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__resetIdx 
        = __Vdly__tagePredictor__DOT__basePredictor__DOT__resetIdx;
    vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_r 
        = __Vdly__tagePredictor__DOT__basePredictor__DOT__write_r;
    vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__writeTempReg 
        = __Vdly__tagePredictor__DOT__basePredictor__DOT__writeTempReg;
    vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_c 
        = ((0x7ff8U & (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                       >> 7U)) | ((4U & ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                         << 1U)) | 
                                  (1U & (IData)(vlSelfRef.__PVT__bpUpdateActive))));
    if (__VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v0) {
        vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__pred[__VdlyDim0__tagePredictor__DOT__basePredictor__DOT__pred__v0] 
            = __VdlyVal__tagePredictor__DOT__basePredictor__DOT__pred__v0;
        vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__hist[__VdlyDim0__tagePredictor__DOT__basePredictor__DOT__hist__v0] 
            = __VdlyVal__tagePredictor__DOT__basePredictor__DOT__hist__v0;
    }
    if (__VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v1) {
        vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__pred[__VdlyDim0__tagePredictor__DOT__basePredictor__DOT__pred__v1] 
            = __VdlyVal__tagePredictor__DOT__basePredictor__DOT__pred__v1;
        vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__hist[__VdlyDim0__tagePredictor__DOT__basePredictor__DOT__hist__v1] 
            = __VdlyVal__tagePredictor__DOT__basePredictor__DOT__hist__v1;
    }
    if (__VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v2) {
        vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__pred[__VdlyDim0__tagePredictor__DOT__basePredictor__DOT__pred__v2] 
            = __VdlyVal__tagePredictor__DOT__basePredictor__DOT__pred__v2;
        vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__hist[__VdlyDim0__tagePredictor__DOT__basePredictor__DOT__hist__v2] 
            = __VdlyVal__tagePredictor__DOT__basePredictor__DOT__hist__v2;
    }
    if (__VdlySet__tagePredictor__DOT__basePredictor__DOT__pred__v3) {
        vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__pred[__VdlyDim0__tagePredictor__DOT__basePredictor__DOT__pred__v3] = 0U;
        vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__hist[__VdlyDim0__tagePredictor__DOT__basePredictor__DOT__hist__v3] = 0U;
    }
}

VL_INLINE_OPT void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__11(VTop_BranchPredictor__N3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__11\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__tagePredictor__DOT__avail;
    __PVT__tagePredictor__DOT__avail = 0;
    CData/*5:0*/ __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail;
    __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail = 0;
    CData/*0:0*/ __PVT__tagePredictor__DOT__unnamedblk5__DOT__temp;
    __PVT__tagePredictor__DOT__unnamedblk5__DOT__temp = 0;
    CData/*0:0*/ tagePredictor__DOT____Vcellout__genblk1__BRA__1__KET____DOT__tage__OUT_allocAvail;
    tagePredictor__DOT____Vcellout__genblk1__BRA__1__KET____DOT__tage__OUT_allocAvail = 0;
    CData/*0:0*/ tagePredictor__DOT____Vcellout__genblk1__BRA__2__KET____DOT__tage__OUT_allocAvail;
    tagePredictor__DOT____Vcellout__genblk1__BRA__2__KET____DOT__tage__OUT_allocAvail = 0;
    CData/*0:0*/ tagePredictor__DOT____Vcellout__genblk1__BRA__3__KET____DOT__tage__OUT_allocAvail;
    tagePredictor__DOT____Vcellout__genblk1__BRA__3__KET____DOT__tage__OUT_allocAvail = 0;
    CData/*0:0*/ tagePredictor__DOT____Vcellout__genblk1__BRA__4__KET____DOT__tage__OUT_allocAvail;
    tagePredictor__DOT____Vcellout__genblk1__BRA__4__KET____DOT__tage__OUT_allocAvail = 0;
    CData/*0:0*/ tagePredictor__DOT____Vcellout__genblk1__BRA__5__KET____DOT__tage__OUT_allocAvail;
    tagePredictor__DOT____Vcellout__genblk1__BRA__5__KET____DOT__tage__OUT_allocAvail = 0;
    // Body
    tagePredictor__DOT____Vcellout__genblk1__BRA__5__KET____DOT__tage__OUT_allocAvail 
        = (0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
           [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
           [4U]]);
    tagePredictor__DOT____Vcellout__genblk1__BRA__4__KET____DOT__tage__OUT_allocAvail 
        = (0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
           [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
           [3U]]);
    tagePredictor__DOT____Vcellout__genblk1__BRA__3__KET____DOT__tage__OUT_allocAvail 
        = (0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
           [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
           [2U]]);
    tagePredictor__DOT____Vcellout__genblk1__BRA__2__KET____DOT__tage__OUT_allocAvail 
        = (0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
           [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
           [1U]]);
    tagePredictor__DOT____Vcellout__genblk1__BRA__1__KET____DOT__tage__OUT_allocAvail 
        = (0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
           [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
           [0U]]);
    __PVT__tagePredictor__DOT__avail = ((((IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__5__KET____DOT__tage__OUT_allocAvail) 
                                          << 5U) | 
                                         (((IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__4__KET____DOT__tage__OUT_allocAvail) 
                                           << 4U) | 
                                          ((IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__3__KET____DOT__tage__OUT_allocAvail) 
                                           << 3U))) 
                                        | (((IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__2__KET____DOT__tage__OUT_allocAvail) 
                                            << 2U) 
                                           | ((IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__1__KET____DOT__tage__OUT_allocAvail) 
                                              << 1U)));
    __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail = 0U;
    __PVT__tagePredictor__DOT__unnamedblk5__DOT__temp = 0U;
    vlSelfRef.__PVT__tagePredictor__DOT__doAlloc = 0U;
    vlSelfRef.__PVT__tagePredictor__DOT__allocFailed = 0U;
    if (((1U & ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                >> 1U)) != (1U & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[0U] 
                                  >> 4U)))) {
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                     | ((IData)(__PVT__tagePredictor__DOT__avail) 
                        >> 1U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3eU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | (IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                     | ((IData)(__PVT__tagePredictor__DOT__avail) 
                        >> 2U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3eU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | (IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                     | ((IData)(__PVT__tagePredictor__DOT__avail) 
                        >> 3U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3eU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | (IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                     | ((IData)(__PVT__tagePredictor__DOT__avail) 
                        >> 4U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3eU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | (IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                     | ((IData)(__PVT__tagePredictor__DOT__avail) 
                        >> 5U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3eU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | (IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 1U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 2U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3dU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 1U));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 1U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 3U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3dU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 1U));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 1U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 4U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3dU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 1U));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 1U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 5U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3dU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 1U));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 2U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 3U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3bU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 2U));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 2U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 4U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3bU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 2U));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 2U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 5U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3bU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 2U));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 3U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 4U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x37U & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 3U));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 3U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 5U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x37U & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 3U));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 4U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 5U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x2fU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 4U));
        if (((((1U > (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                              >> 0xcU))) & ((IData)(__PVT__tagePredictor__DOT__avail) 
                                            >> 1U)) 
              & (~ (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__temp))) 
             & ((~ ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                    >> 1U)) | (0U != (3U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__random) 
                                            >> 2U)))))) {
            __PVT__tagePredictor__DOT__unnamedblk5__DOT__temp = 1U;
            vlSelfRef.__PVT__tagePredictor__DOT__doAlloc 
                = (2U | (IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc));
        }
        if (((((2U > (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                              >> 0xcU))) & ((IData)(__PVT__tagePredictor__DOT__avail) 
                                            >> 2U)) 
              & (~ (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__temp))) 
             & ((~ ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                    >> 2U)) | (0U != (3U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__random) 
                                            >> 4U)))))) {
            __PVT__tagePredictor__DOT__unnamedblk5__DOT__temp = 1U;
            vlSelfRef.__PVT__tagePredictor__DOT__doAlloc 
                = (4U | (IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc));
        }
        if (((((3U > (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                              >> 0xcU))) & ((IData)(__PVT__tagePredictor__DOT__avail) 
                                            >> 3U)) 
              & (~ (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__temp))) 
             & ((~ ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                    >> 3U)) | (0U != (3U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__random) 
                                            >> 6U)))))) {
            __PVT__tagePredictor__DOT__unnamedblk5__DOT__temp = 1U;
            vlSelfRef.__PVT__tagePredictor__DOT__doAlloc 
                = (8U | (IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc));
        }
        if (((((4U > (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                              >> 0xcU))) & ((IData)(__PVT__tagePredictor__DOT__avail) 
                                            >> 4U)) 
              & (~ (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__temp))) 
             & ((~ ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                    >> 4U)) | (0U != (3U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__random)))))) {
            __PVT__tagePredictor__DOT__unnamedblk5__DOT__temp = 1U;
            vlSelfRef.__PVT__tagePredictor__DOT__doAlloc 
                = (0x10U | (IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc));
        }
        if (((((5U > (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                              >> 0xcU))) & ((IData)(__PVT__tagePredictor__DOT__avail) 
                                            >> 5U)) 
              & (~ (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__temp))) 
             & ((~ ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                    >> 5U)) | (0U != (3U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__random) 
                                            >> 2U)))))) {
            __PVT__tagePredictor__DOT__unnamedblk5__DOT__temp = 1U;
            vlSelfRef.__PVT__tagePredictor__DOT__doAlloc 
                = (0x20U | (IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc));
        }
        vlSelfRef.__PVT__tagePredictor__DOT__allocFailed 
            = (1U & (~ (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__temp)));
    }
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_c 
        = ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [0U] << 3U) | ((4U & ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                  << 1U)) | (((1U != 
                                               (0xfU 
                                                & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                   >> 0xcU))) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                                & ((1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                        >> 0xcU))) 
                                                   | (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc) 
                                                       >> 1U) 
                                                      & (IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__1__KET____DOT__tage__OUT_allocAvail)))))));
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_c 
        = ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [1U] << 3U) | ((4U & ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                  << 1U)) | (((2U != 
                                               (0xfU 
                                                & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                   >> 0xcU))) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                                & ((2U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                        >> 0xcU))) 
                                                   | (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc) 
                                                       >> 2U) 
                                                      & (IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__2__KET____DOT__tage__OUT_allocAvail)))))));
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_c 
        = ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [2U] << 3U) | ((4U & ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                  << 1U)) | (((3U != 
                                               (0xfU 
                                                & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                   >> 0xcU))) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                                & ((3U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                        >> 0xcU))) 
                                                   | (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc) 
                                                       >> 3U) 
                                                      & (IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__3__KET____DOT__tage__OUT_allocAvail)))))));
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_c 
        = ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U] << 3U) | ((4U & ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                  << 1U)) | (((4U != 
                                               (0xfU 
                                                & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                   >> 0xcU))) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                                & ((4U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                        >> 0xcU))) 
                                                   | (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc) 
                                                       >> 4U) 
                                                      & (IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__4__KET____DOT__tage__OUT_allocAvail)))))));
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_c 
        = ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U] << 3U) | ((4U & ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                  << 1U)) | (((5U != 
                                               (0xfU 
                                                & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                   >> 0xcU))) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                                & ((5U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                        >> 0xcU))) 
                                                   | (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc) 
                                                       >> 5U) 
                                                      & (IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__5__KET____DOT__tage__OUT_allocAvail)))))));
}

VL_INLINE_OPT void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__13(VTop_BranchPredictor__N3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__13\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*12:0*/ __Vdly__btb__DOT__setMult;
    __Vdly__btb__DOT__setMult = 0;
    SData/*12:0*/ __Vdly__btb__DOT__resetIdx;
    __Vdly__btb__DOT__resetIdx = 0;
    SData/*11:0*/ __VdlyDim0__btb__DOT__entries__v0;
    __VdlyDim0__btb__DOT__entries__v0 = 0;
    CData/*0:0*/ __VdlySet__btb__DOT__entries__v0;
    __VdlySet__btb__DOT__entries__v0 = 0;
    SData/*11:0*/ __VdlyDim0__btb__DOT__entries__v1;
    __VdlyDim0__btb__DOT__entries__v1 = 0;
    SData/*11:0*/ __VdlyDim0__btb__DOT__entries__v2;
    __VdlyDim0__btb__DOT__entries__v2 = 0;
    CData/*0:0*/ __VdlySet__btb__DOT__entries__v2;
    __VdlySet__btb__DOT__entries__v2 = 0;
    CData/*0:0*/ __VdlyVal__btb__DOT__entries__v3;
    __VdlyVal__btb__DOT__entries__v3 = 0;
    SData/*11:0*/ __VdlyDim0__btb__DOT__entries__v3;
    __VdlyDim0__btb__DOT__entries__v3 = 0;
    CData/*1:0*/ __VdlyVal__btb__DOT__entries__v4;
    __VdlyVal__btb__DOT__entries__v4 = 0;
    SData/*11:0*/ __VdlyDim0__btb__DOT__entries__v4;
    __VdlyDim0__btb__DOT__entries__v4 = 0;
    IData/*30:0*/ __VdlyVal__btb__DOT__entries__v5;
    __VdlyVal__btb__DOT__entries__v5 = 0;
    SData/*11:0*/ __VdlyDim0__btb__DOT__entries__v5;
    __VdlyDim0__btb__DOT__entries__v5 = 0;
    SData/*15:0*/ __VdlyVal__btb__DOT__entries__v6;
    __VdlyVal__btb__DOT__entries__v6 = 0;
    SData/*11:0*/ __VdlyDim0__btb__DOT__entries__v6;
    __VdlyDim0__btb__DOT__entries__v6 = 0;
    CData/*2:0*/ __VdlyVal__btb__DOT__entries__v7;
    __VdlyVal__btb__DOT__entries__v7 = 0;
    SData/*11:0*/ __VdlyDim0__btb__DOT__entries__v7;
    __VdlyDim0__btb__DOT__entries__v7 = 0;
    SData/*11:0*/ __VdlyDim0__btb__DOT__multiple__v0;
    __VdlyDim0__btb__DOT__multiple__v0 = 0;
    CData/*0:0*/ __VdlySet__btb__DOT__multiple__v0;
    __VdlySet__btb__DOT__multiple__v0 = 0;
    SData/*11:0*/ __VdlyDim0__btb__DOT__multiple__v1;
    __VdlyDim0__btb__DOT__multiple__v1 = 0;
    CData/*0:0*/ __VdlySet__btb__DOT__multiple__v1;
    __VdlySet__btb__DOT__multiple__v1 = 0;
    SData/*11:0*/ __VdlyDim0__btb__DOT__multiple__v2;
    __VdlyDim0__btb__DOT__multiple__v2 = 0;
    CData/*0:0*/ __VdlySet__btb__DOT__multiple__v2;
    __VdlySet__btb__DOT__multiple__v2 = 0;
    SData/*11:0*/ __VdlyDim0__btb__DOT__entries__v8;
    __VdlyDim0__btb__DOT__entries__v8 = 0;
    // Body
    __Vdly__btb__DOT__setMult = vlSelfRef.__PVT__btb__DOT__setMult;
    __Vdly__btb__DOT__resetIdx = vlSelfRef.__PVT__btb__DOT__resetIdx;
    __VdlySet__btb__DOT__multiple__v0 = 0U;
    __VdlySet__btb__DOT__multiple__v1 = 0U;
    __VdlySet__btb__DOT__multiple__v2 = 0U;
    __VdlySet__btb__DOT__entries__v0 = 0U;
    __VdlySet__btb__DOT__entries__v2 = 0U;
    if (vlSymsp->TOP.rst) {
        __Vdly__btb__DOT__setMult = 0U;
        __Vdly__btb__DOT__resetIdx = 0U;
    } else if ((0x1000U & (IData)(vlSelfRef.__PVT__btb__DOT__resetIdx))) {
        if ((1U & vlSelfRef.__PVT__btUpdate[0U])) {
            vlSelfRef.__PVT__btb__DOT__unnamedblk1__DOT__idx 
                = ((0xff8U & (vlSelfRef.__PVT__btUpdate[1U] 
                              >> 0xdU)) | (7U & (vlSelfRef.__PVT__btUpdate[0U] 
                                                 >> 9U)));
            if ((2U & vlSelfRef.__PVT__btUpdate[0U])) {
                __VdlyDim0__btb__DOT__entries__v0 = vlSelfRef.__PVT__btb__DOT__unnamedblk1__DOT__idx;
                __VdlySet__btb__DOT__entries__v0 = 1U;
                __VdlyDim0__btb__DOT__entries__v1 = vlSelfRef.__PVT__btb__DOT__unnamedblk1__DOT__idx;
            } else {
                if ((8U & vlSelfRef.__PVT__btUpdate[0U])) {
                    __Vdly__btb__DOT__setMult = (1U 
                                                 | ((IData)(vlSelfRef.__PVT__btb__DOT__unnamedblk1__DOT__idx) 
                                                    << 1U));
                    vlSelfRef.__PVT__btb__DOT__unnamedblk1__DOT__idx 
                        = ((0xff8U & (IData)(vlSelfRef.__PVT__btb__DOT__unnamedblk1__DOT__idx)) 
                           | (7U & (vlSelfRef.__PVT__btUpdate[0U] 
                                    >> 4U)));
                }
                __VdlyDim0__btb__DOT__entries__v2 = vlSelfRef.__PVT__btb__DOT__unnamedblk1__DOT__idx;
                __VdlySet__btb__DOT__entries__v2 = 1U;
                __VdlyVal__btb__DOT__entries__v3 = 
                    (1U & (vlSelfRef.__PVT__btUpdate[0U] 
                           >> 2U));
                __VdlyDim0__btb__DOT__entries__v3 = vlSelfRef.__PVT__btb__DOT__unnamedblk1__DOT__idx;
                __VdlyVal__btb__DOT__entries__v4 = 
                    (3U & (vlSelfRef.__PVT__btUpdate[0U] 
                           >> 7U));
                __VdlyDim0__btb__DOT__entries__v4 = vlSelfRef.__PVT__btb__DOT__unnamedblk1__DOT__idx;
                __VdlyVal__btb__DOT__entries__v5 = 
                    (0x7fffffffU & ((vlSelfRef.__PVT__btUpdate[1U] 
                                     << 0x13U) | (vlSelfRef.__PVT__btUpdate[0U] 
                                                  >> 0xdU)));
                __VdlyDim0__btb__DOT__entries__v5 = vlSelfRef.__PVT__btb__DOT__unnamedblk1__DOT__idx;
                __VdlyVal__btb__DOT__entries__v6 = 
                    (0xffffU & ((vlSelfRef.__PVT__btUpdate[2U] 
                                 << 7U) | (vlSelfRef.__PVT__btUpdate[1U] 
                                           >> 0x19U)));
                __VdlyDim0__btb__DOT__entries__v6 = vlSelfRef.__PVT__btb__DOT__unnamedblk1__DOT__idx;
                __VdlyVal__btb__DOT__entries__v7 = 
                    (7U & (vlSelfRef.__PVT__btUpdate[1U] 
                           >> 0xdU));
                __VdlyDim0__btb__DOT__entries__v7 = vlSelfRef.__PVT__btb__DOT__unnamedblk1__DOT__idx;
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY((((7U & (vlSelfRef.__PVT__btUpdate[1U] 
                                             >> 0xdU)) 
                                      < (7U & (IData)(vlSelfRef.__PVT__btb__DOT__unnamedblk1__DOT__idx)))))) {
                        VL_WRITEF_NX("[%0t] %%Error: BranchTargetBuffer.sv:116: Assertion failed in %NTop.soc.core.ifetch.bp.btb.unnamedblk1: 'assert' failed.\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("src/BranchTargetBuffer.sv", 116, "");
                    }
                }
                __VdlyDim0__btb__DOT__multiple__v0 
                    = vlSelfRef.__PVT__btb__DOT__unnamedblk1__DOT__idx;
                __VdlySet__btb__DOT__multiple__v0 = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__btb__DOT__setMult))) {
            __VdlyDim0__btb__DOT__multiple__v1 = (0xfffU 
                                                  & ((IData)(vlSelfRef.__PVT__btb__DOT__setMult) 
                                                     >> 1U));
            __VdlySet__btb__DOT__multiple__v1 = 1U;
            __Vdly__btb__DOT__setMult = 0U;
        }
    } else {
        __VdlyDim0__btb__DOT__multiple__v2 = (0xfffU 
                                              & (IData)(vlSelfRef.__PVT__btb__DOT__resetIdx));
        __VdlySet__btb__DOT__multiple__v2 = 1U;
        __VdlyDim0__btb__DOT__entries__v8 = (0xfffU 
                                             & (IData)(vlSelfRef.__PVT__btb__DOT__resetIdx));
        __Vdly__btb__DOT__resetIdx = (0x1fffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__btb__DOT__resetIdx)));
    }
    vlSelfRef.__PVT__btb__DOT__resetIdx = __Vdly__btb__DOT__resetIdx;
    vlSelfRef.__PVT__btb__DOT__setMult = __Vdly__btb__DOT__setMult;
    if (__VdlySet__btb__DOT__multiple__v0) {
        vlSelfRef.__PVT__btb__DOT__multiple[__VdlyDim0__btb__DOT__multiple__v0] = 0U;
    }
    if (__VdlySet__btb__DOT__multiple__v1) {
        vlSelfRef.__PVT__btb__DOT__multiple[__VdlyDim0__btb__DOT__multiple__v1] = 1U;
    }
    if (__VdlySet__btb__DOT__multiple__v2) {
        vlSelfRef.__PVT__btb__DOT__multiple[__VdlyDim0__btb__DOT__multiple__v2] = 0U;
        vlSelfRef.__PVT__btb__DOT__entries[__VdlyDim0__btb__DOT__entries__v8] = 0ULL;
    }
    if (__VdlySet__btb__DOT__entries__v0) {
        vlSelfRef.__PVT__btb__DOT__entries[__VdlyDim0__btb__DOT__entries__v0] = 0ULL;
        vlSelfRef.__PVT__btb__DOT__entries[__VdlyDim0__btb__DOT__entries__v1] 
            = (0x3bffffffffffffULL & vlSelfRef.__PVT__btb__DOT__entries
               [__VdlyDim0__btb__DOT__entries__v1]);
    }
    if (__VdlySet__btb__DOT__entries__v2) {
        vlSelfRef.__PVT__btb__DOT__entries[__VdlyDim0__btb__DOT__entries__v2] 
            = (0x4000000000000ULL | vlSelfRef.__PVT__btb__DOT__entries
               [__VdlyDim0__btb__DOT__entries__v2]);
        vlSelfRef.__PVT__btb__DOT__entries[__VdlyDim0__btb__DOT__entries__v3] 
            = ((0x37ffffffffffffULL & vlSelfRef.__PVT__btb__DOT__entries
                [__VdlyDim0__btb__DOT__entries__v3]) 
               | ((QData)((IData)(__VdlyVal__btb__DOT__entries__v3)) 
                  << 0x33U));
        vlSelfRef.__PVT__btb__DOT__entries[__VdlyDim0__btb__DOT__entries__v4] 
            = ((0xfffffffffffffULL & vlSelfRef.__PVT__btb__DOT__entries
                [__VdlyDim0__btb__DOT__entries__v4]) 
               | ((QData)((IData)(__VdlyVal__btb__DOT__entries__v4)) 
                  << 0x34U));
        vlSelfRef.__PVT__btb__DOT__entries[__VdlyDim0__btb__DOT__entries__v5] 
            = ((0x3c00000007ffffULL & vlSelfRef.__PVT__btb__DOT__entries
                [__VdlyDim0__btb__DOT__entries__v5]) 
               | ((QData)((IData)(__VdlyVal__btb__DOT__entries__v5)) 
                  << 0x13U));
        vlSelfRef.__PVT__btb__DOT__entries[__VdlyDim0__btb__DOT__entries__v6] 
            = ((0x3ffffffff80007ULL & vlSelfRef.__PVT__btb__DOT__entries
                [__VdlyDim0__btb__DOT__entries__v6]) 
               | ((QData)((IData)(__VdlyVal__btb__DOT__entries__v6)) 
                  << 3U));
        vlSelfRef.__PVT__btb__DOT__entries[__VdlyDim0__btb__DOT__entries__v7] 
            = ((0x3ffffffffffff8ULL & vlSelfRef.__PVT__btb__DOT__entries
                [__VdlyDim0__btb__DOT__entries__v7]) 
               | (IData)((IData)(__VdlyVal__btb__DOT__entries__v7)));
    }
}
