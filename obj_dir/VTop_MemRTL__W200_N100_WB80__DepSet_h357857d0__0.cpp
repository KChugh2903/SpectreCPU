// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_MemRTL__W200_N100_WB80.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_MemRTL__W200_N100_WB80___nba_sequent__TOP__Top__soc__icache__1(VTop_MemRTL__W200_N100_WB80* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL__W200_N100_WB80___nba_sequent__TOP__Top__soc__icache__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__mem__v0) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0][0U] 
            = vlSelfRef.__VdlyVal__mem__v0[0U];
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0][1U] 
            = vlSelfRef.__VdlyVal__mem__v0[1U];
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0][2U] 
            = vlSelfRef.__VdlyVal__mem__v0[2U];
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0][3U] 
            = vlSelfRef.__VdlyVal__mem__v0[3U];
    }
    if (vlSelfRef.__VdlySet__mem__v1) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][4U] 
            = vlSelfRef.__VdlyVal__mem__v1[0U];
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][5U] 
            = vlSelfRef.__VdlyVal__mem__v1[1U];
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][6U] 
            = vlSelfRef.__VdlyVal__mem__v1[2U];
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][7U] 
            = vlSelfRef.__VdlyVal__mem__v1[3U];
    }
    if (vlSelfRef.__VdlySet__mem__v2) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v2][8U] 
            = vlSelfRef.__VdlyVal__mem__v2[0U];
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v2][9U] 
            = vlSelfRef.__VdlyVal__mem__v2[1U];
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v2][0xaU] 
            = vlSelfRef.__VdlyVal__mem__v2[2U];
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v2][0xbU] 
            = vlSelfRef.__VdlyVal__mem__v2[3U];
    }
    if (vlSelfRef.__VdlySet__mem__v3) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v3][0xcU] 
            = vlSelfRef.__VdlyVal__mem__v3[0U];
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v3][0xdU] 
            = vlSelfRef.__VdlyVal__mem__v3[1U];
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v3][0xeU] 
            = vlSelfRef.__VdlyVal__mem__v3[2U];
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v3][0xfU] 
            = vlSelfRef.__VdlyVal__mem__v3[3U];
    }
    vlSelfRef.__PVT__ce1_reg = (1U & (~ (IData)(vlSymsp->TOP__Top__soc__IF_icache.__PVT__re)));
    vlSelfRef.__PVT__addr1_reg = (0xffU & ((IData)(vlSymsp->TOP__Top__soc__IF_icache.__PVT__raddr) 
                                           >> 4U));
    vlSelfRef.__PVT__ce_reg = vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_ce;
    vlSelfRef.__PVT__we_reg = vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_we;
    vlSelfRef.__PVT__data_reg[0U] = vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[0U];
    vlSelfRef.__PVT__data_reg[1U] = vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[1U];
    vlSelfRef.__PVT__data_reg[2U] = vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[2U];
    vlSelfRef.__PVT__data_reg[3U] = vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[3U];
    vlSelfRef.__PVT__data_reg[4U] = vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[0U];
    vlSelfRef.__PVT__data_reg[5U] = vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[1U];
    vlSelfRef.__PVT__data_reg[6U] = vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[2U];
    vlSelfRef.__PVT__data_reg[7U] = vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[3U];
    vlSelfRef.__PVT__data_reg[8U] = vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[0U];
    vlSelfRef.__PVT__data_reg[9U] = vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[1U];
    vlSelfRef.__PVT__data_reg[0xaU] = vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[2U];
    vlSelfRef.__PVT__data_reg[0xbU] = vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[3U];
    vlSelfRef.__PVT__data_reg[0xcU] = vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[0U];
    vlSelfRef.__PVT__data_reg[0xdU] = vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[1U];
    vlSelfRef.__PVT__data_reg[0xeU] = vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[2U];
    vlSelfRef.__PVT__data_reg[0xfU] = vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[3U];
    vlSelfRef.__PVT__addr_reg = (0xffU & ((IData)(vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_addr) 
                                          >> 2U));
    vlSelfRef.__PVT__wm_reg = (0xfU & ((IData)(1U) 
                                       << (3U & ((IData)(vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_addr) 
                                                 >> 0xaU))));
}
