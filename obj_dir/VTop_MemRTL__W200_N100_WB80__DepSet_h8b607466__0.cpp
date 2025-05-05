// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_MemRTL__W200_N100_WB80.h"

VL_INLINE_OPT void VTop_MemRTL__W200_N100_WB80___nba_sequent__TOP__Top__soc__icache__0(VTop_MemRTL__W200_N100_WB80* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL__W200_N100_WB80___nba_sequent__TOP__Top__soc__icache__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<16>/*511:0*/ __PVT__OUT_data;
    VL_ZERO_W(512, __PVT__OUT_data);
    // Body
    vlSelfRef.__VdlySet__mem__v0 = 0U;
    vlSelfRef.__VdlySet__mem__v1 = 0U;
    vlSelfRef.__VdlySet__mem__v2 = 0U;
    vlSelfRef.__VdlySet__mem__v3 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ce_reg)))) {
        if (vlSelfRef.__PVT__we_reg) {
            __PVT__OUT_data[0U] = vlSelfRef.mem[vlSelfRef.__PVT__addr_reg][0U];
            __PVT__OUT_data[1U] = vlSelfRef.mem[vlSelfRef.__PVT__addr_reg][1U];
            __PVT__OUT_data[2U] = vlSelfRef.mem[vlSelfRef.__PVT__addr_reg][2U];
            __PVT__OUT_data[3U] = vlSelfRef.mem[vlSelfRef.__PVT__addr_reg][3U];
            __PVT__OUT_data[4U] = vlSelfRef.mem[vlSelfRef.__PVT__addr_reg][4U];
            __PVT__OUT_data[5U] = vlSelfRef.mem[vlSelfRef.__PVT__addr_reg][5U];
            __PVT__OUT_data[6U] = vlSelfRef.mem[vlSelfRef.__PVT__addr_reg][6U];
            __PVT__OUT_data[7U] = vlSelfRef.mem[vlSelfRef.__PVT__addr_reg][7U];
            __PVT__OUT_data[8U] = vlSelfRef.mem[vlSelfRef.__PVT__addr_reg][8U];
            __PVT__OUT_data[9U] = vlSelfRef.mem[vlSelfRef.__PVT__addr_reg][9U];
            __PVT__OUT_data[0xaU] = vlSelfRef.mem[vlSelfRef.__PVT__addr_reg][0xaU];
            __PVT__OUT_data[0xbU] = vlSelfRef.mem[vlSelfRef.__PVT__addr_reg][0xbU];
            __PVT__OUT_data[0xcU] = vlSelfRef.mem[vlSelfRef.__PVT__addr_reg][0xcU];
            __PVT__OUT_data[0xdU] = vlSelfRef.mem[vlSelfRef.__PVT__addr_reg][0xdU];
            __PVT__OUT_data[0xeU] = vlSelfRef.mem[vlSelfRef.__PVT__addr_reg][0xeU];
            __PVT__OUT_data[0xfU] = vlSelfRef.mem[vlSelfRef.__PVT__addr_reg][0xfU];
        } else {
            if ((1U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__VdlyVal__mem__v0[0U] = 
                    vlSelfRef.__PVT__data_reg[0U];
                vlSelfRef.__VdlyVal__mem__v0[1U] = 
                    vlSelfRef.__PVT__data_reg[1U];
                vlSelfRef.__VdlyVal__mem__v0[2U] = 
                    vlSelfRef.__PVT__data_reg[2U];
                vlSelfRef.__VdlyVal__mem__v0[3U] = 
                    vlSelfRef.__PVT__data_reg[3U];
                vlSelfRef.__VdlyDim0__mem__v0 = vlSelfRef.__PVT__addr_reg;
                vlSelfRef.__VdlySet__mem__v0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__VdlyVal__mem__v1[0U] = 
                    vlSelfRef.__PVT__data_reg[4U];
                vlSelfRef.__VdlyVal__mem__v1[1U] = 
                    vlSelfRef.__PVT__data_reg[5U];
                vlSelfRef.__VdlyVal__mem__v1[2U] = 
                    vlSelfRef.__PVT__data_reg[6U];
                vlSelfRef.__VdlyVal__mem__v1[3U] = 
                    vlSelfRef.__PVT__data_reg[7U];
                vlSelfRef.__VdlyDim0__mem__v1 = vlSelfRef.__PVT__addr_reg;
                vlSelfRef.__VdlySet__mem__v1 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__VdlyVal__mem__v2[0U] = 
                    vlSelfRef.__PVT__data_reg[8U];
                vlSelfRef.__VdlyVal__mem__v2[1U] = 
                    vlSelfRef.__PVT__data_reg[9U];
                vlSelfRef.__VdlyVal__mem__v2[2U] = 
                    vlSelfRef.__PVT__data_reg[0xaU];
                vlSelfRef.__VdlyVal__mem__v2[3U] = 
                    vlSelfRef.__PVT__data_reg[0xbU];
                vlSelfRef.__VdlyDim0__mem__v2 = vlSelfRef.__PVT__addr_reg;
                vlSelfRef.__VdlySet__mem__v2 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__VdlyVal__mem__v3[0U] = 
                    vlSelfRef.__PVT__data_reg[0xcU];
                vlSelfRef.__VdlyVal__mem__v3[1U] = 
                    vlSelfRef.__PVT__data_reg[0xdU];
                vlSelfRef.__VdlyVal__mem__v3[2U] = 
                    vlSelfRef.__PVT__data_reg[0xeU];
                vlSelfRef.__VdlyVal__mem__v3[3U] = 
                    vlSelfRef.__PVT__data_reg[0xfU];
                vlSelfRef.__VdlyDim0__mem__v3 = vlSelfRef.__PVT__addr_reg;
                vlSelfRef.__VdlySet__mem__v3 = 1U;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ce1_reg)))) {
        vlSelfRef.__PVT__OUT_data1[0U] = vlSelfRef.mem
            [vlSelfRef.__PVT__addr1_reg][0U];
        vlSelfRef.__PVT__OUT_data1[1U] = vlSelfRef.mem
            [vlSelfRef.__PVT__addr1_reg][1U];
        vlSelfRef.__PVT__OUT_data1[2U] = vlSelfRef.mem
            [vlSelfRef.__PVT__addr1_reg][2U];
        vlSelfRef.__PVT__OUT_data1[3U] = vlSelfRef.mem
            [vlSelfRef.__PVT__addr1_reg][3U];
        vlSelfRef.__PVT__OUT_data1[4U] = vlSelfRef.mem
            [vlSelfRef.__PVT__addr1_reg][4U];
        vlSelfRef.__PVT__OUT_data1[5U] = vlSelfRef.mem
            [vlSelfRef.__PVT__addr1_reg][5U];
        vlSelfRef.__PVT__OUT_data1[6U] = vlSelfRef.mem
            [vlSelfRef.__PVT__addr1_reg][6U];
        vlSelfRef.__PVT__OUT_data1[7U] = vlSelfRef.mem
            [vlSelfRef.__PVT__addr1_reg][7U];
        vlSelfRef.__PVT__OUT_data1[8U] = vlSelfRef.mem
            [vlSelfRef.__PVT__addr1_reg][8U];
        vlSelfRef.__PVT__OUT_data1[9U] = vlSelfRef.mem
            [vlSelfRef.__PVT__addr1_reg][9U];
        vlSelfRef.__PVT__OUT_data1[0xaU] = vlSelfRef.mem
            [vlSelfRef.__PVT__addr1_reg][0xaU];
        vlSelfRef.__PVT__OUT_data1[0xbU] = vlSelfRef.mem
            [vlSelfRef.__PVT__addr1_reg][0xbU];
        vlSelfRef.__PVT__OUT_data1[0xcU] = vlSelfRef.mem
            [vlSelfRef.__PVT__addr1_reg][0xcU];
        vlSelfRef.__PVT__OUT_data1[0xdU] = vlSelfRef.mem
            [vlSelfRef.__PVT__addr1_reg][0xdU];
        vlSelfRef.__PVT__OUT_data1[0xeU] = vlSelfRef.mem
            [vlSelfRef.__PVT__addr1_reg][0xeU];
        vlSelfRef.__PVT__OUT_data1[0xfU] = vlSelfRef.mem
            [vlSelfRef.__PVT__addr1_reg][0xfU];
    }
    if (((((~ (IData)(vlSelfRef.__PVT__ce1_reg)) & 
           (~ (IData)(vlSelfRef.__PVT__ce_reg))) & 
          ((IData)(vlSelfRef.__PVT__addr1_reg) == (IData)(vlSelfRef.__PVT__addr_reg))) 
         & (~ (IData)(vlSelfRef.__PVT__we_reg)))) {
        if ((1U & (IData)(vlSelfRef.__PVT__wm_reg))) {
            vlSelfRef.__PVT__OUT_data1[0U] = vlSelfRef.__PVT__data_reg[0U];
            vlSelfRef.__PVT__OUT_data1[1U] = vlSelfRef.__PVT__data_reg[1U];
            vlSelfRef.__PVT__OUT_data1[2U] = vlSelfRef.__PVT__data_reg[2U];
            vlSelfRef.__PVT__OUT_data1[3U] = vlSelfRef.__PVT__data_reg[3U];
        }
        if ((2U & (IData)(vlSelfRef.__PVT__wm_reg))) {
            vlSelfRef.__PVT__OUT_data1[4U] = vlSelfRef.__PVT__data_reg[4U];
            vlSelfRef.__PVT__OUT_data1[5U] = vlSelfRef.__PVT__data_reg[5U];
            vlSelfRef.__PVT__OUT_data1[6U] = vlSelfRef.__PVT__data_reg[6U];
            vlSelfRef.__PVT__OUT_data1[7U] = vlSelfRef.__PVT__data_reg[7U];
        }
        if ((4U & (IData)(vlSelfRef.__PVT__wm_reg))) {
            vlSelfRef.__PVT__OUT_data1[8U] = vlSelfRef.__PVT__data_reg[8U];
            vlSelfRef.__PVT__OUT_data1[9U] = vlSelfRef.__PVT__data_reg[9U];
            vlSelfRef.__PVT__OUT_data1[0xaU] = vlSelfRef.__PVT__data_reg[0xaU];
            vlSelfRef.__PVT__OUT_data1[0xbU] = vlSelfRef.__PVT__data_reg[0xbU];
        }
        if ((8U & (IData)(vlSelfRef.__PVT__wm_reg))) {
            vlSelfRef.__PVT__OUT_data1[0xcU] = vlSelfRef.__PVT__data_reg[0xcU];
            vlSelfRef.__PVT__OUT_data1[0xdU] = vlSelfRef.__PVT__data_reg[0xdU];
            vlSelfRef.__PVT__OUT_data1[0xeU] = vlSelfRef.__PVT__data_reg[0xeU];
            vlSelfRef.__PVT__OUT_data1[0xfU] = vlSelfRef.__PVT__data_reg[0xfU];
        }
    }
}
