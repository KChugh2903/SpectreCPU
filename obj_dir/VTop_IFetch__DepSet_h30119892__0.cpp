// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IFetch.h"

VL_INLINE_OPT void VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__2(VTop_IFetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.waitForInterrupt = vlSelfRef.__Vdly__waitForInterrupt;
}
