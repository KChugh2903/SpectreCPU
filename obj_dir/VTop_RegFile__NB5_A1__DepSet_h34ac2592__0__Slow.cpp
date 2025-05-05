// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_RegFile__NB5_A1.h"

VL_ATTR_COLD void VTop_RegFile__NB5_A1___ctor_var_reset(VTop_RegFile__NB5_A1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VTop_RegFile__NB5_A1___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_re = VL_RAND_RESET_I(8);
    vlSelf->__PVT__IN_raddr = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(256, vlSelf->__PVT__OUT_rdata);
    vlSelf->__PVT__IN_we = VL_RAND_RESET_I(5);
    vlSelf->__PVT__IN_waddr = VL_RAND_RESET_I(30);
    VL_RAND_RESET_W(160, vlSelf->__PVT__IN_wdata);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->mem[__Vi0] = VL_RAND_RESET_I(32);
    }
}
