// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_RegFile__W23_S20_N3_NB1.h"

VL_ATTR_COLD void VTop_RegFile__W23_S20_N3_NB1___ctor_var_reset(VTop_RegFile__W23_S20_N3_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VTop_RegFile__W23_S20_N3_NB1___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_re = VL_RAND_RESET_I(3);
    vlSelf->__PVT__IN_raddr = VL_RAND_RESET_I(15);
    VL_RAND_RESET_W(105, vlSelf->__PVT__OUT_rdata);
    vlSelf->__PVT__IN_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__IN_wdata = VL_RAND_RESET_Q(35);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mem[__Vi0] = VL_RAND_RESET_Q(35);
    }
    vlSelf->__VdlyVal__mem__v0 = VL_RAND_RESET_Q(35);
    vlSelf->__VdlyDim0__mem__v0 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__mem__v0 = 0;
}
