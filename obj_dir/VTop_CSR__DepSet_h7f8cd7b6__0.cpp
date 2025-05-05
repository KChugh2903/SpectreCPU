// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_CSR.h"

VL_INLINE_OPT void VTop_CSR___nba_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__1(VTop_CSR* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_CSR___nba_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__OUT_vmem = vlSelfRef.__PVT__vmem_c;
}
