// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IF_MMIO.h"

VL_ATTR_COLD void VTop_IF_MMIO___ctor_var_reset(VTop_IF_MMIO* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IF_MMIO___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__waddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wmask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__raddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rdata = VL_RAND_RESET_I(32);
}
