// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_RegFile__W50_S20_N1_NB1.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_RegFile__W50_S20_N1_NB1___nba_sequent__TOP__Top__soc__core__ifetch__bp__bpFile__0(VTop_RegFile__W50_S20_N1_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VTop_RegFile__W50_S20_N1_NB1___nba_sequent__TOP__Top__soc__core__ifetch__bp__bpFile__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*79:0*/ __Vlvbound_hc1c8eb11__0;
    VL_ZERO_W(80, __Vlvbound_hc1c8eb11__0);
    // Body
    vlSelfRef.__VdlySet__mem__v0 = 0U;
    if ((1U & vlSymsp->TOP__Top__soc__core__ifetch__ifp.fetch0[0U])) {
        vlSelfRef.__VdlyVal__mem__v0[0U] = vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__bpBackup[0U];
        vlSelfRef.__VdlyVal__mem__v0[1U] = vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__bpBackup[1U];
        vlSelfRef.__VdlyVal__mem__v0[2U] = vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__bpBackup[2U];
        vlSelfRef.__VdlyDim0__mem__v0 = vlSymsp->TOP__Top__soc__core__ifetch.BPF_writeAddr;
        vlSelfRef.__VdlySet__mem__v0 = 1U;
    }
    if (vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__bpFileRE) {
        __Vlvbound_hc1c8eb11__0[0U] = vlSelfRef.mem
            [vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__bpFileRAddr][0U];
        __Vlvbound_hc1c8eb11__0[1U] = vlSelfRef.mem
            [vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__bpFileRAddr][1U];
        __Vlvbound_hc1c8eb11__0[2U] = vlSelfRef.mem
            [vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__bpFileRAddr][2U];
    } else {
        __Vlvbound_hc1c8eb11__0[0U] = 0U;
        __Vlvbound_hc1c8eb11__0[1U] = 0U;
        __Vlvbound_hc1c8eb11__0[2U] = 0U;
    }
    vlSelfRef.__PVT__OUT_rdata[0U] = __Vlvbound_hc1c8eb11__0[0U];
    vlSelfRef.__PVT__OUT_rdata[1U] = __Vlvbound_hc1c8eb11__0[1U];
    vlSelfRef.__PVT__OUT_rdata[2U] = __Vlvbound_hc1c8eb11__0[2U];
}
