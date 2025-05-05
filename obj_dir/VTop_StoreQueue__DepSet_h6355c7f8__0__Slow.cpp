// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_StoreQueue.h"
#include "VTop__Syms.h"

VL_ATTR_COLD void VTop_StoreQueue___stl_sequent__TOP__Top__soc__core__sq__0(VTop_StoreQueue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_StoreQueue___stl_sequent__TOP__Top__soc__core__sq__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vcellinp__readyRangeGen__IN_allOnes;
    __Vcellinp__readyRangeGen__IN_allOnes = 0;
    CData/*0:0*/ __Vcellinp__invalRangeGen__IN_enable;
    __Vcellinp__invalRangeGen__IN_enable = 0;
    CData/*6:0*/ __PVT__genblk1__BRA__0__KET____DOT__endSqN;
    __PVT__genblk1__BRA__0__KET____DOT__endSqN = 0;
    CData/*6:0*/ __PVT__genblk1__BRA__1__KET____DOT__endSqN;
    __PVT__genblk1__BRA__1__KET____DOT__endSqN = 0;
    IData/*31:0*/ __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii;
    __PVT__genblk2__BRA__0__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0;
    IData/*31:0*/ __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii;
    __PVT__genblk2__BRA__1__KET____DOT__unnamedblk4__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ii = 0;
    CData/*3:0*/ __PVT__unnamedblk15__DOT__unnamedblk16__DOT__addr;
    __PVT__unnamedblk15__DOT__unnamedblk16__DOT__addr = 0;
    VlWide<3>/*67:0*/ __PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry;
    VL_ZERO_W(68, __PVT__unnamedblk15__DOT__unnamedblk16__DOT__entry);
    CData/*0:0*/ __PVT__unnamedblk15__DOT__unnamedblk16__DOT__ready;
    __PVT__unnamedblk15__DOT__unnamedblk16__DOT__ready = 0;
    CData/*0:0*/ __PVT__unnamedblk17__DOT__prevValid;
    __PVT__unnamedblk17__DOT__prevValid = 0;
    CData/*1:0*/ __PVT__unnamedblk23__DOT__unnamedblk24__DOT__idx;
    __PVT__unnamedblk23__DOT__unnamedblk24__DOT__idx = 0;
    CData/*3:0*/ __PVT__unnamedblk23__DOT__unnamedblk24__DOT__idxSQ;
    __PVT__unnamedblk23__DOT__unnamedblk24__DOT__idxSQ = 0;
    CData/*0:0*/ __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active;
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0;
    CData/*0:0*/ __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd;
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd = 0;
    CData/*0:0*/ __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart;
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart = 0;
    CData/*0:0*/ __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active;
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0;
    CData/*0:0*/ __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd;
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd = 0;
    CData/*0:0*/ __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart;
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart = 0;
    VlUnpacked<CData/*0:0*/, 2> __PVT__penc__DOT__OUT_idxValid;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        __PVT__penc__DOT__OUT_idxValid[__Vi0] = 0;
    }
    CData/*1:0*/ __PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*5:0*/ __PVT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
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
    __Vcellinp__readyRangeGen__IN_allOnes = ((0x7fU 
                                              & ((IData)(0x10U) 
                                                 + (IData)(vlSelfRef.baseIndex))) 
                                             == (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN));
    __Vcellinp__invalRangeGen__IN_enable = VL_GTS_III(32, 0xfU, 
                                                      VL_EXTENDS_II(32,7, 
                                                                    (0x7fU 
                                                                     & (((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                          << 0x12U) 
                                                                         | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                            >> 0xeU)) 
                                                                        - (IData)(vlSelfRef.baseIndex)))));
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
    vlSelfRef.__PVT__unhandled = ((0xeU & (IData)(vlSelfRef.__PVT__unhandled)) 
                                  | (vlSelfRef.__PVT__OUT_uop
                                     [0U][0U] & vlSelfRef.__PVT__IN_stall
                                     [0U]));
    vlSelfRef.__PVT__unhandled = ((0xdU & (IData)(vlSelfRef.__PVT__unhandled)) 
                                  | ((vlSelfRef.__PVT__OUT_uop
                                      [1U][0U] & vlSelfRef.__PVT__IN_stall
                                      [1U]) << 1U));
    vlSelfRef.__PVT__unhandled = (0xcU | (IData)(vlSelfRef.__PVT__unhandled));
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
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active 
        = ((0xfU & (IData)(vlSelfRef.baseIndex)) > 
           (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN)));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & ((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & ((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xfffeU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | ((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                        | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 1U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 1U));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xfffdU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 1U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 2U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 2U));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xfffbU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 2U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 3U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 3U));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xfff7U & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 3U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 4U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 4U));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xffefU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 4U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 5U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 5U));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xffdfU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 5U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 6U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 6U));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xffbfU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 6U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 7U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 7U));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xff7fU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 7U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 8U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 8U));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xfeffU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 8U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 9U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 9U));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xfdffU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 9U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 0xaU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xaU));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xfbffU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 0xaU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 0xbU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xbU));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xf7ffU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 0xbU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 0xcU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xcU));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xefffU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 0xcU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 0xdU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xdU));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xdfffU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 0xdU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 0xeU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xeU));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xbfffU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 0xeU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 0xfU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xfU));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0x7fffU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 0xfU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active 
        = ((0xfU & ((IData)(1U) + ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                    << 0x12U) | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                 >> 0xeU)))) 
           >= (0xfU & (IData)(vlSelfRef.baseIndex)));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & ((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 0xfU));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xfffeU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | ((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                        & (IData)(__Vcellinp__invalRangeGen__IN_enable)));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 1U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & ((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                         >> 0xeU))));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xfffdU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 1U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 2U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 1U));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xfffbU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 2U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 3U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 2U));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xfff7U & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 3U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 4U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 3U));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xffefU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 4U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 5U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 4U));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xffdfU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 5U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 6U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 5U));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xffbfU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 6U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 7U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 6U));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xff7fU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 7U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 8U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 7U));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xfeffU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 8U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 9U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 8U));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xfdffU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 9U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xaU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 9U));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xfbffU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 0xaU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xbU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 0xaU));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xf7ffU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 0xbU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xcU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 0xbU));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xefffU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 0xcU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xdU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 0xcU));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xdfffU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 0xdU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xeU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 0xdU));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xbfffU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 0xeU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xfU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 0xeU));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0x7fffU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 0xfU));
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
