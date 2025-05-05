// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_MemRTL1RW__W2_N40_WB2.h"

VL_INLINE_OPT void VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt__0(VTop_MemRTL1RW__W2_N40_WB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ce_reg)))) {
        if (vlSelfRef.__PVT__we_reg) {
            vlSelfRef.__PVT__OUT_data = vlSelfRef.mem
                [vlSelfRef.__PVT__addr_reg];
        }
    }
}
