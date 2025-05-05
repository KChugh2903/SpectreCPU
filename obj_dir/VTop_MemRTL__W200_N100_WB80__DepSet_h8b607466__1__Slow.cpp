// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_MemRTL__W200_N100_WB80.h"

VL_ATTR_COLD void VTop_MemRTL__W200_N100_WB80___ctor_var_reset(VTop_MemRTL__W200_N100_WB80* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL__W200_N100_WB80___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_nce = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_nwe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_addr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->__PVT__IN_data);
    vlSelf->__PVT__IN_wm = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(512, vlSelf->__PVT__OUT_data);
    vlSelf->__PVT__IN_nce1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_addr1 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->__PVT__OUT_data1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->mem[__Vi0]);
    }
    vlSelf->__PVT__ce_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ce1_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__we_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__addr1_reg = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->__PVT__data_reg);
    vlSelf->__PVT__wm_reg = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->__VdlyVal__mem__v0);
    vlSelf->__VdlyDim0__mem__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__mem__v0 = 0;
    VL_RAND_RESET_W(128, vlSelf->__VdlyVal__mem__v1);
    vlSelf->__VdlyDim0__mem__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__mem__v1 = 0;
    VL_RAND_RESET_W(128, vlSelf->__VdlyVal__mem__v2);
    vlSelf->__VdlyDim0__mem__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__mem__v2 = 0;
    VL_RAND_RESET_W(128, vlSelf->__VdlyVal__mem__v3);
    vlSelf->__VdlyDim0__mem__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__mem__v3 = 0;
}
