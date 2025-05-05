// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IF_ICache.h"

VL_ATTR_COLD void VTop_IF_ICache___ctor_var_reset(VTop_IF_ICache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VTop_IF_ICache___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__raddr = VL_RAND_RESET_I(12);
}
