// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_MemRTL1RW__W2_N40_WB2.h"

VL_ATTR_COLD void VTop_MemRTL1RW__W2_N40_WB2___eval_static__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt(VTop_MemRTL1RW__W2_N40_WB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL1RW__W2_N40_WB2___eval_static__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ce_reg = 1U;
}

VL_ATTR_COLD void VTop_MemRTL1RW__W2_N40_WB2___eval_initial__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt(VTop_MemRTL1RW__W2_N40_WB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL1RW__W2_N40_WB2___eval_initial__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3fU)) {
        vlSelfRef.mem[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

VL_ATTR_COLD void VTop_MemRTL1RW__W2_N40_WB2___ctor_var_reset(VTop_MemRTL1RW__W2_N40_WB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL1RW__W2_N40_WB2___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_nce = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_nwe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_addr = VL_RAND_RESET_I(6);
    vlSelf->__PVT__IN_data = VL_RAND_RESET_I(2);
    vlSelf->__PVT__IN_wm = VL_RAND_RESET_I(1);
    vlSelf->__PVT__OUT_data = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->mem[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__ce_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__we_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr_reg = VL_RAND_RESET_I(6);
    vlSelf->__PVT__data_reg = VL_RAND_RESET_I(2);
    vlSelf->__PVT__wm_reg = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__mem__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__mem__v0 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__mem__v0 = 0;
}
