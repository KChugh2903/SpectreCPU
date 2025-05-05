// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Rename__WC5.h"

VL_INLINE_OPT void VTop_Rename__WC5___ico_comb__TOP__Top__soc__core__rn__0(VTop_Rename__WC5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Rename__WC5___ico_comb__TOP__Top__soc__core__rn__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlUnpacked<CData/*0:0*/, 1> __PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__OUT_idxValid;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__OUT_idxValid[__Vi0] = 0;
    }
    CData/*2:0*/ __PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT____Vlvbound_h284d0bd7__0;
    scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT____Vlvbound_h284d0bd7__0 = 0;
    CData/*0:0*/ scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT____Vlvbound_h78b6eef7__0 = 0;
    VlUnpacked<CData/*0:0*/, 1> __PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__OUT_idxValid;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__OUT_idxValid[__Vi0] = 0;
    }
    CData/*2:0*/ __PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT____Vlvbound_h284d0bd7__0;
    scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT____Vlvbound_h284d0bd7__0 = 0;
    CData/*0:0*/ scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT____Vlvbound_h78b6eef7__0 = 0;
    VlUnpacked<CData/*0:0*/, 1> __PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__OUT_idxValid;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__OUT_idxValid[__Vi0] = 0;
    }
    CData/*2:0*/ __PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT____Vlvbound_h284d0bd7__0;
    scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT____Vlvbound_h284d0bd7__0 = 0;
    CData/*0:0*/ scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT____Vlvbound_h78b6eef7__0 = 0;
    VlUnpacked<CData/*0:0*/, 1> __PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__OUT_idxValid;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__OUT_idxValid[__Vi0] = 0;
    }
    CData/*2:0*/ __PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT____Vlvbound_h284d0bd7__0;
    scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT____Vlvbound_h284d0bd7__0 = 0;
    CData/*0:0*/ scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT____Vlvbound_h78b6eef7__0 = 0;
    // Body
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (7U & ((vlSelfRef.__PVT__scheduler__DOT__candidates
                           [0U] >> vlSelfRef.__PVT__scheduler__DOT__prios_c
                           [0U]) | VL_SHIFTL_III(3,3,32, 
                                                 vlSelfRef.__PVT__scheduler__DOT__candidates
                                                 [0U], 
                                                 ((IData)(3U) 
                                                  - 
                                                  vlSelfRef.__PVT__scheduler__DOT__prios_c
                                                  [0U]))))));
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ (3U & (((vlSelfRef.__PVT__scheduler__DOT__candidates
                            [0U] >> vlSelfRef.__PVT__scheduler__DOT__prios_c
                            [0U]) | VL_SHIFTL_III(3,3,32, 
                                                  vlSelfRef.__PVT__scheduler__DOT__candidates
                                                  [0U], 
                                                  ((IData)(3U) 
                                                   - 
                                                   vlSelfRef.__PVT__scheduler__DOT__prios_c
                                                   [0U]))) 
                          >> 1U))));
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ (1U & (((vlSelfRef.__PVT__scheduler__DOT__candidates
                            [0U] >> vlSelfRef.__PVT__scheduler__DOT__prios_c
                            [0U]) | VL_SHIFTL_III(3,3,32, 
                                                  vlSelfRef.__PVT__scheduler__DOT__candidates
                                                  [0U], 
                                                  ((IData)(3U) 
                                                   - 
                                                   vlSelfRef.__PVT__scheduler__DOT__prios_c
                                                   [0U]))) 
                          >> 2U))));
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (7U & ((vlSelfRef.__PVT__scheduler__DOT__candidates
                           [1U] >> vlSelfRef.__PVT__scheduler__DOT__prios_c
                           [1U]) | VL_SHIFTL_III(3,3,32, 
                                                 vlSelfRef.__PVT__scheduler__DOT__candidates
                                                 [1U], 
                                                 ((IData)(3U) 
                                                  - 
                                                  vlSelfRef.__PVT__scheduler__DOT__prios_c
                                                  [1U]))))));
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ (3U & (((vlSelfRef.__PVT__scheduler__DOT__candidates
                            [1U] >> vlSelfRef.__PVT__scheduler__DOT__prios_c
                            [1U]) | VL_SHIFTL_III(3,3,32, 
                                                  vlSelfRef.__PVT__scheduler__DOT__candidates
                                                  [1U], 
                                                  ((IData)(3U) 
                                                   - 
                                                   vlSelfRef.__PVT__scheduler__DOT__prios_c
                                                   [1U]))) 
                          >> 1U))));
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ (1U & (((vlSelfRef.__PVT__scheduler__DOT__candidates
                            [1U] >> vlSelfRef.__PVT__scheduler__DOT__prios_c
                            [1U]) | VL_SHIFTL_III(3,3,32, 
                                                  vlSelfRef.__PVT__scheduler__DOT__candidates
                                                  [1U], 
                                                  ((IData)(3U) 
                                                   - 
                                                   vlSelfRef.__PVT__scheduler__DOT__prios_c
                                                   [1U]))) 
                          >> 2U))));
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (7U & ((vlSelfRef.__PVT__scheduler__DOT__candidates
                           [2U] >> vlSelfRef.__PVT__scheduler__DOT__prios_c
                           [2U]) | VL_SHIFTL_III(3,3,32, 
                                                 vlSelfRef.__PVT__scheduler__DOT__candidates
                                                 [2U], 
                                                 ((IData)(3U) 
                                                  - 
                                                  vlSelfRef.__PVT__scheduler__DOT__prios_c
                                                  [2U]))))));
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ (3U & (((vlSelfRef.__PVT__scheduler__DOT__candidates
                            [2U] >> vlSelfRef.__PVT__scheduler__DOT__prios_c
                            [2U]) | VL_SHIFTL_III(3,3,32, 
                                                  vlSelfRef.__PVT__scheduler__DOT__candidates
                                                  [2U], 
                                                  ((IData)(3U) 
                                                   - 
                                                   vlSelfRef.__PVT__scheduler__DOT__prios_c
                                                   [2U]))) 
                          >> 1U))));
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ (1U & (((vlSelfRef.__PVT__scheduler__DOT__candidates
                            [2U] >> vlSelfRef.__PVT__scheduler__DOT__prios_c
                            [2U]) | VL_SHIFTL_III(3,3,32, 
                                                  vlSelfRef.__PVT__scheduler__DOT__candidates
                                                  [2U], 
                                                  ((IData)(3U) 
                                                   - 
                                                   vlSelfRef.__PVT__scheduler__DOT__prios_c
                                                   [2U]))) 
                          >> 2U))));
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (7U & ((vlSelfRef.__PVT__scheduler__DOT__candidates
                           [3U] >> vlSelfRef.__PVT__scheduler__DOT__prios_c
                           [3U]) | VL_SHIFTL_III(3,3,32, 
                                                 vlSelfRef.__PVT__scheduler__DOT__candidates
                                                 [3U], 
                                                 ((IData)(3U) 
                                                  - 
                                                  vlSelfRef.__PVT__scheduler__DOT__prios_c
                                                  [3U]))))));
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ (3U & (((vlSelfRef.__PVT__scheduler__DOT__candidates
                            [3U] >> vlSelfRef.__PVT__scheduler__DOT__prios_c
                            [3U]) | VL_SHIFTL_III(3,3,32, 
                                                  vlSelfRef.__PVT__scheduler__DOT__candidates
                                                  [3U], 
                                                  ((IData)(3U) 
                                                   - 
                                                   vlSelfRef.__PVT__scheduler__DOT__prios_c
                                                   [3U]))) 
                          >> 1U))));
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ (1U & (((vlSelfRef.__PVT__scheduler__DOT__candidates
                            [3U] >> vlSelfRef.__PVT__scheduler__DOT__prios_c
                            [3U]) | VL_SHIFTL_III(3,3,32, 
                                                  vlSelfRef.__PVT__scheduler__DOT__candidates
                                                  [3U], 
                                                  ((IData)(3U) 
                                                   - 
                                                   vlSelfRef.__PVT__scheduler__DOT__prios_c
                                                   [3U]))) 
                          >> 2U))));
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    __PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT____Vlvbound_h284d0bd7__0 
        = (3U & ((IData)(__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.scheduler__DOT____Vcellout__genblk1__BRA__0__KET____DOT__penc__OUT_idx[0U] 
        = scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT____Vlvbound_h284d0bd7__0;
    scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    __PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__OUT_idxValid[0U] 
        = scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    __PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT____Vlvbound_h284d0bd7__0 
        = (3U & ((IData)(__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.scheduler__DOT____Vcellout__genblk1__BRA__1__KET____DOT__penc__OUT_idx[0U] 
        = scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT____Vlvbound_h284d0bd7__0;
    scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    __PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__OUT_idxValid[0U] 
        = scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    __PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT____Vlvbound_h284d0bd7__0 
        = (3U & ((IData)(__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.scheduler__DOT____Vcellout__genblk1__BRA__2__KET____DOT__penc__OUT_idx[0U] 
        = scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT____Vlvbound_h284d0bd7__0;
    scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    __PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__OUT_idxValid[0U] 
        = scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    __PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT____Vlvbound_h284d0bd7__0 
        = (3U & ((IData)(__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.scheduler__DOT____Vcellout__genblk1__BRA__3__KET____DOT__penc__OUT_idx[0U] 
        = scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT____Vlvbound_h284d0bd7__0;
    scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    __PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__OUT_idxValid[0U] 
        = scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    vlSelfRef.__PVT__scheduler__DOT__outOrderRaw[0U] 
        = vlSelfRef.scheduler__DOT____Vcellout__genblk1__BRA__0__KET____DOT__penc__OUT_idx
        [0U];
    vlSelfRef.__PVT__scheduler__DOT__outOrderRaw[1U] 
        = vlSelfRef.scheduler__DOT____Vcellout__genblk1__BRA__1__KET____DOT__penc__OUT_idx
        [0U];
    vlSelfRef.__PVT__scheduler__DOT__outOrderRaw[2U] 
        = vlSelfRef.scheduler__DOT____Vcellout__genblk1__BRA__2__KET____DOT__penc__OUT_idx
        [0U];
    vlSelfRef.__PVT__scheduler__DOT__outOrderRaw[3U] 
        = vlSelfRef.scheduler__DOT____Vcellout__genblk1__BRA__3__KET____DOT__penc__OUT_idx
        [0U];
    vlSelfRef.__PVT__SCHED_uopOrder[0U] = vlSelfRef.__PVT__scheduler__DOT__modTable
        [(7U & (vlSelfRef.__PVT__scheduler__DOT__outOrderRaw
                [0U] + vlSelfRef.__PVT__scheduler__DOT__prios_c
                [0U]))];
    vlSelfRef.__PVT__SCHED_uopOrder[1U] = vlSelfRef.__PVT__scheduler__DOT__modTable
        [(7U & (vlSelfRef.__PVT__scheduler__DOT__outOrderRaw
                [1U] + vlSelfRef.__PVT__scheduler__DOT__prios_c
                [1U]))];
    vlSelfRef.__PVT__SCHED_uopOrder[2U] = vlSelfRef.__PVT__scheduler__DOT__modTable
        [(7U & (vlSelfRef.__PVT__scheduler__DOT__outOrderRaw
                [2U] + vlSelfRef.__PVT__scheduler__DOT__prios_c
                [2U]))];
    vlSelfRef.__PVT__SCHED_uopOrder[3U] = vlSelfRef.__PVT__scheduler__DOT__modTable
        [(7U & (vlSelfRef.__PVT__scheduler__DOT__outOrderRaw
                [3U] + vlSelfRef.__PVT__scheduler__DOT__prios_c
                [3U]))];
    vlSelfRef.__PVT__scheduler__DOT__prios_c[0U] = vlSelfRef.__PVT__scheduler__DOT__prio_r;
    vlSelfRef.__PVT__scheduler__DOT__prios_c[1U] = 
        vlSelfRef.__PVT__scheduler__DOT__modTable[(7U 
                                                   & ((IData)(1U) 
                                                      + 
                                                      vlSelfRef.__PVT__SCHED_uopOrder
                                                      [0U]))];
    vlSelfRef.__PVT__scheduler__DOT__prios_c[2U] = 
        vlSelfRef.__PVT__scheduler__DOT__modTable[(7U 
                                                   & ((IData)(1U) 
                                                      + 
                                                      vlSelfRef.__PVT__SCHED_uopOrder
                                                      [1U]))];
    vlSelfRef.__PVT__scheduler__DOT__prios_c[3U] = 
        vlSelfRef.__PVT__scheduler__DOT__modTable[(7U 
                                                   & ((IData)(1U) 
                                                      + 
                                                      vlSelfRef.__PVT__SCHED_uopOrder
                                                      [2U]))];
}

VL_INLINE_OPT void VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__7(VTop_Rename__WC5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__7\n"); );
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
