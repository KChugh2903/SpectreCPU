// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_ROB.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_ROB___ico_sequent__TOP__Top__soc__core__rob__0(VTop_ROB* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_ROB___ico_sequent__TOP__Top__soc__core__rob__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__unnamedblk3__DOT__deqBase;
    __PVT__unnamedblk3__DOT__deqBase = 0;
    CData/*6:0*/ __PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN;
    __PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN = 0;
    CData/*6:0*/ __Vlvbound_hdd1094b1__0;
    __Vlvbound_hdd1094b1__0 = 0;
    CData/*6:0*/ __Vlvbound_h4135b2b9__0;
    __Vlvbound_h4135b2b9__0 = 0;
    // Body
    vlSelfRef.__PVT__misprReplay_c = vlSelfRef.__PVT__misprReplay_r;
    if ((1U & vlSymsp->TOP__Top__soc__core.branch[0U])) {
        vlSelfRef.__PVT__misprReplay_c = (1U | ((0x7f00U 
                                                 & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                    >> 0xdU)) 
                                                | ((IData)(vlSelfRef.__PVT__baseIndex) 
                                                   << 1U)));
    }
    vlSelfRef.__PVT__rnUOpSorted[0U][0U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[0U][1U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[0U][2U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[0U][3U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[0U][4U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[0U][0U] = (0xfffffffeU 
                                            & vlSelfRef.__PVT__rnUOpSorted
                                            [0U][0U]);
    if ((vlSelfRef.__PVT__IN_uop[0U][0U] & (0U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [0U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[0U][0U] = vlSelfRef.__PVT__IN_uop
            [0U][0U];
        vlSelfRef.__PVT__rnUOpSorted[0U][1U] = vlSelfRef.__PVT__IN_uop
            [0U][1U];
        vlSelfRef.__PVT__rnUOpSorted[0U][2U] = vlSelfRef.__PVT__IN_uop
            [0U][2U];
        vlSelfRef.__PVT__rnUOpSorted[0U][3U] = vlSelfRef.__PVT__IN_uop
            [0U][3U];
        vlSelfRef.__PVT__rnUOpSorted[0U][4U] = vlSelfRef.__PVT__IN_uop
            [0U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[1U][0U] & (0U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [1U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[0U][0U] = vlSelfRef.__PVT__IN_uop
            [1U][0U];
        vlSelfRef.__PVT__rnUOpSorted[0U][1U] = vlSelfRef.__PVT__IN_uop
            [1U][1U];
        vlSelfRef.__PVT__rnUOpSorted[0U][2U] = vlSelfRef.__PVT__IN_uop
            [1U][2U];
        vlSelfRef.__PVT__rnUOpSorted[0U][3U] = vlSelfRef.__PVT__IN_uop
            [1U][3U];
        vlSelfRef.__PVT__rnUOpSorted[0U][4U] = vlSelfRef.__PVT__IN_uop
            [1U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[2U][0U] & (0U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [2U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[0U][0U] = vlSelfRef.__PVT__IN_uop
            [2U][0U];
        vlSelfRef.__PVT__rnUOpSorted[0U][1U] = vlSelfRef.__PVT__IN_uop
            [2U][1U];
        vlSelfRef.__PVT__rnUOpSorted[0U][2U] = vlSelfRef.__PVT__IN_uop
            [2U][2U];
        vlSelfRef.__PVT__rnUOpSorted[0U][3U] = vlSelfRef.__PVT__IN_uop
            [2U][3U];
        vlSelfRef.__PVT__rnUOpSorted[0U][4U] = vlSelfRef.__PVT__IN_uop
            [2U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[3U][0U] & (0U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [3U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[0U][0U] = vlSelfRef.__PVT__IN_uop
            [3U][0U];
        vlSelfRef.__PVT__rnUOpSorted[0U][1U] = vlSelfRef.__PVT__IN_uop
            [3U][1U];
        vlSelfRef.__PVT__rnUOpSorted[0U][2U] = vlSelfRef.__PVT__IN_uop
            [3U][2U];
        vlSelfRef.__PVT__rnUOpSorted[0U][3U] = vlSelfRef.__PVT__IN_uop
            [3U][3U];
        vlSelfRef.__PVT__rnUOpSorted[0U][4U] = vlSelfRef.__PVT__IN_uop
            [3U][4U];
    }
    vlSelfRef.__PVT__rnUOpSorted[1U][0U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[1U][1U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[1U][2U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[1U][3U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[1U][4U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[1U][0U] = (0xfffffffeU 
                                            & vlSelfRef.__PVT__rnUOpSorted
                                            [1U][0U]);
    if ((vlSelfRef.__PVT__IN_uop[0U][0U] & (1U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [0U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[1U][0U] = vlSelfRef.__PVT__IN_uop
            [0U][0U];
        vlSelfRef.__PVT__rnUOpSorted[1U][1U] = vlSelfRef.__PVT__IN_uop
            [0U][1U];
        vlSelfRef.__PVT__rnUOpSorted[1U][2U] = vlSelfRef.__PVT__IN_uop
            [0U][2U];
        vlSelfRef.__PVT__rnUOpSorted[1U][3U] = vlSelfRef.__PVT__IN_uop
            [0U][3U];
        vlSelfRef.__PVT__rnUOpSorted[1U][4U] = vlSelfRef.__PVT__IN_uop
            [0U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[1U][0U] & (1U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [1U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[1U][0U] = vlSelfRef.__PVT__IN_uop
            [1U][0U];
        vlSelfRef.__PVT__rnUOpSorted[1U][1U] = vlSelfRef.__PVT__IN_uop
            [1U][1U];
        vlSelfRef.__PVT__rnUOpSorted[1U][2U] = vlSelfRef.__PVT__IN_uop
            [1U][2U];
        vlSelfRef.__PVT__rnUOpSorted[1U][3U] = vlSelfRef.__PVT__IN_uop
            [1U][3U];
        vlSelfRef.__PVT__rnUOpSorted[1U][4U] = vlSelfRef.__PVT__IN_uop
            [1U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[2U][0U] & (1U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [2U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[1U][0U] = vlSelfRef.__PVT__IN_uop
            [2U][0U];
        vlSelfRef.__PVT__rnUOpSorted[1U][1U] = vlSelfRef.__PVT__IN_uop
            [2U][1U];
        vlSelfRef.__PVT__rnUOpSorted[1U][2U] = vlSelfRef.__PVT__IN_uop
            [2U][2U];
        vlSelfRef.__PVT__rnUOpSorted[1U][3U] = vlSelfRef.__PVT__IN_uop
            [2U][3U];
        vlSelfRef.__PVT__rnUOpSorted[1U][4U] = vlSelfRef.__PVT__IN_uop
            [2U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[3U][0U] & (1U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [3U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[1U][0U] = vlSelfRef.__PVT__IN_uop
            [3U][0U];
        vlSelfRef.__PVT__rnUOpSorted[1U][1U] = vlSelfRef.__PVT__IN_uop
            [3U][1U];
        vlSelfRef.__PVT__rnUOpSorted[1U][2U] = vlSelfRef.__PVT__IN_uop
            [3U][2U];
        vlSelfRef.__PVT__rnUOpSorted[1U][3U] = vlSelfRef.__PVT__IN_uop
            [3U][3U];
        vlSelfRef.__PVT__rnUOpSorted[1U][4U] = vlSelfRef.__PVT__IN_uop
            [3U][4U];
    }
    vlSelfRef.__PVT__rnUOpSorted[2U][0U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[2U][1U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[2U][2U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[2U][3U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[2U][4U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[2U][0U] = (0xfffffffeU 
                                            & vlSelfRef.__PVT__rnUOpSorted
                                            [2U][0U]);
    if ((vlSelfRef.__PVT__IN_uop[0U][0U] & (2U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [0U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[2U][0U] = vlSelfRef.__PVT__IN_uop
            [0U][0U];
        vlSelfRef.__PVT__rnUOpSorted[2U][1U] = vlSelfRef.__PVT__IN_uop
            [0U][1U];
        vlSelfRef.__PVT__rnUOpSorted[2U][2U] = vlSelfRef.__PVT__IN_uop
            [0U][2U];
        vlSelfRef.__PVT__rnUOpSorted[2U][3U] = vlSelfRef.__PVT__IN_uop
            [0U][3U];
        vlSelfRef.__PVT__rnUOpSorted[2U][4U] = vlSelfRef.__PVT__IN_uop
            [0U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[1U][0U] & (2U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [1U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[2U][0U] = vlSelfRef.__PVT__IN_uop
            [1U][0U];
        vlSelfRef.__PVT__rnUOpSorted[2U][1U] = vlSelfRef.__PVT__IN_uop
            [1U][1U];
        vlSelfRef.__PVT__rnUOpSorted[2U][2U] = vlSelfRef.__PVT__IN_uop
            [1U][2U];
        vlSelfRef.__PVT__rnUOpSorted[2U][3U] = vlSelfRef.__PVT__IN_uop
            [1U][3U];
        vlSelfRef.__PVT__rnUOpSorted[2U][4U] = vlSelfRef.__PVT__IN_uop
            [1U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[2U][0U] & (2U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [2U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[2U][0U] = vlSelfRef.__PVT__IN_uop
            [2U][0U];
        vlSelfRef.__PVT__rnUOpSorted[2U][1U] = vlSelfRef.__PVT__IN_uop
            [2U][1U];
        vlSelfRef.__PVT__rnUOpSorted[2U][2U] = vlSelfRef.__PVT__IN_uop
            [2U][2U];
        vlSelfRef.__PVT__rnUOpSorted[2U][3U] = vlSelfRef.__PVT__IN_uop
            [2U][3U];
        vlSelfRef.__PVT__rnUOpSorted[2U][4U] = vlSelfRef.__PVT__IN_uop
            [2U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[3U][0U] & (2U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [3U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[2U][0U] = vlSelfRef.__PVT__IN_uop
            [3U][0U];
        vlSelfRef.__PVT__rnUOpSorted[2U][1U] = vlSelfRef.__PVT__IN_uop
            [3U][1U];
        vlSelfRef.__PVT__rnUOpSorted[2U][2U] = vlSelfRef.__PVT__IN_uop
            [3U][2U];
        vlSelfRef.__PVT__rnUOpSorted[2U][3U] = vlSelfRef.__PVT__IN_uop
            [3U][3U];
        vlSelfRef.__PVT__rnUOpSorted[2U][4U] = vlSelfRef.__PVT__IN_uop
            [3U][4U];
    }
    vlSelfRef.__PVT__rnUOpSorted[3U][0U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[3U][1U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[3U][2U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[3U][3U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[3U][4U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[3U][0U] = (0xfffffffeU 
                                            & vlSelfRef.__PVT__rnUOpSorted
                                            [3U][0U]);
    if ((vlSelfRef.__PVT__IN_uop[0U][0U] & (3U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [0U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[3U][0U] = vlSelfRef.__PVT__IN_uop
            [0U][0U];
        vlSelfRef.__PVT__rnUOpSorted[3U][1U] = vlSelfRef.__PVT__IN_uop
            [0U][1U];
        vlSelfRef.__PVT__rnUOpSorted[3U][2U] = vlSelfRef.__PVT__IN_uop
            [0U][2U];
        vlSelfRef.__PVT__rnUOpSorted[3U][3U] = vlSelfRef.__PVT__IN_uop
            [0U][3U];
        vlSelfRef.__PVT__rnUOpSorted[3U][4U] = vlSelfRef.__PVT__IN_uop
            [0U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[1U][0U] & (3U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [1U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[3U][0U] = vlSelfRef.__PVT__IN_uop
            [1U][0U];
        vlSelfRef.__PVT__rnUOpSorted[3U][1U] = vlSelfRef.__PVT__IN_uop
            [1U][1U];
        vlSelfRef.__PVT__rnUOpSorted[3U][2U] = vlSelfRef.__PVT__IN_uop
            [1U][2U];
        vlSelfRef.__PVT__rnUOpSorted[3U][3U] = vlSelfRef.__PVT__IN_uop
            [1U][3U];
        vlSelfRef.__PVT__rnUOpSorted[3U][4U] = vlSelfRef.__PVT__IN_uop
            [1U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[2U][0U] & (3U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [2U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[3U][0U] = vlSelfRef.__PVT__IN_uop
            [2U][0U];
        vlSelfRef.__PVT__rnUOpSorted[3U][1U] = vlSelfRef.__PVT__IN_uop
            [2U][1U];
        vlSelfRef.__PVT__rnUOpSorted[3U][2U] = vlSelfRef.__PVT__IN_uop
            [2U][2U];
        vlSelfRef.__PVT__rnUOpSorted[3U][3U] = vlSelfRef.__PVT__IN_uop
            [2U][3U];
        vlSelfRef.__PVT__rnUOpSorted[3U][4U] = vlSelfRef.__PVT__IN_uop
            [2U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[3U][0U] & (3U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [3U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[3U][0U] = vlSelfRef.__PVT__IN_uop
            [3U][0U];
        vlSelfRef.__PVT__rnUOpSorted[3U][1U] = vlSelfRef.__PVT__IN_uop
            [3U][1U];
        vlSelfRef.__PVT__rnUOpSorted[3U][2U] = vlSelfRef.__PVT__IN_uop
            [3U][2U];
        vlSelfRef.__PVT__rnUOpSorted[3U][3U] = vlSelfRef.__PVT__IN_uop
            [3U][3U];
        vlSelfRef.__PVT__rnUOpSorted[3U][4U] = vlSelfRef.__PVT__IN_uop
            [3U][4U];
    }
    __PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN 
        = (0x7fU & ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                    >> 1U));
    vlSelfRef.__PVT__misprReplayFwdMask = ((0xeU & (IData)(vlSelfRef.__PVT__misprReplayFwdMask)) 
                                           | VL_GTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,7, 
                                                                       (0x7fU 
                                                                        & ((IData)(__PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN) 
                                                                           - 
                                                                           ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                                                            >> 8U))))));
    __PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN 
        = (0x7fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                   >> 1U)));
    vlSelfRef.__PVT__misprReplayFwdMask = ((0xdU & (IData)(vlSelfRef.__PVT__misprReplayFwdMask)) 
                                           | (VL_GTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,7, 
                                                                        (0x7fU 
                                                                         & ((IData)(__PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN) 
                                                                            - 
                                                                            ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                                                             >> 8U))))) 
                                              << 1U));
    __PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN 
        = (0x7fU & ((IData)(2U) + ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                   >> 1U)));
    vlSelfRef.__PVT__misprReplayFwdMask = ((0xbU & (IData)(vlSelfRef.__PVT__misprReplayFwdMask)) 
                                           | (VL_GTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,7, 
                                                                        (0x7fU 
                                                                         & ((IData)(__PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN) 
                                                                            - 
                                                                            ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                                                             >> 8U))))) 
                                              << 2U));
    __PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN 
        = (0x7fU & ((IData)(3U) + ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                   >> 1U)));
    vlSelfRef.__PVT__misprReplayFwdMask = ((7U & (IData)(vlSelfRef.__PVT__misprReplayFwdMask)) 
                                           | (VL_GTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,7, 
                                                                        (0x7fU 
                                                                         & ((IData)(__PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN) 
                                                                            - 
                                                                            ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                                                             >> 8U))))) 
                                              << 3U));
    vlSelfRef.__PVT__misprReplayEnd = (1U & ((~ ((IData)(vlSelfRef.__PVT__misprReplayFwdMask) 
                                                 >> 3U)) 
                                             | (0U 
                                                == 
                                                VL_EXTENDS_II(32,7, 
                                                              (0x7fU 
                                                               & ((IData)(__PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN) 
                                                                  - 
                                                                  ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                                                   >> 8U)))))));
    __PVT__unnamedblk3__DOT__deqBase = (0x3fU & ((1U 
                                                  & (IData)(vlSelfRef.__PVT__misprReplay_c))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                                  >> 1U)
                                                  : (IData)(vlSelfRef.__PVT__baseIndex)));
    vlSelfRef.__PVT__deqAddrs[0U] = __PVT__unnamedblk3__DOT__deqBase;
    vlSelfRef.__PVT__deqAddrs[1U] = (0x3fU & ((IData)(1U) 
                                              + (IData)(__PVT__unnamedblk3__DOT__deqBase)));
    vlSelfRef.__PVT__deqAddrs[2U] = (0x3fU & ((IData)(2U) 
                                              + (IData)(__PVT__unnamedblk3__DOT__deqBase)));
    vlSelfRef.__PVT__deqAddrs[3U] = (0x3fU & ((IData)(3U) 
                                              + (IData)(__PVT__unnamedblk3__DOT__deqBase)));
    vlSelfRef.__PVT__deqAddrsSorted[0U] = 0U;
    vlSelfRef.__PVT__deqAddrsSorted[1U] = 0U;
    vlSelfRef.__PVT__deqAddrsSorted[2U] = 0U;
    vlSelfRef.__PVT__deqAddrsSorted[3U] = 0U;
    vlSelfRef.__PVT__deqAddrsSorted[(3U & vlSelfRef.__PVT__deqAddrs
                                     [0U])] = (0xfU 
                                               & (vlSelfRef.__PVT__deqAddrs
                                                  [0U] 
                                                  >> 2U));
    vlSelfRef.__PVT__deqAddrsSorted[(3U & vlSelfRef.__PVT__deqAddrs
                                     [1U])] = (0xfU 
                                               & (vlSelfRef.__PVT__deqAddrs
                                                  [1U] 
                                                  >> 2U));
    vlSelfRef.__PVT__deqAddrsSorted[(3U & vlSelfRef.__PVT__deqAddrs
                                     [2U])] = (0xfU 
                                               & (vlSelfRef.__PVT__deqAddrs
                                                  [2U] 
                                                  >> 2U));
    vlSelfRef.__PVT__deqAddrsSorted[(3U & vlSelfRef.__PVT__deqAddrs
                                     [3U])] = (0xfU 
                                               & (vlSelfRef.__PVT__deqAddrs
                                                  [3U] 
                                                  >> 2U));
    vlSelfRef.__PVT__deqFlagPorts[0U] = vlSelfRef.__PVT__flags
        [(vlSelfRef.__PVT__deqAddrsSorted[0U] << 2U)];
    vlSelfRef.__PVT__deqFlagPorts[1U] = vlSelfRef.__PVT__flags
        [(1U | (vlSelfRef.__PVT__deqAddrsSorted[1U] 
                << 2U))];
    vlSelfRef.__PVT__deqFlagPorts[2U] = vlSelfRef.__PVT__flags
        [(2U | (vlSelfRef.__PVT__deqAddrsSorted[2U] 
                << 2U))];
    vlSelfRef.__PVT__deqFlagPorts[3U] = vlSelfRef.__PVT__flags
        [(3U | (vlSelfRef.__PVT__deqAddrsSorted[3U] 
                << 2U))];
    vlSelfRef.__PVT__deqPorts[0U] = vlSelfRef.__PVT__gen__BRA__0__KET____DOT__entries
        [vlSelfRef.__PVT__deqAddrsSorted[0U]];
    vlSelfRef.__PVT__deqPorts[1U] = vlSelfRef.__PVT__gen__BRA__1__KET____DOT__entries
        [vlSelfRef.__PVT__deqAddrsSorted[1U]];
    vlSelfRef.__PVT__deqPorts[2U] = vlSelfRef.__PVT__gen__BRA__2__KET____DOT__entries
        [vlSelfRef.__PVT__deqAddrsSorted[2U]];
    vlSelfRef.__PVT__deqPorts[3U] = vlSelfRef.__PVT__gen__BRA__3__KET____DOT__entries
        [vlSelfRef.__PVT__deqAddrsSorted[3U]];
    vlSelfRef.__PVT__deqFlags[0U] = vlSelfRef.__PVT__deqFlagPorts
        [(3U & vlSelfRef.__PVT__deqAddrs[0U])];
    vlSelfRef.__PVT__deqFlags[1U] = vlSelfRef.__PVT__deqFlagPorts
        [(3U & vlSelfRef.__PVT__deqAddrs[1U])];
    vlSelfRef.__PVT__deqFlags[2U] = vlSelfRef.__PVT__deqFlagPorts
        [(3U & vlSelfRef.__PVT__deqAddrs[2U])];
    vlSelfRef.__PVT__deqFlags[3U] = vlSelfRef.__PVT__deqFlagPorts
        [(3U & vlSelfRef.__PVT__deqAddrs[3U])];
    vlSelfRef.__PVT__deqEntries[0U] = vlSelfRef.__PVT__deqPorts
        [(3U & vlSelfRef.__PVT__deqAddrs[0U])];
    vlSelfRef.__PVT__deqEntries[1U] = vlSelfRef.__PVT__deqPorts
        [(3U & vlSelfRef.__PVT__deqAddrs[1U])];
    vlSelfRef.__PVT__deqEntries[2U] = vlSelfRef.__PVT__deqPorts
        [(3U & vlSelfRef.__PVT__deqAddrs[2U])];
    vlSelfRef.__PVT__deqEntries[3U] = vlSelfRef.__PVT__deqPorts
        [(3U & vlSelfRef.__PVT__deqAddrs[3U])];
    vlSelfRef.__PVT__storeSqNs_c[0U] = vlSelfRef.__PVT__storeSqN_r;
    __Vlvbound_hdd1094b1__0 = (0x7fU & (vlSelfRef.__PVT__storeSqNs_c
                                        [0U] + ((1U 
                                                 & vlSelfRef.__PVT__deqEntries
                                                 [0U])
                                                 ? 1U
                                                 : 0U)));
    vlSelfRef.__PVT__storeSqNs_c[1U] = __Vlvbound_hdd1094b1__0;
    __Vlvbound_hdd1094b1__0 = (0x7fU & (vlSelfRef.__PVT__storeSqNs_c
                                        [1U] + ((1U 
                                                 & vlSelfRef.__PVT__deqEntries
                                                 [1U])
                                                 ? 1U
                                                 : 0U)));
    vlSelfRef.__PVT__storeSqNs_c[2U] = __Vlvbound_hdd1094b1__0;
    __Vlvbound_hdd1094b1__0 = (0x7fU & (vlSelfRef.__PVT__storeSqNs_c
                                        [2U] + ((1U 
                                                 & vlSelfRef.__PVT__deqEntries
                                                 [2U])
                                                 ? 1U
                                                 : 0U)));
    vlSelfRef.__PVT__storeSqNs_c[3U] = __Vlvbound_hdd1094b1__0;
    __Vlvbound_hdd1094b1__0 = (0x7fU & (vlSelfRef.__PVT__storeSqNs_c
                                        [3U] + ((1U 
                                                 & vlSelfRef.__PVT__deqEntries
                                                 [3U])
                                                 ? 1U
                                                 : 0U)));
    vlSelfRef.__PVT__storeSqNs_c[4U] = __Vlvbound_hdd1094b1__0;
    vlSelfRef.__PVT__loadSqNs_c[0U] = vlSelfRef.__PVT__loadSqN_r;
    __Vlvbound_h4135b2b9__0 = (0x7fU & (vlSelfRef.__PVT__loadSqNs_c
                                        [0U] + ((2U 
                                                 & vlSelfRef.__PVT__deqEntries
                                                 [0U])
                                                 ? 1U
                                                 : 0U)));
    vlSelfRef.__PVT__loadSqNs_c[1U] = __Vlvbound_h4135b2b9__0;
    __Vlvbound_h4135b2b9__0 = (0x7fU & (vlSelfRef.__PVT__loadSqNs_c
                                        [1U] + ((2U 
                                                 & vlSelfRef.__PVT__deqEntries
                                                 [1U])
                                                 ? 1U
                                                 : 0U)));
    vlSelfRef.__PVT__loadSqNs_c[2U] = __Vlvbound_h4135b2b9__0;
    __Vlvbound_h4135b2b9__0 = (0x7fU & (vlSelfRef.__PVT__loadSqNs_c
                                        [2U] + ((2U 
                                                 & vlSelfRef.__PVT__deqEntries
                                                 [2U])
                                                 ? 1U
                                                 : 0U)));
    vlSelfRef.__PVT__loadSqNs_c[3U] = __Vlvbound_h4135b2b9__0;
    __Vlvbound_h4135b2b9__0 = (0x7fU & (vlSelfRef.__PVT__loadSqNs_c
                                        [3U] + ((2U 
                                                 & vlSelfRef.__PVT__deqEntries
                                                 [3U])
                                                 ? 1U
                                                 : 0U)));
    vlSelfRef.__PVT__loadSqNs_c[4U] = __Vlvbound_h4135b2b9__0;
}

VL_INLINE_OPT void VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__0(VTop_ROB* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__stop = vlSelfRef.__PVT__stop;
    vlSelfRef.__Vdly__lastIndex = vlSelfRef.__PVT__lastIndex;
    vlSelfRef.__VdlySet__gen__BRA__0__KET____DOT__entries__v0 = 0U;
    vlSelfRef.__VdlySet__gen__BRA__1__KET____DOT__entries__v0 = 0U;
    vlSelfRef.__VdlySet__gen__BRA__1__KET____DOT__entries__v1 = 0U;
    vlSelfRef.__VdlySet__gen__BRA__1__KET____DOT__entries__v2 = 0U;
    vlSelfRef.__VdlySet__gen__BRA__2__KET____DOT__entries__v0 = 0U;
    vlSelfRef.__VdlySet__gen__BRA__2__KET____DOT__entries__v1 = 0U;
    vlSelfRef.__VdlySet__gen__BRA__2__KET____DOT__entries__v2 = 0U;
    vlSelfRef.__VdlySet__gen__BRA__3__KET____DOT__entries__v0 = 0U;
    vlSelfRef.__VdlySet__gen__BRA__3__KET____DOT__entries__v1 = 0U;
    vlSelfRef.__VdlySet__gen__BRA__3__KET____DOT__entries__v2 = 0U;
    vlSelfRef.__VdlySet__flags__v0 = 0U;
    vlSelfRef.__VdlySet__flags__v1 = 0U;
    vlSelfRef.__VdlySet__flags__v2 = 0U;
    vlSelfRef.__VdlySet__flags__v3 = 0U;
    vlSelfRef.__VdlySet__flags__v4 = 0U;
    vlSelfRef.__VdlySet__flags__v5 = 0U;
    vlSelfRef.__VdlySet__flags__v6 = 0U;
    vlSelfRef.__VdlySet__flags__v7 = 0U;
    vlSelfRef.__VdlySet__flags__v8 = 0U;
    vlSelfRef.__VdlySet__flags__v9 = 0U;
    vlSelfRef.__VdlySet__flags__v10 = 0U;
    vlSelfRef.__Vdly__hangCounter = vlSelfRef.__PVT__hangCounter;
    vlSelfRef.__Vdly__hangDetected = vlSelfRef.__PVT__hangDetected;
    vlSelfRef.__VdlySet__OUT_comUOp__v0 = 0U;
    vlSelfRef.__VdlySet__OUT_comUOp__v8 = 0U;
    vlSelfRef.__VdlySet__OUT_comUOp__v13 = 0U;
    vlSelfRef.__VdlySet__OUT_comUOp__v18 = 0U;
    vlSelfRef.__VdlySet__OUT_comUOp__v23 = 0U;
    vlSelfRef.__VdlySet__OUT_comUOp__v28 = 0U;
    vlSelfRef.__VdlySet__OUT_comUOp__v34 = 0U;
    vlSelfRef.__VdlySet__OUT_comUOp__v36 = 0U;
    vlSelfRef.__VdlySet__OUT_comUOp__v42 = 0U;
    vlSelfRef.__VdlySet__OUT_comUOp__v44 = 0U;
    vlSelfRef.__VdlySet__OUT_comUOp__v50 = 0U;
    vlSelfRef.__VdlySet__OUT_comUOp__v52 = 0U;
    vlSelfRef.__VdlySet__OUT_comUOp__v58 = 0U;
    vlSelfRef.__Vdly__baseIndex = vlSelfRef.__PVT__baseIndex;
    vlSelfRef.__Vdly__OUT_lastLoadSqN = vlSelfRef.__PVT__OUT_lastLoadSqN;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__hangCounter = 0U;
        vlSelfRef.__Vdly__hangDetected = 0U;
    } else if (vlSelfRef.__PVT__didCommit) {
        vlSelfRef.__Vdly__hangCounter = 0U;
        vlSelfRef.__Vdly__hangDetected = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__hangDetected)))) {
        vlSelfRef.__Vdly__hangDetected = (1U & (((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__hangCounter)) 
                                                >> 0x10U));
        vlSelfRef.__Vdly__hangCounter = (0xffffU & 
                                         ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__hangCounter)));
    }
}

VL_INLINE_OPT void VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__2(VTop_ROB* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __PVT__OUT_fpNewFlags;
    __PVT__OUT_fpNewFlags = 0;
    CData/*6:0*/ __Vfunc_GetSqN__0__Vfuncout;
    __Vfunc_GetSqN__0__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_GetSqN__0__idx;
    __Vfunc_GetSqN__0__idx = 0;
    CData/*0:0*/ __Vfunc_GetSqN__0__hiBits;
    __Vfunc_GetSqN__0__hiBits = 0;
    CData/*6:0*/ __Vfunc_GetSqN__0__rv;
    __Vfunc_GetSqN__0__rv = 0;
    // Body
    __PVT__OUT_fpNewFlags = 0U;
    vlSelfRef.__PVT__OUT_perfcInfo = 0x1900U;
    vlSelfRef.__PVT__OUT_trapUOp = 0ULL;
    vlSelfRef.__PVT__OUT_trapUOp = (0xfffffffffffeULL 
                                    & vlSelfRef.__PVT__OUT_trapUOp);
    vlSelfRef.__PVT__OUT_bpUpdate = 0U;
    vlSelfRef.__PVT__OUT_bpUpdate = (0x3feU & (IData)(vlSelfRef.__PVT__OUT_bpUpdate));
    vlSelfRef.__PVT__didCommit = 0U;
    vlSelfRef.__VdlySet__OUT_comUOp__v0 = 1U;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__baseIndex = 0U;
        vlSelfRef.__PVT__OUT_curFetchID = 0x1fU;
        vlSelfRef.__Vdly__stop = 0U;
        vlSelfRef.__Vdly__lastIndex = 0U;
        vlSelfRef.__Vdly__OUT_lastLoadSqN = 0U;
        vlSelfRef.__PVT__OUT_lastStoreSqN = 0U;
        vlSelfRef.__PVT__loadSqN_r = 0U;
        vlSelfRef.__PVT__storeSqN_r = 0x7fU;
    } else {
        vlSelfRef.__Vdly__stop = 0U;
        if ((1U & vlSymsp->TOP__Top__soc__core.branch[0U])) {
            if ((0x40U & vlSymsp->TOP__Top__soc__core.branch[0U])) {
                vlSelfRef.__PVT__OUT_curFetchID = (0x1fU 
                                                   & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                      >> 1U));
            }
            vlSelfRef.__Vdly__lastIndex = (0x7fU & 
                                           ((IData)(1U) 
                                            + ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                << 0xbU) 
                                               | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                  >> 0x15U))));
        }
        if ((1U & (vlSelfRef.__PVT__rnUOpSorted[0U][0U] 
                   & (~ vlSymsp->TOP__Top__soc__core.branch[0U])))) {
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id 
                = (0x3cU & (vlSelfRef.__PVT__rnUOpSorted
                            [0U][1U] >> 0x15U));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id1 
                = (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                           [0U][1U] >> 0x17U));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id0 = 0U;
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry = 0U;
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (0xfff000U & (vlSelfRef.__PVT__rnUOpSorted
                                   [0U][1U] << 3U)));
            vlSelfRef.__VdlyVal__flags__v0 = ((9U == 
                                               (0xfU 
                                                & (vlSelfRef.__PVT__rnUOpSorted
                                                   [0U][0U] 
                                                   >> 9U)))
                                               ? 0U
                                               : ((0xcU 
                                                   == 
                                                   (0xfU 
                                                    & (vlSelfRef.__PVT__rnUOpSorted
                                                       [0U][0U] 
                                                       >> 9U)))
                                                   ? 7U
                                                   : 0xfU));
            vlSelfRef.__VdlyDim0__flags__v0 = vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id;
            vlSelfRef.__VdlySet__flags__v0 = 1U;
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffffbU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (4U & (vlSelfRef.__PVT__rnUOpSorted
                            [0U][0U] >> 6U)));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffe0fU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (0x1f0U & ((vlSelfRef.__PVT__rnUOpSorted
                                 [0U][1U] << 6U) | 
                                (0x30U & (vlSelfRef.__PVT__rnUOpSorted
                                          [0U][0U] 
                                          >> 0x1aU)))));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffff7U & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | ((((6U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                        [0U][0U] >> 9U))) 
                        | (8U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                          [0U][0U] 
                                          >> 9U)))) 
                       | (7U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                         [0U][0U] >> 9U)))) 
                      << 3U));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfff1ffU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (0xe00U & (vlSelfRef.__PVT__rnUOpSorted
                                [0U][0U] >> 0x12U)));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffffdU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | ((((3U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                        [0U][0U] >> 9U))) 
                        & (6U > (0x3fU & (vlSelfRef.__PVT__rnUOpSorted
                                          [0U][1U] 
                                          >> 3U)))) 
                       | (0xaU == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                           [0U][0U] 
                                           >> 9U)))) 
                      << 1U));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffffeU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (((3U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                       [0U][0U] >> 9U))) 
                       & (6U <= (0x3fU & (vlSelfRef.__PVT__rnUOpSorted
                                          [0U][1U] 
                                          >> 3U)))) 
                      | (0xaU == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                          [0U][0U] 
                                          >> 9U)))));
            vlSelfRef.__VdlyVal__gen__BRA__0__KET____DOT__entries__v0 
                = vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry;
            vlSelfRef.__VdlyDim0__gen__BRA__0__KET____DOT__entries__v0 
                = vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id1;
            vlSelfRef.__VdlySet__gen__BRA__0__KET____DOT__entries__v0 = 1U;
        }
        if ((1U & (IData)(vlSelfRef.__PVT__misprReplay_c))) {
            if ((1U & (IData)(vlSelfRef.__PVT__misprReplayFwdMask))) {
                vlSelfRef.__VdlySet__OUT_comUOp__v8 = 1U;
                vlSelfRef.__VdlyVal__OUT_comUOp__v10 
                    = ((7U == vlSelfRef.__PVT__deqFlags
                        [0U]) ? 0U : (0x1fU & (vlSelfRef.__PVT__deqEntries
                                               [0U] 
                                               >> 0xcU)));
                vlSelfRef.__VdlyVal__OUT_comUOp__v11 
                    = (0x7fU & (vlSelfRef.__PVT__deqEntries
                                [0U] >> 0x11U));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__misprReplayFwdMask))) {
                vlSelfRef.__VdlySet__OUT_comUOp__v13 = 1U;
                vlSelfRef.__VdlyVal__OUT_comUOp__v15 
                    = ((7U == vlSelfRef.__PVT__deqFlags
                        [1U]) ? 0U : (0x1fU & (vlSelfRef.__PVT__deqEntries
                                               [1U] 
                                               >> 0xcU)));
                vlSelfRef.__VdlyVal__OUT_comUOp__v16 
                    = (0x7fU & (vlSelfRef.__PVT__deqEntries
                                [1U] >> 0x11U));
            }
            if ((4U & (IData)(vlSelfRef.__PVT__misprReplayFwdMask))) {
                vlSelfRef.__VdlySet__OUT_comUOp__v18 = 1U;
                vlSelfRef.__VdlyVal__OUT_comUOp__v20 
                    = ((7U == vlSelfRef.__PVT__deqFlags
                        [2U]) ? 0U : (0x1fU & (vlSelfRef.__PVT__deqEntries
                                               [2U] 
                                               >> 0xcU)));
                vlSelfRef.__VdlyVal__OUT_comUOp__v21 
                    = (0x7fU & (vlSelfRef.__PVT__deqEntries
                                [2U] >> 0x11U));
            }
            if ((8U & (IData)(vlSelfRef.__PVT__misprReplayFwdMask))) {
                vlSelfRef.__VdlySet__OUT_comUOp__v23 = 1U;
                vlSelfRef.__VdlyVal__OUT_comUOp__v25 
                    = ((7U == vlSelfRef.__PVT__deqFlags
                        [3U]) ? 0U : (0x1fU & (vlSelfRef.__PVT__deqEntries
                                               [3U] 
                                               >> 0xcU)));
                vlSelfRef.__VdlyVal__OUT_comUOp__v26 
                    = (0x7fU & (vlSelfRef.__PVT__deqEntries
                                [3U] >> 0x11U));
            }
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__stop)))) {
            vlSelfRef.__PVT__unnamedblk14__DOT__temp = 0U;
            vlSelfRef.__PVT__unnamedblk14__DOT__temp2 = 0U;
            vlSelfRef.__PVT__unnamedblk14__DOT__pred = 0U;
            vlSelfRef.__PVT__unnamedblk14__DOT__cnt = 0U;
            vlSelfRef.__PVT__OUT_perfcInfo = (0x18ffU 
                                              & (IData)(vlSelfRef.__PVT__OUT_perfcInfo));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__id 
                = (0x3fU & (IData)(vlSelfRef.__PVT__baseIndex));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN 
                = vlSelfRef.__PVT__loadSqNs_c[0U];
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN 
                = vlSelfRef.__PVT__storeSqNs_c[1U];
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit 
                = vlSelfRef.__PVT__hangDetected;
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isRenamed 
                = (0U < (0x7fU & ((IData)(vlSelfRef.__PVT__lastIndex) 
                                  - (IData)(vlSelfRef.__PVT__baseIndex))));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isExecuted 
                = (0xfU != vlSelfRef.__PVT__deqFlags
                   [0U]);
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__noFlagConflict = 1U;
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__lbAllowsCommit 
                = (1U & ((~ (IData)(vlSymsp->TOP__Top__soc__core.__PVT__LB_ldComLimit)) 
                         | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                            (0x7fU 
                                                             & ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN) 
                                                                - 
                                                                ((IData)(vlSymsp->TOP__Top__soc__core.__PVT__LB_ldComLimit) 
                                                                 >> 1U)))))));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit 
                = (1U & ((~ vlSelfRef.__PVT__IN_stComLimit
                          [0U]) | VL_GTS_III(32, 0U, 
                                             VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN) 
                                                               - 
                                                               (vlSelfRef.__PVT__IN_stComLimit
                                                                [0U] 
                                                                >> 1U)))))));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit 
                = ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit) 
                   & ((~ vlSelfRef.__PVT__IN_stComLimit
                       [1U]) | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN) 
                                                                    - 
                                                                    (vlSelfRef.__PVT__IN_stComLimit
                                                                     [1U] 
                                                                     >> 1U)))))));
            if (((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isRenamed) 
                 & ((((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isExecuted) 
                      & (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit)) 
                     & (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__lbAllowsCommit)) 
                    | (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit)))) {
                vlSelfRef.__PVT__unnamedblk14__DOT__cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__cnt)));
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isBranch 
                    = (((1U == vlSelfRef.__PVT__deqFlags
                         [0U]) | (2U == vlSelfRef.__PVT__deqFlags
                                  [0U])) | (3U == vlSelfRef.__PVT__deqFlags
                                            [0U]));
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__minstretRetire 
                    = ((((5U >= vlSelfRef.__PVT__deqFlags
                          [0U]) | (0xeU == vlSelfRef.__PVT__deqFlags
                                   [0U])) | ((vlSelfRef.__PVT__deqEntries
                                              [0U] 
                                              >> 3U) 
                                             & (6U 
                                                != 
                                                vlSelfRef.__PVT__deqFlags
                                                [0U]))) 
                       | ((7U == vlSelfRef.__PVT__deqFlags
                           [0U]) & (0xfU == (0x1fU 
                                             & (vlSelfRef.__PVT__deqEntries
                                                [0U] 
                                                >> 0xcU)))));
                vlSelfRef.__PVT__OUT_curFetchID = (0x1fU 
                                                   & (vlSelfRef.__PVT__deqEntries
                                                      [0U] 
                                                      >> 4U));
                if (((2U == vlSelfRef.__PVT__deqFlags
                      [0U]) | (3U == vlSelfRef.__PVT__deqFlags
                               [0U]))) {
                    vlSelfRef.__PVT__unnamedblk14__DOT__pred = 1U;
                    vlSelfRef.__PVT__OUT_bpUpdate = 
                        ((0x3fcU & (IData)(vlSelfRef.__PVT__OUT_bpUpdate)) 
                         | (1U | ((2U == vlSelfRef.__PVT__deqFlags
                                   [0U]) << 1U)));
                    vlSelfRef.__PVT__OUT_bpUpdate = 
                        ((3U & (IData)(vlSelfRef.__PVT__OUT_bpUpdate)) 
                         | (0x3fcU & (vlSelfRef.__PVT__deqEntries
                                      [0U] >> 2U)));
                }
                vlSelfRef.__PVT__didCommit = 1U;
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isException 
                    = ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit) 
                       | ((6U <= vlSelfRef.__PVT__deqFlags
                           [0U]) & (0xdU >= vlSelfRef.__PVT__deqFlags
                                    [0U])));
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sendTrapUOp 
                    = ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit) 
                       | ((4U <= vlSelfRef.__PVT__deqFlags
                           [0U]) & ((~ (vlSelfRef.__PVT__deqEntries
                                        [0U] >> 3U)) 
                                    | (6U == vlSelfRef.__PVT__deqFlags
                                       [0U]))));
                __Vfunc_GetSqN__0__idx = vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__id;
                __Vfunc_GetSqN__0__hiBits = (1U & ((IData)(vlSelfRef.__PVT__baseIndex) 
                                                   >> 6U));
                __Vfunc_GetSqN__0__rv = ((0x40U & (
                                                   (((IData)(__Vfunc_GetSqN__0__idx) 
                                                     >= 
                                                     (0x3fU 
                                                      & (IData)(vlSelfRef.__PVT__baseIndex)))
                                                     ? (IData)(__Vfunc_GetSqN__0__hiBits)
                                                     : 
                                                    ((IData)(1U) 
                                                     + (IData)(__Vfunc_GetSqN__0__hiBits))) 
                                                   << 6U)) 
                                         | (IData)(__Vfunc_GetSqN__0__idx));
                __Vfunc_GetSqN__0__Vfuncout = __Vfunc_GetSqN__0__rv;
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sqN 
                    = __Vfunc_GetSqN__0__Vfuncout;
                vlSelfRef.__VdlyVal__OUT_comUOp__v28 
                    = (0x1fU & (vlSelfRef.__PVT__deqEntries
                                [0U] >> 0xcU));
                vlSelfRef.__VdlySet__OUT_comUOp__v28 = 1U;
                vlSelfRef.__VdlyVal__OUT_comUOp__v29 
                    = (0x7fU & (vlSelfRef.__PVT__deqEntries
                                [0U] >> 0x11U));
                vlSelfRef.__VdlyVal__OUT_comUOp__v30 
                    = vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sqN;
                vlSelfRef.__VdlyVal__OUT_comUOp__v31 
                    = vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isBranch;
                vlSelfRef.__VdlyVal__OUT_comUOp__v32 
                    = (1U & (vlSelfRef.__PVT__deqEntries
                             [0U] >> 2U));
                vlSelfRef.__PVT__OUT_perfcInfo = ((0x1ffeU 
                                                   & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)) 
                                                  | ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__minstretRetire) 
                                                     & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit))));
                vlSelfRef.__Vlvbound_h3cfa08f5__0 = 
                    (((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__minstretRetire) 
                      & (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isBranch)) 
                     & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit)));
                vlSelfRef.__PVT__OUT_perfcInfo = ((0x1fefU 
                                                   & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)) 
                                                  | ((IData)(vlSelfRef.__Vlvbound_h3cfa08f5__0) 
                                                     << 4U));
                if ((1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isException)))) {
                    if ((2U & vlSelfRef.__PVT__deqEntries
                         [0U])) {
                        vlSelfRef.__Vdly__OUT_lastLoadSqN 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN)));
                    }
                    if ((1U & vlSelfRef.__PVT__deqEntries
                         [0U])) {
                        vlSelfRef.__PVT__OUT_lastStoreSqN 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN)));
                    }
                    vlSelfRef.__PVT__loadSqN_r = vlSelfRef.__PVT__loadSqNs_c
                        [1U];
                    vlSelfRef.__PVT__storeSqN_r = vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN;
                }
                if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sendTrapUOp) {
                    vlSelfRef.__PVT__unnamedblk14__DOT__temp = 1U;
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        ((0x7ffffffffffULL & vlSelfRef.__PVT__OUT_trapUOp) 
                         | ((QData)((IData)((((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit) 
                                              << 4U) 
                                             | vlSelfRef.__PVT__deqFlags
                                             [0U]))) 
                            << 0x2bU));
                    if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isException) {
                        vlSelfRef.__VdlySet__OUT_comUOp__v34 = 1U;
                    }
                    vlSelfRef.__Vdly__stop = 1U;
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        ((0xf80000007fffULL & vlSelfRef.__PVT__OUT_trapUOp) 
                         | ((QData)((IData)((((0xfe00000U 
                                               & (vlSelfRef.__PVT__deqEntries
                                                  [0U] 
                                                  << 4U)) 
                                              | ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sqN) 
                                                 << 0xeU)) 
                                             | (((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN) 
                                                 << 7U) 
                                                | (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN))))) 
                            << 0xfU));
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        ((0xffffffff8003ULL & vlSelfRef.__PVT__OUT_trapUOp) 
                         | ((QData)((IData)((0x1fffU 
                                             & (vlSelfRef.__PVT__deqEntries
                                                [0U] 
                                                >> 4U)))) 
                            << 2U));
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        ((0xfffffffffffcULL & vlSelfRef.__PVT__OUT_trapUOp) 
                         | (IData)((IData)((1U | (2U 
                                                  & (vlSelfRef.__PVT__deqEntries
                                                     [0U] 
                                                     >> 1U))))));
                } else if (((vlSelfRef.__PVT__deqEntries
                             [0U] >> 3U) & ((8U <= 
                                             vlSelfRef.__PVT__deqFlags
                                             [0U]) 
                                            & (0xcU 
                                               >= vlSelfRef.__PVT__deqFlags
                                               [0U])))) {
                    vlSelfRef.__Vlvbound_hc62d1ce5__0 = 1U;
                    if ((4U >= (7U & vlSelfRef.__PVT__deqFlags
                                [0U]))) {
                        __PVT__OUT_fpNewFlags = (((~ 
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & vlSelfRef.__PVT__deqFlags
                                                     [0U]))) 
                                                  & (IData)(__PVT__OUT_fpNewFlags)) 
                                                 | (0x1fU 
                                                    & ((IData)(vlSelfRef.__Vlvbound_hc62d1ce5__0) 
                                                       << 
                                                       (7U 
                                                        & vlSelfRef.__PVT__deqFlags
                                                        [0U]))));
                    }
                    if (((9U == vlSelfRef.__PVT__deqFlags
                          [0U]) | (0xaU == vlSelfRef.__PVT__deqFlags
                                   [0U]))) {
                        __PVT__OUT_fpNewFlags = (1U 
                                                 | (IData)(__PVT__OUT_fpNewFlags));
                    }
                }
            } else {
                if ((0U < (0x7fU & ((IData)(vlSelfRef.__PVT__lastIndex) 
                                    - (IData)(vlSelfRef.__PVT__baseIndex))))) {
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        (0x7fffffffffffULL & vlSelfRef.__PVT__OUT_trapUOp);
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        ((0xfffffffffc01ULL & vlSelfRef.__PVT__OUT_trapUOp) 
                         | ((QData)((IData)(((0x1feU 
                                              & (vlSelfRef.__PVT__deqEntries
                                                 [0U] 
                                                 >> 3U)) 
                                             | (1U 
                                                & (vlSelfRef.__PVT__deqEntries
                                                   [0U] 
                                                   >> 2U))))) 
                            << 1U));
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        (0x780000000000ULL | vlSelfRef.__PVT__OUT_trapUOp);
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        (1ULL | vlSelfRef.__PVT__OUT_trapUOp);
                }
                if ((1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__temp2)))) {
                    vlSelfRef.__PVT__unnamedblk14__DOT__temp2 = 1U;
                    vlSelfRef.__PVT__OUT_perfcInfo 
                        = (0x1800U | (IData)(vlSelfRef.__PVT__OUT_perfcInfo));
                    if ((1U & ((~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isRenamed)) 
                               | (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__temp)))) {
                        vlSelfRef.__PVT__OUT_perfcInfo 
                            = (0x100U | (0x18ffU & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)));
                    } else if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isExecuted) {
                        if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit) {
                            if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__lbAllowsCommit) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__noFlagConflict)))) {
                                    vlSelfRef.__PVT__OUT_perfcInfo 
                                        = (0x500U | 
                                           (0x18ffU 
                                            & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)));
                                }
                            } else {
                                vlSelfRef.__PVT__OUT_perfcInfo 
                                    = (0x400U | (0x18ffU 
                                                 & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)));
                            }
                        } else {
                            vlSelfRef.__PVT__OUT_perfcInfo 
                                = (0x300U | (0x18ffU 
                                             & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)));
                        }
                    } else {
                        vlSelfRef.__PVT__OUT_perfcInfo 
                            = ((0x18ffU & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)) 
                               | (((1U & vlSelfRef.__PVT__deqPorts
                                    [0U]) ? 3U : ((2U 
                                                   & vlSelfRef.__PVT__deqPorts
                                                   [0U])
                                                   ? 4U
                                                   : 2U)) 
                                  << 8U));
                    }
                }
                vlSelfRef.__PVT__unnamedblk14__DOT__temp = 1U;
            }
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__id 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__baseIndex)));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN 
                = vlSelfRef.__PVT__loadSqNs_c[1U];
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN 
                = vlSelfRef.__PVT__storeSqNs_c[2U];
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit = 0U;
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isRenamed 
                = (1U < (0x7fU & ((IData)(vlSelfRef.__PVT__lastIndex) 
                                  - (IData)(vlSelfRef.__PVT__baseIndex))));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isExecuted 
                = (0xfU != vlSelfRef.__PVT__deqFlags
                   [1U]);
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__noFlagConflict 
                = (1U & ((~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__pred)) 
                         | (0U == vlSelfRef.__PVT__deqFlags
                            [1U])));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__lbAllowsCommit 
                = (1U & ((~ (IData)(vlSymsp->TOP__Top__soc__core.__PVT__LB_ldComLimit)) 
                         | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                            (0x7fU 
                                                             & ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN) 
                                                                - 
                                                                ((IData)(vlSymsp->TOP__Top__soc__core.__PVT__LB_ldComLimit) 
                                                                 >> 1U)))))));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit 
                = (1U & ((~ vlSelfRef.__PVT__IN_stComLimit
                          [0U]) | VL_GTS_III(32, 0U, 
                                             VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN) 
                                                               - 
                                                               (vlSelfRef.__PVT__IN_stComLimit
                                                                [0U] 
                                                                >> 1U)))))));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit 
                = ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit) 
                   & ((~ vlSelfRef.__PVT__IN_stComLimit
                       [1U]) | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN) 
                                                                    - 
                                                                    (vlSelfRef.__PVT__IN_stComLimit
                                                                     [1U] 
                                                                     >> 1U)))))));
            if ((((~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__temp)) 
                  & (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isRenamed)) 
                 & ((((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isExecuted) 
                      & (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__noFlagConflict)) 
                     & (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit)) 
                    & (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__lbAllowsCommit)))) {
                vlSelfRef.__PVT__unnamedblk14__DOT__cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__cnt)));
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isBranch 
                    = (((1U == vlSelfRef.__PVT__deqFlags
                         [1U]) | (2U == vlSelfRef.__PVT__deqFlags
                                  [1U])) | (3U == vlSelfRef.__PVT__deqFlags
                                            [1U]));
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__minstretRetire 
                    = ((((5U >= vlSelfRef.__PVT__deqFlags
                          [1U]) | (0xeU == vlSelfRef.__PVT__deqFlags
                                   [1U])) | ((vlSelfRef.__PVT__deqEntries
                                              [1U] 
                                              >> 3U) 
                                             & (6U 
                                                != 
                                                vlSelfRef.__PVT__deqFlags
                                                [1U]))) 
                       | ((7U == vlSelfRef.__PVT__deqFlags
                           [1U]) & (0xfU == (0x1fU 
                                             & (vlSelfRef.__PVT__deqEntries
                                                [1U] 
                                                >> 0xcU)))));
                vlSelfRef.__PVT__OUT_curFetchID = (0x1fU 
                                                   & (vlSelfRef.__PVT__deqEntries
                                                      [1U] 
                                                      >> 4U));
                if (((2U == vlSelfRef.__PVT__deqFlags
                      [1U]) | (3U == vlSelfRef.__PVT__deqFlags
                               [1U]))) {
                    vlSelfRef.__PVT__unnamedblk14__DOT__pred = 1U;
                    vlSelfRef.__PVT__OUT_bpUpdate = 
                        ((0x3fcU & (IData)(vlSelfRef.__PVT__OUT_bpUpdate)) 
                         | (1U | ((2U == vlSelfRef.__PVT__deqFlags
                                   [1U]) << 1U)));
                    vlSelfRef.__PVT__OUT_bpUpdate = 
                        ((3U & (IData)(vlSelfRef.__PVT__OUT_bpUpdate)) 
                         | (0x3fcU & (vlSelfRef.__PVT__deqEntries
                                      [1U] >> 2U)));
                }
                vlSelfRef.__PVT__didCommit = 1U;
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isException 
                    = ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit) 
                       | ((6U <= vlSelfRef.__PVT__deqFlags
                           [1U]) & (0xdU >= vlSelfRef.__PVT__deqFlags
                                    [1U])));
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sendTrapUOp 
                    = ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit) 
                       | ((4U <= vlSelfRef.__PVT__deqFlags
                           [1U]) & ((~ (vlSelfRef.__PVT__deqEntries
                                        [1U] >> 3U)) 
                                    | (6U == vlSelfRef.__PVT__deqFlags
                                       [1U]))));
                __Vfunc_GetSqN__0__idx = vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__id;
                __Vfunc_GetSqN__0__hiBits = (1U & ((IData)(vlSelfRef.__PVT__baseIndex) 
                                                   >> 6U));
                __Vfunc_GetSqN__0__rv = ((0x40U & (
                                                   (((IData)(__Vfunc_GetSqN__0__idx) 
                                                     >= 
                                                     (0x3fU 
                                                      & (IData)(vlSelfRef.__PVT__baseIndex)))
                                                     ? (IData)(__Vfunc_GetSqN__0__hiBits)
                                                     : 
                                                    ((IData)(1U) 
                                                     + (IData)(__Vfunc_GetSqN__0__hiBits))) 
                                                   << 6U)) 
                                         | (IData)(__Vfunc_GetSqN__0__idx));
                __Vfunc_GetSqN__0__Vfuncout = __Vfunc_GetSqN__0__rv;
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sqN 
                    = __Vfunc_GetSqN__0__Vfuncout;
                vlSelfRef.__VdlyVal__OUT_comUOp__v36 
                    = (0x1fU & (vlSelfRef.__PVT__deqEntries
                                [1U] >> 0xcU));
                vlSelfRef.__VdlySet__OUT_comUOp__v36 = 1U;
                vlSelfRef.__VdlyVal__OUT_comUOp__v37 
                    = (0x7fU & (vlSelfRef.__PVT__deqEntries
                                [1U] >> 0x11U));
                vlSelfRef.__VdlyVal__OUT_comUOp__v38 
                    = vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sqN;
                vlSelfRef.__VdlyVal__OUT_comUOp__v39 
                    = vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isBranch;
                vlSelfRef.__VdlyVal__OUT_comUOp__v40 
                    = (1U & (vlSelfRef.__PVT__deqEntries
                             [1U] >> 2U));
                vlSelfRef.__PVT__OUT_perfcInfo = ((0x1ffdU 
                                                   & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)) 
                                                  | (((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__minstretRetire) 
                                                      & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit))) 
                                                     << 1U));
                vlSelfRef.__Vlvbound_h3cfa08f5__0 = 
                    (((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__minstretRetire) 
                      & (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isBranch)) 
                     & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit)));
                vlSelfRef.__PVT__OUT_perfcInfo = ((0x1fdfU 
                                                   & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)) 
                                                  | ((IData)(vlSelfRef.__Vlvbound_h3cfa08f5__0) 
                                                     << 5U));
                if ((1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isException)))) {
                    if ((2U & vlSelfRef.__PVT__deqEntries
                         [1U])) {
                        vlSelfRef.__Vdly__OUT_lastLoadSqN 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN)));
                    }
                    if ((1U & vlSelfRef.__PVT__deqEntries
                         [1U])) {
                        vlSelfRef.__PVT__OUT_lastStoreSqN 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN)));
                    }
                    vlSelfRef.__PVT__loadSqN_r = vlSelfRef.__PVT__loadSqNs_c
                        [2U];
                    vlSelfRef.__PVT__storeSqN_r = vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN;
                }
                if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sendTrapUOp) {
                    vlSelfRef.__PVT__unnamedblk14__DOT__temp = 1U;
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        ((0x7ffffffffffULL & vlSelfRef.__PVT__OUT_trapUOp) 
                         | ((QData)((IData)((((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit) 
                                              << 4U) 
                                             | vlSelfRef.__PVT__deqFlags
                                             [1U]))) 
                            << 0x2bU));
                    if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isException) {
                        vlSelfRef.__VdlySet__OUT_comUOp__v42 = 1U;
                    }
                    vlSelfRef.__Vdly__stop = 1U;
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        ((0xf80000007fffULL & vlSelfRef.__PVT__OUT_trapUOp) 
                         | ((QData)((IData)((((0xfe00000U 
                                               & (vlSelfRef.__PVT__deqEntries
                                                  [1U] 
                                                  << 4U)) 
                                              | ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sqN) 
                                                 << 0xeU)) 
                                             | (((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN) 
                                                 << 7U) 
                                                | (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN))))) 
                            << 0xfU));
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        ((0xffffffff8003ULL & vlSelfRef.__PVT__OUT_trapUOp) 
                         | ((QData)((IData)((0x1fffU 
                                             & (vlSelfRef.__PVT__deqEntries
                                                [1U] 
                                                >> 4U)))) 
                            << 2U));
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        ((0xfffffffffffcULL & vlSelfRef.__PVT__OUT_trapUOp) 
                         | (IData)((IData)((1U | (2U 
                                                  & (vlSelfRef.__PVT__deqEntries
                                                     [1U] 
                                                     >> 1U))))));
                } else if (((vlSelfRef.__PVT__deqEntries
                             [1U] >> 3U) & ((8U <= 
                                             vlSelfRef.__PVT__deqFlags
                                             [1U]) 
                                            & (0xcU 
                                               >= vlSelfRef.__PVT__deqFlags
                                               [1U])))) {
                    vlSelfRef.__Vlvbound_hc62d1ce5__0 = 1U;
                    if ((4U >= (7U & vlSelfRef.__PVT__deqFlags
                                [1U]))) {
                        __PVT__OUT_fpNewFlags = (((~ 
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & vlSelfRef.__PVT__deqFlags
                                                     [1U]))) 
                                                  & (IData)(__PVT__OUT_fpNewFlags)) 
                                                 | (0x1fU 
                                                    & ((IData)(vlSelfRef.__Vlvbound_hc62d1ce5__0) 
                                                       << 
                                                       (7U 
                                                        & vlSelfRef.__PVT__deqFlags
                                                        [1U]))));
                    }
                    if (((9U == vlSelfRef.__PVT__deqFlags
                          [1U]) | (0xaU == vlSelfRef.__PVT__deqFlags
                                   [1U]))) {
                        __PVT__OUT_fpNewFlags = (1U 
                                                 | (IData)(__PVT__OUT_fpNewFlags));
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__temp2)))) {
                    vlSelfRef.__PVT__unnamedblk14__DOT__temp2 = 1U;
                    vlSelfRef.__PVT__OUT_perfcInfo 
                        = (0x1000U | (0x7ffU & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)));
                    if ((1U & ((~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isRenamed)) 
                               | (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__temp)))) {
                        vlSelfRef.__PVT__OUT_perfcInfo 
                            = (0x100U | (0x18ffU & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)));
                    } else if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isExecuted) {
                        if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit) {
                            if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__lbAllowsCommit) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__noFlagConflict)))) {
                                    vlSelfRef.__PVT__OUT_perfcInfo 
                                        = (0x500U | 
                                           (0x18ffU 
                                            & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)));
                                }
                            } else {
                                vlSelfRef.__PVT__OUT_perfcInfo 
                                    = (0x400U | (0x18ffU 
                                                 & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)));
                            }
                        } else {
                            vlSelfRef.__PVT__OUT_perfcInfo 
                                = (0x300U | (0x18ffU 
                                             & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)));
                        }
                    } else {
                        vlSelfRef.__PVT__OUT_perfcInfo 
                            = ((0x18ffU & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)) 
                               | (((1U & vlSelfRef.__PVT__deqPorts
                                    [1U]) ? 3U : ((2U 
                                                   & vlSelfRef.__PVT__deqPorts
                                                   [1U])
                                                   ? 4U
                                                   : 2U)) 
                                  << 8U));
                    }
                }
                vlSelfRef.__PVT__unnamedblk14__DOT__temp = 1U;
            }
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__id 
                = (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__baseIndex)));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN 
                = vlSelfRef.__PVT__loadSqNs_c[2U];
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN 
                = vlSelfRef.__PVT__storeSqNs_c[3U];
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit = 0U;
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isRenamed 
                = (2U < (0x7fU & ((IData)(vlSelfRef.__PVT__lastIndex) 
                                  - (IData)(vlSelfRef.__PVT__baseIndex))));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isExecuted 
                = (0xfU != vlSelfRef.__PVT__deqFlags
                   [2U]);
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__noFlagConflict 
                = (1U & ((~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__pred)) 
                         | (0U == vlSelfRef.__PVT__deqFlags
                            [2U])));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__lbAllowsCommit 
                = (1U & ((~ (IData)(vlSymsp->TOP__Top__soc__core.__PVT__LB_ldComLimit)) 
                         | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                            (0x7fU 
                                                             & ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN) 
                                                                - 
                                                                ((IData)(vlSymsp->TOP__Top__soc__core.__PVT__LB_ldComLimit) 
                                                                 >> 1U)))))));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit 
                = (1U & ((~ vlSelfRef.__PVT__IN_stComLimit
                          [0U]) | VL_GTS_III(32, 0U, 
                                             VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN) 
                                                               - 
                                                               (vlSelfRef.__PVT__IN_stComLimit
                                                                [0U] 
                                                                >> 1U)))))));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit 
                = ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit) 
                   & ((~ vlSelfRef.__PVT__IN_stComLimit
                       [1U]) | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN) 
                                                                    - 
                                                                    (vlSelfRef.__PVT__IN_stComLimit
                                                                     [1U] 
                                                                     >> 1U)))))));
            if ((((~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__temp)) 
                  & (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isRenamed)) 
                 & ((((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isExecuted) 
                      & (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__noFlagConflict)) 
                     & (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit)) 
                    & (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__lbAllowsCommit)))) {
                vlSelfRef.__PVT__unnamedblk14__DOT__cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__cnt)));
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isBranch 
                    = (((1U == vlSelfRef.__PVT__deqFlags
                         [2U]) | (2U == vlSelfRef.__PVT__deqFlags
                                  [2U])) | (3U == vlSelfRef.__PVT__deqFlags
                                            [2U]));
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__minstretRetire 
                    = ((((5U >= vlSelfRef.__PVT__deqFlags
                          [2U]) | (0xeU == vlSelfRef.__PVT__deqFlags
                                   [2U])) | ((vlSelfRef.__PVT__deqEntries
                                              [2U] 
                                              >> 3U) 
                                             & (6U 
                                                != 
                                                vlSelfRef.__PVT__deqFlags
                                                [2U]))) 
                       | ((7U == vlSelfRef.__PVT__deqFlags
                           [2U]) & (0xfU == (0x1fU 
                                             & (vlSelfRef.__PVT__deqEntries
                                                [2U] 
                                                >> 0xcU)))));
                vlSelfRef.__PVT__OUT_curFetchID = (0x1fU 
                                                   & (vlSelfRef.__PVT__deqEntries
                                                      [2U] 
                                                      >> 4U));
                if (((2U == vlSelfRef.__PVT__deqFlags
                      [2U]) | (3U == vlSelfRef.__PVT__deqFlags
                               [2U]))) {
                    vlSelfRef.__PVT__unnamedblk14__DOT__pred = 1U;
                    vlSelfRef.__PVT__OUT_bpUpdate = 
                        ((0x3fcU & (IData)(vlSelfRef.__PVT__OUT_bpUpdate)) 
                         | (1U | ((2U == vlSelfRef.__PVT__deqFlags
                                   [2U]) << 1U)));
                    vlSelfRef.__PVT__OUT_bpUpdate = 
                        ((3U & (IData)(vlSelfRef.__PVT__OUT_bpUpdate)) 
                         | (0x3fcU & (vlSelfRef.__PVT__deqEntries
                                      [2U] >> 2U)));
                }
                vlSelfRef.__PVT__didCommit = 1U;
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isException 
                    = ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit) 
                       | ((6U <= vlSelfRef.__PVT__deqFlags
                           [2U]) & (0xdU >= vlSelfRef.__PVT__deqFlags
                                    [2U])));
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sendTrapUOp 
                    = ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit) 
                       | ((4U <= vlSelfRef.__PVT__deqFlags
                           [2U]) & ((~ (vlSelfRef.__PVT__deqEntries
                                        [2U] >> 3U)) 
                                    | (6U == vlSelfRef.__PVT__deqFlags
                                       [2U]))));
                __Vfunc_GetSqN__0__idx = vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__id;
                __Vfunc_GetSqN__0__hiBits = (1U & ((IData)(vlSelfRef.__PVT__baseIndex) 
                                                   >> 6U));
                __Vfunc_GetSqN__0__rv = ((0x40U & (
                                                   (((IData)(__Vfunc_GetSqN__0__idx) 
                                                     >= 
                                                     (0x3fU 
                                                      & (IData)(vlSelfRef.__PVT__baseIndex)))
                                                     ? (IData)(__Vfunc_GetSqN__0__hiBits)
                                                     : 
                                                    ((IData)(1U) 
                                                     + (IData)(__Vfunc_GetSqN__0__hiBits))) 
                                                   << 6U)) 
                                         | (IData)(__Vfunc_GetSqN__0__idx));
                __Vfunc_GetSqN__0__Vfuncout = __Vfunc_GetSqN__0__rv;
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sqN 
                    = __Vfunc_GetSqN__0__Vfuncout;
                vlSelfRef.__VdlyVal__OUT_comUOp__v44 
                    = (0x1fU & (vlSelfRef.__PVT__deqEntries
                                [2U] >> 0xcU));
                vlSelfRef.__VdlySet__OUT_comUOp__v44 = 1U;
                vlSelfRef.__VdlyVal__OUT_comUOp__v45 
                    = (0x7fU & (vlSelfRef.__PVT__deqEntries
                                [2U] >> 0x11U));
                vlSelfRef.__VdlyVal__OUT_comUOp__v46 
                    = vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sqN;
                vlSelfRef.__VdlyVal__OUT_comUOp__v47 
                    = vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isBranch;
                vlSelfRef.__VdlyVal__OUT_comUOp__v48 
                    = (1U & (vlSelfRef.__PVT__deqEntries
                             [2U] >> 2U));
                vlSelfRef.__PVT__OUT_perfcInfo = ((0x1ffbU 
                                                   & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)) 
                                                  | (((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__minstretRetire) 
                                                      & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit))) 
                                                     << 2U));
                vlSelfRef.__Vlvbound_h3cfa08f5__0 = 
                    (((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__minstretRetire) 
                      & (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isBranch)) 
                     & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit)));
                vlSelfRef.__PVT__OUT_perfcInfo = ((0x1fbfU 
                                                   & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)) 
                                                  | ((IData)(vlSelfRef.__Vlvbound_h3cfa08f5__0) 
                                                     << 6U));
                if ((1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isException)))) {
                    if ((2U & vlSelfRef.__PVT__deqEntries
                         [2U])) {
                        vlSelfRef.__Vdly__OUT_lastLoadSqN 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN)));
                    }
                    if ((1U & vlSelfRef.__PVT__deqEntries
                         [2U])) {
                        vlSelfRef.__PVT__OUT_lastStoreSqN 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN)));
                    }
                    vlSelfRef.__PVT__loadSqN_r = vlSelfRef.__PVT__loadSqNs_c
                        [3U];
                    vlSelfRef.__PVT__storeSqN_r = vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN;
                }
                if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sendTrapUOp) {
                    vlSelfRef.__PVT__unnamedblk14__DOT__temp = 1U;
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        ((0x7ffffffffffULL & vlSelfRef.__PVT__OUT_trapUOp) 
                         | ((QData)((IData)((((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit) 
                                              << 4U) 
                                             | vlSelfRef.__PVT__deqFlags
                                             [2U]))) 
                            << 0x2bU));
                    if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isException) {
                        vlSelfRef.__VdlySet__OUT_comUOp__v50 = 1U;
                    }
                    vlSelfRef.__Vdly__stop = 1U;
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        ((0xf80000007fffULL & vlSelfRef.__PVT__OUT_trapUOp) 
                         | ((QData)((IData)((((0xfe00000U 
                                               & (vlSelfRef.__PVT__deqEntries
                                                  [2U] 
                                                  << 4U)) 
                                              | ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sqN) 
                                                 << 0xeU)) 
                                             | (((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN) 
                                                 << 7U) 
                                                | (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN))))) 
                            << 0xfU));
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        ((0xffffffff8003ULL & vlSelfRef.__PVT__OUT_trapUOp) 
                         | ((QData)((IData)((0x1fffU 
                                             & (vlSelfRef.__PVT__deqEntries
                                                [2U] 
                                                >> 4U)))) 
                            << 2U));
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        ((0xfffffffffffcULL & vlSelfRef.__PVT__OUT_trapUOp) 
                         | (IData)((IData)((1U | (2U 
                                                  & (vlSelfRef.__PVT__deqEntries
                                                     [2U] 
                                                     >> 1U))))));
                } else if (((vlSelfRef.__PVT__deqEntries
                             [2U] >> 3U) & ((8U <= 
                                             vlSelfRef.__PVT__deqFlags
                                             [2U]) 
                                            & (0xcU 
                                               >= vlSelfRef.__PVT__deqFlags
                                               [2U])))) {
                    vlSelfRef.__Vlvbound_hc62d1ce5__0 = 1U;
                    if ((4U >= (7U & vlSelfRef.__PVT__deqFlags
                                [2U]))) {
                        __PVT__OUT_fpNewFlags = (((~ 
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & vlSelfRef.__PVT__deqFlags
                                                     [2U]))) 
                                                  & (IData)(__PVT__OUT_fpNewFlags)) 
                                                 | (0x1fU 
                                                    & ((IData)(vlSelfRef.__Vlvbound_hc62d1ce5__0) 
                                                       << 
                                                       (7U 
                                                        & vlSelfRef.__PVT__deqFlags
                                                        [2U]))));
                    }
                    if (((9U == vlSelfRef.__PVT__deqFlags
                          [2U]) | (0xaU == vlSelfRef.__PVT__deqFlags
                                   [2U]))) {
                        __PVT__OUT_fpNewFlags = (1U 
                                                 | (IData)(__PVT__OUT_fpNewFlags));
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__temp2)))) {
                    vlSelfRef.__PVT__unnamedblk14__DOT__temp2 = 1U;
                    vlSelfRef.__PVT__OUT_perfcInfo 
                        = (0x800U | (0x7ffU & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)));
                    if ((1U & ((~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isRenamed)) 
                               | (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__temp)))) {
                        vlSelfRef.__PVT__OUT_perfcInfo 
                            = (0x100U | (0x18ffU & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)));
                    } else if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isExecuted) {
                        if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit) {
                            if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__lbAllowsCommit) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__noFlagConflict)))) {
                                    vlSelfRef.__PVT__OUT_perfcInfo 
                                        = (0x500U | 
                                           (0x18ffU 
                                            & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)));
                                }
                            } else {
                                vlSelfRef.__PVT__OUT_perfcInfo 
                                    = (0x400U | (0x18ffU 
                                                 & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)));
                            }
                        } else {
                            vlSelfRef.__PVT__OUT_perfcInfo 
                                = (0x300U | (0x18ffU 
                                             & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)));
                        }
                    } else {
                        vlSelfRef.__PVT__OUT_perfcInfo 
                            = ((0x18ffU & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)) 
                               | (((1U & vlSelfRef.__PVT__deqPorts
                                    [2U]) ? 3U : ((2U 
                                                   & vlSelfRef.__PVT__deqPorts
                                                   [2U])
                                                   ? 4U
                                                   : 2U)) 
                                  << 8U));
                    }
                }
                vlSelfRef.__PVT__unnamedblk14__DOT__temp = 1U;
            }
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__id 
                = (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__baseIndex)));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN 
                = vlSelfRef.__PVT__loadSqNs_c[3U];
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN 
                = vlSelfRef.__PVT__storeSqNs_c[4U];
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit = 0U;
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isRenamed 
                = (3U < (0x7fU & ((IData)(vlSelfRef.__PVT__lastIndex) 
                                  - (IData)(vlSelfRef.__PVT__baseIndex))));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isExecuted 
                = (0xfU != vlSelfRef.__PVT__deqFlags
                   [3U]);
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__noFlagConflict 
                = (1U & ((~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__pred)) 
                         | (0U == vlSelfRef.__PVT__deqFlags
                            [3U])));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__lbAllowsCommit 
                = (1U & ((~ (IData)(vlSymsp->TOP__Top__soc__core.__PVT__LB_ldComLimit)) 
                         | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                            (0x7fU 
                                                             & ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN) 
                                                                - 
                                                                ((IData)(vlSymsp->TOP__Top__soc__core.__PVT__LB_ldComLimit) 
                                                                 >> 1U)))))));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit 
                = (1U & ((~ vlSelfRef.__PVT__IN_stComLimit
                          [0U]) | VL_GTS_III(32, 0U, 
                                             VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN) 
                                                               - 
                                                               (vlSelfRef.__PVT__IN_stComLimit
                                                                [0U] 
                                                                >> 1U)))))));
            vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit 
                = ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit) 
                   & ((~ vlSelfRef.__PVT__IN_stComLimit
                       [1U]) | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN) 
                                                                    - 
                                                                    (vlSelfRef.__PVT__IN_stComLimit
                                                                     [1U] 
                                                                     >> 1U)))))));
            if ((((~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__temp)) 
                  & (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isRenamed)) 
                 & ((((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isExecuted) 
                      & (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__noFlagConflict)) 
                     & (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit)) 
                    & (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__lbAllowsCommit)))) {
                vlSelfRef.__PVT__unnamedblk14__DOT__cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__cnt)));
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isBranch 
                    = (((1U == vlSelfRef.__PVT__deqFlags
                         [3U]) | (2U == vlSelfRef.__PVT__deqFlags
                                  [3U])) | (3U == vlSelfRef.__PVT__deqFlags
                                            [3U]));
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__minstretRetire 
                    = ((((5U >= vlSelfRef.__PVT__deqFlags
                          [3U]) | (0xeU == vlSelfRef.__PVT__deqFlags
                                   [3U])) | ((vlSelfRef.__PVT__deqEntries
                                              [3U] 
                                              >> 3U) 
                                             & (6U 
                                                != 
                                                vlSelfRef.__PVT__deqFlags
                                                [3U]))) 
                       | ((7U == vlSelfRef.__PVT__deqFlags
                           [3U]) & (0xfU == (0x1fU 
                                             & (vlSelfRef.__PVT__deqEntries
                                                [3U] 
                                                >> 0xcU)))));
                vlSelfRef.__PVT__OUT_curFetchID = (0x1fU 
                                                   & (vlSelfRef.__PVT__deqEntries
                                                      [3U] 
                                                      >> 4U));
                if (((2U == vlSelfRef.__PVT__deqFlags
                      [3U]) | (3U == vlSelfRef.__PVT__deqFlags
                               [3U]))) {
                    vlSelfRef.__PVT__unnamedblk14__DOT__pred = 1U;
                    vlSelfRef.__PVT__OUT_bpUpdate = 
                        ((0x3fcU & (IData)(vlSelfRef.__PVT__OUT_bpUpdate)) 
                         | (1U | ((2U == vlSelfRef.__PVT__deqFlags
                                   [3U]) << 1U)));
                    vlSelfRef.__PVT__OUT_bpUpdate = 
                        ((3U & (IData)(vlSelfRef.__PVT__OUT_bpUpdate)) 
                         | (0x3fcU & (vlSelfRef.__PVT__deqEntries
                                      [3U] >> 2U)));
                }
                vlSelfRef.__PVT__didCommit = 1U;
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isException 
                    = ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit) 
                       | ((6U <= vlSelfRef.__PVT__deqFlags
                           [3U]) & (0xdU >= vlSelfRef.__PVT__deqFlags
                                    [3U])));
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sendTrapUOp 
                    = ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit) 
                       | ((4U <= vlSelfRef.__PVT__deqFlags
                           [3U]) & ((~ (vlSelfRef.__PVT__deqEntries
                                        [3U] >> 3U)) 
                                    | (6U == vlSelfRef.__PVT__deqFlags
                                       [3U]))));
                __Vfunc_GetSqN__0__idx = vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__id;
                __Vfunc_GetSqN__0__hiBits = (1U & ((IData)(vlSelfRef.__PVT__baseIndex) 
                                                   >> 6U));
                __Vfunc_GetSqN__0__rv = ((0x40U & (
                                                   (((IData)(__Vfunc_GetSqN__0__idx) 
                                                     >= 
                                                     (0x3fU 
                                                      & (IData)(vlSelfRef.__PVT__baseIndex)))
                                                     ? (IData)(__Vfunc_GetSqN__0__hiBits)
                                                     : 
                                                    ((IData)(1U) 
                                                     + (IData)(__Vfunc_GetSqN__0__hiBits))) 
                                                   << 6U)) 
                                         | (IData)(__Vfunc_GetSqN__0__idx));
                __Vfunc_GetSqN__0__Vfuncout = __Vfunc_GetSqN__0__rv;
                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sqN 
                    = __Vfunc_GetSqN__0__Vfuncout;
                vlSelfRef.__VdlyVal__OUT_comUOp__v52 
                    = (0x1fU & (vlSelfRef.__PVT__deqEntries
                                [3U] >> 0xcU));
                vlSelfRef.__VdlySet__OUT_comUOp__v52 = 1U;
                vlSelfRef.__VdlyVal__OUT_comUOp__v53 
                    = (0x7fU & (vlSelfRef.__PVT__deqEntries
                                [3U] >> 0x11U));
                vlSelfRef.__VdlyVal__OUT_comUOp__v54 
                    = vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sqN;
                vlSelfRef.__VdlyVal__OUT_comUOp__v55 
                    = vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isBranch;
                vlSelfRef.__VdlyVal__OUT_comUOp__v56 
                    = (1U & (vlSelfRef.__PVT__deqEntries
                             [3U] >> 2U));
                vlSelfRef.__PVT__OUT_perfcInfo = ((0x1ff7U 
                                                   & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)) 
                                                  | (((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__minstretRetire) 
                                                      & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit))) 
                                                     << 3U));
                vlSelfRef.__Vlvbound_h3cfa08f5__0 = 
                    (((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__minstretRetire) 
                      & (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isBranch)) 
                     & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit)));
                vlSelfRef.__PVT__OUT_perfcInfo = ((0x1f7fU 
                                                   & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)) 
                                                  | ((IData)(vlSelfRef.__Vlvbound_h3cfa08f5__0) 
                                                     << 7U));
                if ((1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isException)))) {
                    if ((2U & vlSelfRef.__PVT__deqEntries
                         [3U])) {
                        vlSelfRef.__Vdly__OUT_lastLoadSqN 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN)));
                    }
                    if ((1U & vlSelfRef.__PVT__deqEntries
                         [3U])) {
                        vlSelfRef.__PVT__OUT_lastStoreSqN 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN)));
                    }
                    vlSelfRef.__PVT__loadSqN_r = vlSelfRef.__PVT__loadSqNs_c
                        [4U];
                    vlSelfRef.__PVT__storeSqN_r = vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN;
                }
                if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sendTrapUOp) {
                    vlSelfRef.__PVT__unnamedblk14__DOT__temp = 1U;
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        ((0x7ffffffffffULL & vlSelfRef.__PVT__OUT_trapUOp) 
                         | ((QData)((IData)((((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit) 
                                              << 4U) 
                                             | vlSelfRef.__PVT__deqFlags
                                             [3U]))) 
                            << 0x2bU));
                    if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isException) {
                        vlSelfRef.__VdlySet__OUT_comUOp__v58 = 1U;
                    }
                    vlSelfRef.__Vdly__stop = 1U;
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        ((0xf80000007fffULL & vlSelfRef.__PVT__OUT_trapUOp) 
                         | ((QData)((IData)((((0xfe00000U 
                                               & (vlSelfRef.__PVT__deqEntries
                                                  [3U] 
                                                  << 4U)) 
                                              | ((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sqN) 
                                                 << 0xeU)) 
                                             | (((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN) 
                                                 << 7U) 
                                                | (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN))))) 
                            << 0xfU));
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        ((0xffffffff8003ULL & vlSelfRef.__PVT__OUT_trapUOp) 
                         | ((QData)((IData)((0x1fffU 
                                             & (vlSelfRef.__PVT__deqEntries
                                                [3U] 
                                                >> 4U)))) 
                            << 2U));
                    vlSelfRef.__PVT__OUT_trapUOp = 
                        ((0xfffffffffffcULL & vlSelfRef.__PVT__OUT_trapUOp) 
                         | (IData)((IData)((1U | (2U 
                                                  & (vlSelfRef.__PVT__deqEntries
                                                     [3U] 
                                                     >> 1U))))));
                } else if (((vlSelfRef.__PVT__deqEntries
                             [3U] >> 3U) & ((8U <= 
                                             vlSelfRef.__PVT__deqFlags
                                             [3U]) 
                                            & (0xcU 
                                               >= vlSelfRef.__PVT__deqFlags
                                               [3U])))) {
                    vlSelfRef.__Vlvbound_hc62d1ce5__0 = 1U;
                    if ((4U >= (7U & vlSelfRef.__PVT__deqFlags
                                [3U]))) {
                        __PVT__OUT_fpNewFlags = (((~ 
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & vlSelfRef.__PVT__deqFlags
                                                     [3U]))) 
                                                  & (IData)(__PVT__OUT_fpNewFlags)) 
                                                 | (0x1fU 
                                                    & ((IData)(vlSelfRef.__Vlvbound_hc62d1ce5__0) 
                                                       << 
                                                       (7U 
                                                        & vlSelfRef.__PVT__deqFlags
                                                        [3U]))));
                    }
                    if (((9U == vlSelfRef.__PVT__deqFlags
                          [3U]) | (0xaU == vlSelfRef.__PVT__deqFlags
                                   [3U]))) {
                        __PVT__OUT_fpNewFlags = (1U 
                                                 | (IData)(__PVT__OUT_fpNewFlags));
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__temp2)))) {
                    vlSelfRef.__PVT__unnamedblk14__DOT__temp2 = 1U;
                    vlSelfRef.__PVT__OUT_perfcInfo 
                        = (0x7ffU & (IData)(vlSelfRef.__PVT__OUT_perfcInfo));
                    if ((1U & ((~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isRenamed)) 
                               | (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__temp)))) {
                        vlSelfRef.__PVT__OUT_perfcInfo 
                            = (0x100U | (0x18ffU & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)));
                    } else if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isExecuted) {
                        if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit) {
                            if (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__lbAllowsCommit) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__noFlagConflict)))) {
                                    vlSelfRef.__PVT__OUT_perfcInfo 
                                        = (0x500U | 
                                           (0x18ffU 
                                            & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)));
                                }
                            } else {
                                vlSelfRef.__PVT__OUT_perfcInfo 
                                    = (0x400U | (0x18ffU 
                                                 & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)));
                            }
                        } else {
                            vlSelfRef.__PVT__OUT_perfcInfo 
                                = (0x300U | (0x18ffU 
                                             & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)));
                        }
                    } else {
                        vlSelfRef.__PVT__OUT_perfcInfo 
                            = ((0x18ffU & (IData)(vlSelfRef.__PVT__OUT_perfcInfo)) 
                               | (((1U & vlSelfRef.__PVT__deqPorts
                                    [3U]) ? 3U : ((2U 
                                                   & vlSelfRef.__PVT__deqPorts
                                                   [3U])
                                                   ? 4U
                                                   : 2U)) 
                                  << 8U));
                    }
                }
                vlSelfRef.__PVT__unnamedblk14__DOT__temp = 1U;
            }
            vlSelfRef.__Vdly__baseIndex = (0x7fU & 
                                           ((IData)(vlSelfRef.__PVT__baseIndex) 
                                            + (IData)(vlSelfRef.__PVT__unnamedblk14__DOT__cnt)));
        }
        if ((1U & (vlSelfRef.__PVT__rnUOpSorted[1U][0U] 
                   & (~ vlSymsp->TOP__Top__soc__core.branch[0U])))) {
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id 
                = (1U | (0x3cU & (vlSelfRef.__PVT__rnUOpSorted
                                  [1U][1U] >> 0x15U)));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id1 
                = (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                           [1U][1U] >> 0x17U));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id0 = 1U;
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry = 0U;
            vlSelfRef.__VdlyVal__flags__v1 = ((9U == 
                                               (0xfU 
                                                & (vlSelfRef.__PVT__rnUOpSorted
                                                   [1U][0U] 
                                                   >> 9U)))
                                               ? 0U
                                               : ((0xcU 
                                                   == 
                                                   (0xfU 
                                                    & (vlSelfRef.__PVT__rnUOpSorted
                                                       [1U][0U] 
                                                       >> 9U)))
                                                   ? 7U
                                                   : 0xfU));
            vlSelfRef.__VdlyDim0__flags__v1 = vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id;
            vlSelfRef.__VdlySet__flags__v1 = 1U;
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (0xfff000U & (vlSelfRef.__PVT__rnUOpSorted
                                   [1U][1U] << 3U)));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffffbU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (4U & (vlSelfRef.__PVT__rnUOpSorted
                            [1U][0U] >> 6U)));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffe0fU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (0x1f0U & ((vlSelfRef.__PVT__rnUOpSorted
                                 [1U][1U] << 6U) | 
                                (0x30U & (vlSelfRef.__PVT__rnUOpSorted
                                          [1U][0U] 
                                          >> 0x1aU)))));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffff7U & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | ((((6U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                        [1U][0U] >> 9U))) 
                        | (8U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                          [1U][0U] 
                                          >> 9U)))) 
                       | (7U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                         [1U][0U] >> 9U)))) 
                      << 3U));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfff1ffU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (0xe00U & (vlSelfRef.__PVT__rnUOpSorted
                                [1U][0U] >> 0x12U)));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffffdU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | ((((3U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                        [1U][0U] >> 9U))) 
                        & (6U > (0x3fU & (vlSelfRef.__PVT__rnUOpSorted
                                          [1U][1U] 
                                          >> 3U)))) 
                       | (0xaU == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                           [1U][0U] 
                                           >> 9U)))) 
                      << 1U));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffffeU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (((3U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                       [1U][0U] >> 9U))) 
                       & (6U <= (0x3fU & (vlSelfRef.__PVT__rnUOpSorted
                                          [1U][1U] 
                                          >> 3U)))) 
                      | (0xaU == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                          [1U][0U] 
                                          >> 9U)))));
            vlSelfRef.__VdlyVal__gen__BRA__1__KET____DOT__entries__v0 
                = vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry;
            vlSelfRef.__VdlyDim0__gen__BRA__1__KET____DOT__entries__v0 
                = vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id1;
            vlSelfRef.__VdlySet__gen__BRA__1__KET____DOT__entries__v0 = 1U;
        }
        if ((1U & (vlSelfRef.__PVT__rnUOpSorted[2U][0U] 
                   & (~ vlSymsp->TOP__Top__soc__core.branch[0U])))) {
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id 
                = (2U | (0x3cU & (vlSelfRef.__PVT__rnUOpSorted
                                  [2U][1U] >> 0x15U)));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id1 
                = (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                           [2U][1U] >> 0x17U));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id0 = 2U;
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry = 0U;
            vlSelfRef.__VdlyVal__flags__v2 = ((9U == 
                                               (0xfU 
                                                & (vlSelfRef.__PVT__rnUOpSorted
                                                   [2U][0U] 
                                                   >> 9U)))
                                               ? 0U
                                               : ((0xcU 
                                                   == 
                                                   (0xfU 
                                                    & (vlSelfRef.__PVT__rnUOpSorted
                                                       [2U][0U] 
                                                       >> 9U)))
                                                   ? 7U
                                                   : 0xfU));
            vlSelfRef.__VdlyDim0__flags__v2 = vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id;
            vlSelfRef.__VdlySet__flags__v2 = 1U;
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (0xfff000U & (vlSelfRef.__PVT__rnUOpSorted
                                   [2U][1U] << 3U)));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffffbU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (4U & (vlSelfRef.__PVT__rnUOpSorted
                            [2U][0U] >> 6U)));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffe0fU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (0x1f0U & ((vlSelfRef.__PVT__rnUOpSorted
                                 [2U][1U] << 6U) | 
                                (0x30U & (vlSelfRef.__PVT__rnUOpSorted
                                          [2U][0U] 
                                          >> 0x1aU)))));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffff7U & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | ((((6U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                        [2U][0U] >> 9U))) 
                        | (8U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                          [2U][0U] 
                                          >> 9U)))) 
                       | (7U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                         [2U][0U] >> 9U)))) 
                      << 3U));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfff1ffU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (0xe00U & (vlSelfRef.__PVT__rnUOpSorted
                                [2U][0U] >> 0x12U)));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffffdU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | ((((3U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                        [2U][0U] >> 9U))) 
                        & (6U > (0x3fU & (vlSelfRef.__PVT__rnUOpSorted
                                          [2U][1U] 
                                          >> 3U)))) 
                       | (0xaU == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                           [2U][0U] 
                                           >> 9U)))) 
                      << 1U));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffffeU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (((3U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                       [2U][0U] >> 9U))) 
                       & (6U <= (0x3fU & (vlSelfRef.__PVT__rnUOpSorted
                                          [2U][1U] 
                                          >> 3U)))) 
                      | (0xaU == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                          [2U][0U] 
                                          >> 9U)))));
            if ((2U == (IData)(vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id0))) {
                vlSelfRef.__VdlyVal__gen__BRA__2__KET____DOT__entries__v1 
                    = vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry;
                vlSelfRef.__VdlyDim0__gen__BRA__2__KET____DOT__entries__v1 
                    = vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id1;
                vlSelfRef.__VdlySet__gen__BRA__2__KET____DOT__entries__v1 = 1U;
            } else if ((3U == (IData)(vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id0))) {
                vlSelfRef.__VdlyVal__gen__BRA__3__KET____DOT__entries__v1 
                    = vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry;
                vlSelfRef.__VdlyDim0__gen__BRA__3__KET____DOT__entries__v1 
                    = vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id1;
                vlSelfRef.__VdlySet__gen__BRA__3__KET____DOT__entries__v1 = 1U;
            }
        }
        if ((1U & (vlSelfRef.__PVT__rnUOpSorted[3U][0U] 
                   & (~ vlSymsp->TOP__Top__soc__core.branch[0U])))) {
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id 
                = (3U | (0x3cU & (vlSelfRef.__PVT__rnUOpSorted
                                  [3U][1U] >> 0x15U)));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id1 
                = (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                           [3U][1U] >> 0x17U));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id0 = 3U;
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry = 0U;
            vlSelfRef.__VdlyVal__flags__v3 = ((9U == 
                                               (0xfU 
                                                & (vlSelfRef.__PVT__rnUOpSorted
                                                   [3U][0U] 
                                                   >> 9U)))
                                               ? 0U
                                               : ((0xcU 
                                                   == 
                                                   (0xfU 
                                                    & (vlSelfRef.__PVT__rnUOpSorted
                                                       [3U][0U] 
                                                       >> 9U)))
                                                   ? 7U
                                                   : 0xfU));
            vlSelfRef.__VdlyDim0__flags__v3 = vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id;
            vlSelfRef.__VdlySet__flags__v3 = 1U;
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (0xfff000U & (vlSelfRef.__PVT__rnUOpSorted
                                   [3U][1U] << 3U)));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffffbU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (4U & (vlSelfRef.__PVT__rnUOpSorted
                            [3U][0U] >> 6U)));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffe0fU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (0x1f0U & ((vlSelfRef.__PVT__rnUOpSorted
                                 [3U][1U] << 6U) | 
                                (0x30U & (vlSelfRef.__PVT__rnUOpSorted
                                          [3U][0U] 
                                          >> 0x1aU)))));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffff7U & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | ((((6U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                        [3U][0U] >> 9U))) 
                        | (8U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                          [3U][0U] 
                                          >> 9U)))) 
                       | (7U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                         [3U][0U] >> 9U)))) 
                      << 3U));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfff1ffU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (0xe00U & (vlSelfRef.__PVT__rnUOpSorted
                                [3U][0U] >> 0x12U)));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffffdU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | ((((3U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                        [3U][0U] >> 9U))) 
                        & (6U > (0x3fU & (vlSelfRef.__PVT__rnUOpSorted
                                          [3U][1U] 
                                          >> 3U)))) 
                       | (0xaU == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                           [3U][0U] 
                                           >> 9U)))) 
                      << 1U));
            vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry 
                = ((0xfffffeU & vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry) 
                   | (((3U == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                       [3U][0U] >> 9U))) 
                       & (6U <= (0x3fU & (vlSelfRef.__PVT__rnUOpSorted
                                          [3U][1U] 
                                          >> 3U)))) 
                      | (0xaU == (0xfU & (vlSelfRef.__PVT__rnUOpSorted
                                          [3U][0U] 
                                          >> 9U)))));
            if ((2U == (IData)(vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id0))) {
                vlSelfRef.__VdlyVal__gen__BRA__2__KET____DOT__entries__v2 
                    = vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry;
                vlSelfRef.__VdlyDim0__gen__BRA__2__KET____DOT__entries__v2 
                    = vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id1;
                vlSelfRef.__VdlySet__gen__BRA__2__KET____DOT__entries__v2 = 1U;
            } else if ((3U == (IData)(vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id0))) {
                vlSelfRef.__VdlyVal__gen__BRA__3__KET____DOT__entries__v2 
                    = vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry;
                vlSelfRef.__VdlyDim0__gen__BRA__3__KET____DOT__entries__v2 
                    = vlSelfRef.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id1;
                vlSelfRef.__VdlySet__gen__BRA__3__KET____DOT__entries__v2 = 1U;
            }
        }
        if ((1U & (vlSelfRef.__PVT__IN_uop[0U][0U] 
                   & (~ vlSymsp->TOP__Top__soc__core.branch[0U])))) {
            vlSelfRef.__Vdly__lastIndex = (0x7fU & 
                                           ((IData)(1U) 
                                            + ((vlSelfRef.__PVT__IN_uop
                                                [0U][1U] 
                                                << 0xbU) 
                                               | (vlSelfRef.__PVT__IN_uop
                                                  [0U][1U] 
                                                  >> 0x15U))));
        }
        if ((1U & (vlSelfRef.__PVT__IN_uop[1U][0U] 
                   & (~ vlSymsp->TOP__Top__soc__core.branch[0U])))) {
            vlSelfRef.__Vdly__lastIndex = (0x7fU & 
                                           ((IData)(1U) 
                                            + ((vlSelfRef.__PVT__IN_uop
                                                [1U][1U] 
                                                << 0xbU) 
                                               | (vlSelfRef.__PVT__IN_uop
                                                  [1U][1U] 
                                                  >> 0x15U))));
        }
        if ((1U & ((vlSelfRef.__PVT__IN_flagUOps[0U] 
                    & ((~ vlSymsp->TOP__Top__soc__core.branch[0U]) 
                       | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & ((vlSelfRef.__PVT__IN_flagUOps
                                                                [0U] 
                                                                >> 6U) 
                                                               - 
                                                               ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                 << 0xbU) 
                                                                | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                   >> 0x15U)))))))) 
                   & (~ (vlSelfRef.__PVT__IN_flagUOps
                         [0U] >> 1U))))) {
            vlSelfRef.__PVT__unnamedblk22__DOT__unnamedblk23__DOT__id 
                = (0x3fU & (vlSelfRef.__PVT__IN_flagUOps
                            [0U] >> 6U));
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0xfU == (0xfU & (
                                                   vlSelfRef.__PVT__IN_flagUOps
                                                   [0U] 
                                                   >> 2U)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: ROB.sv:457: Assertion failed in %NTop.soc.core.rob.unnamedblk22.unnamedblk23: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/ROB.sv", 457, "");
                }
            }
            vlSelfRef.__VdlyVal__flags__v4 = (0xfU 
                                              & (vlSelfRef.__PVT__IN_flagUOps
                                                 [0U] 
                                                 >> 2U));
            vlSelfRef.__VdlyDim0__flags__v4 = vlSelfRef.__PVT__unnamedblk22__DOT__unnamedblk23__DOT__id;
            vlSelfRef.__VdlySet__flags__v4 = 1U;
        }
        if ((1U & (vlSelfRef.__PVT__IN_uop[2U][0U] 
                   & (~ vlSymsp->TOP__Top__soc__core.branch[0U])))) {
            vlSelfRef.__Vdly__lastIndex = (0x7fU & 
                                           ((IData)(1U) 
                                            + ((vlSelfRef.__PVT__IN_uop
                                                [2U][1U] 
                                                << 0xbU) 
                                               | (vlSelfRef.__PVT__IN_uop
                                                  [2U][1U] 
                                                  >> 0x15U))));
        }
        if ((1U & (vlSelfRef.__PVT__IN_uop[3U][0U] 
                   & (~ vlSymsp->TOP__Top__soc__core.branch[0U])))) {
            vlSelfRef.__Vdly__lastIndex = (0x7fU & 
                                           ((IData)(1U) 
                                            + ((vlSelfRef.__PVT__IN_uop
                                                [3U][1U] 
                                                << 0xbU) 
                                               | (vlSelfRef.__PVT__IN_uop
                                                  [3U][1U] 
                                                  >> 0x15U))));
        }
        if ((1U & ((vlSelfRef.__PVT__IN_flagUOps[1U] 
                    & ((~ vlSymsp->TOP__Top__soc__core.branch[0U]) 
                       | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & ((vlSelfRef.__PVT__IN_flagUOps
                                                                [1U] 
                                                                >> 6U) 
                                                               - 
                                                               ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                 << 0xbU) 
                                                                | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                   >> 0x15U)))))))) 
                   & (~ (vlSelfRef.__PVT__IN_flagUOps
                         [1U] >> 1U))))) {
            vlSelfRef.__PVT__unnamedblk22__DOT__unnamedblk23__DOT__id 
                = (0x3fU & (vlSelfRef.__PVT__IN_flagUOps
                            [1U] >> 6U));
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0xfU == (0xfU & (
                                                   vlSelfRef.__PVT__IN_flagUOps
                                                   [1U] 
                                                   >> 2U)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: ROB.sv:457: Assertion failed in %NTop.soc.core.rob.unnamedblk22.unnamedblk23: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/ROB.sv", 457, "");
                }
            }
            vlSelfRef.__VdlyVal__flags__v5 = (0xfU 
                                              & (vlSelfRef.__PVT__IN_flagUOps
                                                 [1U] 
                                                 >> 2U));
            vlSelfRef.__VdlyDim0__flags__v5 = vlSelfRef.__PVT__unnamedblk22__DOT__unnamedblk23__DOT__id;
            vlSelfRef.__VdlySet__flags__v5 = 1U;
        }
        if ((1U & ((vlSelfRef.__PVT__IN_flagUOps[2U] 
                    & ((~ vlSymsp->TOP__Top__soc__core.branch[0U]) 
                       | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & ((vlSelfRef.__PVT__IN_flagUOps
                                                                [2U] 
                                                                >> 6U) 
                                                               - 
                                                               ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                 << 0xbU) 
                                                                | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                   >> 0x15U)))))))) 
                   & (~ (vlSelfRef.__PVT__IN_flagUOps
                         [2U] >> 1U))))) {
            vlSelfRef.__PVT__unnamedblk22__DOT__unnamedblk23__DOT__id 
                = (0x3fU & (vlSelfRef.__PVT__IN_flagUOps
                            [2U] >> 6U));
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0xfU == (0xfU & (
                                                   vlSelfRef.__PVT__IN_flagUOps
                                                   [2U] 
                                                   >> 2U)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: ROB.sv:457: Assertion failed in %NTop.soc.core.rob.unnamedblk22.unnamedblk23: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/ROB.sv", 457, "");
                }
            }
            vlSelfRef.__VdlyVal__flags__v6 = (0xfU 
                                              & (vlSelfRef.__PVT__IN_flagUOps
                                                 [2U] 
                                                 >> 2U));
            vlSelfRef.__VdlyDim0__flags__v6 = vlSelfRef.__PVT__unnamedblk22__DOT__unnamedblk23__DOT__id;
            vlSelfRef.__VdlySet__flags__v6 = 1U;
        }
        if ((1U & ((vlSelfRef.__PVT__IN_flagUOps[3U] 
                    & ((~ vlSymsp->TOP__Top__soc__core.branch[0U]) 
                       | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & ((vlSelfRef.__PVT__IN_flagUOps
                                                                [3U] 
                                                                >> 6U) 
                                                               - 
                                                               ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                 << 0xbU) 
                                                                | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                   >> 0x15U)))))))) 
                   & (~ (vlSelfRef.__PVT__IN_flagUOps
                         [3U] >> 1U))))) {
            vlSelfRef.__PVT__unnamedblk22__DOT__unnamedblk23__DOT__id 
                = (0x3fU & (vlSelfRef.__PVT__IN_flagUOps
                            [3U] >> 6U));
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0xfU == (0xfU & (
                                                   vlSelfRef.__PVT__IN_flagUOps
                                                   [3U] 
                                                   >> 2U)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: ROB.sv:457: Assertion failed in %NTop.soc.core.rob.unnamedblk22.unnamedblk23: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/ROB.sv", 457, "");
                }
            }
            vlSelfRef.__VdlyVal__flags__v7 = (0xfU 
                                              & (vlSelfRef.__PVT__IN_flagUOps
                                                 [3U] 
                                                 >> 2U));
            vlSelfRef.__VdlyDim0__flags__v7 = vlSelfRef.__PVT__unnamedblk22__DOT__unnamedblk23__DOT__id;
            vlSelfRef.__VdlySet__flags__v7 = 1U;
        }
        if ((1U & ((vlSelfRef.__PVT__IN_flagUOps[4U] 
                    & ((~ vlSymsp->TOP__Top__soc__core.branch[0U]) 
                       | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & ((vlSelfRef.__PVT__IN_flagUOps
                                                                [4U] 
                                                                >> 6U) 
                                                               - 
                                                               ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                 << 0xbU) 
                                                                | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                   >> 0x15U)))))))) 
                   & (~ (vlSelfRef.__PVT__IN_flagUOps
                         [4U] >> 1U))))) {
            vlSelfRef.__PVT__unnamedblk22__DOT__unnamedblk23__DOT__id 
                = (0x3fU & (vlSelfRef.__PVT__IN_flagUOps
                            [4U] >> 6U));
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0xfU == (0xfU & (
                                                   vlSelfRef.__PVT__IN_flagUOps
                                                   [4U] 
                                                   >> 2U)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: ROB.sv:457: Assertion failed in %NTop.soc.core.rob.unnamedblk22.unnamedblk23: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/ROB.sv", 457, "");
                }
            }
            vlSelfRef.__VdlyVal__flags__v8 = (0xfU 
                                              & (vlSelfRef.__PVT__IN_flagUOps
                                                 [4U] 
                                                 >> 2U));
            vlSelfRef.__VdlyDim0__flags__v8 = vlSelfRef.__PVT__unnamedblk22__DOT__unnamedblk23__DOT__id;
            vlSelfRef.__VdlySet__flags__v8 = 1U;
        }
        if ((1U & ((vlSelfRef.__PVT__IN_flagUOps[5U] 
                    & ((~ vlSymsp->TOP__Top__soc__core.branch[0U]) 
                       | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & ((vlSelfRef.__PVT__IN_flagUOps
                                                                [5U] 
                                                                >> 6U) 
                                                               - 
                                                               ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                 << 0xbU) 
                                                                | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                   >> 0x15U)))))))) 
                   & (~ (vlSelfRef.__PVT__IN_flagUOps
                         [5U] >> 1U))))) {
            vlSelfRef.__PVT__unnamedblk22__DOT__unnamedblk23__DOT__id 
                = (0x3fU & (vlSelfRef.__PVT__IN_flagUOps
                            [5U] >> 6U));
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0xfU == (0xfU & (
                                                   vlSelfRef.__PVT__IN_flagUOps
                                                   [5U] 
                                                   >> 2U)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: ROB.sv:457: Assertion failed in %NTop.soc.core.rob.unnamedblk22.unnamedblk23: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/ROB.sv", 457, "");
                }
            }
            vlSelfRef.__VdlyVal__flags__v9 = (0xfU 
                                              & (vlSelfRef.__PVT__IN_flagUOps
                                                 [5U] 
                                                 >> 2U));
            vlSelfRef.__VdlyDim0__flags__v9 = vlSelfRef.__PVT__unnamedblk22__DOT__unnamedblk23__DOT__id;
            vlSelfRef.__VdlySet__flags__v9 = 1U;
        }
        if ((1U & ((vlSelfRef.__PVT__IN_flagUOps[6U] 
                    & ((~ vlSymsp->TOP__Top__soc__core.branch[0U]) 
                       | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & ((vlSelfRef.__PVT__IN_flagUOps
                                                                [6U] 
                                                                >> 6U) 
                                                               - 
                                                               ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                 << 0xbU) 
                                                                | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                   >> 0x15U)))))))) 
                   & (~ (vlSelfRef.__PVT__IN_flagUOps
                         [6U] >> 1U))))) {
            vlSelfRef.__PVT__unnamedblk22__DOT__unnamedblk23__DOT__id 
                = (0x3fU & (vlSelfRef.__PVT__IN_flagUOps
                            [6U] >> 6U));
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0xfU == (0xfU & (
                                                   vlSelfRef.__PVT__IN_flagUOps
                                                   [6U] 
                                                   >> 2U)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: ROB.sv:457: Assertion failed in %NTop.soc.core.rob.unnamedblk22.unnamedblk23: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/ROB.sv", 457, "");
                }
            }
            vlSelfRef.__VdlyVal__flags__v10 = (0xfU 
                                               & (vlSelfRef.__PVT__IN_flagUOps
                                                  [6U] 
                                                  >> 2U));
            vlSelfRef.__VdlyDim0__flags__v10 = vlSelfRef.__PVT__unnamedblk22__DOT__unnamedblk23__DOT__id;
            vlSelfRef.__VdlySet__flags__v10 = 1U;
        }
    }
}

