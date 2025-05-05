// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Core.h"

VL_INLINE_OPT void VTop_Core___ico_sequent__TOP__Top__soc__core__2(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___ico_sequent__TOP__Top__soc__core__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1;
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 = 0;
    CData/*0:0*/ ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1;
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 = 0;
    // Body
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx)) 
           | ((IData)(vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [2U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx)) 
           | ((IData)(vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = (6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [1U] >> 1U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [1U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [1U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [1U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((4U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [1U] >> 2U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [1U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [1U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [1U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((1U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [1U] >> 4U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [1U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [1U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [1U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = (6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [0U] >> 1U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [0U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [0U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [0U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((4U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [0U] >> 2U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [0U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [0U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [0U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((1U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [0U] >> 4U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [0U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [0U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [0U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    vlSelfRef.__PVT__ld__DOT__matchValid[7U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid;
    vlSelfRef.__PVT__ld__DOT__matchValid[6U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid;
    vlSelfRef.__PVT__ld__DOT__matchValid[5U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid;
    vlSelfRef.__PVT__ld__DOT__matchValid[4U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid;
    vlSelfRef.__PVT__ld__DOT__matchValid[3U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid;
    vlSelfRef.__PVT__ld__DOT__matchValid[2U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid;
    vlSelfRef.__PVT__ld__DOT__matchValid[1U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid;
    vlSelfRef.__PVT__ld__DOT__matchValid[0U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid;
    vlSelfRef.__PVT__ld__DOT__matchIdx[7U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx;
    vlSelfRef.__PVT__ld__DOT__matchIdx[6U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx;
    vlSelfRef.__PVT__ld__DOT__matchIdx[5U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx;
    vlSelfRef.__PVT__ld__DOT__matchIdx[4U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx;
    vlSelfRef.__PVT__ld__DOT__matchIdx[3U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx;
    vlSelfRef.__PVT__ld__DOT__matchIdx[2U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx;
    vlSelfRef.__PVT__ld__DOT__matchIdx[1U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx;
    vlSelfRef.__PVT__ld__DOT__matchIdx[0U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx;
}

VL_INLINE_OPT void VTop_Core___ico_sequent__TOP__Top__soc__core__5(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___ico_sequent__TOP__Top__soc__core__5\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 = 0;
    SData/*15:0*/ genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 = 0;
    CData/*7:0*/ genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_h7888c631__0;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_h7888c631__0 = 0;
    // Body
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] = 0U;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[2U] 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
        [4U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[3U] 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] = 0U;
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] = 0U;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[2U] 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
        [4U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[3U] 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] = 0U;
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] = 0U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_h7888c631__0 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_h7888c631__0;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_h7888c631__0 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[2U] 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_h7888c631__0;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_h7888c631__0 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
        [4U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[3U] 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_h7888c631__0;
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] = 0U;
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
}
