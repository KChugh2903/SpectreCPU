// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_ExternalAXISim.h"

VL_INLINE_OPT void VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__5(VTop_ExternalAXISim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__5\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.inputAvail = vlSelfRef.__Vdly__inputAvail;
}
