// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IF_ICTable.h"

VL_ATTR_COLD void VTop_IF_ICTable___ctor_var_reset(VTop_IF_ICTable* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VTop_IF_ICTable___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__waddr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__wassoc = VL_RAND_RESET_I(2);
    vlSelf->__PVT__wdata = VL_RAND_RESET_I(21);
    vlSelf->__PVT__re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__raddr = VL_RAND_RESET_I(12);
}
