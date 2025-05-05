// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IF_Cache.h"

VL_ATTR_COLD void VTop_IF_Cache___ctor_var_reset(VTop_IF_Cache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IF_Cache___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__re = VL_RAND_RESET_I(3);
    vlSelf->__PVT__we = VL_RAND_RESET_I(3);
    vlSelf->__PVT__addr = VL_RAND_RESET_Q(36);
    VL_RAND_RESET_W(256, vlSelf->__PVT__rdata);
    vlSelf->__PVT__wassoc = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(384, vlSelf->__PVT__wdata);
    vlSelf->__PVT__wmask = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__busy = VL_RAND_RESET_I(3);
}
