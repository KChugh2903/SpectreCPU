// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_StoreQueue.h"

VL_INLINE_OPT void VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__1(VTop_StoreQueue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __PVT__genblk1__BRA__0__KET____DOT__endSqN;
    __PVT__genblk1__BRA__0__KET____DOT__endSqN = 0;
    CData/*6:0*/ __PVT__genblk1__BRA__1__KET____DOT__endSqN;
    __PVT__genblk1__BRA__1__KET____DOT__endSqN = 0;
    IData/*31:0*/ __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii;
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0;
    IData/*31:0*/ __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii;
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0;
    // Body
    vlSelfRef.__PVT__lookupAddr[0U] = ((vlSelfRef.__PVT__IN_uopLd
                                        [0U][2U] << 0x1cU) 
                                       | (vlSelfRef.__PVT__IN_uopLd
                                          [0U][1U] 
                                          >> 4U));
    vlSelfRef.__PVT__lookupAddr[1U] = ((vlSelfRef.__PVT__IN_uopLd
                                        [1U][2U] << 0x1cU) 
                                       | (vlSelfRef.__PVT__IN_uopLd
                                          [1U][1U] 
                                          >> 4U));
    vlSelfRef.__PVT__readMask[0U] = 0xfU;
    if ((1U & vlSelfRef.__PVT__IN_uopLd[0U][0U])) {
        vlSelfRef.__PVT__readMask[0U] = (0xfU & ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__IN_uopLd
                                                      [0U][1U] 
                                                      >> 1U)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__IN_uopLd
                                                      [0U][1U] 
                                                      >> 4U)))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.__PVT__IN_uopLd
                                                       [0U][1U] 
                                                       >> 1U)))
                                                   ? 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.__PVT__IN_uopLd
                                                        [0U][1U] 
                                                        >> 4U)))
                                                    ? 0xcU
                                                    : 3U)
                                                   : 0xfU)));
    }
    vlSelfRef.__PVT__readMask[1U] = 0xfU;
    if ((1U & vlSelfRef.__PVT__IN_uopLd[1U][0U])) {
        vlSelfRef.__PVT__readMask[1U] = (0xfU & ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__IN_uopLd
                                                      [1U][1U] 
                                                      >> 1U)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__IN_uopLd
                                                      [1U][1U] 
                                                      >> 4U)))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.__PVT__IN_uopLd
                                                       [1U][1U] 
                                                       >> 1U)))
                                                   ? 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.__PVT__IN_uopLd
                                                        [1U][1U] 
                                                        >> 4U)))
                                                    ? 0xcU
                                                    : 3U)
                                                   : 0xfU)));
    }
    __PVT__genblk1__BRA__0__KET____DOT__endSqN = (0x7fU 
                                                  & (((vlSelfRef.__PVT__IN_uopLd
                                                       [0U][1U] 
                                                       << 6U) 
                                                      | (vlSelfRef.__PVT__IN_uopLd
                                                         [0U][0U] 
                                                         >> 0x1aU)) 
                                                     + 
                                                     ((0x10U 
                                                       & vlSelfRef.__PVT__IN_uopLd
                                                       [0U][0U])
                                                       ? 0U
                                                       : 1U)));
    __PVT__genblk1__BRA__1__KET____DOT__endSqN = (0x7fU 
                                                  & (((vlSelfRef.__PVT__IN_uopLd
                                                       [1U][1U] 
                                                       << 6U) 
                                                      | (vlSelfRef.__PVT__IN_uopLd
                                                         [1U][0U] 
                                                         >> 0x1aU)) 
                                                     + 
                                                     ((0x10U 
                                                       & vlSelfRef.__PVT__IN_uopLd
                                                       [1U][0U])
                                                       ? 0U
                                                       : 1U)));
    vlSelfRef.__PVT__forwardRange_c[0U] = ((VL_LTES_III(32, 0x10U, 
                                                        VL_EXTENDS_II(32,7, 
                                                                      (0x7fU 
                                                                       & ((IData)(__PVT__genblk1__BRA__0__KET____DOT__endSqN) 
                                                                          - (IData)(vlSelfRef.baseIndex)))))
                                             ? 0xffffU
                                             : (0xffffU 
                                                & (((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & ((IData)(__PVT__genblk1__BRA__0__KET____DOT__endSqN) 
                                                        - (IData)(vlSelfRef.baseIndex)))) 
                                                   - (IData)(1U)))) 
                                           << (0xfU 
                                               & (IData)(vlSelfRef.baseIndex)));
    vlSelfRef.__PVT__forwardRange_c[1U] = ((VL_LTES_III(32, 0x10U, 
                                                        VL_EXTENDS_II(32,7, 
                                                                      (0x7fU 
                                                                       & ((IData)(__PVT__genblk1__BRA__1__KET____DOT__endSqN) 
                                                                          - (IData)(vlSelfRef.baseIndex)))))
                                             ? 0xffffU
                                             : (0xffffU 
                                                & (((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & ((IData)(__PVT__genblk1__BRA__1__KET____DOT__endSqN) 
                                                        - (IData)(vlSelfRef.baseIndex)))) 
                                                   - (IData)(1U)))) 
                                           << (0xfU 
                                               & (IData)(vlSelfRef.baseIndex)));
    vlSelfRef.__PVT__lookupMask[0U] = (0xfU & (~ vlSelfRef.__PVT__readMask
                                               [0U]));
    vlSelfRef.__PVT__lookupData[0U] = 0U;
    vlSelfRef.__PVT__lookupConflict[0U] = 0U;
    if (((vlSelfRef.__PVT__OUT_uop[0U][0U] & ((0x3fffffffU 
                                               & ((vlSelfRef.__PVT__OUT_uop
                                                   [0U][1U] 
                                                   << 0x18U) 
                                                  | (vlSelfRef.__PVT__OUT_uop
                                                     [0U][0U] 
                                                     >> 8U))) 
                                              == (vlSelfRef.__PVT__lookupAddr
                                                  [0U] 
                                                  >> 2U))) 
         & (0x80000000U <= ((vlSelfRef.__PVT__OUT_uop
                             [0U][1U] << 0x1aU) | (
                                                   vlSelfRef.__PVT__OUT_uop
                                                   [0U][0U] 
                                                   >> 6U))))) {
        vlSelfRef.__PVT__lookupMask[0U] = (0xfU & (
                                                   vlSelfRef.__PVT__lookupMask
                                                   [0U] 
                                                   | ((vlSelfRef.__PVT__OUT_uop
                                                       [0U][0U] 
                                                       << 0x1eU) 
                                                      | (vlSelfRef.__PVT__OUT_uop
                                                         [0U][0U] 
                                                         >> 2U))));
        if ((4U & vlSelfRef.__PVT__OUT_uop[0U][0U])) {
            vlSelfRef.__PVT__lookupData[0U] = ((0xffffff00U 
                                                & vlSelfRef.__PVT__lookupData
                                                [0U]) 
                                               | (0xffU 
                                                  & (vlSelfRef.__PVT__OUT_uop
                                                     [0U][1U] 
                                                     >> 6U)));
        }
        if ((8U & vlSelfRef.__PVT__OUT_uop[0U][0U])) {
            vlSelfRef.__PVT__lookupData[0U] = ((0xffff00ffU 
                                                & vlSelfRef.__PVT__lookupData
                                                [0U]) 
                                               | (0xff00U 
                                                  & (vlSelfRef.__PVT__OUT_uop
                                                     [0U][1U] 
                                                     >> 6U)));
        }
        if ((0x10U & vlSelfRef.__PVT__OUT_uop[0U][0U])) {
            vlSelfRef.__PVT__lookupData[0U] = ((0xff00ffffU 
                                                & vlSelfRef.__PVT__lookupData
                                                [0U]) 
                                               | (0xff0000U 
                                                  & (vlSelfRef.__PVT__OUT_uop
                                                     [0U][1U] 
                                                     >> 6U)));
        }
        if ((0x20U & vlSelfRef.__PVT__OUT_uop[0U][0U])) {
            vlSelfRef.__PVT__lookupData[0U] = ((0xffffffU 
                                                & vlSelfRef.__PVT__lookupData
                                                [0U]) 
                                               | (0xff000000U 
                                                  & ((vlSelfRef.__PVT__OUT_uop
                                                      [0U][2U] 
                                                      << 0x1aU) 
                                                     | (0x3000000U 
                                                        & (vlSelfRef.__PVT__OUT_uop
                                                           [0U][1U] 
                                                           >> 6U)))));
        }
    }
    if (((vlSelfRef.__PVT__OUT_uop[1U][0U] & ((0x3fffffffU 
                                               & ((vlSelfRef.__PVT__OUT_uop
                                                   [1U][1U] 
                                                   << 0x18U) 
                                                  | (vlSelfRef.__PVT__OUT_uop
                                                     [1U][0U] 
                                                     >> 8U))) 
                                              == (vlSelfRef.__PVT__lookupAddr
                                                  [0U] 
                                                  >> 2U))) 
         & (0x80000000U <= ((vlSelfRef.__PVT__OUT_uop
                             [1U][1U] << 0x1aU) | (
                                                   vlSelfRef.__PVT__OUT_uop
                                                   [1U][0U] 
                                                   >> 6U))))) {
        vlSelfRef.__PVT__lookupMask[0U] = (0xfU & (
                                                   vlSelfRef.__PVT__lookupMask
                                                   [0U] 
                                                   | ((vlSelfRef.__PVT__OUT_uop
                                                       [1U][0U] 
                                                       << 0x1eU) 
                                                      | (vlSelfRef.__PVT__OUT_uop
                                                         [1U][0U] 
                                                         >> 2U))));
        if ((4U & vlSelfRef.__PVT__OUT_uop[1U][0U])) {
            vlSelfRef.__PVT__lookupData[0U] = ((0xffffff00U 
                                                & vlSelfRef.__PVT__lookupData
                                                [0U]) 
                                               | (0xffU 
                                                  & (vlSelfRef.__PVT__OUT_uop
                                                     [1U][1U] 
                                                     >> 6U)));
        }
        if ((8U & vlSelfRef.__PVT__OUT_uop[1U][0U])) {
            vlSelfRef.__PVT__lookupData[0U] = ((0xffff00ffU 
                                                & vlSelfRef.__PVT__lookupData
                                                [0U]) 
                                               | (0xff00U 
                                                  & (vlSelfRef.__PVT__OUT_uop
                                                     [1U][1U] 
                                                     >> 6U)));
        }
        if ((0x10U & vlSelfRef.__PVT__OUT_uop[1U][0U])) {
            vlSelfRef.__PVT__lookupData[0U] = ((0xff00ffffU 
                                                & vlSelfRef.__PVT__lookupData
                                                [0U]) 
                                               | (0xff0000U 
                                                  & (vlSelfRef.__PVT__OUT_uop
                                                     [1U][1U] 
                                                     >> 6U)));
        }
        if ((0x20U & vlSelfRef.__PVT__OUT_uop[1U][0U])) {
            vlSelfRef.__PVT__lookupData[0U] = ((0xffffffU 
                                                & vlSelfRef.__PVT__lookupData
                                                [0U]) 
                                               | (0xff000000U 
                                                  & ((vlSelfRef.__PVT__OUT_uop
                                                      [1U][2U] 
                                                      << 0x1aU) 
                                                     | (0x3000000U 
                                                        & (vlSelfRef.__PVT__OUT_uop
                                                           [1U][1U] 
                                                           >> 6U)))));
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0U;
    if ((((vlSelfRef.entries[0U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [0U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [0U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[0U] | (IData)(vlSelfRef.entryReady_r))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 1U;
    if ((((vlSelfRef.entries[1U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [1U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [1U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[0U] >> 1U) 
             | ((IData)(vlSelfRef.entryReady_r) >> 1U))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [1U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [1U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 2U;
    if ((((vlSelfRef.entries[2U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [2U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [2U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[0U] >> 2U) 
             | ((IData)(vlSelfRef.entryReady_r) >> 2U))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [2U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [2U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 3U;
    if ((((vlSelfRef.entries[3U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [3U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [3U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[0U] >> 3U) 
             | ((IData)(vlSelfRef.entryReady_r) >> 3U))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [3U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [3U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 4U;
    if ((((vlSelfRef.entries[4U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [4U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [4U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[0U] >> 4U) 
             | ((IData)(vlSelfRef.entryReady_r) >> 4U))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [4U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [4U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 5U;
    if ((((vlSelfRef.entries[5U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [5U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [5U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[0U] >> 5U) 
             | ((IData)(vlSelfRef.entryReady_r) >> 5U))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [5U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [5U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 6U;
    if ((((vlSelfRef.entries[6U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [6U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [6U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[0U] >> 6U) 
             | ((IData)(vlSelfRef.entryReady_r) >> 6U))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [6U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [6U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 7U;
    if ((((vlSelfRef.entries[7U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [7U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [7U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[0U] >> 7U) 
             | ((IData)(vlSelfRef.entryReady_r) >> 7U))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [7U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [7U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 8U;
    if ((((vlSelfRef.entries[8U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [8U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [8U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[0U] >> 8U) 
             | ((IData)(vlSelfRef.entryReady_r) >> 8U))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [8U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [8U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 9U;
    if ((((vlSelfRef.entries[9U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [9U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [9U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[0U] >> 9U) 
             | ((IData)(vlSelfRef.entryReady_r) >> 9U))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [9U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [9U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xaU;
    if ((((vlSelfRef.entries[0xaU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xaU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xaU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [0U] 
                                              >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[0U] >> 0xaU) 
             | ((IData)(vlSelfRef.entryReady_r) >> 0xaU))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xaU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xaU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xbU;
    if ((((vlSelfRef.entries[0xbU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xbU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xbU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [0U] 
                                              >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[0U] >> 0xbU) 
             | ((IData)(vlSelfRef.entryReady_r) >> 0xbU))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xbU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xbU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xcU;
    if ((((vlSelfRef.entries[0xcU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xcU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xcU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [0U] 
                                              >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[0U] >> 0xcU) 
             | ((IData)(vlSelfRef.entryReady_r) >> 0xcU))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xcU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xcU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xdU;
    if ((((vlSelfRef.entries[0xdU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xdU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xdU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [0U] 
                                              >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[0U] >> 0xdU) 
             | ((IData)(vlSelfRef.entryReady_r) >> 0xdU))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xdU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xdU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xeU;
    if ((((vlSelfRef.entries[0xeU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xeU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xeU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [0U] 
                                              >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[0U] >> 0xeU) 
             | ((IData)(vlSelfRef.entryReady_r) >> 0xeU))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xeU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xeU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xfU;
    if ((((vlSelfRef.entries[0xfU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xfU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xfU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [0U] 
                                              >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[0U] >> 0xfU) 
             | ((IData)(vlSelfRef.entryReady_r) >> 0xfU))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xfU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xfU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0U;
    if ((((vlSelfRef.entries[0U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [0U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [0U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[0U] >> 0x10U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 1U;
    if ((((vlSelfRef.entries[1U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [1U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [1U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[0U] >> 0x11U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [1U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [1U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 2U;
    if ((((vlSelfRef.entries[2U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [2U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [2U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[0U] >> 0x12U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [2U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [2U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 3U;
    if ((((vlSelfRef.entries[3U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [3U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [3U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[0U] >> 0x13U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [3U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [3U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 4U;
    if ((((vlSelfRef.entries[4U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [4U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [4U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[0U] >> 0x14U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [4U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [4U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 5U;
    if ((((vlSelfRef.entries[5U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [5U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [5U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[0U] >> 0x15U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [5U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [5U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 6U;
    if ((((vlSelfRef.entries[6U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [6U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [6U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[0U] >> 0x16U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [6U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [6U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 7U;
    if ((((vlSelfRef.entries[7U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [7U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [7U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[0U] >> 0x17U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [7U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [7U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 8U;
    if ((((vlSelfRef.entries[8U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [8U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [8U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[0U] >> 0x18U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [8U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [8U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 9U;
    if ((((vlSelfRef.entries[9U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [9U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [9U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [0U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[0U] >> 0x19U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [9U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [9U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xaU;
    if ((((vlSelfRef.entries[0xaU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xaU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xaU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [0U] 
                                              >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[0U] >> 0x1aU)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xaU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xaU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xbU;
    if ((((vlSelfRef.entries[0xbU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xbU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xbU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [0U] 
                                              >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[0U] >> 0x1bU)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xbU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xbU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xcU;
    if ((((vlSelfRef.entries[0xcU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xcU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xcU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [0U] 
                                              >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[0U] >> 0x1cU)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xcU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xcU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xdU;
    if ((((vlSelfRef.entries[0xdU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xdU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xdU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [0U] 
                                              >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[0U] >> 0x1dU)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xdU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xdU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xeU;
    if ((((vlSelfRef.entries[0xeU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xeU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xeU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [0U] 
                                              >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[0U] >> 0x1eU)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xeU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xeU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xfU;
    if ((((vlSelfRef.entries[0xfU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xfU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xfU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [0U] 
                                              >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[0U] >> 0x1fU)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xfU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xfU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[0U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[0U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [0U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[0U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [0U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [0U])))) {
            vlSelfRef.__PVT__lookupConflict[0U] = 1U;
        }
    }
    vlSelfRef.__PVT__lookupMask[1U] = (0xfU & (~ vlSelfRef.__PVT__readMask
                                               [1U]));
    vlSelfRef.__PVT__lookupData[1U] = 0U;
    vlSelfRef.__PVT__lookupConflict[1U] = 0U;
    if (((vlSelfRef.__PVT__OUT_uop[0U][0U] & ((0x3fffffffU 
                                               & ((vlSelfRef.__PVT__OUT_uop
                                                   [0U][1U] 
                                                   << 0x18U) 
                                                  | (vlSelfRef.__PVT__OUT_uop
                                                     [0U][0U] 
                                                     >> 8U))) 
                                              == (vlSelfRef.__PVT__lookupAddr
                                                  [1U] 
                                                  >> 2U))) 
         & (0x80000000U <= ((vlSelfRef.__PVT__OUT_uop
                             [0U][1U] << 0x1aU) | (
                                                   vlSelfRef.__PVT__OUT_uop
                                                   [0U][0U] 
                                                   >> 6U))))) {
        vlSelfRef.__PVT__lookupMask[1U] = (0xfU & (
                                                   vlSelfRef.__PVT__lookupMask
                                                   [1U] 
                                                   | ((vlSelfRef.__PVT__OUT_uop
                                                       [0U][0U] 
                                                       << 0x1eU) 
                                                      | (vlSelfRef.__PVT__OUT_uop
                                                         [0U][0U] 
                                                         >> 2U))));
        if ((4U & vlSelfRef.__PVT__OUT_uop[0U][0U])) {
            vlSelfRef.__PVT__lookupData[1U] = ((0xffffff00U 
                                                & vlSelfRef.__PVT__lookupData
                                                [1U]) 
                                               | (0xffU 
                                                  & (vlSelfRef.__PVT__OUT_uop
                                                     [0U][1U] 
                                                     >> 6U)));
        }
        if ((8U & vlSelfRef.__PVT__OUT_uop[0U][0U])) {
            vlSelfRef.__PVT__lookupData[1U] = ((0xffff00ffU 
                                                & vlSelfRef.__PVT__lookupData
                                                [1U]) 
                                               | (0xff00U 
                                                  & (vlSelfRef.__PVT__OUT_uop
                                                     [0U][1U] 
                                                     >> 6U)));
        }
        if ((0x10U & vlSelfRef.__PVT__OUT_uop[0U][0U])) {
            vlSelfRef.__PVT__lookupData[1U] = ((0xff00ffffU 
                                                & vlSelfRef.__PVT__lookupData
                                                [1U]) 
                                               | (0xff0000U 
                                                  & (vlSelfRef.__PVT__OUT_uop
                                                     [0U][1U] 
                                                     >> 6U)));
        }
        if ((0x20U & vlSelfRef.__PVT__OUT_uop[0U][0U])) {
            vlSelfRef.__PVT__lookupData[1U] = ((0xffffffU 
                                                & vlSelfRef.__PVT__lookupData
                                                [1U]) 
                                               | (0xff000000U 
                                                  & ((vlSelfRef.__PVT__OUT_uop
                                                      [0U][2U] 
                                                      << 0x1aU) 
                                                     | (0x3000000U 
                                                        & (vlSelfRef.__PVT__OUT_uop
                                                           [0U][1U] 
                                                           >> 6U)))));
        }
    }
    if (((vlSelfRef.__PVT__OUT_uop[1U][0U] & ((0x3fffffffU 
                                               & ((vlSelfRef.__PVT__OUT_uop
                                                   [1U][1U] 
                                                   << 0x18U) 
                                                  | (vlSelfRef.__PVT__OUT_uop
                                                     [1U][0U] 
                                                     >> 8U))) 
                                              == (vlSelfRef.__PVT__lookupAddr
                                                  [1U] 
                                                  >> 2U))) 
         & (0x80000000U <= ((vlSelfRef.__PVT__OUT_uop
                             [1U][1U] << 0x1aU) | (
                                                   vlSelfRef.__PVT__OUT_uop
                                                   [1U][0U] 
                                                   >> 6U))))) {
        vlSelfRef.__PVT__lookupMask[1U] = (0xfU & (
                                                   vlSelfRef.__PVT__lookupMask
                                                   [1U] 
                                                   | ((vlSelfRef.__PVT__OUT_uop
                                                       [1U][0U] 
                                                       << 0x1eU) 
                                                      | (vlSelfRef.__PVT__OUT_uop
                                                         [1U][0U] 
                                                         >> 2U))));
        if ((4U & vlSelfRef.__PVT__OUT_uop[1U][0U])) {
            vlSelfRef.__PVT__lookupData[1U] = ((0xffffff00U 
                                                & vlSelfRef.__PVT__lookupData
                                                [1U]) 
                                               | (0xffU 
                                                  & (vlSelfRef.__PVT__OUT_uop
                                                     [1U][1U] 
                                                     >> 6U)));
        }
        if ((8U & vlSelfRef.__PVT__OUT_uop[1U][0U])) {
            vlSelfRef.__PVT__lookupData[1U] = ((0xffff00ffU 
                                                & vlSelfRef.__PVT__lookupData
                                                [1U]) 
                                               | (0xff00U 
                                                  & (vlSelfRef.__PVT__OUT_uop
                                                     [1U][1U] 
                                                     >> 6U)));
        }
        if ((0x10U & vlSelfRef.__PVT__OUT_uop[1U][0U])) {
            vlSelfRef.__PVT__lookupData[1U] = ((0xff00ffffU 
                                                & vlSelfRef.__PVT__lookupData
                                                [1U]) 
                                               | (0xff0000U 
                                                  & (vlSelfRef.__PVT__OUT_uop
                                                     [1U][1U] 
                                                     >> 6U)));
        }
        if ((0x20U & vlSelfRef.__PVT__OUT_uop[1U][0U])) {
            vlSelfRef.__PVT__lookupData[1U] = ((0xffffffU 
                                                & vlSelfRef.__PVT__lookupData
                                                [1U]) 
                                               | (0xff000000U 
                                                  & ((vlSelfRef.__PVT__OUT_uop
                                                      [1U][2U] 
                                                      << 0x1aU) 
                                                     | (0x3000000U 
                                                        & (vlSelfRef.__PVT__OUT_uop
                                                           [1U][1U] 
                                                           >> 6U)))));
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0U;
    if ((((vlSelfRef.entries[0U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [0U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [0U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[1U] | (IData)(vlSelfRef.entryReady_r))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 1U;
    if ((((vlSelfRef.entries[1U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [1U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [1U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[1U] >> 1U) 
             | ((IData)(vlSelfRef.entryReady_r) >> 1U))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [1U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [1U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 2U;
    if ((((vlSelfRef.entries[2U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [2U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [2U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[1U] >> 2U) 
             | ((IData)(vlSelfRef.entryReady_r) >> 2U))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [2U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [2U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 3U;
    if ((((vlSelfRef.entries[3U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [3U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [3U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[1U] >> 3U) 
             | ((IData)(vlSelfRef.entryReady_r) >> 3U))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [3U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [3U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 4U;
    if ((((vlSelfRef.entries[4U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [4U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [4U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[1U] >> 4U) 
             | ((IData)(vlSelfRef.entryReady_r) >> 4U))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [4U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [4U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 5U;
    if ((((vlSelfRef.entries[5U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [5U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [5U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[1U] >> 5U) 
             | ((IData)(vlSelfRef.entryReady_r) >> 5U))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [5U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [5U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 6U;
    if ((((vlSelfRef.entries[6U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [6U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [6U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[1U] >> 6U) 
             | ((IData)(vlSelfRef.entryReady_r) >> 6U))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [6U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [6U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 7U;
    if ((((vlSelfRef.entries[7U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [7U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [7U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[1U] >> 7U) 
             | ((IData)(vlSelfRef.entryReady_r) >> 7U))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [7U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [7U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 8U;
    if ((((vlSelfRef.entries[8U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [8U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [8U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[1U] >> 8U) 
             | ((IData)(vlSelfRef.entryReady_r) >> 8U))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [8U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [8U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 9U;
    if ((((vlSelfRef.entries[9U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [9U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [9U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[1U] >> 9U) 
             | ((IData)(vlSelfRef.entryReady_r) >> 9U))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [9U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [9U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xaU;
    if ((((vlSelfRef.entries[0xaU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xaU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xaU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [1U] 
                                              >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[1U] >> 0xaU) 
             | ((IData)(vlSelfRef.entryReady_r) >> 0xaU))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xaU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xaU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xbU;
    if ((((vlSelfRef.entries[0xbU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xbU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xbU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [1U] 
                                              >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[1U] >> 0xbU) 
             | ((IData)(vlSelfRef.entryReady_r) >> 0xbU))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xbU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xbU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xcU;
    if ((((vlSelfRef.entries[0xcU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xcU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xcU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [1U] 
                                              >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[1U] >> 0xcU) 
             | ((IData)(vlSelfRef.entryReady_r) >> 0xcU))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xcU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xcU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xdU;
    if ((((vlSelfRef.entries[0xdU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xdU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xdU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [1U] 
                                              >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[1U] >> 0xdU) 
             | ((IData)(vlSelfRef.entryReady_r) >> 0xdU))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xdU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xdU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xeU;
    if ((((vlSelfRef.entries[0xeU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xeU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xeU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [1U] 
                                              >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[1U] >> 0xeU) 
             | ((IData)(vlSelfRef.entryReady_r) >> 0xeU))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xeU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xeU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xfU;
    if ((((vlSelfRef.entries[0xfU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xfU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xfU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [1U] 
                                              >> 2U))) 
          & ((vlSelfRef.__PVT__forwardRange_c[1U] >> 0xfU) 
             | ((IData)(vlSelfRef.entryReady_r) >> 0xfU))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xfU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xfU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0U;
    if ((((vlSelfRef.entries[0U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [0U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [0U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[1U] >> 0x10U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 1U;
    if ((((vlSelfRef.entries[1U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [1U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [1U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[1U] >> 0x11U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [1U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [1U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 2U;
    if ((((vlSelfRef.entries[2U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [2U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [2U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[1U] >> 0x12U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [2U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [2U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 3U;
    if ((((vlSelfRef.entries[3U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [3U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [3U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[1U] >> 0x13U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [3U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [3U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 4U;
    if ((((vlSelfRef.entries[4U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [4U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [4U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[1U] >> 0x14U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [4U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [4U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 5U;
    if ((((vlSelfRef.entries[5U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [5U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [5U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[1U] >> 0x15U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [5U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [5U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 6U;
    if ((((vlSelfRef.entries[6U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [6U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [6U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[1U] >> 0x16U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [6U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [6U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 7U;
    if ((((vlSelfRef.entries[7U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [7U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [7U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[1U] >> 0x17U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [7U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [7U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 8U;
    if ((((vlSelfRef.entries[8U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [8U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [8U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[1U] >> 0x18U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [8U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [8U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 9U;
    if ((((vlSelfRef.entries[9U][0U] & ((0x3fffffffU 
                                         & ((vlSelfRef.entries
                                             [9U][1U] 
                                             << 0x1aU) 
                                            | (vlSelfRef.entries
                                               [9U][0U] 
                                               >> 6U))) 
                                        == (vlSelfRef.__PVT__lookupAddr
                                            [1U] >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[1U] >> 0x19U)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [9U][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [9U][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xaU;
    if ((((vlSelfRef.entries[0xaU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xaU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xaU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [1U] 
                                              >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[1U] >> 0x1aU)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xaU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xaU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xbU;
    if ((((vlSelfRef.entries[0xbU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xbU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xbU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [1U] 
                                              >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[1U] >> 0x1bU)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xbU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xbU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xcU;
    if ((((vlSelfRef.entries[0xcU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xcU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xcU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [1U] 
                                              >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[1U] >> 0x1cU)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xcU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xcU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xdU;
    if ((((vlSelfRef.entries[0xdU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xdU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xdU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [1U] 
                                              >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[1U] >> 0x1dU)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xdU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xdU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xeU;
    if ((((vlSelfRef.entries[0xeU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xeU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xeU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [1U] 
                                              >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[1U] >> 0x1eU)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xeU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xeU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0xfU;
    if ((((vlSelfRef.entries[0xfU][0U] & ((0x3fffffffU 
                                           & ((vlSelfRef.entries
                                               [0xfU][1U] 
                                               << 0x1aU) 
                                              | (vlSelfRef.entries
                                                 [0xfU][0U] 
                                                 >> 6U))) 
                                          == (vlSelfRef.__PVT__lookupAddr
                                              [1U] 
                                              >> 2U))) 
          & (vlSelfRef.__PVT__forwardRange_c[1U] >> 0x1fU)) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.entries
                                            [0xfU][1U] 
                                            << 0x1cU) 
                                           | (0xffffffcU 
                                              & (vlSelfRef.entries
                                                 [0xfU][0U] 
                                                 >> 4U))))))) {
        if ((2U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
            if ((4U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xffU 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (1U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((8U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff00U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (2U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x10U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff0000U 
                                                      & (vlSelfRef.entries
                                                         [
                                                         (0xfU 
                                                          & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                         >> 4U)));
                vlSelfRef.__PVT__lookupMask[1U] = (4U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
            if ((0x20U & vlSelfRef.entries[(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U])) {
                vlSelfRef.__PVT__lookupData[1U] = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__lookupData
                                                    [1U]) 
                                                   | (0xff000000U 
                                                      & ((vlSelfRef.entries
                                                          [
                                                          (0xfU 
                                                           & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][2U] 
                                                          << 0x1cU) 
                                                         | (0xf000000U 
                                                            & (vlSelfRef.entries
                                                               [
                                                               (0xfU 
                                                                & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][1U] 
                                                               >> 4U)))));
                vlSelfRef.__PVT__lookupMask[1U] = (8U 
                                                   | vlSelfRef.__PVT__lookupMask
                                                   [1U]);
            }
        } else if ((0U != (0xfU & ((vlSelfRef.entries
                                    [(0xfU & __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii)][0U] 
                                    >> 2U) & vlSelfRef.__PVT__readMask
                                   [1U])))) {
            vlSelfRef.__PVT__lookupConflict[1U] = 1U;
        }
    }
}

VL_INLINE_OPT void VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__2(VTop_StoreQueue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__OUT_fwd__v0) {
        vlSelfRef.__PVT__OUT_fwd[0U] = 0ULL;
        vlSelfRef.__PVT__OUT_fwd[0U] = (0x3ffffffffeULL 
                                        & vlSelfRef.__PVT__OUT_fwd
                                        [0U]);
        vlSelfRef.__PVT__OUT_fwd[1U] = 0ULL;
        vlSelfRef.__PVT__OUT_fwd[1U] = (0x3ffffffffeULL 
                                        & vlSelfRef.__PVT__OUT_fwd
                                        [1U]);
    }
    if (vlSelfRef.__VdlySet__OUT_fwd__v4) {
        vlSelfRef.__PVT__OUT_fwd[0U] = (1ULL | vlSelfRef.__PVT__OUT_fwd
                                        [0U]);
        vlSelfRef.__PVT__OUT_fwd[0U] = ((0x3fULL & 
                                         vlSelfRef.__PVT__OUT_fwd
                                         [0U]) | ((QData)((IData)(vlSelfRef.__VdlyVal__OUT_fwd__v5)) 
                                                  << 6U));
        vlSelfRef.__PVT__OUT_fwd[0U] = ((0x3fffffffc3ULL 
                                         & vlSelfRef.__PVT__OUT_fwd
                                         [0U]) | ((QData)((IData)(vlSelfRef.__VdlyVal__OUT_fwd__v6)) 
                                                  << 2U));
        vlSelfRef.__PVT__OUT_fwd[0U] = ((0x3ffffffffdULL 
                                         & vlSelfRef.__PVT__OUT_fwd
                                         [0U]) | ((QData)((IData)(vlSelfRef.__VdlyVal__OUT_fwd__v7)) 
                                                  << 1U));
    }
    if (vlSelfRef.__VdlySet__OUT_fwd__v8) {
        vlSelfRef.__PVT__OUT_fwd[1U] = (1ULL | vlSelfRef.__PVT__OUT_fwd
                                        [1U]);
        vlSelfRef.__PVT__OUT_fwd[1U] = ((0x3fULL & 
                                         vlSelfRef.__PVT__OUT_fwd
                                         [1U]) | ((QData)((IData)(vlSelfRef.__VdlyVal__OUT_fwd__v9)) 
                                                  << 6U));
        vlSelfRef.__PVT__OUT_fwd[1U] = ((0x3fffffffc3ULL 
                                         & vlSelfRef.__PVT__OUT_fwd
                                         [1U]) | ((QData)((IData)(vlSelfRef.__VdlyVal__OUT_fwd__v10)) 
                                                  << 2U));
        vlSelfRef.__PVT__OUT_fwd[1U] = ((0x3ffffffffdULL 
                                         & vlSelfRef.__PVT__OUT_fwd
                                         [1U]) | ((QData)((IData)(vlSelfRef.__VdlyVal__OUT_fwd__v11)) 
                                                  << 1U));
    }
}

VL_INLINE_OPT void VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__4(VTop_StoreQueue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__4\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __PVT__unnamedblk15__DOT__unnamedblk16__DOT__addr;
    __PVT__unnamedblk15__DOT__unnamedblk16__DOT__addr = 0;
    VlWide<3>/*67:0*/ __PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry;
    VL_ZERO_W(68, __PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry);
    CData/*0:0*/ __PVT__unnamedblk15__DOT__unnamedblk16__DOT__ready;
    __PVT__unnamedblk15__DOT__unnamedblk16__DOT__ready = 0;
    CData/*0:0*/ __PVT__unnamedblk17__DOT__prevValid;
    __PVT__unnamedblk17__DOT__prevValid = 0;
    // Body
    vlSelfRef.__PVT__empty = 1U;
    if ((1U & vlSelfRef.entries[0U][0U])) {
        vlSelfRef.__PVT__empty = 0U;
    }
    if ((1U & vlSelfRef.entries[1U][0U])) {
        vlSelfRef.__PVT__empty = 0U;
    }
    if ((1U & vlSelfRef.entries[2U][0U])) {
        vlSelfRef.__PVT__empty = 0U;
    }
    if ((1U & vlSelfRef.entries[3U][0U])) {
        vlSelfRef.__PVT__empty = 0U;
    }
    if ((1U & vlSelfRef.entries[4U][0U])) {
        vlSelfRef.__PVT__empty = 0U;
    }
    if ((1U & vlSelfRef.entries[5U][0U])) {
        vlSelfRef.__PVT__empty = 0U;
    }
    if ((1U & vlSelfRef.entries[6U][0U])) {
        vlSelfRef.__PVT__empty = 0U;
    }
    if ((1U & vlSelfRef.entries[7U][0U])) {
        vlSelfRef.__PVT__empty = 0U;
    }
    if ((1U & vlSelfRef.entries[8U][0U])) {
        vlSelfRef.__PVT__empty = 0U;
    }
    if ((1U & vlSelfRef.entries[9U][0U])) {
        vlSelfRef.__PVT__empty = 0U;
    }
    if ((1U & vlSelfRef.entries[0xaU][0U])) {
        vlSelfRef.__PVT__empty = 0U;
    }
    if ((1U & vlSelfRef.entries[0xbU][0U])) {
        vlSelfRef.__PVT__empty = 0U;
    }
    if ((1U & vlSelfRef.entries[0xcU][0U])) {
        vlSelfRef.__PVT__empty = 0U;
    }
    if ((1U & vlSelfRef.entries[0xdU][0U])) {
        vlSelfRef.__PVT__empty = 0U;
    }
    if ((1U & vlSelfRef.entries[0xeU][0U])) {
        vlSelfRef.__PVT__empty = 0U;
    }
    if ((1U & vlSelfRef.entries[0xfU][0U])) {
        vlSelfRef.__PVT__empty = 0U;
    }
    vlSelfRef.__PVT__deqAddrs[0U] = (0xfU & (IData)(vlSelfRef.baseIndex));
    vlSelfRef.__PVT__deqAddrs[1U] = (0xfU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.baseIndex)));
    vlSelfRef.__PVT__deqAddrsSorted[0U] = 0U;
    vlSelfRef.__PVT__deqAddrsSorted[1U] = 0U;
    vlSelfRef.__PVT__deqAddrsSorted[(1U & vlSelfRef.__PVT__deqAddrs
                                     [0U])] = vlSelfRef.__PVT__deqAddrs
        [0U];
    vlSelfRef.__PVT__deqAddrsSorted[(1U & vlSelfRef.__PVT__deqAddrs
                                     [1U])] = vlSelfRef.__PVT__deqAddrs
        [1U];
    __PVT__unnamedblk15__DOT__unnamedblk16__DOT__addr 
        = (0xeU & vlSelfRef.__PVT__deqAddrsSorted[0U]);
    __PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[0U] 
        = vlSelfRef.entries[__PVT__unnamedblk15__DOT__unnamedblk16__DOT__addr][0U];
    __PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[1U] 
        = vlSelfRef.entries[__PVT__unnamedblk15__DOT__unnamedblk16__DOT__addr][1U];
    __PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[2U] 
        = vlSelfRef.entries[__PVT__unnamedblk15__DOT__unnamedblk16__DOT__addr][2U];
    __PVT__unnamedblk15__DOT__unnamedblk16__DOT__ready 
        = (1U & (((IData)(vlSelfRef.entryReady_r) >> (IData)(__PVT__unnamedblk15__DOT__unnamedblk16__DOT__addr)) 
                 & (__PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[0U] 
                    >> 1U)));
    vlSelfRef.__PVT__deqPorts[0U][0U] = 0U;
    vlSelfRef.__PVT__deqPorts[0U][1U] = 0U;
    vlSelfRef.__PVT__deqPorts[0U][2U] = 0U;
    __PVT__unnamedblk15__DOT__unnamedblk16__DOT__addr 
        = (1U | (0xeU & vlSelfRef.__PVT__deqAddrsSorted
                 [1U]));
    if (__PVT__unnamedblk15__DOT__unnamedblk16__DOT__ready) {
        vlSelfRef.__PVT__deqPorts[0U][1U] = ((0x3fU 
                                              & vlSelfRef.__PVT__deqPorts
                                              [0U][1U]) 
                                             | (0xffffffc0U 
                                                & (__PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[1U] 
                                                   << 2U)));
        vlSelfRef.__PVT__deqPorts[0U][2U] = (0x3fU 
                                             & ((0x3cU 
                                                 & (__PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[2U] 
                                                    << 2U)) 
                                                | (__PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[1U] 
                                                   >> 0x1eU)));
        vlSelfRef.__PVT__deqPorts[0U][0U] = (0xffffff3fU 
                                             & vlSelfRef.__PVT__deqPorts
                                             [0U][0U]);
        vlSelfRef.__PVT__deqPorts[0U][0U] = ((0xffU 
                                              & vlSelfRef.__PVT__deqPorts
                                              [0U][0U]) 
                                             | (0xffffff00U 
                                                & (__PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[0U] 
                                                   << 2U)));
        vlSelfRef.__PVT__deqPorts[0U][1U] = ((0xffffffc0U 
                                              & vlSelfRef.__PVT__deqPorts
                                              [0U][1U]) 
                                             | (0x3fU 
                                                & ((0xfcU 
                                                    & (__PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[1U] 
                                                       << 2U)) 
                                                   | (__PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[0U] 
                                                      >> 0x1eU))));
        vlSelfRef.__PVT__deqPorts[0U][0U] = ((0xffffffc3U 
                                              & vlSelfRef.__PVT__deqPorts
                                              [0U][0U]) 
                                             | (0x3cU 
                                                & __PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[0U]));
        vlSelfRef.__PVT__deqPorts[0U][0U] = ((0xfffffffdU 
                                              & vlSelfRef.__PVT__deqPorts
                                              [0U][0U]) 
                                             | ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (__PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[0U] 
                                                     >> 2U))) 
                                                << 1U));
        vlSelfRef.__PVT__deqPorts[0U][0U] = (1U | vlSelfRef.__PVT__deqPorts
                                             [0U][0U]);
    }
    __PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[0U] 
        = vlSelfRef.entries[__PVT__unnamedblk15__DOT__unnamedblk16__DOT__addr][0U];
    __PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[1U] 
        = vlSelfRef.entries[__PVT__unnamedblk15__DOT__unnamedblk16__DOT__addr][1U];
    __PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[2U] 
        = vlSelfRef.entries[__PVT__unnamedblk15__DOT__unnamedblk16__DOT__addr][2U];
    __PVT__unnamedblk15__DOT__unnamedblk16__DOT__ready 
        = (1U & (((IData)(vlSelfRef.entryReady_r) >> (IData)(__PVT__unnamedblk15__DOT__unnamedblk16__DOT__addr)) 
                 & (__PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[0U] 
                    >> 1U)));
    vlSelfRef.__PVT__deqPorts[1U][0U] = 0U;
    vlSelfRef.__PVT__deqPorts[1U][1U] = 0U;
    vlSelfRef.__PVT__deqPorts[1U][2U] = 0U;
    if (__PVT__unnamedblk15__DOT__unnamedblk16__DOT__ready) {
        vlSelfRef.__PVT__deqPorts[1U][1U] = ((0x3fU 
                                              & vlSelfRef.__PVT__deqPorts
                                              [1U][1U]) 
                                             | (0xffffffc0U 
                                                & (__PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[1U] 
                                                   << 2U)));
        vlSelfRef.__PVT__deqPorts[1U][2U] = (0x3fU 
                                             & ((0x3cU 
                                                 & (__PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[2U] 
                                                    << 2U)) 
                                                | (__PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[1U] 
                                                   >> 0x1eU)));
        vlSelfRef.__PVT__deqPorts[1U][0U] = (0xffffff3fU 
                                             & vlSelfRef.__PVT__deqPorts
                                             [1U][0U]);
        vlSelfRef.__PVT__deqPorts[1U][0U] = ((0xffU 
                                              & vlSelfRef.__PVT__deqPorts
                                              [1U][0U]) 
                                             | (0xffffff00U 
                                                & (__PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[0U] 
                                                   << 2U)));
        vlSelfRef.__PVT__deqPorts[1U][1U] = ((0xffffffc0U 
                                              & vlSelfRef.__PVT__deqPorts
                                              [1U][1U]) 
                                             | (0x3fU 
                                                & ((0xfcU 
                                                    & (__PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[1U] 
                                                       << 2U)) 
                                                   | (__PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[0U] 
                                                      >> 0x1eU))));
        vlSelfRef.__PVT__deqPorts[1U][0U] = ((0xffffffc3U 
                                              & vlSelfRef.__PVT__deqPorts
                                              [1U][0U]) 
                                             | (0x3cU 
                                                & __PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[0U]));
        vlSelfRef.__PVT__deqPorts[1U][0U] = ((0xfffffffdU 
                                              & vlSelfRef.__PVT__deqPorts
                                              [1U][0U]) 
                                             | ((0U 
                                                 == 
                                                 (0xfU 
                                                  & (__PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry[0U] 
                                                     >> 2U))) 
                                                << 1U));
        vlSelfRef.__PVT__deqPorts[1U][0U] = (1U | vlSelfRef.__PVT__deqPorts
                                             [1U][0U]);
    }
    vlSelfRef.__PVT__deqEntries[0U][0U] = vlSelfRef.__PVT__deqPorts
        [(1U & vlSelfRef.__PVT__deqAddrs[0U])][0U];
    vlSelfRef.__PVT__deqEntries[0U][1U] = vlSelfRef.__PVT__deqPorts
        [(1U & vlSelfRef.__PVT__deqAddrs[0U])][1U];
    vlSelfRef.__PVT__deqEntries[0U][2U] = vlSelfRef.__PVT__deqPorts
        [(1U & vlSelfRef.__PVT__deqAddrs[0U])][2U];
    __PVT__unnamedblk17__DOT__prevValid = (1U & vlSelfRef.__PVT__deqEntries
                                           [0U][0U]);
    if (__PVT__unnamedblk17__DOT__prevValid) {
        vlSelfRef.__PVT__deqEntries[1U][0U] = vlSelfRef.__PVT__deqPorts
            [(1U & vlSelfRef.__PVT__deqAddrs[1U])][0U];
        vlSelfRef.__PVT__deqEntries[1U][1U] = vlSelfRef.__PVT__deqPorts
            [(1U & vlSelfRef.__PVT__deqAddrs[1U])][1U];
        vlSelfRef.__PVT__deqEntries[1U][2U] = vlSelfRef.__PVT__deqPorts
            [(1U & vlSelfRef.__PVT__deqAddrs[1U])][2U];
    } else {
        vlSelfRef.__PVT__deqEntries[1U][0U] = 0U;
        vlSelfRef.__PVT__deqEntries[1U][1U] = 0U;
        vlSelfRef.__PVT__deqEntries[1U][2U] = 0U;
    }
    __PVT__unnamedblk17__DOT__prevValid = (1U & vlSelfRef.__PVT__deqEntries
                                           [1U][0U]);
    vlSelfRef.__PVT__outDeqView[0U][0U] = vlSelfRef.__PVT__OUT_uop
        [0U][0U];
    vlSelfRef.__PVT__outDeqView[0U][1U] = vlSelfRef.__PVT__OUT_uop
        [0U][1U];
    vlSelfRef.__PVT__outDeqView[0U][2U] = vlSelfRef.__PVT__OUT_uop
        [0U][2U];
    vlSelfRef.__PVT__outDeqView[1U][0U] = vlSelfRef.__PVT__OUT_uop
        [1U][0U];
    vlSelfRef.__PVT__outDeqView[1U][1U] = vlSelfRef.__PVT__OUT_uop
        [1U][1U];
    vlSelfRef.__PVT__outDeqView[1U][2U] = vlSelfRef.__PVT__OUT_uop
        [1U][2U];
    vlSelfRef.__PVT__outDeqView[2U][0U] = vlSelfRef.__PVT__deqEntries
        [0U][0U];
    vlSelfRef.__PVT__outDeqView[2U][1U] = vlSelfRef.__PVT__deqEntries
        [0U][1U];
    vlSelfRef.__PVT__outDeqView[2U][2U] = vlSelfRef.__PVT__deqEntries
        [0U][2U];
    vlSelfRef.__PVT__outDeqView[3U][0U] = vlSelfRef.__PVT__deqEntries
        [1U][0U];
    vlSelfRef.__PVT__outDeqView[3U][1U] = vlSelfRef.__PVT__deqEntries
        [1U][1U];
    vlSelfRef.__PVT__outDeqView[3U][2U] = vlSelfRef.__PVT__deqEntries
        [1U][2U];
}

VL_INLINE_OPT void VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__5(VTop_StoreQueue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__5\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__flushing = vlSelfRef.__Vdly__flushing;
}

VL_INLINE_OPT void VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__7(VTop_StoreQueue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__7\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    // Body
    vlSelfRef.__PVT__OUT_empty = vlSelfRef.__Vdly__OUT_empty;
    vlSelfRef.__PVT__unhandled = ((0xeU & (IData)(vlSelfRef.__PVT__unhandled)) 
                                  | (vlSelfRef.__PVT__OUT_uop
                                     [0U][0U] & vlSelfRef.__PVT__IN_stall
                                     [0U]));
    vlSelfRef.__PVT__unhandled = ((0xdU & (IData)(vlSelfRef.__PVT__unhandled)) 
                                  | ((vlSelfRef.__PVT__OUT_uop
                                      [1U][0U] & vlSelfRef.__PVT__IN_stall
                                      [1U]) << 1U));
    vlSelfRef.__PVT__unhandled = (0xcU | (IData)(vlSelfRef.__PVT__unhandled));
    vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U | vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (2U | vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = ((2U & vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U]) | (1U & (~ (IData)(vlSelfRef.__PVT__unhandled))));
    vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U | vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (2U | vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = ((2U & vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
            [1U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__unhandled) 
                              >> 1U))));
    vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U | vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (2U | vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = ((2U & vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__unhandled) 
                              >> 2U))));
    vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U | vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (2U | vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = ((2U & vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
            [3U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__unhandled) 
                              >> 3U))));
    __PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [0U]))));
    __PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [2U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [2U]))));
    vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [1U] >> 1U));
    vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0U] >> 1U));
    vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [3U] >> 1U));
    vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [2U] >> 1U));
    vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((0xcU & vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((2U & (vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 1U)) | vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((0xcU & vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((2U & (vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 1U)) | vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [2U]))]));
    vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((3U & vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((8U & (vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 2U)) | (((2U >= (IData)(__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((3U & vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((8U & (vlSelfRef.__PVT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 2U)) | (((2U >= (IData)(__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__s
                                                  [0U]))));
    vlSelfRef.__PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 2U));
    vlSelfRef.__PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0U] >> 2U));
}

VL_INLINE_OPT void VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__9(VTop_StoreQueue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__9\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __PVT__unnamedblk23__DOT__unnamedblk24__DOT__idx;
    __PVT__unnamedblk23__DOT__unnamedblk24__DOT__idx = 0;
    CData/*3:0*/ __PVT__unnamedblk23__DOT__unnamedblk24__DOT__idxSQ;
    __PVT__unnamedblk23__DOT__unnamedblk24__DOT__idxSQ = 0;
    VlUnpacked<CData/*0:0*/, 2> __PVT__penc__DOT__OUT_idxValid;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        __PVT__penc__DOT__OUT_idxValid[__Vi0] = 0;
    }
    CData/*5:0*/ __PVT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    // Body
    vlSelfRef.__PVT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((0x38U & vlSelfRef.__PVT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((4U & (vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [0U] << 2U)) | vlSelfRef.__PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((7U & vlSelfRef.__PVT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((0x20U & (vlSelfRef.__PVT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [0U] << 3U)) | (((2U 
                                                 >= (IData)(vlSelfRef.__PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [vlSelfRef.__PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    __PVT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__srcIdx[0U] = (3U & ((IData)(__PVT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                                         >> 1U));
    __PVT__penc__DOT__OUT_idxValid[0U] = (1U & (~ (IData)(__PVT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.__PVT__srcIdx[1U] = (3U & ((IData)(__PVT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                                         >> 4U));
    __PVT__penc__DOT__OUT_idxValid[1U] = (1U & (~ ((IData)(__PVT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                                                   >> 3U)));
    vlSelfRef.__PVT__entryWasDeqd = 0U;
    __PVT__unnamedblk23__DOT__unnamedblk24__DOT__idx 
        = vlSelfRef.__PVT__srcIdx[0U];
    __PVT__unnamedblk23__DOT__unnamedblk24__DOT__idxSQ 
        = (0xfU & (((IData)(vlSelfRef.baseIndex) + (IData)(__PVT__unnamedblk23__DOT__unnamedblk24__DOT__idx)) 
                   - (IData)(2U)));
    vlSelfRef.__PVT__deqCountUnary = (2U & (IData)(vlSelfRef.__PVT__deqCountUnary));
    if ((vlSelfRef.__PVT__outDeqView[__PVT__unnamedblk23__DOT__unnamedblk24__DOT__idx][0U] 
         & (2U <= (IData)(__PVT__unnamedblk23__DOT__unnamedblk24__DOT__idx)))) {
        vlSelfRef.__PVT__entryWasDeqd = ((IData)(vlSelfRef.__PVT__entryWasDeqd) 
                                         | (3U & ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & (IData)(__PVT__unnamedblk23__DOT__unnamedblk24__DOT__idxSQ)))));
        vlSelfRef.__PVT__deqCountUnary = (1U | (IData)(vlSelfRef.__PVT__deqCountUnary));
    }
    __PVT__unnamedblk23__DOT__unnamedblk24__DOT__idx 
        = vlSelfRef.__PVT__srcIdx[1U];
    __PVT__unnamedblk23__DOT__unnamedblk24__DOT__idxSQ 
        = (0xfU & (((IData)(vlSelfRef.baseIndex) + (IData)(__PVT__unnamedblk23__DOT__unnamedblk24__DOT__idx)) 
                   - (IData)(2U)));
    vlSelfRef.__PVT__deqCountUnary = (1U & (IData)(vlSelfRef.__PVT__deqCountUnary));
    if ((vlSelfRef.__PVT__outDeqView[__PVT__unnamedblk23__DOT__unnamedblk24__DOT__idx][0U] 
         & (2U <= (IData)(__PVT__unnamedblk23__DOT__unnamedblk24__DOT__idx)))) {
        vlSelfRef.__PVT__entryWasDeqd = ((IData)(vlSelfRef.__PVT__entryWasDeqd) 
                                         | (3U & ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & (IData)(__PVT__unnamedblk23__DOT__unnamedblk24__DOT__idxSQ)))));
        vlSelfRef.__PVT__deqCountUnary = (2U | (IData)(vlSelfRef.__PVT__deqCountUnary));
    }
    vlSelfRef.__PVT__nextBaseIndex = (0x7fU & ((IData)(vlSelfRef.baseIndex) 
                                               + (3U 
                                                  & ((1U 
                                                      & (IData)(vlSelfRef.__PVT__deqCountUnary)) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.__PVT__deqCountUnary) 
                                                         >> 1U))))));
}
