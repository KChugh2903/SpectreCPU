// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IF_CTable.h"

VL_ATTR_COLD void VTop_IF_CTable___ctor_var_reset(VTop_IF_CTable* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IF_CTable___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__re[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__raddr[__Vi0] = VL_RAND_RESET_I(12);
    }
    VL_RAND_RESET_W(252, vlSelf->__PVT__rdata);
    vlSelf->__PVT__ridx = VL_RAND_RESET_I(6);
}
