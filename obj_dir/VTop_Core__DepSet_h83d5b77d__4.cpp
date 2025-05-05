// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Core.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_Core___ico_sequent__TOP__Top__soc__core__6(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___ico_sequent__TOP__Top__soc__core__6\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlUnpacked<CData/*0:0*/, 1> cacheLineManager__DOT____Vcellout__penc____pinNumber3;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        cacheLineManager__DOT____Vcellout__penc____pinNumber3[__Vi0] = 0;
    }
    SData/*12:0*/ cacheLineManager__DOT____Vlvbound_hc8a264b6__0;
    cacheLineManager__DOT____Vlvbound_hc8a264b6__0 = 0;
    CData/*0:0*/ cacheLineManager__DOT____Vlvbound_hb187dcf7__0;
    cacheLineManager__DOT____Vlvbound_hb187dcf7__0 = 0;
    SData/*11:0*/ cacheLineManager__DOT____Vlvbound_hd9712599__0;
    cacheLineManager__DOT____Vlvbound_hd9712599__0 = 0;
    CData/*2:0*/ __PVT__cacheLineManager__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__cacheLineManager__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ cacheLineManager__DOT__penc__DOT____Vlvbound_h284d0bd7__0;
    cacheLineManager__DOT__penc__DOT____Vlvbound_h284d0bd7__0 = 0;
    CData/*0:0*/ cacheLineManager__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    cacheLineManager__DOT__penc__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*3:0*/ __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*2:0*/ genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 = 0;
    CData/*0:0*/ genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*3:0*/ __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*2:0*/ genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 = 0;
    CData/*0:0*/ genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*3:0*/ __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*2:0*/ genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 = 0;
    CData/*0:0*/ genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*3:0*/ __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*2:0*/ genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 = 0;
    CData/*0:0*/ genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*7:0*/ genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_h7888c631__0;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_h7888c631__0 = 0;
    CData/*3:0*/ __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*2:0*/ genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 = 0;
    CData/*0:0*/ genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 = 0;
    // Body
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] = 0U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_h7888c631__0 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_h7888c631__0;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_h7888c631__0 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[2U] 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_h7888c631__0;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_h7888c631__0 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
        [4U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[3U] 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_h7888c631__0;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] = 0U;
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_flagsUOps[4U] 
        = vlSelfRef.__Vcellinp__rn__IN_flagsUOps[4U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_flagsUOps[3U] 
        = vlSelfRef.__Vcellinp__rn__IN_flagsUOps[3U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_flagsUOps[2U] 
        = vlSelfRef.__Vcellinp__rn__IN_flagsUOps[2U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_flagsUOps[1U] 
        = vlSelfRef.__Vcellinp__rn__IN_flagsUOps[1U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_flagsUOps[0U] 
        = vlSelfRef.__Vcellinp__rn__IN_flagsUOps[0U];
    cacheLineManager__DOT____Vlvbound_hc8a264b6__0 
        = ((1U & (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__readUnused_c))
            ? (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__PF_ctRead)
            : vlSelfRef.__PVT__CLM_ctRead[0U]);
    vlSelfRef.__PVT__cacheLineManager__DOT__ctRead_c[0U] 
        = cacheLineManager__DOT____Vlvbound_hc8a264b6__0;
    cacheLineManager__DOT____Vlvbound_hc8a264b6__0 
        = ((2U & (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__readUnused_c))
            ? (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__PF_ctRead)
            : vlSelfRef.__PVT__CLM_ctRead[1U]);
    vlSelfRef.__PVT__cacheLineManager__DOT__ctRead_c[1U] 
        = cacheLineManager__DOT____Vlvbound_hc8a264b6__0;
    cacheLineManager__DOT____Vlvbound_hc8a264b6__0 
        = ((4U & (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__readUnused_c))
            ? (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__PF_ctRead)
            : vlSelfRef.__PVT__CLM_ctRead[2U]);
    vlSelfRef.__PVT__cacheLineManager__DOT__ctRead_c[2U] 
        = cacheLineManager__DOT____Vlvbound_hc8a264b6__0;
    vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[0U][0U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                   [0U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                      [0U][1U] >> 0x1eU)) 
                 | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                 [0U]));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[1U][0U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                 [0U][0U] | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                 [1U]));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[0U][1U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                   [1U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                      [1U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[1U][1U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                 [0U][1U] | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[0U][2U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                   [2U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                      [2U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[1U][2U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                 [0U][2U] | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[0U][3U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                   [3U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                      [3U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[1U][3U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                 [0U][3U] | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[0U][4U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                   [4U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                      [4U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 8U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[1U][4U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                 [0U][4U] | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 8U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[0U][5U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                   [5U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                      [5U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 0xaU)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[1U][5U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                 [0U][5U] | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 0xaU)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[0U][6U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                   [6U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                      [6U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 0xcU)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[1U][6U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                 [0U][6U] | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 0xcU)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[0U][7U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                   [7U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                      [7U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 0xeU)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[1U][7U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                 [0U][7U] | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 0xeU)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[0U][0U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                   [0U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                      [0U][1U] >> 0x1eU)) 
                 | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                 [0U]));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[1U][0U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                 [0U][0U] | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                 [1U]));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[0U][1U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                   [1U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                      [1U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[1U][1U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                 [0U][1U] | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[0U][2U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                   [2U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                      [2U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[1U][2U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                 [0U][2U] | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[0U][3U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                   [3U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                      [3U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[1U][3U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                 [0U][3U] | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[0U][4U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                   [4U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                      [4U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 8U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[1U][4U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                 [0U][4U] | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 8U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[0U][5U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                   [5U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                      [5U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 0xaU)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[1U][5U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                 [0U][5U] | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 0xaU)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[0U][6U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                   [6U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                      [6U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 0xcU)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[1U][6U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                 [0U][6U] | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 0xcU)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[0U][7U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                   [7U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                      [7U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 0xeU)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[1U][7U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                 [0U][7U] | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 0xeU)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[0U][0U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                   [0U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                      [0U][1U] >> 0x1eU)) 
                 | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                 [0U]));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[1U][0U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                 [0U][0U] | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                 [1U]));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[0U][1U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                   [1U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                      [1U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[1U][1U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                 [0U][1U] | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[0U][2U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                   [2U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                      [2U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[1U][2U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                 [0U][2U] | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[0U][3U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                   [3U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                      [3U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[1U][3U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                 [0U][3U] | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[0U][4U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                   [4U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                      [4U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 8U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[1U][4U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                 [0U][4U] | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 8U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[0U][5U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                   [5U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                      [5U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 0xaU)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[1U][5U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                 [0U][5U] | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 0xaU)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[0U][6U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                   [6U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                      [6U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 0xcU)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[1U][6U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                 [0U][6U] | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 0xcU)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[0U][7U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                   [7U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                      [7U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 0xeU)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[1U][7U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                 [0U][7U] | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 0xeU)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[0U][0U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                  [0U][1U] >> 0x17U) | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                 [0U]));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[1U][0U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                 [0U][0U] | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                 [1U]));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[0U][1U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                  [1U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[1U][1U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                 [0U][1U] | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[0U][2U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                  [2U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[1U][2U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                 [0U][2U] | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[0U][3U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                  [3U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 3U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[1U][3U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                 [0U][3U] | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 3U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[0U][4U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                  [4U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[1U][4U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                 [0U][4U] | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[0U][5U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                  [5U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 5U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[1U][5U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                 [0U][5U] | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 5U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[0U][6U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                  [6U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[1U][6U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                 [0U][6U] | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[0U][7U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                  [7U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 7U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[1U][7U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                 [0U][7U] | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 7U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[0U][0U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                  [0U][1U] >> 0x17U) | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                 [0U]));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[1U][0U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                 [0U][0U] | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                 [1U]));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[0U][1U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                  [1U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[1U][1U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                 [0U][1U] | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[0U][2U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                  [2U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[1U][2U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                 [0U][2U] | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[0U][3U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                  [3U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 3U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[1U][3U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                 [0U][3U] | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 3U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[0U][4U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                  [4U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[1U][4U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                 [0U][4U] | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[0U][5U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                  [5U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 5U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[1U][5U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                 [0U][5U] | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 5U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[0U][6U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                  [6U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[1U][6U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                 [0U][6U] | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[0U][7U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                  [7U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 7U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[1U][7U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                 [0U][7U] | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 7U)));
    cacheLineManager__DOT____Vlvbound_hb187dcf7__0 
        = (1U & vlSelfRef.__PVT__cacheLineManager__DOT__ctRead_c
           [0U]);
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__re[0U] = cacheLineManager__DOT____Vlvbound_hb187dcf7__0;
    cacheLineManager__DOT____Vlvbound_hb187dcf7__0 
        = (1U & vlSelfRef.__PVT__cacheLineManager__DOT__ctRead_c
           [1U]);
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__re[1U] = cacheLineManager__DOT____Vlvbound_hb187dcf7__0;
    cacheLineManager__DOT____Vlvbound_hb187dcf7__0 
        = (1U & vlSelfRef.__PVT__cacheLineManager__DOT__ctRead_c
           [2U]);
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__re[2U] = cacheLineManager__DOT____Vlvbound_hb187dcf7__0;
    cacheLineManager__DOT____Vlvbound_hd9712599__0 
        = (0xfffU & (vlSelfRef.__PVT__cacheLineManager__DOT__ctRead_c
                     [0U] >> 1U));
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__raddr[0U] 
        = cacheLineManager__DOT____Vlvbound_hd9712599__0;
    cacheLineManager__DOT____Vlvbound_hd9712599__0 
        = (0xfffU & (vlSelfRef.__PVT__cacheLineManager__DOT__ctRead_c
                     [1U] >> 1U));
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__raddr[1U] 
        = cacheLineManager__DOT____Vlvbound_hd9712599__0;
    cacheLineManager__DOT____Vlvbound_hd9712599__0 
        = (0xfffU & (vlSelfRef.__PVT__cacheLineManager__DOT__ctRead_c
                     [2U] >> 1U));
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__raddr[2U] 
        = cacheLineManager__DOT____Vlvbound_hd9712599__0;
    if ((2U == (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__state))) {
        vlSymsp->TOP__Top__soc__IF_ct.__PVT__re[0U] = 1U;
        vlSymsp->TOP__Top__soc__IF_ct.__PVT__raddr[0U] 
            = ((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__flushIdx) 
               << 6U);
    }
    vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfeU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex)) 
               & (3U == vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                  [0U][0U])) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                  [0U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                    [0U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [0U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                  [0U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                 [0U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs)))));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfdU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                   [0U][1U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [1U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                     [1U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                    [1U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [1U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                  [1U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs)))) 
              << 1U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfbU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                   [0U][2U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [2U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                     [2U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                    [2U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [2U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                  [2U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs)))) 
              << 2U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xf7U & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                   [0U][3U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [3U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                     [3U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                    [3U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [3U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                  [3U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs)))) 
              << 3U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xefU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                   [0U][4U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [4U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                     [4U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                    [4U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [4U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                  [4U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs)))) 
              << 4U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xdfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                   [0U][5U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [5U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                     [5U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                    [5U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [5U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                  [5U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs)))) 
              << 5U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xbfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                   [0U][6U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [6U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                     [6U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                    [6U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [6U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                  [6U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs)))) 
              << 6U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0x7fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                   [0U][7U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                     [7U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                    [7U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                  [7U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs)))) 
              << 7U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfeU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex)) 
               & (3U == vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                  [0U][0U])) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                  [0U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                    [0U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                  [0U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                 [0U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs)))));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfdU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                   [0U][1U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                     [1U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                    [1U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                  [1U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs)))) 
              << 1U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfbU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                   [0U][2U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                     [2U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                    [2U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                  [2U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs)))) 
              << 2U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xf7U & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                   [0U][3U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                     [3U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                    [3U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                  [3U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs)))) 
              << 3U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xefU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                   [0U][4U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                     [4U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                    [4U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                  [4U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs)))) 
              << 4U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xdfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                   [0U][5U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                     [5U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                    [5U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                  [5U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs)))) 
              << 5U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xbfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                   [0U][6U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                     [6U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                    [6U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                  [6U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs)))) 
              << 6U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0x7fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                   [0U][7U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                     [7U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                    [7U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                  [7U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs)))) 
              << 7U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfeU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
                 & (3U == vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                    [0U][0U])) & ((5U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                  [0U][0U] 
                                                  >> 1U))) 
                                  | (~ (IData)(vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_doNotIssueDiv)))) 
               & (~ ((((((0U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                         [0U][0U] >> 1U))) 
                         | (1U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                           [0U][0U] 
                                           >> 1U)))) 
                        | (2U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [0U][0U] 
                                          >> 1U)))) 
                       | (6U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                         [0U][0U] >> 1U)))) 
                      | (7U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                        [0U][0U] >> 1U)))) 
                     & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs)))) 
              & ((0xbU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                   [0U][0U] >> 1U))) 
                 | ((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                              [0U][1U] >> 8U)) == (IData)(vlSelfRef.ROB_curSqN)))));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfdU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
                  & (3U == vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                     [0U][1U])) & ((5U != (0xfU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][0U] 
                                                   >> 1U))) 
                                   | (~ (IData)(vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_doNotIssueDiv)))) 
                & (~ ((((((0U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [1U][0U] 
                                          >> 1U))) 
                          | (1U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                            [1U][0U] 
                                            >> 1U)))) 
                         | (2U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                           [1U][0U] 
                                           >> 1U)))) 
                        | (6U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [1U][0U] 
                                          >> 1U)))) 
                       | (7U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                         [1U][0U] >> 1U)))) 
                      & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs)))) 
               & (0xbU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                   [1U][0U] >> 1U)))) 
              << 1U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfbU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
                  & (3U == vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                     [0U][2U])) & ((5U != (0xfU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][0U] 
                                                   >> 1U))) 
                                   | (~ (IData)(vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_doNotIssueDiv)))) 
                & (~ ((((((0U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [2U][0U] 
                                          >> 1U))) 
                          | (1U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                            [2U][0U] 
                                            >> 1U)))) 
                         | (2U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                           [2U][0U] 
                                           >> 1U)))) 
                        | (6U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [2U][0U] 
                                          >> 1U)))) 
                       | (7U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                         [2U][0U] >> 1U)))) 
                      & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs)))) 
               & (0xbU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                   [2U][0U] >> 1U)))) 
              << 2U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xf7U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
                  & (3U == vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                     [0U][3U])) & ((5U != (0xfU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][0U] 
                                                   >> 1U))) 
                                   | (~ (IData)(vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_doNotIssueDiv)))) 
                & (~ ((((((0U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [3U][0U] 
                                          >> 1U))) 
                          | (1U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                            [3U][0U] 
                                            >> 1U)))) 
                         | (2U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                           [3U][0U] 
                                           >> 1U)))) 
                        | (6U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [3U][0U] 
                                          >> 1U)))) 
                       | (7U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                         [3U][0U] >> 1U)))) 
                      & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs)))) 
               & (0xbU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                   [3U][0U] >> 1U)))) 
              << 3U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xefU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
                  & (3U == vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                     [0U][4U])) & ((5U != (0xfU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][0U] 
                                                   >> 1U))) 
                                   | (~ (IData)(vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_doNotIssueDiv)))) 
                & (~ ((((((0U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [4U][0U] 
                                          >> 1U))) 
                          | (1U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                            [4U][0U] 
                                            >> 1U)))) 
                         | (2U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                           [4U][0U] 
                                           >> 1U)))) 
                        | (6U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [4U][0U] 
                                          >> 1U)))) 
                       | (7U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                         [4U][0U] >> 1U)))) 
                      & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs)))) 
               & (0xbU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                   [4U][0U] >> 1U)))) 
              << 4U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xdfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
                  & (3U == vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                     [0U][5U])) & ((5U != (0xfU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][0U] 
                                                   >> 1U))) 
                                   | (~ (IData)(vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_doNotIssueDiv)))) 
                & (~ ((((((0U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [5U][0U] 
                                          >> 1U))) 
                          | (1U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                            [5U][0U] 
                                            >> 1U)))) 
                         | (2U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                           [5U][0U] 
                                           >> 1U)))) 
                        | (6U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [5U][0U] 
                                          >> 1U)))) 
                       | (7U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                         [5U][0U] >> 1U)))) 
                      & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs)))) 
               & (0xbU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                   [5U][0U] >> 1U)))) 
              << 5U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xbfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
                  & (3U == vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                     [0U][6U])) & ((5U != (0xfU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][0U] 
                                                   >> 1U))) 
                                   | (~ (IData)(vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_doNotIssueDiv)))) 
                & (~ ((((((0U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [6U][0U] 
                                          >> 1U))) 
                          | (1U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                            [6U][0U] 
                                            >> 1U)))) 
                         | (2U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                           [6U][0U] 
                                           >> 1U)))) 
                        | (6U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [6U][0U] 
                                          >> 1U)))) 
                       | (7U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                         [6U][0U] >> 1U)))) 
                      & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs)))) 
               & (0xbU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                   [6U][0U] >> 1U)))) 
              << 6U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0x7fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
                  & (3U == vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                     [0U][7U])) & ((5U != (0xfU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][0U] 
                                                   >> 1U))) 
                                   | (~ (IData)(vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_doNotIssueDiv)))) 
                & (~ ((((((0U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [7U][0U] 
                                          >> 1U))) 
                          | (1U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                            [7U][0U] 
                                            >> 1U)))) 
                         | (2U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                           [7U][0U] 
                                           >> 1U)))) 
                        | (6U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [7U][0U] 
                                          >> 1U)))) 
                       | (7U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                         [7U][0U] >> 1U)))) 
                      & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs)))) 
               & (0xbU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                   [7U][0U] >> 1U)))) 
              << 7U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfeU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex)) 
                  & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                  [0U][0U]) & (~ ((((((0U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                 [0U][0U] 
                                                 >> 1U))) 
                                      | (1U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [0U][0U] 
                                                   >> 1U)))) 
                                     | (2U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [0U][0U] 
                                                  >> 1U)))) 
                                    | (6U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                 [0U][0U] 
                                                 >> 1U)))) 
                                   | (7U == (0xfU & 
                                             (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                              [0U][0U] 
                                              >> 1U)))) 
                                  & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs)))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                     [0U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [0U][0U] >> 1U)))) 
                    | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [0U][1U] << 5U) 
                                        | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                           [0U][0U] 
                                           >> 0x1bU)))) 
                       & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                             [0U][1U] 
                                             << 5U) 
                                            | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                               [0U][0U] 
                                               >> 0x1bU)))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                             [0U][0U] 
                                                             << 0x1bU) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                               [0U][0U] 
                                                               >> 5U)) 
                                                           - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
               & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                    [0U][0U] >> 1U))) 
                    & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [0U][0U] >> 1U)))) 
                   | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [0U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [0U][0U] >> 0x1bU))))) 
                  | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                      (0x7fU 
                                                       & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                            [0U][0U] 
                                                            << 0x14U) 
                                                           | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                              [0U][0U] 
                                                              >> 0xcU)) 
                                                          - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
              & (((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                  [0U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [0U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [0U][0U] >> 0x1bU))))) 
                 | ((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                              [0U][1U] >> 8U)) == (IData)(vlSelfRef.ROB_curSqN)))));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfdU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                   [0U][1U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [1U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                    [1U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [1U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [1U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                 [1U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [1U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [1U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [1U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [1U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                              [1U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                [1U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                              [1U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                                [1U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                     [1U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [1U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                       [1U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [1U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                             [1U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                               [1U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                  [1U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [1U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [1U][0U] >> 0x1bU)))))) 
              << 1U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfbU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                   [0U][2U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [2U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                    [2U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [2U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [2U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                 [2U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [2U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [2U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [2U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [2U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                              [2U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                [2U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                              [2U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                                [2U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                     [2U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [2U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                       [2U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [2U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                             [2U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                               [2U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                  [2U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [2U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [2U][0U] >> 0x1bU)))))) 
              << 2U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xf7U & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                   [0U][3U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [3U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                    [3U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [3U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [3U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                 [3U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [3U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [3U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [3U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [3U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                              [3U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                [3U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                              [3U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                                [3U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                     [3U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [3U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                       [3U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [3U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                             [3U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                               [3U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                  [3U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [3U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [3U][0U] >> 0x1bU)))))) 
              << 3U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xefU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                   [0U][4U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [4U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                    [4U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [4U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [4U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                 [4U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [4U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [4U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [4U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [4U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                              [4U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                [4U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                              [4U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                                [4U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                     [4U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [4U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                       [4U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [4U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                             [4U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                               [4U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                  [4U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [4U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [4U][0U] >> 0x1bU)))))) 
              << 4U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xdfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                   [0U][5U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [5U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                    [5U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [5U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [5U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                 [5U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [5U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [5U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [5U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [5U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                              [5U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                [5U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                              [5U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                                [5U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                     [5U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [5U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                       [5U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [5U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                             [5U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                               [5U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                  [5U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [5U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [5U][0U] >> 0x1bU)))))) 
              << 5U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xbfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                   [0U][6U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [6U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                    [6U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [6U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [6U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                 [6U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [6U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [6U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [6U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [6U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                              [6U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                [6U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                              [6U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                                [6U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                     [6U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [6U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                       [6U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [6U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                             [6U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                               [6U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                  [6U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [6U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [6U][0U] >> 0x1bU)))))) 
              << 6U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0x7fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                   [0U][7U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [7U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                    [7U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [7U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [7U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                 [7U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [7U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [7U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [7U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [7U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                              [7U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                [7U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                              [7U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                                [7U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                     [7U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [7U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                       [7U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [7U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                             [7U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                               [7U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                  [7U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [7U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [7U][0U] >> 0x1bU)))))) 
              << 7U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfeU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex)) 
                  & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                  [0U][0U]) & (~ ((((((0U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                 [0U][0U] 
                                                 >> 1U))) 
                                      | (1U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [0U][0U] 
                                                   >> 1U)))) 
                                     | (2U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [0U][0U] 
                                                  >> 1U)))) 
                                    | (6U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                 [0U][0U] 
                                                 >> 1U)))) 
                                   | (7U == (0xfU & 
                                             (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                              [0U][0U] 
                                              >> 1U)))) 
                                  & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs)))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                     [0U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [0U][0U] >> 1U)))) 
                    | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [0U][1U] << 5U) 
                                        | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                           [0U][0U] 
                                           >> 0x1bU)))) 
                       & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                             [0U][1U] 
                                             << 5U) 
                                            | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                               [0U][0U] 
                                               >> 0x1bU)))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                             [0U][0U] 
                                                             << 0x1bU) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                               [0U][0U] 
                                                               >> 5U)) 
                                                           - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
               & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                    [0U][0U] >> 1U))) 
                    & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [0U][0U] >> 1U)))) 
                   | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [0U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [0U][0U] >> 0x1bU))))) 
                  | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                      (0x7fU 
                                                       & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                            [0U][0U] 
                                                            << 0x14U) 
                                                           | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                              [0U][0U] 
                                                              >> 0xcU)) 
                                                          - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
              & (((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                  [0U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [0U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [0U][0U] >> 0x1bU))))) 
                 | ((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                              [0U][1U] >> 8U)) == (IData)(vlSelfRef.ROB_curSqN)))));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfdU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                   [0U][1U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [1U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                    [1U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [1U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [1U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                 [1U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [1U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [1U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [1U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [1U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                              [1U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                [1U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                              [1U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                                [1U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                     [1U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [1U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                       [1U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [1U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                             [1U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                               [1U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                  [1U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [1U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [1U][0U] >> 0x1bU)))))) 
              << 1U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfbU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                   [0U][2U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [2U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                    [2U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [2U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [2U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                 [2U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [2U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [2U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [2U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [2U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                              [2U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                [2U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                              [2U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                                [2U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                     [2U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [2U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                       [2U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [2U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                             [2U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                               [2U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                  [2U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [2U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [2U][0U] >> 0x1bU)))))) 
              << 2U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xf7U & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                   [0U][3U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [3U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                    [3U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [3U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [3U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                 [3U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [3U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [3U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [3U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [3U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                              [3U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                [3U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                              [3U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                                [3U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                     [3U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [3U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                       [3U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [3U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                             [3U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                               [3U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                  [3U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [3U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [3U][0U] >> 0x1bU)))))) 
              << 3U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xefU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                   [0U][4U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [4U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                    [4U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [4U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [4U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                 [4U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [4U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [4U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [4U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [4U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                              [4U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                [4U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                              [4U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                                [4U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                     [4U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [4U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                       [4U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [4U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                             [4U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                               [4U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                  [4U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [4U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [4U][0U] >> 0x1bU)))))) 
              << 4U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xdfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                   [0U][5U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [5U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                    [5U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [5U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [5U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                 [5U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [5U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [5U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [5U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [5U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                              [5U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                [5U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                              [5U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                                [5U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                     [5U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [5U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                       [5U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [5U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                             [5U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                               [5U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                  [5U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [5U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [5U][0U] >> 0x1bU)))))) 
              << 5U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xbfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                   [0U][6U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [6U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                    [6U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [6U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [6U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                 [6U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [6U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [6U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [6U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [6U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                              [6U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                [6U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                              [6U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                                [6U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                     [6U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [6U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                       [6U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [6U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                             [6U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                               [6U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                  [6U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [6U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [6U][0U] >> 0x1bU)))))) 
              << 6U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0x7fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                   [0U][7U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [7U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                    [7U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [7U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [7U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                 [7U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [7U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [7U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [7U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [7U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                              [7U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                [7U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                              [7U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                                [7U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                     [7U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [7U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                       [7U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [7U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                             [7U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                               [7U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                  [7U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [7U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [7U][0U] >> 0x1bU)))))) 
              << 7U));
    vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 3U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 5U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 7U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 3U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 5U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 7U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 3U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 5U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 7U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 3U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 5U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 7U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 3U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 5U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 7U)));
    vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [6U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [6U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [6U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [6U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [6U];
    __PVT__cacheLineManager__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    cacheLineManager__DOT__penc__DOT____Vlvbound_h284d0bd7__0 
        = (3U & ((IData)(__PVT__cacheLineManager__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.cacheLineManager__DOT____Vcellout__penc____pinNumber2[0U] 
        = cacheLineManager__DOT__penc__DOT____Vlvbound_h284d0bd7__0;
    cacheLineManager__DOT__penc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__cacheLineManager__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    cacheLineManager__DOT____Vcellout__penc____pinNumber3[0U] 
        = cacheLineManager__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [4U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [6U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [4U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [6U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [4U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [6U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [4U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [6U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [4U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [6U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [2U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [2U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [2U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [2U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [2U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((8U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                  [0U] << 3U)) | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((8U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                  [0U] << 3U)) | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((8U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                  [0U] << 3U)) | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((8U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                  [0U] << 3U)) | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((8U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                  [0U] << 3U)) | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                   [0U]))]);
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
        [0U];
    genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 
        = (7U & ((IData)(__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2[0U] 
        = genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3[0U] 
        = genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
        [0U];
    genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 
        = (7U & ((IData)(__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2[0U] 
        = genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3[0U] 
        = genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
        [0U];
    genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 
        = (7U & ((IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2[0U] 
        = genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3[0U] 
        = genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
        [0U];
    genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 
        = (7U & ((IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2[0U] 
        = genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3[0U] 
        = genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
        [0U];
    genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 
        = (7U & ((IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2[0U] 
        = genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3[0U] 
        = genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq 
        = ((vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2
            [0U] << 1U) | vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq 
        = ((vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2
            [0U] << 1U) | vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq 
        = ((vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2
            [0U] << 1U) | vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq 
        = ((vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2
            [0U] << 1U) | vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq 
        = ((vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2
            [0U] << 1U) | vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xfcU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((1U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 1U) | (0U 
                                                >= 
                                                (7U 
                                                 & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                                                    >> 1U)))));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xf3U & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((3U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 3U) | ((2U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 2U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xcfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((5U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 5U) | ((4U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 4U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c 
        = ((0x3fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c)) 
           | (0x80U | ((6U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                                     >> 1U))) << 6U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xfcU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((1U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 1U) | (0U 
                                                >= 
                                                (7U 
                                                 & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                                                    >> 1U)))));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xf3U & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((3U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 3U) | ((2U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 2U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xcfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((5U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 5U) | ((4U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 4U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c 
        = ((0x3fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c)) 
           | (0x80U | ((6U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                                     >> 1U))) << 6U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xfcU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((1U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 1U) | (0U 
                                                >= 
                                                (7U 
                                                 & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                                                    >> 1U)))));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xf3U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((3U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 3U) | ((2U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 2U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xcfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((5U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 5U) | ((4U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 4U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c 
        = ((0x3fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c)) 
           | (0x80U | ((6U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                                     >> 1U))) << 6U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xfcU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((1U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 1U) | (0U 
                                                >= 
                                                (7U 
                                                 & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                                                    >> 1U)))));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xf3U & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((3U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 3U) | ((2U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 2U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xcfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((5U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 5U) | ((4U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 4U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c 
        = ((0x3fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c)) 
           | (0x80U | ((6U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                                     >> 1U))) << 6U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xfcU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((1U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 1U) | (0U 
                                                >= 
                                                (7U 
                                                 & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                                                    >> 1U)))));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xf3U & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((3U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 3U) | ((2U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 2U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xcfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((5U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 5U) | ((4U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 4U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c 
        = ((0x3fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c)) 
           | (0x80U | ((6U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                                     >> 1U))) << 6U)));
}

VL_INLINE_OPT void VTop_Core___ico_sequent__TOP__Top__soc__core__7(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___ico_sequent__TOP__Top__soc__core__7\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lsu__DOT__uopLd[0U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__uopLd[0U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__uopLd[0U][2U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__uopLd[0U][3U] = 0U;
    if ((1U & (vlSelfRef.__PVT__lsu__DOT__selLd[0U][0U] 
               & ((~ (IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__busy)) 
                  | (vlSelfRef.__PVT__lsu__DOT__selLd
                     [0U][0U] >> 1U))))) {
        vlSelfRef.__PVT__lsu__DOT__uopLd[0U][0U] = 
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][0U];
        vlSelfRef.__PVT__lsu__DOT__uopLd[0U][1U] = 
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][1U];
        vlSelfRef.__PVT__lsu__DOT__uopLd[0U][2U] = 
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][2U];
        vlSelfRef.__PVT__lsu__DOT__uopLd[0U][3U] = 
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][3U];
    }
    vlSelfRef.__PVT__lsu__DOT__uopLd[1U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__uopLd[1U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__uopLd[1U][2U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__uopLd[1U][3U] = 0U;
    vlSelfRef.__PVT__LSU_AGUStall[0U] = 1U;
    vlSelfRef.__PVT__LSU_AGUStall[1U] = 1U;
    if ((1U & (vlSelfRef.__PVT__lsu__DOT__selLd[0U][0U] 
               & ((~ (IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__busy)) 
                  | (vlSelfRef.__PVT__lsu__DOT__selLd
                     [0U][0U] >> 1U))))) {
        if ((1U & (~ vlSelfRef.__PVT__lsu__DOT__selLdSrc_c
                   [0U]))) {
            vlSelfRef.__PVT__LSU_AGUStall[(1U & (IData)(vlSelfRef.__PVT__lsu__DOT__idxs_c))] = 0U;
        }
        vlSelfRef.__PVT__CC_loadStall[0U] = 1U;
        vlSelfRef.__PVT__CC_loadStall[1U] = 1U;
        if (vlSelfRef.__PVT__lsu__DOT__selLdSrc_c[0U]) {
            if (vlSelfRef.__PVT__lsu__DOT__selLdSrc_c
                [0U]) {
                vlSelfRef.__PVT__CC_loadStall[(1U & (IData)(vlSelfRef.__PVT__lsu__DOT__idxs_c))] = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__CC_loadStall[0U] = 1U;
        vlSelfRef.__PVT__CC_loadStall[1U] = 1U;
    }
    if ((1U & (vlSelfRef.__PVT__lsu__DOT__selLd[1U][0U] 
               & ((~ ((IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__busy) 
                      >> 1U)) | (vlSelfRef.__PVT__lsu__DOT__selLd
                                 [1U][0U] >> 1U))))) {
        vlSelfRef.__PVT__lsu__DOT__uopLd[1U][0U] = 
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][0U];
        vlSelfRef.__PVT__lsu__DOT__uopLd[1U][1U] = 
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][1U];
        vlSelfRef.__PVT__lsu__DOT__uopLd[1U][2U] = 
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][2U];
        vlSelfRef.__PVT__lsu__DOT__uopLd[1U][3U] = 
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][3U];
        if ((1U & (~ vlSelfRef.__PVT__lsu__DOT__selLdSrc_c
                   [1U]))) {
            vlSelfRef.__PVT__LSU_AGUStall[(1U & ((IData)(vlSelfRef.__PVT__lsu__DOT__idxs_c) 
                                                 >> 1U))] = 0U;
        }
        if (vlSelfRef.__PVT__lsu__DOT__selLdSrc_c[1U]) {
            if (vlSelfRef.__PVT__lsu__DOT__selLdSrc_c
                [1U]) {
                vlSelfRef.__PVT__CC_loadStall[(1U & 
                                               ((IData)(vlSelfRef.__PVT__lsu__DOT__idxs_c) 
                                                >> 1U))] = 0U;
            }
        }
    }
    vlSelfRef.__PVT__CC_PW_LD_stall[0U] = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__PW_LD_uop[0U]))) {
        vlSelfRef.__PVT__CC_PW_LD_stall[0U] = vlSelfRef.__PVT__CC_loadStall
            [0U];
    }
    vlSelfRef.__PVT__CC_PW_LD_stall[1U] = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__PW_LD_uop[1U]))) {
        vlSelfRef.__PVT__CC_PW_LD_stall[1U] = vlSelfRef.__PVT__CC_loadStall
            [1U];
    }
    vlSelfRef.__PVT__LS_AGULD_uopStall[0U] = 0U;
    if ((1U & vlSelfRef.__PVT__LB_uopLd[0U][0U])) {
        vlSelfRef.__PVT__LS_AGULD_uopStall[0U] = (1U 
                                                  & ((IData)(
                                                             vlSelfRef.__PVT__PW_LD_uop
                                                             [0U]) 
                                                     | vlSelfRef.__PVT__CC_loadStall
                                                     [0U]));
    }
    vlSelfRef.__PVT__LS_AGULD_uopStall[1U] = 0U;
    if ((1U & vlSelfRef.__PVT__LB_uopLd[1U][0U])) {
        vlSelfRef.__PVT__LS_AGULD_uopStall[1U] = (1U 
                                                  & ((IData)(
                                                             vlSelfRef.__PVT__PW_LD_uop
                                                             [1U]) 
                                                     | vlSelfRef.__PVT__CC_loadStall
                                                     [1U]));
    }
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__0(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex;
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex = 0;
    CData/*1:0*/ genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 = 0;
    CData/*1:0*/ genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 = 0;
    CData/*1:0*/ genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v0;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v0 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v1;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v1 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v2;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v2 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v3;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v3 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v4;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v4 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v5;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v5 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v6;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v6 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v7;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v7 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v8;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v8 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v9;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v9 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v10;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v10 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v11;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v11 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v12;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v12 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v13;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v13 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v14;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v14 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v15;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v15 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v16;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v16 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v17;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v17 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v18;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v18 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v19;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v19 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v20;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v20 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v21;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v21 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v22;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v22 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v23;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v23 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v24;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v24 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v25;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v25 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v26;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v26 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v27;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v27 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v28;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v28 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v29;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v29 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v30;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v30 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v31;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v31 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v32;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v32 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v33;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v33 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v34;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v34 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v35;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v35 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v36;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v36 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v37;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v37 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v38;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v38 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v39;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v39 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v0;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v0 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v1;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v1 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v2;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v2 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v3;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v3 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v4;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v4 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v5;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v5 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v6;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v6 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v7;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v7 = 0;
    CData/*0:0*/ __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v8;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v8 = 0;
    VlWide<4>/*99:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v16;
    VL_ZERO_W(100, __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v16);
    CData/*0:0*/ __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v16;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v16 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v17;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v17 = 0;
    VlWide<4>/*99:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v18;
    VL_ZERO_W(100, __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v18);
    CData/*0:0*/ __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v18;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v18 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v19;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v19 = 0;
    VlWide<4>/*99:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v20;
    VL_ZERO_W(100, __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v20);
    CData/*0:0*/ __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v20;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v20 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v21;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v21 = 0;
    VlWide<4>/*99:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v22;
    VL_ZERO_W(100, __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v22);
    CData/*0:0*/ __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v22;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v22 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v23;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v23 = 0;
    VlWide<4>/*99:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v24;
    VL_ZERO_W(100, __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v24);
    CData/*0:0*/ __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v24;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v24 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v25;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v25 = 0;
    VlWide<4>/*99:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v26;
    VL_ZERO_W(100, __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v26);
    CData/*0:0*/ __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v26;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v26 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v27;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v27 = 0;
    VlWide<4>/*99:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v28;
    VL_ZERO_W(100, __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v28);
    CData/*0:0*/ __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v28;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v28 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v29;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v29 = 0;
    VlWide<4>/*99:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30;
    VL_ZERO_W(100, __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30);
    CData/*2:0*/ __VdlyDim0__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30;
    __VdlyDim0__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30 = 0;
    CData/*0:0*/ __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30 = 0;
    VlWide<4>/*99:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31;
    VL_ZERO_W(100, __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31);
    CData/*2:0*/ __VdlyDim0__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31;
    __VdlyDim0__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31 = 0;
    CData/*0:0*/ __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v0;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v0 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v1;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v1 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v2;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v2 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v3;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v3 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v4;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v4 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v5;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v5 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v6;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v6 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v7;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v7 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v8;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v8 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v9;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v9 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v10;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v10 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v11;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v11 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v12;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v12 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v13;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v13 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v14;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v14 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v15;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v15 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v16;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v16 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v17;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v17 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v18;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v18 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v19;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v19 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v20;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v20 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v21;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v21 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v22;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v22 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v23;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v23 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v24;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v24 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v25;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v25 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v26;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v26 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v27;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v27 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v28;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v28 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v29;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v29 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v30;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v30 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v31;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v31 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v32;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v32 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v33;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v33 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v34;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v34 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v35;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v35 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v36;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v36 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v37;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v37 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v38;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v38 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v39;
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v39 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v0;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v0 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v1;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v1 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v2;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v2 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v3;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v3 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v4;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v4 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v5;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v5 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v6;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v6 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v7;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v7 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v8;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v8 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v9;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v9 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v10;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v10 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v11;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v11 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v12;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v12 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v13;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v13 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v14;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v14 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v15;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v15 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v16;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v16 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v17;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v17 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v18;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v18 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v19;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v19 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v20;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v20 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v21;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v21 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v22;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v22 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v23;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v23 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v24;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v24 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v25;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v25 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v26;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v26 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v27;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v27 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v28;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v28 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v29;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v29 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v30;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v30 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v31;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v31 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v32;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v32 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v33;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v33 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v34;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v34 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v35;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v35 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v36;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v36 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v37;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v37 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v38;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v38 = 0;
    CData/*1:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v39;
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v39 = 0;
    // Body
    vlSelfRef.__Vdly__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v8 = 0U;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v16 = 0U;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v18 = 0U;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v20 = 0U;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v22 = 0U;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v24 = 0U;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v26 = 0U;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v28 = 0U;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30 = 0U;
    __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31 = 0U;
    vlSelfRef.__Vdly__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c)) 
                        & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 2U) : vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                 [0U]));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v0 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 1U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 4U) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                    [0U] >> 2U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v1 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 2U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 6U) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                    [0U] >> 4U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v2 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 3U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 8U) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                    [0U] >> 6U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v3 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 4U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 0xaU) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                      [0U] >> 8U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v4 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 5U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 0xcU) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                      [0U] >> 0xaU)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v5 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 6U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 0xeU) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                      [0U] >> 0xcU)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v6 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = ((((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
             & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                >> 7U)) & (~ vlSelfRef.branch[0U]))
            ? 0U : (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                          [0U] >> 0xeU)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v7 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c)) 
                        & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 2U) : vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                 [1U]));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v8 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 1U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 4U) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                    [1U] >> 2U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v9 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 2U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 6U) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                    [1U] >> 4U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v10 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 3U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 8U) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                    [1U] >> 6U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v11 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 4U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 0xaU) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                      [1U] >> 8U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v12 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 5U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 0xcU) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                      [1U] >> 0xaU)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v13 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 6U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 0xeU) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                      [1U] >> 0xcU)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v14 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = ((((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
             & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                >> 7U)) & (~ vlSelfRef.branch[0U]))
            ? 0U : (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                          [1U] >> 0xeU)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v15 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c)) 
                        & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 2U) : vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                 [2U]));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v16 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 1U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 4U) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                    [2U] >> 2U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v17 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 2U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 6U) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                    [2U] >> 4U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v18 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 3U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 8U) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                    [2U] >> 6U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v19 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 4U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 0xaU) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                      [2U] >> 8U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v20 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 5U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 0xcU) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                      [2U] >> 0xaU)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v21 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 6U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 0xeU) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                      [2U] >> 0xcU)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v22 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = ((((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
             & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                >> 7U)) & (~ vlSelfRef.branch[0U]))
            ? 0U : (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                          [2U] >> 0xeU)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v23 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c)) 
                        & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 2U) : vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                 [3U]));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v24 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 1U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 4U) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                    [3U] >> 2U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v25 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 2U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 6U) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                    [3U] >> 4U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v26 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 3U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 8U) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                    [3U] >> 6U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v27 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 4U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 0xaU) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                      [3U] >> 8U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v28 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 5U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 0xcU) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                      [3U] >> 0xaU)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v29 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 6U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 0xeU) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                      [3U] >> 0xcU)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v30 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = ((((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
             & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                >> 7U)) & (~ vlSelfRef.branch[0U]))
            ? 0U : (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                          [3U] >> 0xeU)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v31 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c)) 
                        & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 2U) : vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                 [4U]));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v32 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 1U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 4U) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                    [4U] >> 2U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v33 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 2U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 6U) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                    [4U] >> 4U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v34 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 3U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 8U) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                    [4U] >> 6U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v35 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 4U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 0xaU) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                      [4U] >> 8U)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v36 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 5U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 0xcU) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                      [4U] >> 0xaU)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v37 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 6U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 0xeU) : (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                      [4U] >> 0xcU)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v38 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = ((((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
             & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c) 
                >> 7U)) & (~ vlSelfRef.branch[0U]))
            ? 0U : (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                          [4U] >> 0xeU)));
    __VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v39 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c)) 
                        & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 2U) : vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                 [0U]));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v0 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 1U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 4U) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                    [0U] >> 2U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v1 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 2U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 6U) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                    [0U] >> 4U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v2 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 3U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 8U) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                    [0U] >> 6U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v3 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 4U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 0xaU) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                      [0U] >> 8U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v4 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 5U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 0xcU) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                      [0U] >> 0xaU)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v5 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 6U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 0xeU) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                      [0U] >> 0xcU)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v6 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = ((((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
             & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                >> 7U)) & (~ vlSelfRef.branch[0U]))
            ? 0U : (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                          [0U] >> 0xeU)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v7 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c)) 
                        & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 2U) : vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                 [1U]));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v8 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 1U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 4U) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                    [1U] >> 2U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v9 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 2U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 6U) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                    [1U] >> 4U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v10 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 3U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 8U) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                    [1U] >> 6U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v11 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 4U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 0xaU) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                      [1U] >> 8U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v12 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 5U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 0xcU) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                      [1U] >> 0xaU)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v13 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 6U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 0xeU) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                      [1U] >> 0xcU)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v14 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = ((((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
             & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                >> 7U)) & (~ vlSelfRef.branch[0U]))
            ? 0U : (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                          [1U] >> 0xeU)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v15 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c)) 
                        & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 2U) : vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                 [2U]));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v16 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 1U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 4U) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                    [2U] >> 2U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v17 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 2U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 6U) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                    [2U] >> 4U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v18 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 3U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 8U) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                    [2U] >> 6U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v19 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 4U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 0xaU) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                      [2U] >> 8U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v20 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 5U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 0xcU) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                      [2U] >> 0xaU)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v21 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 6U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 0xeU) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                      [2U] >> 0xcU)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v22 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = ((((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
             & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                >> 7U)) & (~ vlSelfRef.branch[0U]))
            ? 0U : (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                          [2U] >> 0xeU)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v23 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c)) 
                        & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 2U) : vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                 [3U]));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v24 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 1U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 4U) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                    [3U] >> 2U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v25 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 2U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 6U) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                    [3U] >> 4U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v26 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 3U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 8U) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                    [3U] >> 6U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v27 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 4U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 0xaU) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                      [3U] >> 8U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v28 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 5U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 0xcU) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                      [3U] >> 0xaU)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v29 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 6U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 0xeU) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                      [3U] >> 0xcU)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v30 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = ((((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
             & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                >> 7U)) & (~ vlSelfRef.branch[0U]))
            ? 0U : (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                          [3U] >> 0xeU)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v31 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c)) 
                        & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 2U) : vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                 [4U]));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v32 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 1U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 4U) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                    [4U] >> 2U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v33 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 2U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 6U) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                    [4U] >> 4U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v34 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 3U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 8U) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                    [4U] >> 6U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v35 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 4U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 0xaU) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                      [4U] >> 8U)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v36 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 5U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 0xcU) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                      [4U] >> 0xaU)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v37 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 6U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 0xeU) : (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                      [4U] >> 0xcU)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v38 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = ((((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
             & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c) 
                >> 7U)) & (~ vlSelfRef.branch[0U]))
            ? 0U : (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                          [4U] >> 0xeU)));
    __VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v39 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c)) 
                        & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 2U) : vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                 [0U]));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v0 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 1U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 4U) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                    [0U] >> 2U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v1 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 2U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 6U) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                    [0U] >> 4U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v2 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 3U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 8U) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                    [0U] >> 6U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v3 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 4U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 0xaU) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                      [0U] >> 8U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v4 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 5U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 0xcU) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                      [0U] >> 0xaU)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v5 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 6U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 0xeU) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                      [0U] >> 0xcU)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v6 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = ((((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
             & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                >> 7U)) & (~ vlSelfRef.branch[0U]))
            ? 0U : (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                          [0U] >> 0xeU)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v7 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c)) 
                        & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 2U) : vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                 [1U]));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v8 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 1U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 4U) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                    [1U] >> 2U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v9 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 2U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 6U) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                    [1U] >> 4U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v10 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 3U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 8U) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                    [1U] >> 6U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v11 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 4U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 0xaU) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                      [1U] >> 8U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v12 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 5U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 0xcU) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                      [1U] >> 0xaU)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v13 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 6U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 0xeU) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                      [1U] >> 0xcU)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v14 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = ((((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
             & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                >> 7U)) & (~ vlSelfRef.branch[0U]))
            ? 0U : (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                          [1U] >> 0xeU)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v15 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c)) 
                        & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 2U) : vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                 [2U]));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v16 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 1U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 4U) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                    [2U] >> 2U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v17 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 2U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 6U) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                    [2U] >> 4U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v18 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 3U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 8U) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                    [2U] >> 6U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v19 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 4U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 0xaU) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                      [2U] >> 8U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v20 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 5U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 0xcU) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                      [2U] >> 0xaU)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v21 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 6U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 0xeU) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                      [2U] >> 0xcU)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v22 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = ((((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
             & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                >> 7U)) & (~ vlSelfRef.branch[0U]))
            ? 0U : (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                          [2U] >> 0xeU)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v23 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c)) 
                        & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 2U) : vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                 [3U]));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v24 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 1U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 4U) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                    [3U] >> 2U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v25 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 2U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 6U) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                    [3U] >> 4U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v26 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 3U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 8U) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                    [3U] >> 6U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v27 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 4U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 0xaU) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                      [3U] >> 8U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v28 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 5U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 0xcU) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                      [3U] >> 0xaU)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v29 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 6U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 0xeU) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                      [3U] >> 0xcU)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v30 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = ((((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
             & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                >> 7U)) & (~ vlSelfRef.branch[0U]))
            ? 0U : (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                          [3U] >> 0xeU)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v31 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c)) 
                        & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 2U) : vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                 [4U]));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v32 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 1U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 4U) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                    [4U] >> 2U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v33 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 2U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 6U) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                    [4U] >> 4U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v34 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 3U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 8U) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                    [4U] >> 6U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v35 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 4U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 0xaU) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                      [4U] >> 8U)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v36 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 5U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 0xcU) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                      [4U] >> 0xaU)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v37 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = (3U & ((1U & (((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                         & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                            >> 6U)) & (~ vlSelfRef.branch[0U])))
                  ? (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 0xeU) : (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                      [4U] >> 0xcU)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v38 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0 
        = ((((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
             & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c) 
                >> 7U)) & (~ vlSelfRef.branch[0U]))
            ? 0U : (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                          [4U] >> 0xeU)));
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v39 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_h01d59f65__0;
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex = 0U;
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v0 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
        [1U][0U];
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v1 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
        [1U][1U];
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v2 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
        [1U][2U];
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v3 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
        [1U][3U];
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v4 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
        [1U][4U];
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v5 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
        [1U][5U];
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v6 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
        [1U][6U];
    __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v7 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
        [1U][7U];
    vlSelfRef.__Vdly__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs 
        = (QData)((IData)((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs 
                           >> 1U)));
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex = 0U;
        vlSelfRef.__Vdly__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs = 0ULL;
        vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[0U] = 0U;
        vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[1U] = 0U;
        vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[2U] = 0U;
        vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[3U] = 0U;
        __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v8 = 1U;
    } else if ((1U & vlSelfRef.branch[0U])) {
        __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex = 0U;
        if (((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
             & ((0x40U & vlSelfRef.branch[0U]) ? VL_GTS_III(32, 0U, 
                                                            VL_EXTENDS_II(32,7, 
                                                                          (0x7fU 
                                                                           & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                                                [0U][1U] 
                                                                                << 0x18U) 
                                                                               | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                                                [0U][1U] 
                                                                                >> 8U)) 
                                                                              - 
                                                                              ((vlSelfRef.branch[0U] 
                                                                                << 0xbU) 
                                                                               | (vlSelfRef.branch[0U] 
                                                                                >> 0x15U))))))
                 : VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                     (0x7fU 
                                                      & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                           [0U][1U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                             [0U][1U] 
                                                             >> 8U)) 
                                                         - 
                                                         ((vlSelfRef.branch[0U] 
                                                           << 0xbU) 
                                                          | (vlSelfRef.branch[0U] 
                                                             >> 0x15U))))))))) {
            __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex = 1U;
        }
        vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[0U] = 0U;
        vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[1U] = 0U;
        vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[2U] = 0U;
        vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[3U] = 0U;
        if (((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
             & ((0x40U & vlSelfRef.branch[0U]) ? VL_GTS_III(32, 0U, 
                                                            VL_EXTENDS_II(32,7, 
                                                                          (0x7fU 
                                                                           & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                                                [1U][1U] 
                                                                                << 0x18U) 
                                                                               | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                                                [1U][1U] 
                                                                                >> 8U)) 
                                                                              - 
                                                                              ((vlSelfRef.branch[0U] 
                                                                                << 0xbU) 
                                                                               | (vlSelfRef.branch[0U] 
                                                                                >> 0x15U))))))
                 : VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                     (0x7fU 
                                                      & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                           [1U][1U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                             [1U][1U] 
                                                             >> 8U)) 
                                                         - 
                                                         ((vlSelfRef.branch[0U] 
                                                           << 0xbU) 
                                                          | (vlSelfRef.branch[0U] 
                                                             >> 0x15U))))))))) {
            __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex = 2U;
        }
        vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[0U] 
            = (0xfffffffeU & vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[0U]);
        if (((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
             & ((0x40U & vlSelfRef.branch[0U]) ? VL_GTS_III(32, 0U, 
                                                            VL_EXTENDS_II(32,7, 
                                                                          (0x7fU 
                                                                           & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                                                [2U][1U] 
                                                                                << 0x18U) 
                                                                               | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                                                [2U][1U] 
                                                                                >> 8U)) 
                                                                              - 
                                                                              ((vlSelfRef.branch[0U] 
                                                                                << 0xbU) 
                                                                               | (vlSelfRef.branch[0U] 
                                                                                >> 0x15U))))))
                 : VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                     (0x7fU 
                                                      & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                           [2U][1U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                             [2U][1U] 
                                                             >> 8U)) 
                                                         - 
                                                         ((vlSelfRef.branch[0U] 
                                                           << 0xbU) 
                                                          | (vlSelfRef.branch[0U] 
                                                             >> 0x15U))))))))) {
            __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex = 3U;
        }
        if (((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
             & ((0x40U & vlSelfRef.branch[0U]) ? VL_GTS_III(32, 0U, 
                                                            VL_EXTENDS_II(32,7, 
                                                                          (0x7fU 
                                                                           & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                                                [3U][1U] 
                                                                                << 0x18U) 
                                                                               | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                                                [3U][1U] 
                                                                                >> 8U)) 
                                                                              - 
                                                                              ((vlSelfRef.branch[0U] 
                                                                                << 0xbU) 
                                                                               | (vlSelfRef.branch[0U] 
                                                                                >> 0x15U))))))
                 : VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                     (0x7fU 
                                                      & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                           [3U][1U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                             [3U][1U] 
                                                             >> 8U)) 
                                                         - 
                                                         ((vlSelfRef.branch[0U] 
                                                           << 0xbU) 
                                                          | (vlSelfRef.branch[0U] 
                                                             >> 0x15U))))))))) {
            __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex = 4U;
        }
        if (((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
             & ((0x40U & vlSelfRef.branch[0U]) ? VL_GTS_III(32, 0U, 
                                                            VL_EXTENDS_II(32,7, 
                                                                          (0x7fU 
                                                                           & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                                                [4U][1U] 
                                                                                << 0x18U) 
                                                                               | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                                                [4U][1U] 
                                                                                >> 8U)) 
                                                                              - 
                                                                              ((vlSelfRef.branch[0U] 
                                                                                << 0xbU) 
                                                                               | (vlSelfRef.branch[0U] 
                                                                                >> 0x15U))))))
                 : VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                     (0x7fU 
                                                      & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                           [4U][1U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                             [4U][1U] 
                                                             >> 8U)) 
                                                         - 
                                                         ((vlSelfRef.branch[0U] 
                                                           << 0xbU) 
                                                          | (vlSelfRef.branch[0U] 
                                                             >> 0x15U))))))))) {
            __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex = 5U;
        }
        if (((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
             & ((0x40U & vlSelfRef.branch[0U]) ? VL_GTS_III(32, 0U, 
                                                            VL_EXTENDS_II(32,7, 
                                                                          (0x7fU 
                                                                           & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                                                [5U][1U] 
                                                                                << 0x18U) 
                                                                               | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                                                [5U][1U] 
                                                                                >> 8U)) 
                                                                              - 
                                                                              ((vlSelfRef.branch[0U] 
                                                                                << 0xbU) 
                                                                               | (vlSelfRef.branch[0U] 
                                                                                >> 0x15U))))))
                 : VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                     (0x7fU 
                                                      & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                           [5U][1U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                             [5U][1U] 
                                                             >> 8U)) 
                                                         - 
                                                         ((vlSelfRef.branch[0U] 
                                                           << 0xbU) 
                                                          | (vlSelfRef.branch[0U] 
                                                             >> 0x15U))))))))) {
            __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex = 6U;
        }
        if (((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
             & ((0x40U & vlSelfRef.branch[0U]) ? VL_GTS_III(32, 0U, 
                                                            VL_EXTENDS_II(32,7, 
                                                                          (0x7fU 
                                                                           & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                                                [6U][1U] 
                                                                                << 0x18U) 
                                                                               | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                                                [6U][1U] 
                                                                                >> 8U)) 
                                                                              - 
                                                                              ((vlSelfRef.branch[0U] 
                                                                                << 0xbU) 
                                                                               | (vlSelfRef.branch[0U] 
                                                                                >> 0x15U))))))
                 : VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                     (0x7fU 
                                                      & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                           [6U][1U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                             [6U][1U] 
                                                             >> 8U)) 
                                                         - 
                                                         ((vlSelfRef.branch[0U] 
                                                           << 0xbU) 
                                                          | (vlSelfRef.branch[0U] 
                                                             >> 0x15U))))))))) {
            __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex = 7U;
        }
        if (((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
             & ((0x40U & vlSelfRef.branch[0U]) ? VL_GTS_III(32, 0U, 
                                                            VL_EXTENDS_II(32,7, 
                                                                          (0x7fU 
                                                                           & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                                                [7U][1U] 
                                                                                << 0x18U) 
                                                                               | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                                                [7U][1U] 
                                                                                >> 8U)) 
                                                                              - 
                                                                              ((vlSelfRef.branch[0U] 
                                                                                << 0xbU) 
                                                                               | (vlSelfRef.branch[0U] 
                                                                                >> 0x15U))))))
                 : VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                     (0x7fU 
                                                      & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                           [7U][1U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                             [7U][1U] 
                                                             >> 8U)) 
                                                         - 
                                                         ((vlSelfRef.branch[0U] 
                                                           << 0xbU) 
                                                          | (vlSelfRef.branch[0U] 
                                                             >> 0x15U))))))))) {
            __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex = 8U;
        }
        vlSelfRef.__Vdly__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex 
            = __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex;
    } else {
        __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex 
            = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex;
        vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[0U] = 0U;
        vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[1U] = 0U;
        vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[2U] = 0U;
        vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[3U] = 0U;
        vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[0U] 
            = (0xfffffffeU & vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[0U]);
        if ((1U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq))) {
            __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex 
                = (0xfU & ((IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex) 
                           - (IData)(1U)));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[0U] 
                = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                [(7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                        >> 1U))][0U];
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[1U] 
                = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                [(7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                        >> 1U))][1U];
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[2U] 
                = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                [(7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                        >> 1U))][2U];
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[3U] 
                = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                [(7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                        >> 1U))][3U];
            vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[0U] 
                = (1U | vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[0U]);
            vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[2U] 
                = ((0x1fffU & vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[2U]) 
                   | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[2U] 
                      << 0xdU));
            vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[3U] 
                = (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[2U] 
                   >> 0x13U);
            vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[1U] 
                = ((0x1ffffffU & vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[1U]) 
                   | (0xfe000000U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[1U] 
                                     << 9U)));
            vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[0U] 
                = ((1U & vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[0U]) 
                   | ((IData)((((QData)((IData)((0x7fU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[1U] 
                                                    >> 0x17U)))) 
                                << 0x30U) | (0xffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[0U])))))) 
                      << 1U));
            vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[1U] 
                = ((0xff000000U & vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[1U]) 
                   | (((IData)((((QData)((IData)((0x7fU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[1U] 
                                                     >> 0x17U)))) 
                                 << 0x30U) | (0xffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[0U])))))) 
                       >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                               (0x7fU 
                                                                & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[1U] 
                                                                   >> 0x17U)))) 
                                               << 0x30U) 
                                              | (0xffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[0U]))))) 
                                             >> 0x20U)) 
                                    << 1U)));
            vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[2U] 
                = ((0xffffe001U & vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[2U]) 
                   | (0xfffffffeU & ((0x1e00U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[3U] 
                                                 << 9U)) 
                                     | ((0x100U & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[2U] 
                                                   << 8U)) 
                                        | (0xfeU & 
                                           (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[1U] 
                                            >> 0x16U))))));
            if ((5U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[0U] 
                                >> 1U)))) {
                vlSelfRef.__Vdly__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs 
                    = (0x100000000ULL | (QData)((IData)(
                                                        (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs 
                                                         >> 1U))));
            } else if ((4U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry[0U] 
                                       >> 1U)))) {
                vlSelfRef.__Vdly__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs 
                    = (4ULL | (QData)((IData)((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs 
                                               >> 1U))));
            }
            if ((1U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c))) {
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v16[0U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [1U][0U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v16[1U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [1U][1U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v16[2U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [1U][2U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v16[3U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [1U][3U];
                __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v16 = 1U;
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v17 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                    [1U][1U];
            }
            if ((2U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c))) {
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v18[0U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [2U][0U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v18[1U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [2U][1U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v18[2U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [2U][2U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v18[3U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [2U][3U];
                __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v18 = 1U;
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v19 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                    [1U][2U];
            }
            if ((4U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c))) {
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v20[0U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [3U][0U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v20[1U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [3U][1U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v20[2U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [3U][2U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v20[3U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [3U][3U];
                __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v20 = 1U;
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v21 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                    [1U][3U];
            }
            if ((8U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c))) {
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v22[0U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [4U][0U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v22[1U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [4U][1U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v22[2U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [4U][2U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v22[3U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [4U][3U];
                __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v22 = 1U;
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v23 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                    [1U][4U];
            }
            if ((0x10U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c))) {
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v24[0U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [5U][0U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v24[1U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [5U][1U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v24[2U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [5U][2U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v24[3U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [5U][3U];
                __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v24 = 1U;
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v25 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                    [1U][5U];
            }
            if ((0x20U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c))) {
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v26[0U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [6U][0U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v26[1U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [6U][1U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v26[2U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [6U][2U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v26[3U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [6U][3U];
                __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v26 = 1U;
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v27 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                    [1U][6U];
            }
            if ((0x40U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c))) {
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v28[0U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [7U][0U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v28[1U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [7U][1U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v28[2U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [7U][2U];
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v28[3U] 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                    [7U][3U];
                __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v28 = 1U;
                __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v29 
                    = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                    [1U][7U];
            }
        }
        if ((2U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
             [0U][0U])) {
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[2U] = 0U;
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[3U] = 0U;
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[2U] 
                = ((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                    [0U][4U] << 0x1fU) | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                          [0U][3U] 
                                          >> 1U));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                = ((0xbfffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                   | (0x40000000U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                     [0U][2U] << 0xaU)));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                = ((0xff80ffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                   | (0x7f0000U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                   [0U][2U] << 3U)));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                = ((0x7fffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                   | (0x80000000U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                     [0U][2U] << 0x13U)));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                = ((0xc07fffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                   | (0x3f800000U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                     [0U][2U] << 0x12U)));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                = ((0xffffff01U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                   | (0xfeU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                               [0U][1U] >> 0xdU)));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U] 
                = ((0xffffffe1U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U]) 
                   | (0x1eU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                               [0U][0U] >> 8U)));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                   | (0xffffff00U & ((0x8000U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                                 [0U][2U] 
                                                 << 0xbU)) 
                                     | (0x7f00U & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                                   [0U][1U] 
                                                   >> 0xdU)))));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U] 
                = ((0x1fU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U]) 
                   | (0xffffffe0U & ((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                      [0U][1U] << 0x18U) 
                                     | (0xffffe0U & 
                                        (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                         [0U][0U] >> 8U)))));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                = ((0xfffffffeU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                   | (1U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                            [0U][1U] >> 8U)));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U] 
                = ((0xfffffffeU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U]) 
                   | (1U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                            [0U][0U] >> 8U)));
            if ((0xaU == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U] 
                                  >> 1U)))) {
                vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U] 
                    = (0xffffffe1U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U]);
                vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                    = ((0xbfffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                       | (0x40000000U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                         [0U][2U] << 0x1bU)));
                vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                    = ((0xff80ffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                       | (0x7f0000U & ((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                        [0U][2U] << 0x14U) 
                                       | (0xf0000U 
                                          & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                             [0U][1U] 
                                             >> 0xcU)))));
                vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                    = (0x80U | (0xffffff01U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]));
            }
            if ((1U & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                       [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                  [0U] >> 0x13U))))) {
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x10U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [0U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x40000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x17U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [0U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x80000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
            }
            if ((1U & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                       [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                  [1U] >> 0x13U))))) {
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x10U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [1U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x40000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x17U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [1U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x80000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
            }
            if ((1U & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                       [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                  [2U] >> 0x13U))))) {
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x10U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [2U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x40000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x17U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [2U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x80000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
            }
            if ((1U & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                       [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                  [3U] >> 0x13U))))) {
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x10U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [3U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x40000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x17U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [3U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x80000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
            }
            if ((1U & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                       [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                  [4U] >> 0x13U))))) {
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x10U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [4U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x40000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x17U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [4U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x80000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
            }
            if (((1U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                 [0U][0U] >> 9U))) 
                 & (((9U == (0x3fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                      [0U][1U] >> 3U))) 
                     | (0xaU == (0x3fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                          [0U][1U] 
                                          >> 3U)))) 
                    | (8U == (0x3fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                       [0U][1U] >> 3U)))))) {
                vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                    = ((0xc07fffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                       | (0x3f800000U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                         [0U][2U] << 2U)));
                vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[2U] 
                    = ((0xfffffffeU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[2U]) 
                       | (1U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                [0U][2U] >> 0x1cU)));
                vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[3U] 
                    = (0xfU & ((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                [0U][3U] << 3U) | (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                                   [0U][2U] 
                                                   >> 0x1dU)));
                vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                    = (0x80000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
            }
            __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30[0U] 
                = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U];
            __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30[1U] 
                = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U];
            __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30[2U] 
                = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[2U];
            __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30[3U] 
                = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[3U];
            __VdlyDim0__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30 
                = (7U & (IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex));
            __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30 = 1U;
            __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex 
                = (0xfU & ((IData)(1U) + (IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex)));
        }
        if ((2U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
             [1U][0U])) {
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[2U] = 0U;
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[3U] = 0U;
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[2U] 
                = ((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                    [1U][4U] << 0x1fU) | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                          [1U][3U] 
                                          >> 1U));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                = ((0xbfffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                   | (0x40000000U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                     [1U][2U] << 0xaU)));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                = ((0xff80ffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                   | (0x7f0000U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                   [1U][2U] << 3U)));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                = ((0x7fffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                   | (0x80000000U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                     [1U][2U] << 0x13U)));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                = ((0xc07fffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                   | (0x3f800000U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                     [1U][2U] << 0x12U)));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                = ((0xffffff01U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                   | (0xfeU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                               [1U][1U] >> 0xdU)));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U] 
                = ((0xffffffe1U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U]) 
                   | (0x1eU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                               [1U][0U] >> 8U)));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                   | (0xffffff00U & ((0x8000U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                                 [1U][2U] 
                                                 << 0xbU)) 
                                     | (0x7f00U & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                                   [1U][1U] 
                                                   >> 0xdU)))));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U] 
                = ((0x1fU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U]) 
                   | (0xffffffe0U & ((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                      [1U][1U] << 0x18U) 
                                     | (0xffffe0U & 
                                        (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                         [1U][0U] >> 8U)))));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                = ((0xfffffffeU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                   | (1U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                            [1U][1U] >> 8U)));
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U] 
                = ((0xfffffffeU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U]) 
                   | (1U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                            [1U][0U] >> 8U)));
            if ((0xaU == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U] 
                                  >> 1U)))) {
                vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U] 
                    = (0xffffffe1U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U]);
                vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                    = ((0xbfffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                       | (0x40000000U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                         [1U][2U] << 0x1bU)));
                vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                    = ((0xff80ffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                       | (0x7f0000U & ((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                        [1U][2U] << 0x14U) 
                                       | (0xf0000U 
                                          & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                             [1U][1U] 
                                             >> 0xcU)))));
                vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                    = (0x80U | (0xffffff01U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]));
            }
            if ((1U & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                       [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                  [0U] >> 0x13U))))) {
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x10U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [0U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x40000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x17U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [0U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x80000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
            }
            if ((1U & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                       [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                  [1U] >> 0x13U))))) {
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x10U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [1U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x40000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x17U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [1U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x80000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
            }
            if ((1U & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                       [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                  [2U] >> 0x13U))))) {
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x10U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [2U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x40000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x17U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [2U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x80000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
            }
            if ((1U & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                       [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                  [3U] >> 0x13U))))) {
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x10U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [3U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x40000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x17U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [3U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x80000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
            }
            if ((1U & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                       [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                  [4U] >> 0x13U))))) {
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x10U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [4U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x40000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
                if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                               >> 0x17U)) == (0x7fU 
                                              & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                 [4U] 
                                                 >> 0xdU)))) {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                        = (0x80000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
                }
            }
            if (((1U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                 [1U][0U] >> 9U))) 
                 & (((9U == (0x3fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                      [1U][1U] >> 3U))) 
                     | (0xaU == (0x3fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                          [1U][1U] 
                                          >> 3U)))) 
                    | (8U == (0x3fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                       [1U][1U] >> 3U)))))) {
                vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                    = ((0xc07fffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]) 
                       | (0x3f800000U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                         [1U][2U] << 2U)));
                vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[2U] 
                    = ((0xfffffffeU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[2U]) 
                       | (1U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                [1U][2U] >> 0x1cU)));
                vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[3U] 
                    = (0xfU & ((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                [1U][3U] << 3U) | (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates
                                                   [1U][2U] 
                                                   >> 0x1dU)));
                vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U] 
                    = (0x80000000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U]);
            }
            __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31[0U] 
                = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[0U];
            __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31[1U] 
                = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[1U];
            __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31[2U] 
                = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[2U];
            __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31[3U] 
                = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp[3U];
            __VdlyDim0__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31 
                = (7U & (IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex));
            __VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31 = 1U;
            __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex 
                = (0xfU & ((IData)(1U) + (IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex)));
        }
        vlSelfRef.__Vdly__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex 
            = __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__newInsertIndex;
    }
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xfffcU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [0U]) | (IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v0));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xfff3U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v1) 
                     << 2U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xffcfU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v2) 
                     << 4U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xff3fU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v3) 
                     << 6U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xfcffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v4) 
                     << 8U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xf3ffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v5) 
                     << 0xaU));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xcfffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v6) 
                     << 0xcU));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0x3fffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v7) 
                     << 0xeU));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xfffcU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [1U]) | (IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v8));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xfff3U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v9) 
                     << 2U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xffcfU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v10) 
                     << 4U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xff3fU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v11) 
                     << 6U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xfcffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v12) 
                     << 8U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xf3ffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v13) 
                     << 0xaU));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xcfffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v14) 
                     << 0xcU));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0x3fffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v15) 
                     << 0xeU));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xfffcU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [2U]) | (IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v16));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xfff3U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v17) 
                     << 2U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xffcfU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v18) 
                     << 4U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xff3fU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v19) 
                     << 6U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xfcffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v20) 
                     << 8U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xf3ffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v21) 
                     << 0xaU));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xcfffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v22) 
                     << 0xcU));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0x3fffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v23) 
                     << 0xeU));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xfffcU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [3U]) | (IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v24));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xfff3U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v25) 
                     << 2U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xffcfU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v26) 
                     << 4U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xff3fU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v27) 
                     << 6U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xfcffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v28) 
                     << 8U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xf3ffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v29) 
                     << 0xaU));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xcfffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v30) 
                     << 0xcU));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0x3fffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v31) 
                     << 0xeU));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xfffcU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [4U]) | (IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v32));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xfff3U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v33) 
                     << 2U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xffcfU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v34) 
                     << 4U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xff3fU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v35) 
                     << 6U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xfcffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v36) 
                     << 8U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xf3ffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v37) 
                     << 0xaU));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xcfffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v38) 
                     << 0xcU));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0x3fffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r__v39) 
                     << 0xeU));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xfffcU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [0U]) | (IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v0));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xfff3U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v1) 
                     << 2U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xffcfU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v2) 
                     << 4U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xff3fU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v3) 
                     << 6U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xfcffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v4) 
                     << 8U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xf3ffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v5) 
                     << 0xaU));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xcfffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v6) 
                     << 0xcU));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0x3fffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v7) 
                     << 0xeU));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xfffcU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [1U]) | (IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v8));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xfff3U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v9) 
                     << 2U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xffcfU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v10) 
                     << 4U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xff3fU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v11) 
                     << 6U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xfcffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v12) 
                     << 8U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xf3ffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v13) 
                     << 0xaU));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xcfffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v14) 
                     << 0xcU));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0x3fffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v15) 
                     << 0xeU));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xfffcU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [2U]) | (IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v16));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xfff3U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v17) 
                     << 2U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xffcfU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v18) 
                     << 4U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xff3fU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v19) 
                     << 6U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xfcffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v20) 
                     << 8U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xf3ffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v21) 
                     << 0xaU));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xcfffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v22) 
                     << 0xcU));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0x3fffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v23) 
                     << 0xeU));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xfffcU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [3U]) | (IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v24));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xfff3U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v25) 
                     << 2U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xffcfU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v26) 
                     << 4U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xff3fU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v27) 
                     << 6U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xfcffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v28) 
                     << 8U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xf3ffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v29) 
                     << 0xaU));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xcfffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v30) 
                     << 0xcU));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0x3fffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v31) 
                     << 0xeU));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xfffcU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [4U]) | (IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v32));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xfff3U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v33) 
                     << 2U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xffcfU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v34) 
                     << 4U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xff3fU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v35) 
                     << 6U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xfcffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v36) 
                     << 8U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xf3ffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v37) 
                     << 0xaU));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xcfffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v38) 
                     << 0xcU));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0x3fffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r__v39) 
                     << 0xeU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xfffcU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [0U]) | (IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v0));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xfff3U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v1) 
                     << 2U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xffcfU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v2) 
                     << 4U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xff3fU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v3) 
                     << 6U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xfcffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v4) 
                     << 8U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xf3ffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v5) 
                     << 0xaU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0xcfffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v6) 
                     << 0xcU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[0U] 
        = ((0x3fffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [0U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v7) 
                     << 0xeU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xfffcU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [1U]) | (IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v8));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xfff3U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v9) 
                     << 2U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xffcfU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v10) 
                     << 4U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xff3fU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v11) 
                     << 6U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xfcffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v12) 
                     << 8U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xf3ffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v13) 
                     << 0xaU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0xcfffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v14) 
                     << 0xcU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[1U] 
        = ((0x3fffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v15) 
                     << 0xeU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xfffcU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [2U]) | (IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v16));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xfff3U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v17) 
                     << 2U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xffcfU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v18) 
                     << 4U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xff3fU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v19) 
                     << 6U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xfcffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v20) 
                     << 8U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xf3ffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v21) 
                     << 0xaU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0xcfffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v22) 
                     << 0xcU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[2U] 
        = ((0x3fffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [2U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v23) 
                     << 0xeU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xfffcU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [3U]) | (IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v24));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xfff3U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v25) 
                     << 2U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xffcfU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v26) 
                     << 4U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xff3fU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v27) 
                     << 6U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xfcffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v28) 
                     << 8U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xf3ffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v29) 
                     << 0xaU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0xcfffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v30) 
                     << 0xcU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[3U] 
        = ((0x3fffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [3U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v31) 
                     << 0xeU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xfffcU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [4U]) | (IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v32));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xfff3U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v33) 
                     << 2U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xffcfU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v34) 
                     << 4U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xff3fU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v35) 
                     << 6U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xfcffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v36) 
                     << 8U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xf3ffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v37) 
                     << 0xaU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0xcfffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v38) 
                     << 0xcU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[4U] 
        = ((0x3fffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
            [4U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r__v39) 
                     << 0xeU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[0U][1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
            [0U][1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v0) 
                         << 0x1eU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[1U][1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
            [1U][1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v1) 
                         << 0x1eU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[2U][1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
            [2U][1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v2) 
                         << 0x1eU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[3U][1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
            [3U][1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v3) 
                         << 0x1eU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[4U][1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
            [4U][1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v4) 
                         << 0x1eU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[5U][1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
            [5U][1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v5) 
                         << 0x1eU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[6U][1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
            [6U][1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v6) 
                         << 0x1eU));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[7U][1U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
            [7U][1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v7) 
                         << 0x1eU));
    if (__VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v8) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[0U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[0U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[0U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[0U][3U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[1U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[1U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[1U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[1U][3U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[2U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[2U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[2U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[2U][3U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[3U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[3U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[3U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[3U][3U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[4U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[4U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[4U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[4U][3U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[5U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[5U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[5U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[5U][3U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[6U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[6U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[6U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[6U][3U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[7U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[7U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[7U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[7U][3U] = 0U;
    }
    if (__VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v16) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[0U][0U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v16[0U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[0U][1U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v16[1U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[0U][2U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v16[2U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[0U][3U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v16[3U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[0U][1U] 
            = ((0x3fffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                [0U][1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v17) 
                             << 0x1eU));
    }
    if (__VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v18) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[1U][0U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v18[0U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[1U][1U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v18[1U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[1U][2U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v18[2U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[1U][3U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v18[3U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[1U][1U] 
            = ((0x3fffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                [1U][1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v19) 
                             << 0x1eU));
    }
    if (__VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v20) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[2U][0U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v20[0U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[2U][1U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v20[1U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[2U][2U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v20[2U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[2U][3U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v20[3U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[2U][1U] 
            = ((0x3fffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                [2U][1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v21) 
                             << 0x1eU));
    }
    if (__VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v22) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[3U][0U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v22[0U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[3U][1U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v22[1U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[3U][2U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v22[2U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[3U][3U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v22[3U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[3U][1U] 
            = ((0x3fffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                [3U][1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v23) 
                             << 0x1eU));
    }
    if (__VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v24) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[4U][0U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v24[0U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[4U][1U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v24[1U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[4U][2U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v24[2U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[4U][3U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v24[3U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[4U][1U] 
            = ((0x3fffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                [4U][1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v25) 
                             << 0x1eU));
    }
    if (__VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v26) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[5U][0U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v26[0U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[5U][1U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v26[1U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[5U][2U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v26[2U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[5U][3U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v26[3U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[5U][1U] 
            = ((0x3fffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                [5U][1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v27) 
                             << 0x1eU));
    }
    if (__VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v28) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[6U][0U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v28[0U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[6U][1U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v28[1U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[6U][2U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v28[2U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[6U][3U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v28[3U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[6U][1U] 
            = ((0x3fffffffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                [6U][1U]) | ((IData)(__VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v29) 
                             << 0x1eU));
    }
    if (__VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[__VdlyDim0__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30][0U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30[0U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[__VdlyDim0__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30][1U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30[1U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[__VdlyDim0__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30][2U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30[2U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[__VdlyDim0__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30][3U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v30[3U];
    }
    if (__VdlySet__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[__VdlyDim0__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31][0U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31[0U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[__VdlyDim0__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31][1U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31[1U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[__VdlyDim0__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31][2U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31[2U];
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[__VdlyDim0__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31][3U] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__iq__DOT__queue__v31[3U];
    }
}