VL_INLINE_OPT void VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__3(VTop_ROB* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__3\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__OUT_mispredFlush = ((~ (IData)(vlSymsp->TOP.rst)) 
                                         & ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                            & (0U != (IData)(vlSelfRef.__PVT__misprReplayFwdMask))));
}

VL_INLINE_OPT void VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__6(VTop_ROB* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__6\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__unnamedblk3__DOT__deqBase;
    __PVT__unnamedblk3__DOT__deqBase = 0;
    CData/*6:0*/ __PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN;
    __PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN = 0;
    CData/*6:0*/ __Vlvbound_hdd1094b1__0;
    __Vlvbound_hdd1094b1__0 = 0;
    CData/*6:0*/ __Vlvbound_h4135b2b9__0;
    __Vlvbound_h4135b2b9__0 = 0;
    IData/*23:0*/ __VdlyVal__gen__BRA__2__KET____DOT__entries__v0;
    __VdlyVal__gen__BRA__2__KET____DOT__entries__v0 = 0;
    CData/*3:0*/ __VdlyDim0__gen__BRA__2__KET____DOT__entries__v0;
    __VdlyDim0__gen__BRA__2__KET____DOT__entries__v0 = 0;
    IData/*23:0*/ __VdlyVal__gen__BRA__3__KET____DOT__entries__v0;
    __VdlyVal__gen__BRA__3__KET____DOT__entries__v0 = 0;
    CData/*3:0*/ __VdlyDim0__gen__BRA__3__KET____DOT__entries__v0;
    __VdlyDim0__gen__BRA__3__KET____DOT__entries__v0 = 0;
    IData/*23:0*/ __VdlyVal__gen__BRA__1__KET____DOT__entries__v1;
    __VdlyVal__gen__BRA__1__KET____DOT__entries__v1 = 0;
    CData/*3:0*/ __VdlyDim0__gen__BRA__1__KET____DOT__entries__v1;
    __VdlyDim0__gen__BRA__1__KET____DOT__entries__v1 = 0;
    IData/*23:0*/ __VdlyVal__gen__BRA__1__KET____DOT__entries__v2;
    __VdlyVal__gen__BRA__1__KET____DOT__entries__v2 = 0;
    CData/*3:0*/ __VdlyDim0__gen__BRA__1__KET____DOT__entries__v2;
    __VdlyDim0__gen__BRA__1__KET____DOT__entries__v2 = 0;
    // Body
    vlSelfRef.__PVT__hangCounter = vlSelfRef.__Vdly__hangCounter;
    vlSelfRef.__PVT__stop = vlSelfRef.__Vdly__stop;
    vlSelfRef.__PVT__lastIndex = vlSelfRef.__Vdly__lastIndex;
    vlSelfRef.__PVT__hangDetected = vlSelfRef.__Vdly__hangDetected;
    if (vlSelfRef.__VdlySet__gen__BRA__0__KET____DOT__entries__v0) {
        vlSelfRef.__PVT__gen__BRA__0__KET____DOT__entries[vlSelfRef.__VdlyDim0__gen__BRA__0__KET____DOT__entries__v0] 
            = vlSelfRef.__VdlyVal__gen__BRA__0__KET____DOT__entries__v0;
    }
    if (vlSelfRef.__VdlySet__gen__BRA__1__KET____DOT__entries__v0) {
        vlSelfRef.__PVT__gen__BRA__1__KET____DOT__entries[vlSelfRef.__VdlyDim0__gen__BRA__1__KET____DOT__entries__v0] 
            = vlSelfRef.__VdlyVal__gen__BRA__1__KET____DOT__entries__v0;
    }
    if (vlSelfRef.__VdlySet__gen__BRA__1__KET____DOT__entries__v1) {
        vlSelfRef.__PVT__gen__BRA__1__KET____DOT__entries[__VdlyDim0__gen__BRA__1__KET____DOT__entries__v1] 
            = __VdlyVal__gen__BRA__1__KET____DOT__entries__v1;
    }
    if (vlSelfRef.__VdlySet__gen__BRA__1__KET____DOT__entries__v2) {
        vlSelfRef.__PVT__gen__BRA__1__KET____DOT__entries[__VdlyDim0__gen__BRA__1__KET____DOT__entries__v2] 
            = __VdlyVal__gen__BRA__1__KET____DOT__entries__v2;
    }
    if (vlSelfRef.__VdlySet__gen__BRA__2__KET____DOT__entries__v0) {
        vlSelfRef.__PVT__gen__BRA__2__KET____DOT__entries[__VdlyDim0__gen__BRA__2__KET____DOT__entries__v0] 
            = __VdlyVal__gen__BRA__2__KET____DOT__entries__v0;
    }
    if (vlSelfRef.__VdlySet__gen__BRA__2__KET____DOT__entries__v1) {
        vlSelfRef.__PVT__gen__BRA__2__KET____DOT__entries[vlSelfRef.__VdlyDim0__gen__BRA__2__KET____DOT__entries__v1] 
            = vlSelfRef.__VdlyVal__gen__BRA__2__KET____DOT__entries__v1;
    }
    if (vlSelfRef.__VdlySet__gen__BRA__2__KET____DOT__entries__v2) {
        vlSelfRef.__PVT__gen__BRA__2__KET____DOT__entries[vlSelfRef.__VdlyDim0__gen__BRA__2__KET____DOT__entries__v2] 
            = vlSelfRef.__VdlyVal__gen__BRA__2__KET____DOT__entries__v2;
    }
    if (vlSelfRef.__VdlySet__gen__BRA__3__KET____DOT__entries__v0) {
        vlSelfRef.__PVT__gen__BRA__3__KET____DOT__entries[__VdlyDim0__gen__BRA__3__KET____DOT__entries__v0] 
            = __VdlyVal__gen__BRA__3__KET____DOT__entries__v0;
    }
    if (vlSelfRef.__VdlySet__gen__BRA__3__KET____DOT__entries__v1) {
        vlSelfRef.__PVT__gen__BRA__3__KET____DOT__entries[vlSelfRef.__VdlyDim0__gen__BRA__3__KET____DOT__entries__v1] 
            = vlSelfRef.__VdlyVal__gen__BRA__3__KET____DOT__entries__v1;
    }
    if (vlSelfRef.__VdlySet__gen__BRA__3__KET____DOT__entries__v2) {
        vlSelfRef.__PVT__gen__BRA__3__KET____DOT__entries[vlSelfRef.__VdlyDim0__gen__BRA__3__KET____DOT__entries__v2] 
            = vlSelfRef.__VdlyVal__gen__BRA__3__KET____DOT__entries__v2;
    }
    if (vlSelfRef.__VdlySet__flags__v0) {
        vlSelfRef.__PVT__flags[vlSelfRef.__VdlyDim0__flags__v0] 
            = vlSelfRef.__VdlyVal__flags__v0;
    }
    if (vlSelfRef.__VdlySet__flags__v1) {
        vlSelfRef.__PVT__flags[vlSelfRef.__VdlyDim0__flags__v1] 
            = vlSelfRef.__VdlyVal__flags__v1;
    }
    if (vlSelfRef.__VdlySet__flags__v2) {
        vlSelfRef.__PVT__flags[vlSelfRef.__VdlyDim0__flags__v2] 
            = vlSelfRef.__VdlyVal__flags__v2;
    }
    if (vlSelfRef.__VdlySet__flags__v3) {
        vlSelfRef.__PVT__flags[vlSelfRef.__VdlyDim0__flags__v3] 
            = vlSelfRef.__VdlyVal__flags__v3;
    }
    if (vlSelfRef.__VdlySet__flags__v4) {
        vlSelfRef.__PVT__flags[vlSelfRef.__VdlyDim0__flags__v4] 
            = vlSelfRef.__VdlyVal__flags__v4;
    }
    if (vlSelfRef.__VdlySet__flags__v5) {
        vlSelfRef.__PVT__flags[vlSelfRef.__VdlyDim0__flags__v5] 
            = vlSelfRef.__VdlyVal__flags__v5;
    }
    if (vlSelfRef.__VdlySet__flags__v6) {
        vlSelfRef.__PVT__flags[vlSelfRef.__VdlyDim0__flags__v6] 
            = vlSelfRef.__VdlyVal__flags__v6;
    }
    if (vlSelfRef.__VdlySet__flags__v7) {
        vlSelfRef.__PVT__flags[vlSelfRef.__VdlyDim0__flags__v7] 
            = vlSelfRef.__VdlyVal__flags__v7;
    }
    if (vlSelfRef.__VdlySet__flags__v8) {
        vlSelfRef.__PVT__flags[vlSelfRef.__VdlyDim0__flags__v8] 
            = vlSelfRef.__VdlyVal__flags__v8;
    }
    if (vlSelfRef.__VdlySet__flags__v9) {
        vlSelfRef.__PVT__flags[vlSelfRef.__VdlyDim0__flags__v9] 
            = vlSelfRef.__VdlyVal__flags__v9;
    }
    if (vlSelfRef.__VdlySet__flags__v10) {
        vlSelfRef.__PVT__flags[vlSelfRef.__VdlyDim0__flags__v10] 
            = vlSelfRef.__VdlyVal__flags__v10;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__misprReplay_r = 0U;
    } else if ((1U & (IData)(vlSelfRef.__PVT__misprReplay_c))) {
        if (vlSelfRef.__PVT__misprReplayEnd) {
            vlSelfRef.__PVT__misprReplay_r = 0U;
        } else {
            vlSelfRef.__PVT__misprReplay_r = vlSelfRef.__PVT__misprReplay_c;
            vlSelfRef.__PVT__misprReplay_r = ((0x7f01U 
                                               & (IData)(vlSelfRef.__PVT__misprReplay_r)) 
                                              | (0xfeU 
                                                 & (((IData)(4U) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                                      >> 1U)) 
                                                    << 1U)));
        }
    }
    vlSelfRef.__PVT__misprReplay_c = vlSelfRef.__PVT__misprReplay_r;
    if ((1U & vlSymsp->TOP__Top__soc__core.branch[0U])) {
        vlSelfRef.__PVT__misprReplay_c = (1U | ((0x7f00U 
                                                 & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                    >> 0xdU)) 
                                                | ((IData)(vlSelfRef.__PVT__baseIndex) 
                                                   << 1U)));
    }
    __PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN 
        = (0x7fU & ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                    >> 1U));
    vlSelfRef.__PVT__misprReplayFwdMask = ((0xeU & (IData)(vlSelfRef.__PVT__misprReplayFwdMask)) 
                                           | VL_GTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,7, 
                                                                       (0x7fU 
                                                                        & ((IData)(__PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN) 
                                                                           - 
                                                                           ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                                                            >> 8U))))));
    __PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN 
        = (0x7fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                   >> 1U)));
    vlSelfRef.__PVT__misprReplayFwdMask = ((0xdU & (IData)(vlSelfRef.__PVT__misprReplayFwdMask)) 
                                           | (VL_GTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,7, 
                                                                        (0x7fU 
                                                                         & ((IData)(__PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN) 
                                                                            - 
                                                                            ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                                                             >> 8U))))) 
                                              << 1U));
    __PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN 
        = (0x7fU & ((IData)(2U) + ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                   >> 1U)));
    vlSelfRef.__PVT__misprReplayFwdMask = ((0xbU & (IData)(vlSelfRef.__PVT__misprReplayFwdMask)) 
                                           | (VL_GTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,7, 
                                                                        (0x7fU 
                                                                         & ((IData)(__PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN) 
                                                                            - 
                                                                            ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                                                             >> 8U))))) 
                                              << 2U));
    __PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN 
        = (0x7fU & ((IData)(3U) + ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                   >> 1U)));
    vlSelfRef.__PVT__misprReplayFwdMask = ((7U & (IData)(vlSelfRef.__PVT__misprReplayFwdMask)) 
                                           | (VL_GTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,7, 
                                                                        (0x7fU 
                                                                         & ((IData)(__PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN) 
                                                                            - 
                                                                            ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                                                             >> 8U))))) 
                                              << 3U));
    vlSelfRef.__PVT__misprReplayEnd = (1U & ((~ ((IData)(vlSelfRef.__PVT__misprReplayFwdMask) 
                                                 >> 3U)) 
                                             | (0U 
                                                == 
                                                VL_EXTENDS_II(32,7, 
                                                              (0x7fU 
                                                               & ((IData)(__PVT__unnamedblk10__DOT__unnamedblk11__DOT__curSqN) 
                                                                  - 
                                                                  ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                                                   >> 8U)))))));
    __PVT__unnamedblk3__DOT__deqBase = (0x3fU & ((1U 
                                                  & (IData)(vlSelfRef.__PVT__misprReplay_c))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__misprReplay_c) 
                                                  >> 1U)
                                                  : (IData)(vlSelfRef.__PVT__baseIndex)));
    vlSelfRef.__PVT__deqAddrs[0U] = __PVT__unnamedblk3__DOT__deqBase;
    vlSelfRef.__PVT__deqAddrs[1U] = (0x3fU & ((IData)(1U) 
                                              + (IData)(__PVT__unnamedblk3__DOT__deqBase)));
    vlSelfRef.__PVT__deqAddrs[2U] = (0x3fU & ((IData)(2U) 
                                              + (IData)(__PVT__unnamedblk3__DOT__deqBase)));
    vlSelfRef.__PVT__deqAddrs[3U] = (0x3fU & ((IData)(3U) 
                                              + (IData)(__PVT__unnamedblk3__DOT__deqBase)));
    vlSelfRef.__PVT__deqAddrsSorted[0U] = 0U;
    vlSelfRef.__PVT__deqAddrsSorted[1U] = 0U;
    vlSelfRef.__PVT__deqAddrsSorted[2U] = 0U;
    vlSelfRef.__PVT__deqAddrsSorted[3U] = 0U;
    vlSelfRef.__PVT__deqAddrsSorted[(3U & vlSelfRef.__PVT__deqAddrs
                                     [0U])] = (0xfU 
                                               & (vlSelfRef.__PVT__deqAddrs
                                                  [0U] 
                                                  >> 2U));
    vlSelfRef.__PVT__deqAddrsSorted[(3U & vlSelfRef.__PVT__deqAddrs
                                     [1U])] = (0xfU 
                                               & (vlSelfRef.__PVT__deqAddrs
                                                  [1U] 
                                                  >> 2U));
    vlSelfRef.__PVT__deqAddrsSorted[(3U & vlSelfRef.__PVT__deqAddrs
                                     [2U])] = (0xfU 
                                               & (vlSelfRef.__PVT__deqAddrs
                                                  [2U] 
                                                  >> 2U));
    vlSelfRef.__PVT__deqAddrsSorted[(3U & vlSelfRef.__PVT__deqAddrs
                                     [3U])] = (0xfU 
                                               & (vlSelfRef.__PVT__deqAddrs
                                                  [3U] 
                                                  >> 2U));
    vlSelfRef.__PVT__deqFlagPorts[0U] = vlSelfRef.__PVT__flags
        [(vlSelfRef.__PVT__deqAddrsSorted[0U] << 2U)];
    vlSelfRef.__PVT__deqFlagPorts[1U] = vlSelfRef.__PVT__flags
        [(1U | (vlSelfRef.__PVT__deqAddrsSorted[1U] 
                << 2U))];
    vlSelfRef.__PVT__deqFlagPorts[2U] = vlSelfRef.__PVT__flags
        [(2U | (vlSelfRef.__PVT__deqAddrsSorted[2U] 
                << 2U))];
    vlSelfRef.__PVT__deqFlagPorts[3U] = vlSelfRef.__PVT__flags
        [(3U | (vlSelfRef.__PVT__deqAddrsSorted[3U] 
                << 2U))];
    vlSelfRef.__PVT__deqPorts[0U] = vlSelfRef.__PVT__gen__BRA__0__KET____DOT__entries
        [vlSelfRef.__PVT__deqAddrsSorted[0U]];
    vlSelfRef.__PVT__deqPorts[1U] = vlSelfRef.__PVT__gen__BRA__1__KET____DOT__entries
        [vlSelfRef.__PVT__deqAddrsSorted[1U]];
    vlSelfRef.__PVT__deqPorts[2U] = vlSelfRef.__PVT__gen__BRA__2__KET____DOT__entries
        [vlSelfRef.__PVT__deqAddrsSorted[2U]];
    vlSelfRef.__PVT__deqPorts[3U] = vlSelfRef.__PVT__gen__BRA__3__KET____DOT__entries
        [vlSelfRef.__PVT__deqAddrsSorted[3U]];
    vlSelfRef.__PVT__deqFlags[0U] = vlSelfRef.__PVT__deqFlagPorts
        [(3U & vlSelfRef.__PVT__deqAddrs[0U])];
    vlSelfRef.__PVT__deqFlags[1U] = vlSelfRef.__PVT__deqFlagPorts
        [(3U & vlSelfRef.__PVT__deqAddrs[1U])];
    vlSelfRef.__PVT__deqFlags[2U] = vlSelfRef.__PVT__deqFlagPorts
        [(3U & vlSelfRef.__PVT__deqAddrs[2U])];
    vlSelfRef.__PVT__deqFlags[3U] = vlSelfRef.__PVT__deqFlagPorts
        [(3U & vlSelfRef.__PVT__deqAddrs[3U])];
    vlSelfRef.__PVT__deqEntries[0U] = vlSelfRef.__PVT__deqPorts
        [(3U & vlSelfRef.__PVT__deqAddrs[0U])];
    vlSelfRef.__PVT__deqEntries[1U] = vlSelfRef.__PVT__deqPorts
        [(3U & vlSelfRef.__PVT__deqAddrs[1U])];
    vlSelfRef.__PVT__deqEntries[2U] = vlSelfRef.__PVT__deqPorts
        [(3U & vlSelfRef.__PVT__deqAddrs[2U])];
    vlSelfRef.__PVT__deqEntries[3U] = vlSelfRef.__PVT__deqPorts
        [(3U & vlSelfRef.__PVT__deqAddrs[3U])];
    vlSelfRef.__PVT__storeSqNs_c[0U] = vlSelfRef.__PVT__storeSqN_r;
    __Vlvbound_hdd1094b1__0 = (0x7fU & (vlSelfRef.__PVT__storeSqNs_c
                                        [0U] + ((1U 
                                                 & vlSelfRef.__PVT__deqEntries
                                                 [0U])
                                                 ? 1U
                                                 : 0U)));
    vlSelfRef.__PVT__storeSqNs_c[1U] = __Vlvbound_hdd1094b1__0;
    __Vlvbound_hdd1094b1__0 = (0x7fU & (vlSelfRef.__PVT__storeSqNs_c
                                        [1U] + ((1U 
                                                 & vlSelfRef.__PVT__deqEntries
                                                 [1U])
                                                 ? 1U
                                                 : 0U)));
    vlSelfRef.__PVT__storeSqNs_c[2U] = __Vlvbound_hdd1094b1__0;
    __Vlvbound_hdd1094b1__0 = (0x7fU & (vlSelfRef.__PVT__storeSqNs_c
                                        [2U] + ((1U 
                                                 & vlSelfRef.__PVT__deqEntries
                                                 [2U])
                                                 ? 1U
                                                 : 0U)));
    vlSelfRef.__PVT__storeSqNs_c[3U] = __Vlvbound_hdd1094b1__0;
    __Vlvbound_hdd1094b1__0 = (0x7fU & (vlSelfRef.__PVT__storeSqNs_c
                                        [3U] + ((1U 
                                                 & vlSelfRef.__PVT__deqEntries
                                                 [3U])
                                                 ? 1U
                                                 : 0U)));
    vlSelfRef.__PVT__storeSqNs_c[4U] = __Vlvbound_hdd1094b1__0;
    vlSelfRef.__PVT__loadSqNs_c[0U] = vlSelfRef.__PVT__loadSqN_r;
    __Vlvbound_h4135b2b9__0 = (0x7fU & (vlSelfRef.__PVT__loadSqNs_c
                                        [0U] + ((2U 
                                                 & vlSelfRef.__PVT__deqEntries
                                                 [0U])
                                                 ? 1U
                                                 : 0U)));
    vlSelfRef.__PVT__loadSqNs_c[1U] = __Vlvbound_h4135b2b9__0;
    __Vlvbound_h4135b2b9__0 = (0x7fU & (vlSelfRef.__PVT__loadSqNs_c
                                        [1U] + ((2U 
                                                 & vlSelfRef.__PVT__deqEntries
                                                 [1U])
                                                 ? 1U
                                                 : 0U)));
    vlSelfRef.__PVT__loadSqNs_c[2U] = __Vlvbound_h4135b2b9__0;
    __Vlvbound_h4135b2b9__0 = (0x7fU & (vlSelfRef.__PVT__loadSqNs_c
                                        [2U] + ((2U 
                                                 & vlSelfRef.__PVT__deqEntries
                                                 [2U])
                                                 ? 1U
                                                 : 0U)));
    vlSelfRef.__PVT__loadSqNs_c[3U] = __Vlvbound_h4135b2b9__0;
    __Vlvbound_h4135b2b9__0 = (0x7fU & (vlSelfRef.__PVT__loadSqNs_c
                                        [3U] + ((2U 
                                                 & vlSelfRef.__PVT__deqEntries
                                                 [3U])
                                                 ? 1U
                                                 : 0U)));
    vlSelfRef.__PVT__loadSqNs_c[4U] = __Vlvbound_h4135b2b9__0;
}
