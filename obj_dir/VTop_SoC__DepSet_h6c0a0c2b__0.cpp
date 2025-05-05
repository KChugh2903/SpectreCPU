// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_SoC.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_SoC___ico_sequent__TOP__Top__soc__1(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___ico_sequent__TOP__Top__soc__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*157:0*/ __Vlvbound_hab9b7766__0;
    VL_ZERO_W(158, __Vlvbound_hab9b7766__0);
    CData/*0:0*/ __Vlvbound_hc8e55215__0;
    __Vlvbound_hc8e55215__0 = 0;
    IData/*31:0*/ __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx;
    __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx = 0;
    CData/*0:0*/ dcacheArb__DOT____Vlvbound_h516ee325__0;
    dcacheArb__DOT____Vlvbound_h516ee325__0 = 0;
    CData/*0:0*/ dcacheArb__DOT____Vlvbound_h55455065__0;
    dcacheArb__DOT____Vlvbound_h55455065__0 = 0;
    CData/*0:0*/ dcacheArb__DOT____Vlvbound_h51255741__0;
    dcacheArb__DOT____Vlvbound_h51255741__0 = 0;
    CData/*0:0*/ dcacheArb__DOT____Vlvbound_h6686e062__0;
    dcacheArb__DOT____Vlvbound_h6686e062__0 = 0;
    CData/*0:0*/ dcacheArb__DOT____Vlvbound_hc3302d19__0;
    dcacheArb__DOT____Vlvbound_hc3302d19__0 = 0;
    CData/*0:0*/ dcacheArb__DOT____Vlvbound_h99f045f5__0;
    dcacheArb__DOT____Vlvbound_h99f045f5__0 = 0;
    CData/*1:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*5:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*0:0*/ dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT____Vlvbound_h2cbe7a93__0;
    dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT____Vlvbound_h2cbe7a93__0 = 0;
    CData/*0:0*/ dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT____Vlvbound_h78b6eef7__0;
    dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*1:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*5:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*0:0*/ dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT____Vlvbound_h2cbe7a93__0;
    dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT____Vlvbound_h2cbe7a93__0 = 0;
    CData/*0:0*/ dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT____Vlvbound_h78b6eef7__0;
    dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*1:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*5:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*0:0*/ dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT____Vlvbound_h2cbe7a93__0;
    dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT____Vlvbound_h2cbe7a93__0 = 0;
    CData/*0:0*/ dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT____Vlvbound_h78b6eef7__0;
    dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*1:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*5:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*0:0*/ dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT____Vlvbound_h2cbe7a93__0;
    dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT____Vlvbound_h2cbe7a93__0 = 0;
    CData/*0:0*/ dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT____Vlvbound_h78b6eef7__0;
    dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT____Vlvbound_h78b6eef7__0 = 0;
    // Body
    vlSelfRef.__PVT__cacheWriteIFs[0U][0U] = vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_data[0U];
    vlSelfRef.__PVT__cacheWriteIFs[0U][1U] = vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_data[1U];
    vlSelfRef.__PVT__cacheWriteIFs[0U][2U] = vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_data[2U];
    vlSelfRef.__PVT__cacheWriteIFs[0U][3U] = vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_data[3U];
    vlSelfRef.__PVT__cacheWriteIFs[0U][4U] = (0x3fffffffU 
                                              & (0xffff000U 
                                                 | ((((IData)(vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_ce) 
                                                      << 0x1dU) 
                                                     | ((IData)(vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_we) 
                                                        << 0x1cU)) 
                                                    | (IData)(vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_addr))));
    vlSelfRef.__PVT__cacheWriteIFs[1U][0U] = vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[8U];
    vlSelfRef.__PVT__cacheWriteIFs[1U][1U] = vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[9U];
    vlSelfRef.__PVT__cacheWriteIFs[1U][2U] = vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[0xaU];
    vlSelfRef.__PVT__cacheWriteIFs[1U][3U] = vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[0xbU];
    vlSelfRef.__PVT__cacheWriteIFs[1U][4U] = (0x3fffffffU 
                                              & (((0x20000000U 
                                                   & ((~ 
                                                       ((~ 
                                                         ((IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__re) 
                                                          >> 2U)) 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__we) 
                                                            >> 2U)))) 
                                                      << 0x1dU)) 
                                                  | (0x10000000U 
                                                     & ((IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__we) 
                                                        << 0x1aU))) 
                                                 | ((0xffff000U 
                                                     & ((IData)(
                                                                (vlSymsp->TOP__Top__soc__IF_cache.__PVT__wmask 
                                                                 >> 0x20U)) 
                                                        << 0xcU)) 
                                                    | ((0xc00U 
                                                        & ((IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__wassoc) 
                                                           << 6U)) 
                                                       | (0x3ffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__Top__soc__IF_cache.__PVT__addr 
                                                                     >> 0x1aU)))))));
    vlSelfRef.__PVT__cacheReadIFs[0U][0U] = vlSelfRef.__PVT__MC_DC_rd[0U];
    vlSelfRef.__PVT__cacheReadIFs[0U][1U] = vlSelfRef.__PVT__MC_DC_rd[1U];
    vlSelfRef.__PVT__cacheReadIFs[0U][2U] = vlSelfRef.__PVT__MC_DC_rd[2U];
    vlSelfRef.__PVT__cacheReadIFs[0U][3U] = vlSelfRef.__PVT__MC_DC_rd[3U];
    vlSelfRef.__PVT__cacheReadIFs[0U][4U] = vlSelfRef.__PVT__MC_DC_rd[4U];
    __Vlvbound_hab9b7766__0[0U] = vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[0U];
    __Vlvbound_hab9b7766__0[1U] = vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[1U];
    __Vlvbound_hab9b7766__0[2U] = vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[2U];
    __Vlvbound_hab9b7766__0[3U] = vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[3U];
    __Vlvbound_hab9b7766__0[4U] = (0x3fffffffU & ((
                                                   (0x20000000U 
                                                    & ((IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__re) 
                                                       << 0x1dU)) 
                                                   | (0x10000000U 
                                                      & ((IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__we) 
                                                         << 0x1cU))) 
                                                  | ((0xffff000U 
                                                      & ((IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__wmask) 
                                                         << 0xcU)) 
                                                     | ((0xc00U 
                                                         & ((IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__wassoc) 
                                                            << 0xaU)) 
                                                        | (0x3ffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Top__soc__IF_cache.__PVT__addr 
                                                                      >> 2U)))))));
    vlSelfRef.__PVT__cacheReadIFs[1U][0U] = __Vlvbound_hab9b7766__0[0U];
    vlSelfRef.__PVT__cacheReadIFs[1U][1U] = __Vlvbound_hab9b7766__0[1U];
    vlSelfRef.__PVT__cacheReadIFs[1U][2U] = __Vlvbound_hab9b7766__0[2U];
    vlSelfRef.__PVT__cacheReadIFs[1U][3U] = __Vlvbound_hab9b7766__0[3U];
    vlSelfRef.__PVT__cacheReadIFs[1U][4U] = __Vlvbound_hab9b7766__0[4U];
    __Vlvbound_hab9b7766__0[0U] = vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[4U];
    __Vlvbound_hab9b7766__0[1U] = vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[5U];
    __Vlvbound_hab9b7766__0[2U] = vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[6U];
    __Vlvbound_hab9b7766__0[3U] = vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[7U];
    __Vlvbound_hab9b7766__0[4U] = (0x3fffffffU & ((
                                                   (0x20000000U 
                                                    & ((IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__re) 
                                                       << 0x1cU)) 
                                                   | (0x10000000U 
                                                      & ((IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__we) 
                                                         << 0x1bU))) 
                                                  | ((0xffff000U 
                                                      & ((IData)(
                                                                 (vlSymsp->TOP__Top__soc__IF_cache.__PVT__wmask 
                                                                  >> 0x10U)) 
                                                         << 0xcU)) 
                                                     | ((0xc00U 
                                                         & ((IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__wassoc) 
                                                            << 8U)) 
                                                        | (0x3ffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Top__soc__IF_cache.__PVT__addr 
                                                                      >> 0xeU)))))));
    vlSelfRef.__PVT__cacheReadIFs[2U][0U] = __Vlvbound_hab9b7766__0[0U];
    vlSelfRef.__PVT__cacheReadIFs[2U][1U] = __Vlvbound_hab9b7766__0[1U];
    vlSelfRef.__PVT__cacheReadIFs[2U][2U] = __Vlvbound_hab9b7766__0[2U];
    vlSelfRef.__PVT__cacheReadIFs[2U][3U] = __Vlvbound_hab9b7766__0[3U];
    vlSelfRef.__PVT__cacheReadIFs[2U][4U] = __Vlvbound_hab9b7766__0[4U];
    if ((1U & (IData)(vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c))) {
        vlSelfRef.__PVT__genblk3__BRA__0__KET____DOT__dctAddr 
            = (0xfffU & (IData)((vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                 >> 1U)));
        vlSelfRef.__PVT__genblk3__BRA__1__KET____DOT__dctAddr 
            = (0xfffU & (IData)((vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                 >> 1U)));
        vlSelfRef.__PVT__genblk3__BRA__2__KET____DOT__dctAddr 
            = (0xfffU & (IData)((vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                 >> 1U)));
    } else {
        vlSelfRef.__PVT__genblk3__BRA__0__KET____DOT__dctAddr 
            = (0xfffU & vlSymsp->TOP__Top__soc__IF_ct.__PVT__raddr
               [0U]);
        vlSelfRef.__PVT__genblk3__BRA__1__KET____DOT__dctAddr 
            = (0xfffU & vlSymsp->TOP__Top__soc__IF_ct.__PVT__raddr
               [1U]);
        vlSelfRef.__PVT__genblk3__BRA__2__KET____DOT__dctAddr 
            = (0xfffU & vlSymsp->TOP__Top__soc__IF_ct.__PVT__raddr
               [2U]);
    }
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__reqUnary_w 
        = ((2U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__reqUnary_w)) 
           | ((~ (vlSelfRef.__PVT__cacheWriteIFs[0U][4U] 
                  >> 0x1dU)) & (0U == (3U & (vlSelfRef.__PVT__cacheWriteIFs
                                             [0U][4U] 
                                             >> 2U)))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__reqUnary_w 
        = ((1U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__reqUnary_w)) 
           | (((~ (vlSelfRef.__PVT__cacheWriteIFs[1U][4U] 
                   >> 0x1dU)) & (0U == (3U & (vlSelfRef.__PVT__cacheWriteIFs
                                              [1U][4U] 
                                              >> 2U)))) 
              << 1U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__reqUnary_w 
        = ((2U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__reqUnary_w)) 
           | ((~ (vlSelfRef.__PVT__cacheWriteIFs[0U][4U] 
                  >> 0x1dU)) & (1U == (3U & (vlSelfRef.__PVT__cacheWriteIFs
                                             [0U][4U] 
                                             >> 2U)))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__reqUnary_w 
        = ((1U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__reqUnary_w)) 
           | (((~ (vlSelfRef.__PVT__cacheWriteIFs[1U][4U] 
                   >> 0x1dU)) & (1U == (3U & (vlSelfRef.__PVT__cacheWriteIFs
                                              [1U][4U] 
                                              >> 2U)))) 
              << 1U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__reqUnary_w 
        = ((2U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__reqUnary_w)) 
           | ((~ (vlSelfRef.__PVT__cacheWriteIFs[0U][4U] 
                  >> 0x1dU)) & (2U == (3U & (vlSelfRef.__PVT__cacheWriteIFs
                                             [0U][4U] 
                                             >> 2U)))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__reqUnary_w 
        = ((1U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__reqUnary_w)) 
           | (((~ (vlSelfRef.__PVT__cacheWriteIFs[1U][4U] 
                   >> 0x1dU)) & (2U == (3U & (vlSelfRef.__PVT__cacheWriteIFs
                                              [1U][4U] 
                                              >> 2U)))) 
              << 1U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__reqUnary_w 
        = ((2U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__reqUnary_w)) 
           | ((~ (vlSelfRef.__PVT__cacheWriteIFs[0U][4U] 
                  >> 0x1dU)) & (3U == (3U & (vlSelfRef.__PVT__cacheWriteIFs
                                             [0U][4U] 
                                             >> 2U)))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__reqUnary_w 
        = ((1U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__reqUnary_w)) 
           | (((~ (vlSelfRef.__PVT__cacheWriteIFs[1U][4U] 
                   >> 0x1dU)) & (3U == (3U & (vlSelfRef.__PVT__cacheWriteIFs
                                              [1U][4U] 
                                              >> 2U)))) 
              << 1U));
    dcacheArb__DOT____Vlvbound_h516ee325__0 = ((~ (
                                                   vlSelfRef.__PVT__cacheReadIFs
                                                   [0U][4U] 
                                                   >> 0x1dU)) 
                                               & (0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__cacheReadIFs
                                                      [0U][4U] 
                                                      >> 2U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__reqUnary_r 
        = ((6U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__reqUnary_r)) 
           | (IData)(dcacheArb__DOT____Vlvbound_h516ee325__0));
    dcacheArb__DOT____Vlvbound_h516ee325__0 = ((~ (
                                                   vlSelfRef.__PVT__cacheReadIFs
                                                   [1U][4U] 
                                                   >> 0x1dU)) 
                                               & (0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__cacheReadIFs
                                                      [1U][4U] 
                                                      >> 2U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__reqUnary_r 
        = ((5U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__reqUnary_r)) 
           | ((IData)(dcacheArb__DOT____Vlvbound_h516ee325__0) 
              << 1U));
    dcacheArb__DOT____Vlvbound_h516ee325__0 = ((~ (
                                                   vlSelfRef.__PVT__cacheReadIFs
                                                   [2U][4U] 
                                                   >> 0x1dU)) 
                                               & (0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__cacheReadIFs
                                                      [2U][4U] 
                                                      >> 2U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__reqUnary_r 
        = ((3U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__reqUnary_r)) 
           | ((IData)(dcacheArb__DOT____Vlvbound_h516ee325__0) 
              << 2U));
    dcacheArb__DOT____Vlvbound_h55455065__0 = ((~ (
                                                   vlSelfRef.__PVT__cacheReadIFs
                                                   [0U][4U] 
                                                   >> 0x1dU)) 
                                               & (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__cacheReadIFs
                                                      [0U][4U] 
                                                      >> 2U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__reqUnary_r 
        = ((6U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__reqUnary_r)) 
           | (IData)(dcacheArb__DOT____Vlvbound_h55455065__0));
    dcacheArb__DOT____Vlvbound_h55455065__0 = ((~ (
                                                   vlSelfRef.__PVT__cacheReadIFs
                                                   [1U][4U] 
                                                   >> 0x1dU)) 
                                               & (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__cacheReadIFs
                                                      [1U][4U] 
                                                      >> 2U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__reqUnary_r 
        = ((5U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__reqUnary_r)) 
           | ((IData)(dcacheArb__DOT____Vlvbound_h55455065__0) 
              << 1U));
    dcacheArb__DOT____Vlvbound_h55455065__0 = ((~ (
                                                   vlSelfRef.__PVT__cacheReadIFs
                                                   [2U][4U] 
                                                   >> 0x1dU)) 
                                               & (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__cacheReadIFs
                                                      [2U][4U] 
                                                      >> 2U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__reqUnary_r 
        = ((3U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__reqUnary_r)) 
           | ((IData)(dcacheArb__DOT____Vlvbound_h55455065__0) 
              << 2U));
    dcacheArb__DOT____Vlvbound_h51255741__0 = ((~ (
                                                   vlSelfRef.__PVT__cacheReadIFs
                                                   [0U][4U] 
                                                   >> 0x1dU)) 
                                               & (2U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__cacheReadIFs
                                                      [0U][4U] 
                                                      >> 2U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__reqUnary_r 
        = ((6U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__reqUnary_r)) 
           | (IData)(dcacheArb__DOT____Vlvbound_h51255741__0));
    dcacheArb__DOT____Vlvbound_h51255741__0 = ((~ (
                                                   vlSelfRef.__PVT__cacheReadIFs
                                                   [1U][4U] 
                                                   >> 0x1dU)) 
                                               & (2U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__cacheReadIFs
                                                      [1U][4U] 
                                                      >> 2U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__reqUnary_r 
        = ((5U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__reqUnary_r)) 
           | ((IData)(dcacheArb__DOT____Vlvbound_h51255741__0) 
              << 1U));
    dcacheArb__DOT____Vlvbound_h51255741__0 = ((~ (
                                                   vlSelfRef.__PVT__cacheReadIFs
                                                   [2U][4U] 
                                                   >> 0x1dU)) 
                                               & (2U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__cacheReadIFs
                                                      [2U][4U] 
                                                      >> 2U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__reqUnary_r 
        = ((3U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__reqUnary_r)) 
           | ((IData)(dcacheArb__DOT____Vlvbound_h51255741__0) 
              << 2U));
    dcacheArb__DOT____Vlvbound_h6686e062__0 = ((~ (
                                                   vlSelfRef.__PVT__cacheReadIFs
                                                   [0U][4U] 
                                                   >> 0x1dU)) 
                                               & (3U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__cacheReadIFs
                                                      [0U][4U] 
                                                      >> 2U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__reqUnary_r 
        = ((6U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__reqUnary_r)) 
           | (IData)(dcacheArb__DOT____Vlvbound_h6686e062__0));
    dcacheArb__DOT____Vlvbound_h6686e062__0 = ((~ (
                                                   vlSelfRef.__PVT__cacheReadIFs
                                                   [1U][4U] 
                                                   >> 0x1dU)) 
                                               & (3U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__cacheReadIFs
                                                      [1U][4U] 
                                                      >> 2U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__reqUnary_r 
        = ((5U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__reqUnary_r)) 
           | ((IData)(dcacheArb__DOT____Vlvbound_h6686e062__0) 
              << 1U));
    dcacheArb__DOT____Vlvbound_h6686e062__0 = ((~ (
                                                   vlSelfRef.__PVT__cacheReadIFs
                                                   [2U][4U] 
                                                   >> 0x1dU)) 
                                               & (3U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__cacheReadIFs
                                                      [2U][4U] 
                                                      >> 2U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__reqUnary_r 
        = ((3U & (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__reqUnary_r)) 
           | ((IData)(dcacheArb__DOT____Vlvbound_h6686e062__0) 
              << 2U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__reqUnary_w)));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__reqUnary_w) 
                    >> 1U)));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__reqUnary_w)));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__reqUnary_w) 
                    >> 1U)));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__reqUnary_w)));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__reqUnary_w) 
                    >> 1U)));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__reqUnary_w)));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__reqUnary_w) 
                    >> 1U)));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (2U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = ((2U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
            [0U]) | (1U & (~ (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__reqUnary_r))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (2U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = ((2U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
            [1U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__reqUnary_r) 
                              >> 1U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (2U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = ((2U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
            [2U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__reqUnary_r) 
                              >> 2U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (2U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = ((2U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
            [3U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__reqUnary_r) 
                              >> 3U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (2U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = ((2U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
            [0U]) | (1U & (~ (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__reqUnary_r))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (2U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = ((2U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
            [1U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__reqUnary_r) 
                              >> 1U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (2U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = ((2U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
            [2U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__reqUnary_r) 
                              >> 2U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (2U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = ((2U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
            [3U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__reqUnary_r) 
                              >> 3U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (2U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = ((2U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
            [0U]) | (1U & (~ (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__reqUnary_r))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (2U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = ((2U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
            [1U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__reqUnary_r) 
                              >> 1U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (2U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = ((2U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
            [2U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__reqUnary_r) 
                              >> 2U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (2U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = ((2U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
            [3U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__reqUnary_r) 
                              >> 3U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (2U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = ((2U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
            [0U]) | (1U & (~ (IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__reqUnary_r))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (2U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = ((2U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
            [1U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__reqUnary_r) 
                              >> 1U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (2U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = ((2U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
            [2U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__reqUnary_r) 
                              >> 2U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (2U | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = ((2U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
            [3U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__reqUnary_r) 
                              >> 3U))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    __PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                           [0U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                                                  [0U]))));
    __PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                           [2U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                                                  [2U]))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                 [1U] >> 1U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                 [0U] >> 1U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                 [3U] >> 1U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                 [2U] >> 1U));
    __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                           [0U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                                                  [0U]))));
    __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                           [2U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                                                  [2U]))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                 [1U] >> 1U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                 [0U] >> 1U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                 [3U] >> 1U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                 [2U] >> 1U));
    __PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                           [0U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                                                  [0U]))));
    __PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                           [2U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                                                  [2U]))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                 [1U] >> 1U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                 [0U] >> 1U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                 [3U] >> 1U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                 [2U] >> 1U));
    __PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                           [0U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                                                  [0U]))));
    __PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                           [2U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                                                  [2U]))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                 [1U] >> 1U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                 [0U] >> 1U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                 [3U] >> 1U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                 [2U] >> 1U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((0xcU & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((2U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 1U)) | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((0xcU & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((2U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 1U)) | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                             [2U]))]));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((8U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 2U)) | (((2U >= (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((8U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 2U)) | (((2U >= (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((0xcU & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((2U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 1U)) | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((0xcU & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((2U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 1U)) | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                             [2U]))]));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((8U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 2U)) | (((2U >= (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((8U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 2U)) | (((2U >= (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((0xcU & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((2U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 1U)) | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((0xcU & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((2U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 1U)) | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                             [2U]))]));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((8U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 2U)) | (((2U >= (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((8U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 2U)) | (((2U >= (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((0xcU & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((2U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 1U)) | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((0xcU & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((2U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 1U)) | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                             [2U]))]));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((8U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 2U)) | (((2U >= (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((8U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 2U)) | (((2U >= (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    __PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT____Vlvbound_h2cbe7a93__0 
        = (1U & ((IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__0__KET____DOT__penc_w____pinNumber2[0U] 
        = dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT____Vlvbound_h2cbe7a93__0;
    dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__0__KET____DOT__penc_w____pinNumber3[0U] 
        = dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT____Vlvbound_h78b6eef7__0;
    __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT____Vlvbound_h2cbe7a93__0 
        = (1U & ((IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__1__KET____DOT__penc_w____pinNumber2[0U] 
        = dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT____Vlvbound_h2cbe7a93__0;
    dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__1__KET____DOT__penc_w____pinNumber3[0U] 
        = dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT____Vlvbound_h78b6eef7__0;
    __PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT____Vlvbound_h2cbe7a93__0 
        = (1U & ((IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__2__KET____DOT__penc_w____pinNumber2[0U] 
        = dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT____Vlvbound_h2cbe7a93__0;
    dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__2__KET____DOT__penc_w____pinNumber3[0U] 
        = dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT____Vlvbound_h78b6eef7__0;
    __PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT____Vlvbound_h2cbe7a93__0 
        = (1U & ((IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__3__KET____DOT__penc_w____pinNumber2[0U] 
        = dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT____Vlvbound_h2cbe7a93__0;
    dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__3__KET____DOT__penc_w____pinNumber3[0U] 
        = dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT____Vlvbound_h78b6eef7__0;
    __PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                           [0U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                                                  [0U]))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 2U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                 [0U] >> 2U));
    __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                           [0U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                                                  [0U]))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 2U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                 [0U] >> 2U));
    __PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                           [0U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                                                  [0U]))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 2U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                 [0U] >> 2U));
    __PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                           [0U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                                                  [0U]))));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 2U));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                 [0U] >> 2U));
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w[0U][0U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__0__KET____DOT__penc_w____pinNumber2
        [0U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w[0U][0U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__0__KET____DOT__penc_w____pinNumber3
        [0U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w[1U][0U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__1__KET____DOT__penc_w____pinNumber2
        [0U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w[1U][0U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__1__KET____DOT__penc_w____pinNumber3
        [0U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w[2U][0U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__2__KET____DOT__penc_w____pinNumber2
        [0U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w[2U][0U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__2__KET____DOT__penc_w____pinNumber3
        [0U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w[3U][0U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__3__KET____DOT__penc_w____pinNumber2
        [0U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w[3U][0U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__3__KET____DOT__penc_w____pinNumber3
        [0U];
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((0x38U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((4U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                            [0U] << 2U)) | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((7U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((0x20U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                               [0U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((0x38U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((4U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                            [0U] << 2U)) | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((7U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((0x20U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                               [0U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((0x38U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((4U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                            [0U] << 2U)) | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((7U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((0x20U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                               [0U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((0x38U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((4U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                            [0U] << 2U)) | vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((7U & vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((0x20U & (vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s
                               [0U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    vlSelfRef.__PVT__cacheWriteReady[0U] = 0U;
    vlSelfRef.__PVT__cacheWriteReady[1U] = 0U;
    if (vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
        [0U][0U]) {
        vlSelfRef.__PVT__cacheWriteReady[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w[0U][0U]] 
            = (vlSelfRef.__PVT__cacheWriteReady[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
               [0U][0U]] | vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
               [0U][0U]);
    }
    if (vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
        [1U][0U]) {
        vlSelfRef.__PVT__cacheWriteReady[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w[1U][0U]] 
            = (vlSelfRef.__PVT__cacheWriteReady[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
               [1U][0U]] | vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
               [1U][0U]);
    }
    if (vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
        [2U][0U]) {
        vlSelfRef.__PVT__cacheWriteReady[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w[2U][0U]] 
            = (vlSelfRef.__PVT__cacheWriteReady[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
               [2U][0U]] | vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
               [2U][0U]);
    }
    __PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__0__KET____DOT__penc_r____pinNumber2[0U] 
        = (3U & ((IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__0__KET____DOT__penc_r____pinNumber3[0U] 
        = (1U & (~ (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__0__KET____DOT__penc_r____pinNumber2[1U] 
        = (3U & ((IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 4U));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__0__KET____DOT__penc_r____pinNumber3[1U] 
        = (1U & (~ ((IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs) 
                    >> 3U)));
    __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__1__KET____DOT__penc_r____pinNumber2[0U] 
        = (3U & ((IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__1__KET____DOT__penc_r____pinNumber3[0U] 
        = (1U & (~ (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__1__KET____DOT__penc_r____pinNumber2[1U] 
        = (3U & ((IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 4U));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__1__KET____DOT__penc_r____pinNumber3[1U] 
        = (1U & (~ ((IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs) 
                    >> 3U)));
    __PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__2__KET____DOT__penc_r____pinNumber2[0U] 
        = (3U & ((IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__2__KET____DOT__penc_r____pinNumber3[0U] 
        = (1U & (~ (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__2__KET____DOT__penc_r____pinNumber2[1U] 
        = (3U & ((IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 4U));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__2__KET____DOT__penc_r____pinNumber3[1U] 
        = (1U & (~ ((IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs) 
                    >> 3U)));
    __PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__3__KET____DOT__penc_r____pinNumber2[0U] 
        = (3U & ((IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__3__KET____DOT__penc_r____pinNumber3[0U] 
        = (1U & (~ (IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__3__KET____DOT__penc_r____pinNumber2[1U] 
        = (3U & ((IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 4U));
    vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__3__KET____DOT__penc_r____pinNumber3[1U] 
        = (1U & (~ ((IData)(__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs) 
                    >> 3U)));
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r[0U][1U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__0__KET____DOT__penc_r____pinNumber3
        [1U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r[0U][0U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__0__KET____DOT__penc_r____pinNumber3
        [0U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[0U][1U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__0__KET____DOT__penc_r____pinNumber2
        [1U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[0U][0U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__0__KET____DOT__penc_r____pinNumber2
        [0U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r[1U][1U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__1__KET____DOT__penc_r____pinNumber3
        [1U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r[1U][0U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__1__KET____DOT__penc_r____pinNumber3
        [0U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[1U][1U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__1__KET____DOT__penc_r____pinNumber2
        [1U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[1U][0U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__1__KET____DOT__penc_r____pinNumber2
        [0U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r[2U][1U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__2__KET____DOT__penc_r____pinNumber3
        [1U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r[2U][0U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__2__KET____DOT__penc_r____pinNumber3
        [0U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[2U][1U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__2__KET____DOT__penc_r____pinNumber2
        [1U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[2U][0U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__2__KET____DOT__penc_r____pinNumber2
        [0U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r[3U][1U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__3__KET____DOT__penc_r____pinNumber3
        [1U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r[3U][0U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__3__KET____DOT__penc_r____pinNumber3
        [0U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[3U][1U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__3__KET____DOT__penc_r____pinNumber2
        [1U];
    vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[3U][0U] 
        = vlSelfRef.dcacheArb__DOT____Vcellout__gen_banks__BRA__3__KET____DOT__penc_r____pinNumber2
        [0U];
    vlSelfRef.__PVT__dcacheArb__DOT__outPortIdx[0U] = 0U;
    vlSelfRef.__PVT__dcacheArb__DOT__outPortIdx[1U] = 0U;
    vlSelfRef.__PVT__dcacheArb__DOT__outPortIdx[2U] = 0U;
    dcacheArb__DOT____Vlvbound_h99f045f5__0 = 0U;
    if ((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
         [0U][0U])) {
        vlSelfRef.__PVT__dcacheArb__DOT__outPortIdx[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[0U][0U]] 
            = dcacheArb__DOT____Vlvbound_h99f045f5__0;
    }
    dcacheArb__DOT____Vlvbound_h99f045f5__0 = 0U;
    if ((1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
               [0U][0U]))) {
        vlSelfRef.dcacheArb__DOT____Vlvbound_h55a4caa8__0 = 1U;
        if ((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
             [0U][1U])) {
            vlSelfRef.__PVT__dcacheArb__DOT__outPortIdx[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[0U][1U]] 
                = vlSelfRef.dcacheArb__DOT____Vlvbound_h55a4caa8__0;
        }
    }
    if ((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
         [1U][0U])) {
        vlSelfRef.__PVT__dcacheArb__DOT__outPortIdx[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[1U][0U]] 
            = dcacheArb__DOT____Vlvbound_h99f045f5__0;
    }
    dcacheArb__DOT____Vlvbound_h99f045f5__0 = 0U;
    if ((1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
               [1U][0U]))) {
        vlSelfRef.dcacheArb__DOT____Vlvbound_h55a4caa8__0 = 1U;
        if ((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
             [1U][1U])) {
            vlSelfRef.__PVT__dcacheArb__DOT__outPortIdx[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[1U][1U]] 
                = vlSelfRef.dcacheArb__DOT____Vlvbound_h55a4caa8__0;
        }
    }
    if ((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
         [2U][0U])) {
        vlSelfRef.__PVT__dcacheArb__DOT__outPortIdx[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[2U][0U]] 
            = dcacheArb__DOT____Vlvbound_h99f045f5__0;
    }
    dcacheArb__DOT____Vlvbound_h99f045f5__0 = 0U;
    if ((1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
               [2U][0U]))) {
        vlSelfRef.dcacheArb__DOT____Vlvbound_h55a4caa8__0 = 1U;
        if ((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
             [2U][1U])) {
            vlSelfRef.__PVT__dcacheArb__DOT__outPortIdx[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[2U][1U]] 
                = vlSelfRef.dcacheArb__DOT____Vlvbound_h55a4caa8__0;
        }
    }
    if ((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
         [3U][0U])) {
        vlSelfRef.__PVT__dcacheArb__DOT__outPortIdx[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[3U][0U]] 
            = dcacheArb__DOT____Vlvbound_h99f045f5__0;
    }
    vlSelfRef.__PVT__bankIFs[0U][0U][0U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [0U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [0U][0U] : 0U)][0U];
    vlSelfRef.__PVT__bankIFs[0U][0U][1U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [0U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [0U][0U] : 0U)][1U];
    vlSelfRef.__PVT__bankIFs[0U][0U][2U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [0U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [0U][0U] : 0U)][2U];
    vlSelfRef.__PVT__bankIFs[0U][0U][3U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [0U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [0U][0U] : 0U)][3U];
    vlSelfRef.__PVT__bankIFs[0U][0U][4U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [0U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [0U][0U] : 0U)][4U];
    vlSelfRef.__PVT__bankIFs[0U][0U][4U] = ((0x1fffffffU 
                                             & vlSelfRef.__PVT__bankIFs
                                             [0U][0U][4U]) 
                                            | (0x20000000U 
                                               & ((~ 
                                                   vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r
                                                   [0U]
                                                   [0U]) 
                                                  << 0x1dU)));
    __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx = 1U;
    if (vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
        [0U][0U]) {
        vlSelfRef.__PVT__bankIFs[0U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][0U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [0U][0U]][0U];
        vlSelfRef.__PVT__bankIFs[0U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][1U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [0U][0U]][1U];
        vlSelfRef.__PVT__bankIFs[0U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][2U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [0U][0U]][2U];
        vlSelfRef.__PVT__bankIFs[0U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][3U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [0U][0U]][3U];
        vlSelfRef.__PVT__bankIFs[0U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [0U][0U]][4U];
        vlSelfRef.__PVT__bankIFs[0U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U] 
            = ((0x1fffffffU & vlSelfRef.__PVT__bankIFs
                [0U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U]) 
               | (0x20000000U & ((~ vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
                                  [0U][0U]) << 0x1dU)));
    } else {
        vlSelfRef.__PVT__bankIFs[0U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][0U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [0U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [0U][1U]
                                              : 0U)][0U];
        vlSelfRef.__PVT__bankIFs[0U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][1U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [0U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [0U][1U]
                                              : 0U)][1U];
        vlSelfRef.__PVT__bankIFs[0U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][2U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [0U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [0U][1U]
                                              : 0U)][2U];
        vlSelfRef.__PVT__bankIFs[0U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][3U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [0U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [0U][1U]
                                              : 0U)][3U];
        vlSelfRef.__PVT__bankIFs[0U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [0U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [0U][1U]
                                              : 0U)][4U];
        vlSelfRef.__PVT__bankIFs[0U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U] 
            = ((0x1fffffffU & vlSelfRef.__PVT__bankIFs
                [0U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U]) 
               | (0x20000000U & ((~ vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r
                                  [0U][1U]) << 0x1dU)));
    }
    vlSelfRef.__PVT__bankIFs[1U][0U][0U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [1U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [1U][0U] : 0U)][0U];
    vlSelfRef.__PVT__bankIFs[1U][0U][1U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [1U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [1U][0U] : 0U)][1U];
    vlSelfRef.__PVT__bankIFs[1U][0U][2U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [1U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [1U][0U] : 0U)][2U];
    vlSelfRef.__PVT__bankIFs[1U][0U][3U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [1U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [1U][0U] : 0U)][3U];
    vlSelfRef.__PVT__bankIFs[1U][0U][4U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [1U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [1U][0U] : 0U)][4U];
    vlSelfRef.__PVT__bankIFs[1U][0U][4U] = ((0x1fffffffU 
                                             & vlSelfRef.__PVT__bankIFs
                                             [1U][0U][4U]) 
                                            | (0x20000000U 
                                               & ((~ 
                                                   vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r
                                                   [1U]
                                                   [0U]) 
                                                  << 0x1dU)));
    __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx = 1U;
    if (vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
        [1U][0U]) {
        vlSelfRef.__PVT__bankIFs[1U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][0U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [1U][0U]][0U];
        vlSelfRef.__PVT__bankIFs[1U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][1U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [1U][0U]][1U];
        vlSelfRef.__PVT__bankIFs[1U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][2U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [1U][0U]][2U];
        vlSelfRef.__PVT__bankIFs[1U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][3U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [1U][0U]][3U];
        vlSelfRef.__PVT__bankIFs[1U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [1U][0U]][4U];
        vlSelfRef.__PVT__bankIFs[1U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U] 
            = ((0x1fffffffU & vlSelfRef.__PVT__bankIFs
                [1U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U]) 
               | (0x20000000U & ((~ vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
                                  [1U][0U]) << 0x1dU)));
    } else {
        vlSelfRef.__PVT__bankIFs[1U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][0U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [1U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [1U][1U]
                                              : 0U)][0U];
        vlSelfRef.__PVT__bankIFs[1U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][1U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [1U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [1U][1U]
                                              : 0U)][1U];
        vlSelfRef.__PVT__bankIFs[1U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][2U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [1U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [1U][1U]
                                              : 0U)][2U];
        vlSelfRef.__PVT__bankIFs[1U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][3U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [1U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [1U][1U]
                                              : 0U)][3U];
        vlSelfRef.__PVT__bankIFs[1U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [1U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [1U][1U]
                                              : 0U)][4U];
        vlSelfRef.__PVT__bankIFs[1U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U] 
            = ((0x1fffffffU & vlSelfRef.__PVT__bankIFs
                [1U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U]) 
               | (0x20000000U & ((~ vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r
                                  [1U][1U]) << 0x1dU)));
    }
    vlSelfRef.__PVT__bankIFs[2U][0U][0U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [2U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [2U][0U] : 0U)][0U];
    vlSelfRef.__PVT__bankIFs[2U][0U][1U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [2U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [2U][0U] : 0U)][1U];
    vlSelfRef.__PVT__bankIFs[2U][0U][2U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [2U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [2U][0U] : 0U)][2U];
    vlSelfRef.__PVT__bankIFs[2U][0U][3U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [2U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [2U][0U] : 0U)][3U];
    vlSelfRef.__PVT__bankIFs[2U][0U][4U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [2U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [2U][0U] : 0U)][4U];
    vlSelfRef.__PVT__bankIFs[2U][0U][4U] = ((0x1fffffffU 
                                             & vlSelfRef.__PVT__bankIFs
                                             [2U][0U][4U]) 
                                            | (0x20000000U 
                                               & ((~ 
                                                   vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r
                                                   [2U]
                                                   [0U]) 
                                                  << 0x1dU)));
    __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx = 1U;
    if (vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
        [2U][0U]) {
        vlSelfRef.__PVT__bankIFs[2U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][0U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [2U][0U]][0U];
        vlSelfRef.__PVT__bankIFs[2U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][1U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [2U][0U]][1U];
        vlSelfRef.__PVT__bankIFs[2U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][2U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [2U][0U]][2U];
        vlSelfRef.__PVT__bankIFs[2U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][3U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [2U][0U]][3U];
        vlSelfRef.__PVT__bankIFs[2U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [2U][0U]][4U];
        vlSelfRef.__PVT__bankIFs[2U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U] 
            = ((0x1fffffffU & vlSelfRef.__PVT__bankIFs
                [2U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U]) 
               | (0x20000000U & ((~ vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
                                  [2U][0U]) << 0x1dU)));
    } else {
        vlSelfRef.__PVT__bankIFs[2U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][0U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [2U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [2U][1U]
                                              : 0U)][0U];
        vlSelfRef.__PVT__bankIFs[2U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][1U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [2U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [2U][1U]
                                              : 0U)][1U];
        vlSelfRef.__PVT__bankIFs[2U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][2U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [2U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [2U][1U]
                                              : 0U)][2U];
        vlSelfRef.__PVT__bankIFs[2U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][3U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [2U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [2U][1U]
                                              : 0U)][3U];
        vlSelfRef.__PVT__bankIFs[2U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [2U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [2U][1U]
                                              : 0U)][4U];
        vlSelfRef.__PVT__bankIFs[2U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U] 
            = ((0x1fffffffU & vlSelfRef.__PVT__bankIFs
                [2U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U]) 
               | (0x20000000U & ((~ vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r
                                  [2U][1U]) << 0x1dU)));
    }
    vlSelfRef.__PVT__bankIFs[3U][0U][0U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [3U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [3U][0U] : 0U)][0U];
    vlSelfRef.__PVT__bankIFs[3U][0U][1U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [3U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [3U][0U] : 0U)][1U];
    vlSelfRef.__PVT__bankIFs[3U][0U][2U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [3U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [3U][0U] : 0U)][2U];
    vlSelfRef.__PVT__bankIFs[3U][0U][3U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [3U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [3U][0U] : 0U)][3U];
    vlSelfRef.__PVT__bankIFs[3U][0U][4U] = vlSelfRef.__PVT__cacheReadIFs
        [((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
           [3U][0U]) ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
          [3U][0U] : 0U)][4U];
    vlSelfRef.__PVT__bankIFs[3U][0U][4U] = ((0x1fffffffU 
                                             & vlSelfRef.__PVT__bankIFs
                                             [3U][0U][4U]) 
                                            | (0x20000000U 
                                               & ((~ 
                                                   vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r
                                                   [3U]
                                                   [0U]) 
                                                  << 0x1dU)));
    __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx = 1U;
    if (vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
        [3U][0U]) {
        vlSelfRef.__PVT__cacheWriteReady[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w[3U][0U]] 
            = (vlSelfRef.__PVT__cacheWriteReady[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
               [3U][0U]] | vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
               [3U][0U]);
        vlSelfRef.__PVT__bankIFs[3U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][0U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [3U][0U]][0U];
        vlSelfRef.__PVT__bankIFs[3U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][1U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [3U][0U]][1U];
        vlSelfRef.__PVT__bankIFs[3U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][2U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [3U][0U]][2U];
        vlSelfRef.__PVT__bankIFs[3U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][3U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [3U][0U]][3U];
        vlSelfRef.__PVT__bankIFs[3U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U] 
            = vlSelfRef.__PVT__cacheWriteIFs[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_w
            [3U][0U]][4U];
        vlSelfRef.__PVT__bankIFs[3U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U] 
            = ((0x1fffffffU & vlSelfRef.__PVT__bankIFs
                [3U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U]) 
               | (0x20000000U & ((~ vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
                                  [3U][0U]) << 0x1dU)));
    } else {
        vlSelfRef.__PVT__bankIFs[3U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][0U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [3U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [3U][1U]
                                              : 0U)][0U];
        vlSelfRef.__PVT__bankIFs[3U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][1U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [3U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [3U][1U]
                                              : 0U)][1U];
        vlSelfRef.__PVT__bankIFs[3U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][2U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [3U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [3U][1U]
                                              : 0U)][2U];
        vlSelfRef.__PVT__bankIFs[3U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][3U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [3U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [3U][1U]
                                              : 0U)][3U];
        vlSelfRef.__PVT__bankIFs[3U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U] 
            = vlSelfRef.__PVT__cacheReadIFs[((2U >= 
                                              vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                              [3U][1U])
                                              ? vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                             [3U][1U]
                                              : 0U)][4U];
        vlSelfRef.__PVT__bankIFs[3U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U] 
            = ((0x1fffffffU & vlSelfRef.__PVT__bankIFs
                [3U][(1U & __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx)][4U]) 
               | (0x20000000U & ((~ vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r
                                  [3U][1U]) << 0x1dU)));
    }
    vlSelfRef.__PVT__cacheReadReady[0U] = 0U;
    vlSelfRef.__PVT__cacheReadReady[1U] = 0U;
    vlSelfRef.__PVT__cacheReadReady[2U] = 0U;
    dcacheArb__DOT____Vlvbound_hc3302d19__0 = (((2U 
                                                 >= 
                                                 vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                                 [0U]
                                                 [0U]) 
                                                && vlSelfRef.__PVT__cacheReadReady
                                                [vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                                [0U]
                                                [0U]]) 
                                               | vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r
                                               [0U]
                                               [0U]);
    if ((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
         [0U][0U])) {
        vlSelfRef.__PVT__cacheReadReady[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[0U][0U]] 
            = dcacheArb__DOT____Vlvbound_hc3302d19__0;
    }
    if ((1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
               [0U][0U]))) {
        vlSelfRef.dcacheArb__DOT____Vlvbound_h06fbafee__0 
            = (((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                 [0U][1U]) && vlSelfRef.__PVT__cacheReadReady
                [vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                [0U][1U]]) | vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r
               [0U][1U]);
        if ((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
             [0U][1U])) {
            vlSelfRef.__PVT__cacheReadReady[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[0U][1U]] 
                = vlSelfRef.dcacheArb__DOT____Vlvbound_h06fbafee__0;
        }
    }
    dcacheArb__DOT____Vlvbound_hc3302d19__0 = (((2U 
                                                 >= 
                                                 vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                                 [1U]
                                                 [0U]) 
                                                && vlSelfRef.__PVT__cacheReadReady
                                                [vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                                [1U]
                                                [0U]]) 
                                               | vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r
                                               [1U]
                                               [0U]);
    if ((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
         [1U][0U])) {
        vlSelfRef.__PVT__cacheReadReady[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[1U][0U]] 
            = dcacheArb__DOT____Vlvbound_hc3302d19__0;
    }
    if ((1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
               [1U][0U]))) {
        vlSelfRef.dcacheArb__DOT____Vlvbound_h06fbafee__0 
            = (((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                 [1U][1U]) && vlSelfRef.__PVT__cacheReadReady
                [vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                [1U][1U]]) | vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r
               [1U][1U]);
        if ((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
             [1U][1U])) {
            vlSelfRef.__PVT__cacheReadReady[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[1U][1U]] 
                = vlSelfRef.dcacheArb__DOT____Vlvbound_h06fbafee__0;
        }
    }
    dcacheArb__DOT____Vlvbound_hc3302d19__0 = (((2U 
                                                 >= 
                                                 vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                                 [2U]
                                                 [0U]) 
                                                && vlSelfRef.__PVT__cacheReadReady
                                                [vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                                [2U]
                                                [0U]]) 
                                               | vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r
                                               [2U]
                                               [0U]);
    if ((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
         [2U][0U])) {
        vlSelfRef.__PVT__cacheReadReady[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[2U][0U]] 
            = dcacheArb__DOT____Vlvbound_hc3302d19__0;
    }
    if ((1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
               [2U][0U]))) {
        vlSelfRef.dcacheArb__DOT____Vlvbound_h06fbafee__0 
            = (((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                 [2U][1U]) && vlSelfRef.__PVT__cacheReadReady
                [vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                [2U][1U]]) | vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r
               [2U][1U]);
        if ((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
             [2U][1U])) {
            vlSelfRef.__PVT__cacheReadReady[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[2U][1U]] 
                = vlSelfRef.dcacheArb__DOT____Vlvbound_h06fbafee__0;
        }
    }
    dcacheArb__DOT____Vlvbound_hc3302d19__0 = (((2U 
                                                 >= 
                                                 vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                                 [3U]
                                                 [0U]) 
                                                && vlSelfRef.__PVT__cacheReadReady
                                                [vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                                                [3U]
                                                [0U]]) 
                                               | vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r
                                               [3U]
                                               [0U]);
    if ((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
         [3U][0U])) {
        vlSelfRef.__PVT__cacheReadReady[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[3U][0U]] 
            = dcacheArb__DOT____Vlvbound_hc3302d19__0;
    }
    if ((1U & (~ vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_w
               [3U][0U]))) {
        vlSelfRef.dcacheArb__DOT____Vlvbound_h55a4caa8__0 = 1U;
        vlSelfRef.dcacheArb__DOT____Vlvbound_h06fbafee__0 
            = (((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                 [3U][1U]) && vlSelfRef.__PVT__cacheReadReady
                [vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
                [3U][1U]]) | vlSelfRef.__PVT__dcacheArb__DOT__reqIdxValid_r
               [3U][1U]);
        if ((2U >= vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r
             [3U][1U])) {
            vlSelfRef.__PVT__dcacheArb__DOT__outPortIdx[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[3U][1U]] 
                = vlSelfRef.dcacheArb__DOT____Vlvbound_h55a4caa8__0;
            vlSelfRef.__PVT__cacheReadReady[vlSelfRef.__PVT__dcacheArb__DOT__reqIdx_r[3U][1U]] 
                = vlSelfRef.dcacheArb__DOT____Vlvbound_h06fbafee__0;
        }
    }
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readSucc 
        = (1U & ((IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMeta) 
                 & (vlSelfRef.__PVT__cacheReadReady
                    [0U] | (IData)((vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMeta 
                                    >> 2U)))));
    __Vlvbound_hc8e55215__0 = (1U & (~ vlSelfRef.__PVT__cacheReadReady
                                     [1U]));
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__busy = 
        ((6U & (IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__busy)) 
         | (IData)(__Vlvbound_hc8e55215__0));
    __Vlvbound_hc8e55215__0 = (1U & (~ vlSelfRef.__PVT__cacheReadReady
                                     [2U]));
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__busy = 
        ((5U & (IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__busy)) 
         | ((IData)(__Vlvbound_hc8e55215__0) << 1U));
    if ((1U & (~ ((IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__we) 
                  >> 2U)))) {
        vlSymsp->TOP__Top__soc__IF_cache.__PVT__busy 
            = ((3U & (IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__busy)) 
               | (4U & ((~ vlSelfRef.__PVT__cacheWriteReady
                         [1U]) << 2U)));
    }
    vlSelfRef.__PVT__memc__DOT__DCR_cacheReadValid = 0U;
    vlSelfRef.__PVT__memc__DOT__DCR_cacheReadId = 0U;
    if (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readSucc) {
        vlSelfRef.__PVT__memc__DOT__DCR_cacheReadValid = 1U;
        vlSelfRef.__PVT__memc__DOT__DCR_cacheReadId 
            = (3U & (IData)((vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMeta 
                             >> 3U)));
    }
    vlSelfRef.__PVT__memc__DOT__DCR_reqReady = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__next)) 
                                                   | ((IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readSucc) 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMeta 
                                                                 >> 1U)))));
}

VL_INLINE_OPT void VTop_SoC___nba_sequent__TOP__Top__soc__0(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___nba_sequent__TOP__Top__soc__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__ridx = (((IData)(vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt.__PVT__OUT_data) 
                                                  << 4U) 
                                                 | (((IData)(vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt.__PVT__OUT_data) 
                                                     << 2U) 
                                                    | (IData)(vlSymsp->TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt.__PVT__OUT_data)));
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[0U] 
        = vlSymsp->TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable.__PVT__OUT_data[0U];
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[1U] 
        = vlSymsp->TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable.__PVT__OUT_data[1U];
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[2U] 
        = ((vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable.__PVT__OUT_data[0U] 
            << 0x14U) | vlSymsp->TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable.__PVT__OUT_data[2U]);
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[3U] 
        = ((vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable.__PVT__OUT_data[0U] 
            >> 0xcU) | (vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable.__PVT__OUT_data[1U] 
                        << 0x14U));
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[4U] 
        = ((vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable.__PVT__OUT_data[1U] 
            >> 0xcU) | (vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable.__PVT__OUT_data[2U] 
                        << 0x14U));
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[5U] 
        = ((vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable.__PVT__OUT_data[0U] 
            << 8U) | (vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable.__PVT__OUT_data[2U] 
                      >> 0xcU));
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[6U] 
        = ((vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable.__PVT__OUT_data[0U] 
            >> 0x18U) | (vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable.__PVT__OUT_data[1U] 
                         << 8U));
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[7U] 
        = ((vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable.__PVT__OUT_data[1U] 
            >> 0x18U) | (vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable.__PVT__OUT_data[2U] 
                         << 8U));
}

VL_INLINE_OPT void VTop_SoC___nba_sequent__TOP__Top__soc__1(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___nba_sequent__TOP__Top__soc__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ dcacheArb__DOT____Vlvbound_h669726eb__0;
    dcacheArb__DOT____Vlvbound_h669726eb__0 = 0;
    SData/*9:0*/ __VdlyVal__CORE_raddr__v0;
    __VdlyVal__CORE_raddr__v0 = 0;
    SData/*9:0*/ __VdlyVal__CORE_raddr__v1;
    __VdlyVal__CORE_raddr__v1 = 0;
    SData/*9:0*/ __VdlyVal__CORE_raddr__v2;
    __VdlyVal__CORE_raddr__v2 = 0;
    SData/*9:0*/ __VdlyVal__CORE_raddr__v3;
    __VdlyVal__CORE_raddr__v3 = 0;
    CData/*2:0*/ __VdlyVal__dcacheArb__DOT__readIdxs__v0;
    __VdlyVal__dcacheArb__DOT__readIdxs__v0 = 0;
    CData/*2:0*/ __VdlyVal__dcacheArb__DOT__readIdxs__v1;
    __VdlyVal__dcacheArb__DOT__readIdxs__v1 = 0;
    CData/*2:0*/ __VdlyVal__dcacheArb__DOT__readIdxs__v2;
    __VdlyVal__dcacheArb__DOT__readIdxs__v2 = 0;
    CData/*2:0*/ __VdlyVal__dcacheArb__DOT__readIdxs__v3;
    __VdlyVal__dcacheArb__DOT__readIdxs__v3 = 0;
    CData/*2:0*/ __VdlyVal__dcacheArb__DOT__readIdxs__v4;
    __VdlyVal__dcacheArb__DOT__readIdxs__v4 = 0;
    CData/*2:0*/ __VdlyVal__dcacheArb__DOT__readIdxs__v5;
    __VdlyVal__dcacheArb__DOT__readIdxs__v5 = 0;
    // Body
    vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime 
        = vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtime;
    __VdlyVal__CORE_raddr__v0 = vlSelfRef.__PVT__CORE_raddr
        [0U][0U];
    __VdlyVal__CORE_raddr__v1 = (0x3ffU & (IData)((vlSymsp->TOP__Top__soc__IF_cache.__PVT__addr 
                                                   >> 2U)));
    __VdlyVal__CORE_raddr__v2 = vlSelfRef.__PVT__CORE_raddr
        [1U][0U];
    __VdlyVal__CORE_raddr__v3 = (0x3ffU & (IData)((vlSymsp->TOP__Top__soc__IF_cache.__PVT__addr 
                                                   >> 0xeU)));
    dcacheArb__DOT____Vlvbound_h669726eb__0 = ((6U 
                                                & (vlSelfRef.__PVT__cacheReadIFs
                                                   [0U][4U] 
                                                   >> 1U)) 
                                               | vlSelfRef.__PVT__dcacheArb__DOT__outPortIdx
                                               [0U]);
    __VdlyVal__dcacheArb__DOT__readIdxs__v0 = dcacheArb__DOT____Vlvbound_h669726eb__0;
    dcacheArb__DOT____Vlvbound_h669726eb__0 = ((6U 
                                                & (vlSelfRef.__PVT__cacheReadIFs
                                                   [1U][4U] 
                                                   >> 1U)) 
                                               | vlSelfRef.__PVT__dcacheArb__DOT__outPortIdx
                                               [1U]);
    __VdlyVal__dcacheArb__DOT__readIdxs__v1 = dcacheArb__DOT____Vlvbound_h669726eb__0;
    dcacheArb__DOT____Vlvbound_h669726eb__0 = ((6U 
                                                & (vlSelfRef.__PVT__cacheReadIFs
                                                   [2U][4U] 
                                                   >> 1U)) 
                                               | vlSelfRef.__PVT__dcacheArb__DOT__outPortIdx
                                               [2U]);
    __VdlyVal__dcacheArb__DOT__readIdxs__v2 = dcacheArb__DOT____Vlvbound_h669726eb__0;
    __VdlyVal__dcacheArb__DOT__readIdxs__v3 = vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
        [0U][2U];
    __VdlyVal__dcacheArb__DOT__readIdxs__v4 = vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
        [0U][1U];
    __VdlyVal__dcacheArb__DOT__readIdxs__v5 = vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
        [0U][0U];
    vlSelfRef.__PVT__mmio__DOT__aclintRValid = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__re)))) {
            if ((0x1100bff8U == (0xfffffffcU & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__raddr))) {
                vlSelfRef.__PVT__mmio__DOT__aclintRValid = 1U;
            } else if ((0x1100bffcU == (0xfffffffcU 
                                        & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__raddr))) {
                vlSelfRef.__PVT__mmio__DOT__aclintRValid = 1U;
            } else if ((0x11004000U == (0xfffffffcU 
                                        & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__raddr))) {
                vlSelfRef.__PVT__mmio__DOT__aclintRValid = 1U;
            } else if ((0x11004004U == (0xfffffffcU 
                                        & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__raddr))) {
                vlSelfRef.__PVT__mmio__DOT__aclintRValid = 1U;
            }
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime = 0ULL;
    } else {
        vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime 
            = (1ULL + vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtime);
        if ((1U & (~ (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__re)))) {
            if ((0x1100bff8U == (0xfffffffcU & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__raddr))) {
                vlSelfRef.__PVT__mmio__DOT__aclintData 
                    = (IData)(vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtime);
            } else if ((0x1100bffcU == (0xfffffffcU 
                                        & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__raddr))) {
                vlSelfRef.__PVT__mmio__DOT__aclintData 
                    = (IData)((vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtime 
                               >> 0x20U));
            } else if ((0x11004000U == (0xfffffffcU 
                                        & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__raddr))) {
                vlSelfRef.__PVT__mmio__DOT__aclintData 
                    = (IData)(vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtimecmp);
            } else if ((0x11004004U == (0xfffffffcU 
                                        & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__raddr))) {
                vlSelfRef.__PVT__mmio__DOT__aclintData 
                    = (IData)((vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtimecmp 
                               >> 0x20U));
            }
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__we)))) {
            if ((0x1100bff8U == (0xfffffffcU & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__waddr))) {
                if ((1U & (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask))) {
                    vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime 
                        = ((0xffffffffffffff00ULL & vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime) 
                           | (IData)((IData)((0xffU 
                                              & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata))));
                }
                if ((2U & (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask))) {
                    vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime 
                        = ((0xffffffffffff00ffULL & vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata 
                                                  >> 8U)))) 
                              << 8U));
                }
                if ((4U & (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask))) {
                    vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime 
                        = ((0xffffffffff00ffffULL & vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata 
                                                  >> 0x10U)))) 
                              << 0x10U));
                }
                if ((8U & (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask))) {
                    vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime 
                        = ((0xffffffff00ffffffULL & vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime) 
                           | ((QData)((IData)((vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata 
                                               >> 0x18U))) 
                              << 0x18U));
                }
            } else if ((0x1100bffcU == (0xfffffffcU 
                                        & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__waddr))) {
                if ((1U & (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask))) {
                    vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime 
                        = ((0xffffff00ffffffffULL & vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime) 
                           | ((QData)((IData)((0xffU 
                                               & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata))) 
                              << 0x20U));
                }
                if ((2U & (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask))) {
                    vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime 
                        = ((0xffff00ffffffffffULL & vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata 
                                                  >> 8U)))) 
                              << 0x28U));
                }
                if ((4U & (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask))) {
                    vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime 
                        = ((0xff00ffffffffffffULL & vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata 
                                                  >> 0x10U)))) 
                              << 0x30U));
                }
                if ((8U & (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask))) {
                    vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime 
                        = ((0xffffffffffffffULL & vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime) 
                           | ((QData)((IData)((vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata 
                                               >> 0x18U))) 
                              << 0x38U));
                }
            }
        }
    }
    vlSelfRef.__PVT__CORE_raddr[0U][1U] = __VdlyVal__CORE_raddr__v0;
    vlSelfRef.__PVT__CORE_raddr[0U][0U] = __VdlyVal__CORE_raddr__v1;
    vlSelfRef.__PVT__CORE_raddr[1U][1U] = __VdlyVal__CORE_raddr__v2;
    vlSelfRef.__PVT__CORE_raddr[1U][0U] = __VdlyVal__CORE_raddr__v3;
    vlSelfRef.__PVT__dcacheArb__DOT__readIdxs[0U][0U] 
        = __VdlyVal__dcacheArb__DOT__readIdxs__v0;
    vlSelfRef.__PVT__dcacheArb__DOT__readIdxs[0U][1U] 
        = __VdlyVal__dcacheArb__DOT__readIdxs__v1;
    vlSelfRef.__PVT__dcacheArb__DOT__readIdxs[0U][2U] 
        = __VdlyVal__dcacheArb__DOT__readIdxs__v2;
    vlSelfRef.__PVT__dcacheArb__DOT__readIdxs[1U][2U] 
        = __VdlyVal__dcacheArb__DOT__readIdxs__v3;
    vlSelfRef.__PVT__dcacheArb__DOT__readIdxs[1U][1U] 
        = __VdlyVal__dcacheArb__DOT__readIdxs__v4;
    vlSelfRef.__PVT__dcacheArb__DOT__readIdxs[1U][0U] 
        = __VdlyVal__dcacheArb__DOT__readIdxs__v5;
    vlSymsp->TOP__Top__soc__IF_mmio.__PVT__rdata = 0U;
    if (vlSelfRef.__PVT__mmio__DOT__aclintRValid) {
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__rdata 
            = vlSelfRef.__PVT__mmio__DOT__aclintData;
    }
}

extern const VlWide<8>/*255:0*/ VTop__ConstPool__CONST_hb5c5367a_0;

VL_INLINE_OPT void VTop_SoC___nba_sequent__TOP__Top__soc__2(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___nba_sequent__TOP__Top__soc__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v0;
    __VdlySet__memc__DOT__transfers__v0 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v4;
    __VdlySet__memc__DOT__transfers__v4 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v5;
    __VdlySet__memc__DOT__transfers__v5 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v6;
    __VdlySet__memc__DOT__transfers__v6 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v7;
    __VdlySet__memc__DOT__transfers__v7 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v8;
    __VdlyDim0__memc__DOT__transfers__v8 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v8;
    __VdlySet__memc__DOT__transfers__v8 = 0;
    CData/*3:0*/ __VdlyVal__memc__DOT__transfers__v9;
    __VdlyVal__memc__DOT__transfers__v9 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v9;
    __VdlyDim0__memc__DOT__transfers__v9 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v10;
    __VdlyDim0__memc__DOT__transfers__v10 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v11;
    __VdlyDim0__memc__DOT__transfers__v11 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v12;
    __VdlyDim0__memc__DOT__transfers__v12 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v13;
    __VdlyDim0__memc__DOT__transfers__v13 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v14;
    __VdlyDim0__memc__DOT__transfers__v14 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v15;
    __VdlyDim0__memc__DOT__transfers__v15 = 0;
    CData/*0:0*/ __VdlyVal__memc__DOT__transfers__v16;
    __VdlyVal__memc__DOT__transfers__v16 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v16;
    __VdlyDim0__memc__DOT__transfers__v16 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v17;
    __VdlyDim0__memc__DOT__transfers__v17 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v18;
    __VdlyDim0__memc__DOT__transfers__v18 = 0;
    IData/*31:0*/ __VdlyVal__memc__DOT__transfers__v19;
    __VdlyVal__memc__DOT__transfers__v19 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v19;
    __VdlyDim0__memc__DOT__transfers__v19 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v19;
    __VdlySet__memc__DOT__transfers__v19 = 0;
    IData/*31:0*/ __VdlyVal__memc__DOT__transfers__v20;
    __VdlyVal__memc__DOT__transfers__v20 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v20;
    __VdlyDim0__memc__DOT__transfers__v20 = 0;
    SData/*11:0*/ __VdlyVal__memc__DOT__transfers__v21;
    __VdlyVal__memc__DOT__transfers__v21 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v21;
    __VdlyDim0__memc__DOT__transfers__v21 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__memc__DOT__transfers__v22;
    VL_ZERO_W(128, __VdlyVal__memc__DOT__transfers__v22);
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v22;
    __VdlyDim0__memc__DOT__transfers__v22 = 0;
    SData/*15:0*/ __VdlyVal__memc__DOT__transfers__v23;
    __VdlyVal__memc__DOT__transfers__v23 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v23;
    __VdlyDim0__memc__DOT__transfers__v23 = 0;
    IData/*31:0*/ __VdlyVal__memc__DOT__transfers__v24;
    __VdlyVal__memc__DOT__transfers__v24 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v24;
    __VdlyDim0__memc__DOT__transfers__v24 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v24;
    __VdlySet__memc__DOT__transfers__v24 = 0;
    IData/*31:0*/ __VdlyVal__memc__DOT__transfers__v25;
    __VdlyVal__memc__DOT__transfers__v25 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v25;
    __VdlyDim0__memc__DOT__transfers__v25 = 0;
    SData/*11:0*/ __VdlyVal__memc__DOT__transfers__v26;
    __VdlyVal__memc__DOT__transfers__v26 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v26;
    __VdlyDim0__memc__DOT__transfers__v26 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__memc__DOT__transfers__v27;
    VL_ZERO_W(128, __VdlyVal__memc__DOT__transfers__v27);
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v27;
    __VdlyDim0__memc__DOT__transfers__v27 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v28;
    __VdlyDim0__memc__DOT__transfers__v28 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v29;
    __VdlyDim0__memc__DOT__transfers__v29 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v29;
    __VdlySet__memc__DOT__transfers__v29 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v30;
    __VdlyDim0__memc__DOT__transfers__v30 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v31;
    __VdlyDim0__memc__DOT__transfers__v31 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v31;
    __VdlySet__memc__DOT__transfers__v31 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v32;
    __VdlyDim0__memc__DOT__transfers__v32 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v33;
    __VdlyDim0__memc__DOT__transfers__v33 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v33;
    __VdlySet__memc__DOT__transfers__v33 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v34;
    __VdlyDim0__memc__DOT__transfers__v34 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v35;
    __VdlyDim0__memc__DOT__transfers__v35 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v35;
    __VdlySet__memc__DOT__transfers__v35 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v36;
    __VdlyDim0__memc__DOT__transfers__v36 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v37;
    __VdlyDim0__memc__DOT__transfers__v37 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v37;
    __VdlySet__memc__DOT__transfers__v37 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v38;
    __VdlyDim0__memc__DOT__transfers__v38 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v39;
    __VdlyDim0__memc__DOT__transfers__v39 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v39;
    __VdlySet__memc__DOT__transfers__v39 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v40;
    __VdlyDim0__memc__DOT__transfers__v40 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v41;
    __VdlyDim0__memc__DOT__transfers__v41 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v42;
    __VdlyDim0__memc__DOT__transfers__v42 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v42;
    __VdlySet__memc__DOT__transfers__v42 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v43;
    __VdlyDim0__memc__DOT__transfers__v43 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v44;
    __VdlyDim0__memc__DOT__transfers__v44 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v45;
    __VdlyDim0__memc__DOT__transfers__v45 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v46;
    __VdlyDim0__memc__DOT__transfers__v46 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v47;
    __VdlyDim0__memc__DOT__transfers__v47 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v47;
    __VdlySet__memc__DOT__transfers__v47 = 0;
    CData/*4:0*/ __VdlyVal__memc__DOT__transfers__v48;
    __VdlyVal__memc__DOT__transfers__v48 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v48;
    __VdlyDim0__memc__DOT__transfers__v48 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v48;
    __VdlySet__memc__DOT__transfers__v48 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v49;
    __VdlyDim0__memc__DOT__transfers__v49 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v49;
    __VdlySet__memc__DOT__transfers__v49 = 0;
    CData/*4:0*/ __VdlyVal__memc__DOT__transfers__v50;
    __VdlyVal__memc__DOT__transfers__v50 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v50;
    __VdlyDim0__memc__DOT__transfers__v50 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v50;
    __VdlySet__memc__DOT__transfers__v50 = 0;
    CData/*4:0*/ __VdlyVal__memc__DOT__transfers__v51;
    __VdlyVal__memc__DOT__transfers__v51 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v51;
    __VdlyDim0__memc__DOT__transfers__v51 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v51;
    __VdlySet__memc__DOT__transfers__v51 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v52;
    __VdlyDim0__memc__DOT__transfers__v52 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v52;
    __VdlySet__memc__DOT__transfers__v52 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v53;
    __VdlyDim0__memc__DOT__transfers__v53 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v53;
    __VdlySet__memc__DOT__transfers__v53 = 0;
    CData/*4:0*/ __VdlyVal__memc__DOT__transfers__v54;
    __VdlyVal__memc__DOT__transfers__v54 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v54;
    __VdlyDim0__memc__DOT__transfers__v54 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v54;
    __VdlySet__memc__DOT__transfers__v54 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v55;
    __VdlyDim0__memc__DOT__transfers__v55 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v55;
    __VdlySet__memc__DOT__transfers__v55 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v56;
    __VdlyDim0__memc__DOT__transfers__v56 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v56;
    __VdlySet__memc__DOT__transfers__v56 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v57;
    __VdlyDim0__memc__DOT__transfers__v57 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v57;
    __VdlySet__memc__DOT__transfers__v57 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v58;
    __VdlyDim0__memc__DOT__transfers__v58 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v58;
    __VdlySet__memc__DOT__transfers__v58 = 0;
    CData/*4:0*/ __VdlyVal__memc__DOT__transfers__v59;
    __VdlyVal__memc__DOT__transfers__v59 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v59;
    __VdlyDim0__memc__DOT__transfers__v59 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v59;
    __VdlySet__memc__DOT__transfers__v59 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v60;
    __VdlyDim0__memc__DOT__transfers__v60 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v60;
    __VdlySet__memc__DOT__transfers__v60 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__transfers__v61;
    __VdlyDim0__memc__DOT__transfers__v61 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__transfers__v61;
    __VdlySet__memc__DOT__transfers__v61 = 0;
    // Body
    __VdlySet__memc__DOT__transfers__v0 = 0U;
    __VdlySet__memc__DOT__transfers__v4 = 0U;
    __VdlySet__memc__DOT__transfers__v5 = 0U;
    __VdlySet__memc__DOT__transfers__v6 = 0U;
    __VdlySet__memc__DOT__transfers__v7 = 0U;
    __VdlySet__memc__DOT__transfers__v8 = 0U;
    __VdlySet__memc__DOT__transfers__v19 = 0U;
    __VdlySet__memc__DOT__transfers__v24 = 0U;
    __VdlySet__memc__DOT__transfers__v29 = 0U;
    __VdlySet__memc__DOT__transfers__v31 = 0U;
    __VdlySet__memc__DOT__transfers__v33 = 0U;
    __VdlySet__memc__DOT__transfers__v35 = 0U;
    __VdlySet__memc__DOT__transfers__v37 = 0U;
    __VdlySet__memc__DOT__transfers__v39 = 0U;
    __VdlySet__memc__DOT__transfers__v42 = 0U;
    __VdlySet__memc__DOT__transfers__v47 = 0U;
    __VdlySet__memc__DOT__transfers__v48 = 0U;
    __VdlySet__memc__DOT__transfers__v49 = 0U;
    __VdlySet__memc__DOT__transfers__v50 = 0U;
    __VdlySet__memc__DOT__transfers__v51 = 0U;
    __VdlySet__memc__DOT__transfers__v52 = 0U;
    __VdlySet__memc__DOT__transfers__v53 = 0U;
    __VdlySet__memc__DOT__transfers__v54 = 0U;
    __VdlySet__memc__DOT__transfers__v55 = 0U;
    __VdlySet__memc__DOT__transfers__v56 = 0U;
    __VdlySet__memc__DOT__transfers__v57 = 0U;
    __VdlySet__memc__DOT__transfers__v58 = 0U;
    __VdlySet__memc__DOT__transfers__v59 = 0U;
    __VdlySet__memc__DOT__transfers__v60 = 0U;
    __VdlySet__memc__DOT__transfers__v61 = 0U;
    vlSelfRef.__PVT__memc__DOT__sglStRes = 0U;
    vlSelfRef.__PVT__memc__DOT__sglLdRes = 0ULL;
    vlSelfRef.__PVT__memc__DOT__ldDataFwd[0U] = 0U;
    vlSelfRef.__PVT__memc__DOT__ldDataFwd[1U] = 0U;
    vlSelfRef.__PVT__memc__DOT__ldDataFwd[2U] = 0U;
    vlSelfRef.__PVT__memc__DOT__ldDataFwd[3U] = 0U;
    vlSelfRef.__PVT__memc__DOT__ldDataFwd[4U] = 0U;
    vlSelfRef.__PVT__memc__DOT__ldDataFwd[5U] = 0U;
    if (vlSymsp->TOP.rst) {
        __VdlySet__memc__DOT__transfers__v0 = 1U;
    } else {
        if ((1U & ((vlSelfRef.__PVT__memc__DOT__transfers
                    [0U][0U] & (vlSelfRef.__PVT__memc__DOT__transfers
                                [0U][0U] >> 7U)) & 
                   (vlSelfRef.__PVT__memc__DOT__transfers
                    [0U][0U] >> 6U)))) {
            __VdlySet__memc__DOT__transfers__v4 = 1U;
        }
        if ((1U & ((vlSelfRef.__PVT__memc__DOT__transfers
                    [1U][0U] & (vlSelfRef.__PVT__memc__DOT__transfers
                                [1U][0U] >> 7U)) & 
                   (vlSelfRef.__PVT__memc__DOT__transfers
                    [1U][0U] >> 6U)))) {
            __VdlySet__memc__DOT__transfers__v5 = 1U;
        }
        if ((1U & ((vlSelfRef.__PVT__memc__DOT__transfers
                    [2U][0U] & (vlSelfRef.__PVT__memc__DOT__transfers
                                [2U][0U] >> 7U)) & 
                   (vlSelfRef.__PVT__memc__DOT__transfers
                    [2U][0U] >> 6U)))) {
            __VdlySet__memc__DOT__transfers__v6 = 1U;
        }
        if ((1U & ((vlSelfRef.__PVT__memc__DOT__transfers
                    [3U][0U] & (vlSelfRef.__PVT__memc__DOT__transfers
                                [3U][0U] >> 7U)) & 
                   (vlSelfRef.__PVT__memc__DOT__transfers
                    [3U][0U] >> 6U)))) {
            __VdlySet__memc__DOT__transfers__v7 = 1U;
        }
        if ((0U != (0xfU & vlSelfRef.__PVT__memc__DOT__selReq[0U]))) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__PVT__memc__DOT__enqIdxValid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: MemoryController.sv:604: Assertion failed in %NTop.soc.memc: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/MemoryController.sv", 604, "");
                }
            }
            __VdlyDim0__memc__DOT__transfers__v8 = vlSelfRef.__PVT__memc__DOT__enqIdx;
            __VdlySet__memc__DOT__transfers__v8 = 1U;
            __VdlyVal__memc__DOT__transfers__v9 = (0xfU 
                                                   & vlSelfRef.__PVT__memc__DOT__selReq[0U]);
            __VdlyDim0__memc__DOT__transfers__v9 = vlSelfRef.__PVT__memc__DOT__enqIdx;
            __VdlyDim0__memc__DOT__transfers__v10 = vlSelfRef.__PVT__memc__DOT__enqIdx;
            __VdlyDim0__memc__DOT__transfers__v11 = vlSelfRef.__PVT__memc__DOT__enqIdx;
            __VdlyDim0__memc__DOT__transfers__v12 = vlSelfRef.__PVT__memc__DOT__enqIdx;
            __VdlyDim0__memc__DOT__transfers__v13 = vlSelfRef.__PVT__memc__DOT__enqIdx;
            __VdlyDim0__memc__DOT__transfers__v14 = vlSelfRef.__PVT__memc__DOT__enqIdx;
            __VdlyDim0__memc__DOT__transfers__v15 = vlSelfRef.__PVT__memc__DOT__enqIdx;
            __VdlyVal__memc__DOT__transfers__v16 = 
                (1U & (vlSelfRef.__PVT__memc__DOT__selReq[0U] 
                       >> 4U));
            __VdlyDim0__memc__DOT__transfers__v16 = vlSelfRef.__PVT__memc__DOT__enqIdx;
            __VdlyDim0__memc__DOT__transfers__v17 = vlSelfRef.__PVT__memc__DOT__enqIdx;
            __VdlyDim0__memc__DOT__transfers__v18 = vlSelfRef.__PVT__memc__DOT__enqIdx;
            if ((((1U == (0xfU & vlSelfRef.__PVT__memc__DOT__selReq[0U])) 
                  | (2U == (0xfU & vlSelfRef.__PVT__memc__DOT__selReq[0U]))) 
                 | (3U == (0xfU & vlSelfRef.__PVT__memc__DOT__selReq[0U])))) {
                __VdlyVal__memc__DOT__transfers__v19 
                    = (0xfffffff0U & ((vlSelfRef.__PVT__memc__DOT__selReq[1U] 
                                       << 0x1bU) | 
                                      (vlSelfRef.__PVT__memc__DOT__selReq[0U] 
                                       >> 5U)));
                __VdlyDim0__memc__DOT__transfers__v19 
                    = vlSelfRef.__PVT__memc__DOT__enqIdx;
                __VdlySet__memc__DOT__transfers__v19 = 1U;
                __VdlyVal__memc__DOT__transfers__v20 
                    = (0xfffffff0U & ((vlSelfRef.__PVT__memc__DOT__selReq[2U] 
                                       << 0x1bU) | 
                                      (vlSelfRef.__PVT__memc__DOT__selReq[1U] 
                                       >> 5U)));
                __VdlyDim0__memc__DOT__transfers__v20 
                    = vlSelfRef.__PVT__memc__DOT__enqIdx;
                __VdlyVal__memc__DOT__transfers__v21 
                    = (0xffcU & (vlSelfRef.__PVT__memc__DOT__selReq[2U] 
                                 >> 5U));
                __VdlyDim0__memc__DOT__transfers__v21 
                    = vlSelfRef.__PVT__memc__DOT__enqIdx;
                __VdlyVal__memc__DOT__transfers__v22[0U] 
                    = ((vlSelfRef.__PVT__memc__DOT__selReq[3U] 
                        << 0xfU) | (vlSelfRef.__PVT__memc__DOT__selReq[2U] 
                                    >> 0x11U));
                __VdlyVal__memc__DOT__transfers__v22[1U] 
                    = ((vlSelfRef.__PVT__memc__DOT__selReq[4U] 
                        << 0xfU) | (vlSelfRef.__PVT__memc__DOT__selReq[3U] 
                                    >> 0x11U));
                __VdlyVal__memc__DOT__transfers__v22[2U] 
                    = ((vlSelfRef.__PVT__memc__DOT__selReq[5U] 
                        << 0xfU) | (vlSelfRef.__PVT__memc__DOT__selReq[4U] 
                                    >> 0x11U));
                __VdlyVal__memc__DOT__transfers__v22[3U] 
                    = ((vlSelfRef.__PVT__memc__DOT__selReq[6U] 
                        << 0xfU) | (vlSelfRef.__PVT__memc__DOT__selReq[5U] 
                                    >> 0x11U));
                __VdlyDim0__memc__DOT__transfers__v22 
                    = vlSelfRef.__PVT__memc__DOT__enqIdx;
                __VdlyVal__memc__DOT__transfers__v23 
                    = (0xffffU & ((vlSelfRef.__PVT__memc__DOT__selReq[7U] 
                                   << 0xfU) | (vlSelfRef.__PVT__memc__DOT__selReq[6U] 
                                               >> 0x11U)));
                __VdlyDim0__memc__DOT__transfers__v23 
                    = vlSelfRef.__PVT__memc__DOT__enqIdx;
            } else {
                __VdlyVal__memc__DOT__transfers__v24 
                    = ((vlSelfRef.__PVT__memc__DOT__selReq[1U] 
                        << 0x1bU) | (vlSelfRef.__PVT__memc__DOT__selReq[0U] 
                                     >> 5U));
                __VdlyDim0__memc__DOT__transfers__v24 
                    = vlSelfRef.__PVT__memc__DOT__enqIdx;
                __VdlySet__memc__DOT__transfers__v24 = 1U;
                __VdlyVal__memc__DOT__transfers__v25 
                    = ((vlSelfRef.__PVT__memc__DOT__selReq[2U] 
                        << 0x1bU) | (vlSelfRef.__PVT__memc__DOT__selReq[1U] 
                                     >> 5U));
                __VdlyDim0__memc__DOT__transfers__v25 
                    = vlSelfRef.__PVT__memc__DOT__enqIdx;
                __VdlyVal__memc__DOT__transfers__v26 
                    = (0xfffU & (vlSelfRef.__PVT__memc__DOT__selReq[2U] 
                                 >> 5U));
                __VdlyDim0__memc__DOT__transfers__v26 
                    = vlSelfRef.__PVT__memc__DOT__enqIdx;
                __VdlyVal__memc__DOT__transfers__v27[0U] 
                    = ((vlSelfRef.__PVT__memc__DOT__selReq[3U] 
                        << 0xfU) | (vlSelfRef.__PVT__memc__DOT__selReq[2U] 
                                    >> 0x11U));
                __VdlyVal__memc__DOT__transfers__v27[1U] 
                    = ((vlSelfRef.__PVT__memc__DOT__selReq[4U] 
                        << 0xfU) | (vlSelfRef.__PVT__memc__DOT__selReq[3U] 
                                    >> 0x11U));
                __VdlyVal__memc__DOT__transfers__v27[2U] 
                    = ((vlSelfRef.__PVT__memc__DOT__selReq[5U] 
                        << 0xfU) | (vlSelfRef.__PVT__memc__DOT__selReq[4U] 
                                    >> 0x11U));
                __VdlyVal__memc__DOT__transfers__v27[3U] 
                    = ((vlSelfRef.__PVT__memc__DOT__selReq[6U] 
                        << 0xfU) | (vlSelfRef.__PVT__memc__DOT__selReq[5U] 
                                    >> 0x11U));
                __VdlyDim0__memc__DOT__transfers__v27 
                    = vlSelfRef.__PVT__memc__DOT__enqIdx;
                __VdlyDim0__memc__DOT__transfers__v28 
                    = vlSelfRef.__PVT__memc__DOT__enqIdx;
            }
            if ((8U & vlSelfRef.__PVT__memc__DOT__selReq[0U])) {
                if ((4U & vlSelfRef.__PVT__memc__DOT__selReq[0U])) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                        VL_WRITEF_NX("[%0t] %%Error: MemoryController.sv:661: Assertion failed in %NTop.soc.memc: 'assert' failed.\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("src/MemoryController.sv", 661, "");
                    }
                } else if ((2U & vlSelfRef.__PVT__memc__DOT__selReq[0U])) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                        VL_WRITEF_NX("[%0t] %%Error: MemoryController.sv:661: Assertion failed in %NTop.soc.memc: 'assert' failed.\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("src/MemoryController.sv", 661, "");
                    }
                } else {
                    __VdlyDim0__memc__DOT__transfers__v29 
                        = vlSelfRef.__PVT__memc__DOT__enqIdx;
                    __VdlySet__memc__DOT__transfers__v29 = 1U;
                    __VdlyDim0__memc__DOT__transfers__v30 
                        = vlSelfRef.__PVT__memc__DOT__enqIdx;
                }
            } else if ((4U & vlSelfRef.__PVT__memc__DOT__selReq[0U])) {
                if ((2U & vlSelfRef.__PVT__memc__DOT__selReq[0U])) {
                    if ((1U & vlSelfRef.__PVT__memc__DOT__selReq[0U])) {
                        __VdlyDim0__memc__DOT__transfers__v31 
                            = vlSelfRef.__PVT__memc__DOT__enqIdx;
                        __VdlySet__memc__DOT__transfers__v31 = 1U;
                        __VdlyDim0__memc__DOT__transfers__v32 
                            = vlSelfRef.__PVT__memc__DOT__enqIdx;
                    } else {
                        __VdlyDim0__memc__DOT__transfers__v33 
                            = vlSelfRef.__PVT__memc__DOT__enqIdx;
                        __VdlySet__memc__DOT__transfers__v33 = 1U;
                        __VdlyDim0__memc__DOT__transfers__v34 
                            = vlSelfRef.__PVT__memc__DOT__enqIdx;
                    }
                } else {
                    __VdlyDim0__memc__DOT__transfers__v35 
                        = vlSelfRef.__PVT__memc__DOT__enqIdx;
                    __VdlySet__memc__DOT__transfers__v35 = 1U;
                    __VdlyDim0__memc__DOT__transfers__v36 
                        = vlSelfRef.__PVT__memc__DOT__enqIdx;
                }
            } else if ((2U & vlSelfRef.__PVT__memc__DOT__selReq[0U])) {
                if ((1U & vlSelfRef.__PVT__memc__DOT__selReq[0U])) {
                    __VdlyDim0__memc__DOT__transfers__v37 
                        = vlSelfRef.__PVT__memc__DOT__enqIdx;
                    __VdlySet__memc__DOT__transfers__v37 = 1U;
                    __VdlyDim0__memc__DOT__transfers__v38 
                        = vlSelfRef.__PVT__memc__DOT__enqIdx;
                } else {
                    __VdlyDim0__memc__DOT__transfers__v39 
                        = vlSelfRef.__PVT__memc__DOT__enqIdx;
                    __VdlySet__memc__DOT__transfers__v39 = 1U;
                    __VdlyDim0__memc__DOT__transfers__v40 
                        = vlSelfRef.__PVT__memc__DOT__enqIdx;
                    __VdlyDim0__memc__DOT__transfers__v41 
                        = vlSelfRef.__PVT__memc__DOT__enqIdx;
                }
            } else if ((1U & vlSelfRef.__PVT__memc__DOT__selReq[0U])) {
                __VdlyDim0__memc__DOT__transfers__v42 
                    = vlSelfRef.__PVT__memc__DOT__enqIdx;
                __VdlySet__memc__DOT__transfers__v42 = 1U;
                __VdlyDim0__memc__DOT__transfers__v43 
                    = vlSelfRef.__PVT__memc__DOT__enqIdx;
                __VdlyDim0__memc__DOT__transfers__v44 
                    = vlSelfRef.__PVT__memc__DOT__enqIdx;
                __VdlyDim0__memc__DOT__transfers__v45 
                    = vlSelfRef.__PVT__memc__DOT__enqIdx;
                __VdlyDim0__memc__DOT__transfers__v46 
                    = vlSelfRef.__PVT__memc__DOT__enqIdx;
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                VL_WRITEF_NX("[%0t] %%Error: MemoryController.sv:661: Assertion failed in %NTop.soc.memc: 'assert' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("src/MemoryController.sv", 661, "");
            }
        }
        if (vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__doInsert) {
            __VdlyDim0__memc__DOT__transfers__v47 = vlSelfRef.__PVT__memc__DOT__arIdx;
            __VdlySet__memc__DOT__transfers__v47 = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__memc__DOT__buf_rvalid) 
             & (IData)(vlSelfRef.__PVT__memc__DOT__buf_rready))) {
            __VdlyVal__memc__DOT__transfers__v48 = 
                (0x1fU & ((IData)(4U) + ((vlSelfRef.__PVT__memc__DOT__transfers
                                          [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                  >> 1U))][3U] 
                                          << 4U) | 
                                         (vlSelfRef.__PVT__memc__DOT__transfers
                                          [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                  >> 1U))][2U] 
                                          >> 0x1cU))));
            __VdlyDim0__memc__DOT__transfers__v48 = 
                (3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                       >> 1U));
            __VdlySet__memc__DOT__transfers__v48 = 1U;
            if ((1U & ((IData)(vlSelfRef.__PVT__memc__DOT__isMMIO) 
                       >> (3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                 >> 1U))))) {
                vlSelfRef.__PVT__memc__DOT__sglLdRes 
                    = ((0x1fffffffe000ULL & vlSelfRef.__PVT__memc__DOT__sglLdRes) 
                       | (IData)((IData)((1U | (0x1ffeU 
                                                & (vlSelfRef.__PVT__memc__DOT__transfers
                                                   [
                                                   (3U 
                                                    & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                       >> 1U))][2U] 
                                                   >> 0xaU))))));
                vlSelfRef.__PVT__memc__DOT__sglLdRes 
                    = ((0x1fffULL & vlSelfRef.__PVT__memc__DOT__sglLdRes) 
                       | ((QData)((IData)(((vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[0U] 
                                              >> 1U)))) 
                          << 0xdU));
                __VdlyDim0__memc__DOT__transfers__v49 
                    = (3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                             >> 1U));
                __VdlySet__memc__DOT__transfers__v49 = 1U;
            }
        }
        if (((IData)(vlSymsp->TOP__Top__extMem.__PVT__s_axi_rvalid) 
             & (IData)(vlSelfRef.__PVT__s_axi_rready))) {
            if ((1U & (~ (vlSelfRef.__PVT__memc__DOT__transfers
                          [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][0U] 
                          >> 5U)))) {
                __VdlyVal__memc__DOT__transfers__v50 
                    = (0x1fU & ((IData)(4U) + ((vlSelfRef.__PVT__memc__DOT__transfers
                                                [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][2U] 
                                                << 9U) 
                                               | (vlSelfRef.__PVT__memc__DOT__transfers
                                                  [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][2U] 
                                                  >> 0x17U))));
                __VdlyDim0__memc__DOT__transfers__v50 
                    = vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid;
                __VdlySet__memc__DOT__transfers__v50 = 1U;
                vlSelfRef.__PVT__memc__DOT__ldDataFwd[1U] 
                    = ((1U & vlSelfRef.__PVT__memc__DOT__ldDataFwd[1U]) 
                       | (vlSymsp->TOP__Top__extMem.__PVT__s_axi_rdata[0U] 
                          << 1U));
                vlSelfRef.__PVT__memc__DOT__ldDataFwd[2U] 
                    = ((vlSymsp->TOP__Top__extMem.__PVT__s_axi_rdata[0U] 
                        >> 0x1fU) | (vlSymsp->TOP__Top__extMem.__PVT__s_axi_rdata[1U] 
                                     << 1U));
                vlSelfRef.__PVT__memc__DOT__ldDataFwd[3U] 
                    = ((vlSymsp->TOP__Top__extMem.__PVT__s_axi_rdata[1U] 
                        >> 0x1fU) | (vlSymsp->TOP__Top__extMem.__PVT__s_axi_rdata[2U] 
                                     << 1U));
                vlSelfRef.__PVT__memc__DOT__ldDataFwd[4U] 
                    = ((vlSymsp->TOP__Top__extMem.__PVT__s_axi_rdata[2U] 
                        >> 0x1fU) | (vlSymsp->TOP__Top__extMem.__PVT__s_axi_rdata[3U] 
                                     << 1U));
                vlSelfRef.__PVT__memc__DOT__ldDataFwd[5U] 
                    = (vlSymsp->TOP__Top__extMem.__PVT__s_axi_rdata[3U] 
                       >> 0x1fU);
                if ((0U == (0x1fU & (vlSelfRef.__PVT__memc__DOT__transfers
                                     [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][2U] 
                                     >> 0x17U)))) {
                    if ((0x800U & vlSelfRef.__PVT__memc__DOT__transfers
                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][3U])) {
                        vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0 
                            = (0xffU & ((vlSelfRef.__PVT__memc__DOT__transfers
                                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][4U] 
                                         << 5U) | (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][3U] 
                                                   >> 0x1bU)));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[1U] 
                            = ((0xfffffe01U & vlSelfRef.__PVT__memc__DOT__ldDataFwd[1U]) 
                               | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                  << 1U));
                    }
                    if ((0x1000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][3U])) {
                        vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0 
                            = (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                        [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][4U] 
                                        >> 3U));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[1U] 
                            = ((0xfffe01ffU & vlSelfRef.__PVT__memc__DOT__ldDataFwd[1U]) 
                               | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                  << 9U));
                    }
                    if ((0x2000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][3U])) {
                        vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0 
                            = (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                        [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][4U] 
                                        >> 0xbU));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[1U] 
                            = ((0xfe01ffffU & vlSelfRef.__PVT__memc__DOT__ldDataFwd[1U]) 
                               | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                  << 0x11U));
                    }
                    if ((0x4000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][3U])) {
                        vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0 
                            = (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                        [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][4U] 
                                        >> 0x13U));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[1U] 
                            = ((0x1ffffffU & vlSelfRef.__PVT__memc__DOT__ldDataFwd[1U]) 
                               | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                  << 0x19U));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[2U] 
                            = ((0xfffffffeU & vlSelfRef.__PVT__memc__DOT__ldDataFwd[2U]) 
                               | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                  >> 7U));
                    }
                    if ((0x8000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][3U])) {
                        vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0 
                            = (0xffU & ((vlSelfRef.__PVT__memc__DOT__transfers
                                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][5U] 
                                         << 5U) | (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][4U] 
                                                   >> 0x1bU)));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[2U] 
                            = ((0xfffffe01U & vlSelfRef.__PVT__memc__DOT__ldDataFwd[2U]) 
                               | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                  << 1U));
                    }
                    if ((0x10000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][3U])) {
                        vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0 
                            = (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                        [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][5U] 
                                        >> 3U));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[2U] 
                            = ((0xfffe01ffU & vlSelfRef.__PVT__memc__DOT__ldDataFwd[2U]) 
                               | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                  << 9U));
                    }
                    if ((0x20000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][3U])) {
                        vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0 
                            = (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                        [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][5U] 
                                        >> 0xbU));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[2U] 
                            = ((0xfe01ffffU & vlSelfRef.__PVT__memc__DOT__ldDataFwd[2U]) 
                               | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                  << 0x11U));
                    }
                    if ((0x40000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][3U])) {
                        vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0 
                            = (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                        [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][5U] 
                                        >> 0x13U));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[2U] 
                            = ((0x1ffffffU & vlSelfRef.__PVT__memc__DOT__ldDataFwd[2U]) 
                               | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                  << 0x19U));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[3U] 
                            = ((0xfffffffeU & vlSelfRef.__PVT__memc__DOT__ldDataFwd[3U]) 
                               | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                  >> 7U));
                    }
                    if ((0x80000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][3U])) {
                        vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0 
                            = (0xffU & ((vlSelfRef.__PVT__memc__DOT__transfers
                                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][6U] 
                                         << 5U) | (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][5U] 
                                                   >> 0x1bU)));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[3U] 
                            = ((0xfffffe01U & vlSelfRef.__PVT__memc__DOT__ldDataFwd[3U]) 
                               | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                  << 1U));
                    }
                    if ((0x100000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][3U])) {
                        vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0 
                            = (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                        [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][6U] 
                                        >> 3U));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[3U] 
                            = ((0xfffe01ffU & vlSelfRef.__PVT__memc__DOT__ldDataFwd[3U]) 
                               | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                  << 9U));
                    }
                    if ((0x200000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][3U])) {
                        vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0 
                            = (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                        [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][6U] 
                                        >> 0xbU));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[3U] 
                            = ((0xfe01ffffU & vlSelfRef.__PVT__memc__DOT__ldDataFwd[3U]) 
                               | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                  << 0x11U));
                    }
                    if ((0x400000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][3U])) {
                        vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0 
                            = (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                        [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][6U] 
                                        >> 0x13U));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[3U] 
                            = ((0x1ffffffU & vlSelfRef.__PVT__memc__DOT__ldDataFwd[3U]) 
                               | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                  << 0x19U));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[4U] 
                            = ((0xfffffffeU & vlSelfRef.__PVT__memc__DOT__ldDataFwd[4U]) 
                               | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                  >> 7U));
                    }
                    if ((0x800000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][3U])) {
                        vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0 
                            = (0xffU & ((vlSelfRef.__PVT__memc__DOT__transfers
                                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][7U] 
                                         << 5U) | (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][6U] 
                                                   >> 0x1bU)));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[4U] 
                            = ((0xfffffe01U & vlSelfRef.__PVT__memc__DOT__ldDataFwd[4U]) 
                               | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                  << 1U));
                    }
                    if ((0x1000000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][3U])) {
                        vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0 
                            = (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                        [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][7U] 
                                        >> 3U));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[4U] 
                            = ((0xfffe01ffU & vlSelfRef.__PVT__memc__DOT__ldDataFwd[4U]) 
                               | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                  << 9U));
                    }
                    if ((0x2000000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][3U])) {
                        vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0 
                            = (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                        [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][7U] 
                                        >> 0xbU));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[4U] 
                            = ((0xfe01ffffU & vlSelfRef.__PVT__memc__DOT__ldDataFwd[4U]) 
                               | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                  << 0x11U));
                    }
                    if ((0x4000000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][3U])) {
                        vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0 
                            = (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                        [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][7U] 
                                        >> 0x13U));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[4U] 
                            = ((0x1ffffffU & vlSelfRef.__PVT__memc__DOT__ldDataFwd[4U]) 
                               | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                  << 0x19U));
                        vlSelfRef.__PVT__memc__DOT__ldDataFwd[5U] 
                            = (1U & ((IData)(vlSelfRef.memc__DOT____Vlvbound_h15ae7a35__0) 
                                     >> 7U));
                    }
                }
                vlSelfRef.__PVT__memc__DOT__ldDataFwd[0U] 
                    = ((0xffffff81U & vlSelfRef.__PVT__memc__DOT__ldDataFwd[0U]) 
                       | (0x78U & ((((vlSelfRef.__PVT__memc__DOT__transfers
                                      [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][1U] 
                                      << 0x13U) | (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][1U] 
                                                   >> 0xdU)) 
                                    + ((vlSelfRef.__PVT__memc__DOT__transfers
                                        [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][2U] 
                                        << 9U) | (vlSelfRef.__PVT__memc__DOT__transfers
                                                  [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][2U] 
                                                  >> 0x17U))) 
                                   << 3U)));
                vlSelfRef.__PVT__memc__DOT__ldDataFwd[0U] 
                    = ((0x7fU & vlSelfRef.__PVT__memc__DOT__ldDataFwd[0U]) 
                       | (0xffffff80U & ((vlSelfRef.__PVT__memc__DOT__transfers
                                          [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][2U] 
                                          << 0x16U) 
                                         | (0x3fff80U 
                                            & (vlSelfRef.__PVT__memc__DOT__transfers
                                               [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][1U] 
                                               >> 0xaU)))));
                vlSelfRef.__PVT__memc__DOT__ldDataFwd[1U] 
                    = ((0xfffffffeU & vlSelfRef.__PVT__memc__DOT__ldDataFwd[1U]) 
                       | (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                [vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid][2U] 
                                >> 0xaU)));
                vlSelfRef.__PVT__memc__DOT__ldDataFwd[0U] 
                    = (1U | vlSelfRef.__PVT__memc__DOT__ldDataFwd[0U]);
            }
        }
        if (vlSelfRef.__PVT__memc__DOT__DCW_ackValid) {
            __VdlyVal__memc__DOT__transfers__v51 = 
                (0x1fU & ((IData)(4U) + ((vlSelfRef.__PVT__memc__DOT__transfers
                                          [vlSelfRef.__PVT__memc__DOT__DCW_ackId][3U] 
                                          << 0x1fU) 
                                         | (vlSelfRef.__PVT__memc__DOT__transfers
                                            [vlSelfRef.__PVT__memc__DOT__DCW_ackId][3U] 
                                            >> 1U))));
            __VdlyDim0__memc__DOT__transfers__v51 = vlSelfRef.__PVT__memc__DOT__DCW_ackId;
            __VdlySet__memc__DOT__transfers__v51 = 1U;
            if ((3U == VL_SHIFTR_III(32,32,32, (0x1fU 
                                                & (vlSelfRef.__PVT__memc__DOT__transfers
                                                   [vlSelfRef.__PVT__memc__DOT__DCW_ackId][3U] 
                                                   >> 1U)), 2U))) {
                __VdlyDim0__memc__DOT__transfers__v52 
                    = vlSelfRef.__PVT__memc__DOT__DCW_ackId;
                __VdlySet__memc__DOT__transfers__v52 = 1U;
                if ((0x40U & vlSelfRef.__PVT__memc__DOT__transfers
                     [vlSelfRef.__PVT__memc__DOT__DCW_ackId][0U])) {
                    __VdlyDim0__memc__DOT__transfers__v53 
                        = vlSelfRef.__PVT__memc__DOT__DCW_ackId;
                    __VdlySet__memc__DOT__transfers__v53 = 1U;
                }
            }
        }
        if (vlSelfRef.__PVT__memc__DOT__ICW_ackValid) {
            __VdlyVal__memc__DOT__transfers__v54 = 
                (0x1fU & ((IData)(4U) + ((vlSelfRef.__PVT__memc__DOT__transfers
                                          [vlSelfRef.__PVT__memc__DOT__ICW_ackId][3U] 
                                          << 0x1fU) 
                                         | (vlSelfRef.__PVT__memc__DOT__transfers
                                            [vlSelfRef.__PVT__memc__DOT__ICW_ackId][3U] 
                                            >> 1U))));
            __VdlyDim0__memc__DOT__transfers__v54 = vlSelfRef.__PVT__memc__DOT__ICW_ackId;
            __VdlySet__memc__DOT__transfers__v54 = 1U;
            if ((3U == VL_SHIFTR_III(32,32,32, (0x1fU 
                                                & (vlSelfRef.__PVT__memc__DOT__transfers
                                                   [vlSelfRef.__PVT__memc__DOT__ICW_ackId][3U] 
                                                   >> 1U)), 2U))) {
                __VdlyDim0__memc__DOT__transfers__v55 
                    = vlSelfRef.__PVT__memc__DOT__ICW_ackId;
                __VdlySet__memc__DOT__transfers__v55 = 1U;
                if ((0x40U & vlSelfRef.__PVT__memc__DOT__transfers
                     [vlSelfRef.__PVT__memc__DOT__ICW_ackId][0U])) {
                    __VdlyDim0__memc__DOT__transfers__v56 
                        = vlSelfRef.__PVT__memc__DOT__ICW_ackId;
                    __VdlySet__memc__DOT__transfers__v56 = 1U;
                }
            }
        }
        if (vlSelfRef.__PVT__memc__DOT__awIdxValid) {
            if (((IData)(vlSelfRef.__PVT__memc__DOT__DCR_reqValid) 
                 & (IData)(vlSelfRef.__PVT__memc__DOT__DCR_reqReady))) {
                __VdlyDim0__memc__DOT__transfers__v57 
                    = vlSelfRef.__PVT__memc__DOT__awIdx;
                __VdlySet__memc__DOT__transfers__v57 = 1U;
            }
            if (((IData)(vlSelfRef.__PVT__memc__DOT__axiAW) 
                 & (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO_ready))) {
                __VdlyDim0__memc__DOT__transfers__v58 
                    = vlSelfRef.__PVT__memc__DOT__awIdx;
                __VdlySet__memc__DOT__transfers__v58 = 1U;
            }
        }
        if (vlSelfRef.__PVT__memc__DOT__DCR_cacheReadValid) {
            __VdlyVal__memc__DOT__transfers__v59 = 
                (0x1fU & ((IData)(4U) + ((vlSelfRef.__PVT__memc__DOT__transfers
                                          [vlSelfRef.__PVT__memc__DOT__DCR_cacheReadId][3U] 
                                          << 0x1aU) 
                                         | (vlSelfRef.__PVT__memc__DOT__transfers
                                            [vlSelfRef.__PVT__memc__DOT__DCR_cacheReadId][3U] 
                                            >> 6U))));
            __VdlyDim0__memc__DOT__transfers__v59 = vlSelfRef.__PVT__memc__DOT__DCR_cacheReadId;
            __VdlySet__memc__DOT__transfers__v59 = 1U;
        }
        if (vlSymsp->TOP__Top__extMem.__PVT__s_axi_bvalid) {
            if ((1U & ((IData)(vlSelfRef.__PVT__memc__DOT__isMMIO) 
                       >> (IData)(vlSymsp->TOP__Top__extMem.__PVT__s_axi_bid)))) {
                vlSelfRef.__PVT__memc__DOT__sglStRes 
                    = (1U | (0x1ffeU & (vlSelfRef.__PVT__memc__DOT__transfers
                                        [vlSymsp->TOP__Top__extMem.__PVT__s_axi_bid][2U] 
                                        >> 0xaU)));
            }
            __VdlyDim0__memc__DOT__transfers__v60 = vlSymsp->TOP__Top__extMem.__PVT__s_axi_bid;
            __VdlySet__memc__DOT__transfers__v60 = 1U;
            if ((0x80U & vlSelfRef.__PVT__memc__DOT__transfers
                 [vlSymsp->TOP__Top__extMem.__PVT__s_axi_bid][0U])) {
                __VdlyDim0__memc__DOT__transfers__v61 
                    = vlSymsp->TOP__Top__extMem.__PVT__s_axi_bid;
                __VdlySet__memc__DOT__transfers__v61 = 1U;
            }
        }
    }
    if (__VdlySet__memc__DOT__transfers__v0) {
        vlSelfRef.__PVT__memc__DOT__transfers[0U][0U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[0U];
        vlSelfRef.__PVT__memc__DOT__transfers[0U][1U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[1U];
        vlSelfRef.__PVT__memc__DOT__transfers[0U][2U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[2U];
        vlSelfRef.__PVT__memc__DOT__transfers[0U][3U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[3U];
        vlSelfRef.__PVT__memc__DOT__transfers[0U][4U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[4U];
        vlSelfRef.__PVT__memc__DOT__transfers[0U][5U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[5U];
        vlSelfRef.__PVT__memc__DOT__transfers[0U][6U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[6U];
        vlSelfRef.__PVT__memc__DOT__transfers[0U][7U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[7U];
        vlSelfRef.__PVT__memc__DOT__transfers[1U][0U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[0U];
        vlSelfRef.__PVT__memc__DOT__transfers[1U][1U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[1U];
        vlSelfRef.__PVT__memc__DOT__transfers[1U][2U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[2U];
        vlSelfRef.__PVT__memc__DOT__transfers[1U][3U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[3U];
        vlSelfRef.__PVT__memc__DOT__transfers[1U][4U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[4U];
        vlSelfRef.__PVT__memc__DOT__transfers[1U][5U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[5U];
        vlSelfRef.__PVT__memc__DOT__transfers[1U][6U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[6U];
        vlSelfRef.__PVT__memc__DOT__transfers[1U][7U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[7U];
        vlSelfRef.__PVT__memc__DOT__transfers[2U][0U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[0U];
        vlSelfRef.__PVT__memc__DOT__transfers[2U][1U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[1U];
        vlSelfRef.__PVT__memc__DOT__transfers[2U][2U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[2U];
        vlSelfRef.__PVT__memc__DOT__transfers[2U][3U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[3U];
        vlSelfRef.__PVT__memc__DOT__transfers[2U][4U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[4U];
        vlSelfRef.__PVT__memc__DOT__transfers[2U][5U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[5U];
        vlSelfRef.__PVT__memc__DOT__transfers[2U][6U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[6U];
        vlSelfRef.__PVT__memc__DOT__transfers[2U][7U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[7U];
        vlSelfRef.__PVT__memc__DOT__transfers[3U][0U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[0U];
        vlSelfRef.__PVT__memc__DOT__transfers[3U][1U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[1U];
        vlSelfRef.__PVT__memc__DOT__transfers[3U][2U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[2U];
        vlSelfRef.__PVT__memc__DOT__transfers[3U][3U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[3U];
        vlSelfRef.__PVT__memc__DOT__transfers[3U][4U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[4U];
        vlSelfRef.__PVT__memc__DOT__transfers[3U][5U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[5U];
        vlSelfRef.__PVT__memc__DOT__transfers[3U][6U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[6U];
        vlSelfRef.__PVT__memc__DOT__transfers[3U][7U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[7U];
    }
    if (__VdlySet__memc__DOT__transfers__v4) {
        vlSelfRef.__PVT__memc__DOT__transfers[0U][0U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[0U];
        vlSelfRef.__PVT__memc__DOT__transfers[0U][1U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[1U];
        vlSelfRef.__PVT__memc__DOT__transfers[0U][2U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[2U];
        vlSelfRef.__PVT__memc__DOT__transfers[0U][3U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[3U];
        vlSelfRef.__PVT__memc__DOT__transfers[0U][4U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[4U];
        vlSelfRef.__PVT__memc__DOT__transfers[0U][5U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[5U];
        vlSelfRef.__PVT__memc__DOT__transfers[0U][6U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[6U];
        vlSelfRef.__PVT__memc__DOT__transfers[0U][7U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[7U];
    }
    if (__VdlySet__memc__DOT__transfers__v5) {
        vlSelfRef.__PVT__memc__DOT__transfers[1U][0U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[0U];
        vlSelfRef.__PVT__memc__DOT__transfers[1U][1U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[1U];
        vlSelfRef.__PVT__memc__DOT__transfers[1U][2U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[2U];
        vlSelfRef.__PVT__memc__DOT__transfers[1U][3U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[3U];
        vlSelfRef.__PVT__memc__DOT__transfers[1U][4U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[4U];
        vlSelfRef.__PVT__memc__DOT__transfers[1U][5U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[5U];
        vlSelfRef.__PVT__memc__DOT__transfers[1U][6U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[6U];
        vlSelfRef.__PVT__memc__DOT__transfers[1U][7U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[7U];
    }
    if (__VdlySet__memc__DOT__transfers__v6) {
        vlSelfRef.__PVT__memc__DOT__transfers[2U][0U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[0U];
        vlSelfRef.__PVT__memc__DOT__transfers[2U][1U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[1U];
        vlSelfRef.__PVT__memc__DOT__transfers[2U][2U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[2U];
        vlSelfRef.__PVT__memc__DOT__transfers[2U][3U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[3U];
        vlSelfRef.__PVT__memc__DOT__transfers[2U][4U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[4U];
        vlSelfRef.__PVT__memc__DOT__transfers[2U][5U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[5U];
        vlSelfRef.__PVT__memc__DOT__transfers[2U][6U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[6U];
        vlSelfRef.__PVT__memc__DOT__transfers[2U][7U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[7U];
    }
    if (__VdlySet__memc__DOT__transfers__v7) {
        vlSelfRef.__PVT__memc__DOT__transfers[3U][0U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[0U];
        vlSelfRef.__PVT__memc__DOT__transfers[3U][1U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[1U];
        vlSelfRef.__PVT__memc__DOT__transfers[3U][2U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[2U];
        vlSelfRef.__PVT__memc__DOT__transfers[3U][3U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[3U];
        vlSelfRef.__PVT__memc__DOT__transfers[3U][4U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[4U];
        vlSelfRef.__PVT__memc__DOT__transfers[3U][5U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[5U];
        vlSelfRef.__PVT__memc__DOT__transfers[3U][6U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[6U];
        vlSelfRef.__PVT__memc__DOT__transfers[3U][7U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[7U];
    }
    if (__VdlySet__memc__DOT__transfers__v8) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v8][0U] 
            = (1U | vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v8][0U]);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v9][0U] 
            = ((0xffffffe1U & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v9][0U]) 
               | ((IData)(__VdlyVal__memc__DOT__transfers__v9) 
                  << 1U));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v10][0U] 
            = (0xfffffbffU & vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v10][0U]);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v11][0U] 
            = (0xfffffcffU & vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v11][0U]);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v12][3U] 
            = (0xffffffc1U & vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v12][3U]);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v13][2U] 
            = (0xfffffffU & vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v13][2U]);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v13][3U] 
            = (0xfffffffeU & vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v13][3U]);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v14][2U] 
            = (0xf07fffffU & vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v14][2U]);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v15][3U] 
            = (0x400U | (0xfffff83fU & vlSelfRef.__PVT__memc__DOT__transfers
                         [__VdlyDim0__memc__DOT__transfers__v15][3U]));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v16][0U] 
            = ((0xffffffdfU & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v16][0U]) 
               | ((IData)(__VdlyVal__memc__DOT__transfers__v16) 
                  << 5U));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v17][0U] 
            = (0x80U | vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v17][0U]);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v18][0U] 
            = (0x40U | vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v18][0U]);
    }
    if (__VdlySet__memc__DOT__transfers__v19) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v19][0U] 
            = ((0x7ffU & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v19][0U]) 
               | (__VdlyVal__memc__DOT__transfers__v19 
                  << 0xbU));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v19][1U] 
            = ((0xfffff800U & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v19][1U]) 
               | (__VdlyVal__memc__DOT__transfers__v19 
                  >> 0x15U));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v20][1U] 
            = ((0x7ffU & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v20][1U]) 
               | (__VdlyVal__memc__DOT__transfers__v20 
                  << 0xbU));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v20][2U] 
            = ((0xfffff800U & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v20][2U]) 
               | (__VdlyVal__memc__DOT__transfers__v20 
                  >> 0x15U));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v21][2U] 
            = ((0xff8007ffU & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v21][2U]) 
               | ((IData)(__VdlyVal__memc__DOT__transfers__v21) 
                  << 0xbU));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v22][3U] 
            = ((0x7ffffffU & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v22][3U]) 
               | (__VdlyVal__memc__DOT__transfers__v22[0U] 
                  << 0x1bU));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v22][4U] 
            = ((__VdlyVal__memc__DOT__transfers__v22[0U] 
                >> 5U) | (__VdlyVal__memc__DOT__transfers__v22[1U] 
                          << 0x1bU));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v22][5U] 
            = ((__VdlyVal__memc__DOT__transfers__v22[1U] 
                >> 5U) | (__VdlyVal__memc__DOT__transfers__v22[2U] 
                          << 0x1bU));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v22][6U] 
            = ((__VdlyVal__memc__DOT__transfers__v22[2U] 
                >> 5U) | (__VdlyVal__memc__DOT__transfers__v22[3U] 
                          << 0x1bU));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v22][7U] 
            = (__VdlyVal__memc__DOT__transfers__v22[3U] 
               >> 5U);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v23][3U] 
            = ((0xf80007ffU & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v23][3U]) 
               | ((IData)(__VdlyVal__memc__DOT__transfers__v23) 
                  << 0xbU));
    }
    if (__VdlySet__memc__DOT__transfers__v24) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v24][0U] 
            = ((0x7ffU & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v24][0U]) 
               | (__VdlyVal__memc__DOT__transfers__v24 
                  << 0xbU));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v24][1U] 
            = ((0xfffff800U & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v24][1U]) 
               | (__VdlyVal__memc__DOT__transfers__v24 
                  >> 0x15U));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v25][1U] 
            = ((0x7ffU & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v25][1U]) 
               | (__VdlyVal__memc__DOT__transfers__v25 
                  << 0xbU));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v25][2U] 
            = ((0xfffff800U & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v25][2U]) 
               | (__VdlyVal__memc__DOT__transfers__v25 
                  >> 0x15U));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v26][2U] 
            = ((0xff8007ffU & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v26][2U]) 
               | ((IData)(__VdlyVal__memc__DOT__transfers__v26) 
                  << 0xbU));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v27][3U] 
            = ((0x7ffffffU & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v27][3U]) 
               | (__VdlyVal__memc__DOT__transfers__v27[0U] 
                  << 0x1bU));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v27][4U] 
            = ((__VdlyVal__memc__DOT__transfers__v27[0U] 
                >> 5U) | (__VdlyVal__memc__DOT__transfers__v27[1U] 
                          << 0x1bU));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v27][5U] 
            = ((__VdlyVal__memc__DOT__transfers__v27[1U] 
                >> 5U) | (__VdlyVal__memc__DOT__transfers__v27[2U] 
                          << 0x1bU));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v27][6U] 
            = ((__VdlyVal__memc__DOT__transfers__v27[2U] 
                >> 5U) | (__VdlyVal__memc__DOT__transfers__v27[3U] 
                          << 0x1bU));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v27][7U] 
            = (__VdlyVal__memc__DOT__transfers__v27[3U] 
               >> 5U);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v28][3U] 
            = (0x7fff800U | vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v28][3U]);
    }
    if (__VdlySet__memc__DOT__transfers__v29) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v29][0U] 
            = (0x300U | vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v29][0U]);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v30][0U] 
            = (0xffffffbfU & vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v30][0U]);
    }
    if (__VdlySet__memc__DOT__transfers__v31) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v31][0U] 
            = (0x300U | vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v31][0U]);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v32][0U] 
            = (0xffffffbfU & vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v32][0U]);
    }
    if (__VdlySet__memc__DOT__transfers__v33) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v33][0U] 
            = (0x400U | vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v33][0U]);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v34][0U] 
            = (0xffffff7fU & vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v34][0U]);
    }
    if (__VdlySet__memc__DOT__transfers__v35) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v35][0U] 
            = (0x400U | vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v35][0U]);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v36][0U] 
            = (0xffffff7fU & vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v36][0U]);
    }
    if (__VdlySet__memc__DOT__transfers__v37) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v37][0U] 
            = (0x400U | vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v37][0U]);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v38][0U] 
            = (0xffffff7fU & vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v38][0U]);
    }
    if (__VdlySet__memc__DOT__transfers__v39) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v39][0U] 
            = (0x300U | vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v39][0U]);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v40][0U] 
            = (0xffffffbfU & vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v40][0U]);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v41][3U] 
            = (0xfffff83fU & vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v41][3U]);
    }
    if (__VdlySet__memc__DOT__transfers__v42) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v42][0U] 
            = (0x400U | vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v42][0U]);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v43][0U] 
            = (0x300U | vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v43][0U]);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v44][3U] 
            = (0xfffff83fU & vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v44][3U]);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v45][0U] 
            = (0xffffff7fU & vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v45][0U]);
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v46][0U] 
            = (0xffffffbfU & vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v46][0U]);
    }
    if (__VdlySet__memc__DOT__transfers__v47) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v47][0U] 
            = (0xfffffbffU & vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v47][0U]);
    }
    if (__VdlySet__memc__DOT__transfers__v48) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v48][2U] 
            = ((0xfffffffU & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v48][2U]) 
               | ((IData)(__VdlyVal__memc__DOT__transfers__v48) 
                  << 0x1cU));
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v48][3U] 
            = ((0xfffffffeU & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v48][3U]) 
               | ((IData)(__VdlyVal__memc__DOT__transfers__v48) 
                  >> 4U));
    }
    if (__VdlySet__memc__DOT__transfers__v49) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v49][0U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[0U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v49][1U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[1U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v49][2U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[2U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v49][3U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[3U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v49][4U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[4U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v49][5U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[5U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v49][6U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[6U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v49][7U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[7U];
    }
    if (__VdlySet__memc__DOT__transfers__v50) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v50][2U] 
            = ((0xf07fffffU & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v50][2U]) 
               | ((IData)(__VdlyVal__memc__DOT__transfers__v50) 
                  << 0x17U));
    }
    if (__VdlySet__memc__DOT__transfers__v51) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v51][3U] 
            = ((0xffffffc1U & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v51][3U]) 
               | ((IData)(__VdlyVal__memc__DOT__transfers__v51) 
                  << 1U));
    }
    if (__VdlySet__memc__DOT__transfers__v52) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v52][0U] 
            = (0x80U | vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v52][0U]);
    }
    if (__VdlySet__memc__DOT__transfers__v53) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v53][0U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[0U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v53][1U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[1U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v53][2U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[2U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v53][3U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[3U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v53][4U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[4U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v53][5U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[5U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v53][6U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[6U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v53][7U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[7U];
    }
    if (__VdlySet__memc__DOT__transfers__v54) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v54][3U] 
            = ((0xffffffc1U & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v54][3U]) 
               | ((IData)(__VdlyVal__memc__DOT__transfers__v54) 
                  << 1U));
    }
    if (__VdlySet__memc__DOT__transfers__v55) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v55][0U] 
            = (0x80U | vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v55][0U]);
    }
    if (__VdlySet__memc__DOT__transfers__v56) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v56][0U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[0U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v56][1U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[1U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v56][2U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[2U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v56][3U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[3U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v56][4U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[4U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v56][5U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[5U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v56][6U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[6U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v56][7U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[7U];
    }
    if (__VdlySet__memc__DOT__transfers__v57) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v57][0U] 
            = (0xfffffeffU & vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v57][0U]);
    }
    if (__VdlySet__memc__DOT__transfers__v58) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v58][0U] 
            = (0xfffffdffU & vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v58][0U]);
    }
    if (__VdlySet__memc__DOT__transfers__v59) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v59][3U] 
            = ((0xfffff83fU & vlSelfRef.__PVT__memc__DOT__transfers
                [__VdlyDim0__memc__DOT__transfers__v59][3U]) 
               | ((IData)(__VdlyVal__memc__DOT__transfers__v59) 
                  << 6U));
    }
    if (__VdlySet__memc__DOT__transfers__v60) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v60][0U] 
            = (0x40U | vlSelfRef.__PVT__memc__DOT__transfers
               [__VdlyDim0__memc__DOT__transfers__v60][0U]);
    }
    if (__VdlySet__memc__DOT__transfers__v61) {
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v61][0U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[0U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v61][1U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[1U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v61][2U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[2U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v61][3U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[3U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v61][4U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[4U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v61][5U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[5U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v61][6U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[6U];
        vlSelfRef.__PVT__memc__DOT__transfers[__VdlyDim0__memc__DOT__transfers__v61][7U] 
            = VTop__ConstPool__CONST_hb5c5367a_0[7U];
    }
    vlSelfRef.__PVT__memc__DOT__enqIdx = 0U;
    vlSelfRef.__PVT__memc__DOT__enqIdxValid = 0U;
    if ((1U & (~ vlSelfRef.__PVT__memc__DOT__transfers
               [0U][0U]))) {
        vlSelfRef.__PVT__memc__DOT__enqIdx = 0U;
        vlSelfRef.__PVT__memc__DOT__enqIdxValid = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__memc__DOT__enqIdxValid)) 
               & (~ vlSelfRef.__PVT__memc__DOT__transfers
                  [1U][0U])))) {
        vlSelfRef.__PVT__memc__DOT__enqIdx = 1U;
        vlSelfRef.__PVT__memc__DOT__enqIdxValid = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__memc__DOT__enqIdxValid)) 
               & (~ vlSelfRef.__PVT__memc__DOT__transfers
                  [2U][0U])))) {
        vlSelfRef.__PVT__memc__DOT__enqIdx = 2U;
        vlSelfRef.__PVT__memc__DOT__enqIdxValid = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__memc__DOT__enqIdxValid)) 
               & (~ vlSelfRef.__PVT__memc__DOT__transfers
                  [3U][0U])))) {
        vlSelfRef.__PVT__memc__DOT__enqIdx = 3U;
        vlSelfRef.__PVT__memc__DOT__enqIdxValid = 1U;
    }
}

VL_INLINE_OPT void VTop_SoC___nba_sequent__TOP__Top__soc__3(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___nba_sequent__TOP__Top__soc__3\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*11:0*/ memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_addr;
    memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_addr = 0;
    CData/*0:0*/ memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_we;
    memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_we = 0;
    CData/*0:0*/ memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_ce;
    memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_ce = 0;
    VlWide<4>/*127:0*/ __PVT__memc__DOT__dcacheReadIF__DOT__acc;
    VL_ZERO_W(128, __PVT__memc__DOT__dcacheReadIF__DOT__acc);
    CData/*0:0*/ __PVT__memc__DOT__dcacheReadIF__DOT__allowNewRead;
    __PVT__memc__DOT__dcacheReadIF__DOT__allowNewRead = 0;
    CData/*5:0*/ __PVT__memc__DOT__dcacheReadIF__DOT__unnamedblk1__DOT__inFlight;
    __PVT__memc__DOT__dcacheReadIF__DOT__unnamedblk1__DOT__inFlight = 0;
    CData/*0:0*/ __Vdly__memc__DOT__dcacheReadIF__DOT__accIdx_r;
    __Vdly__memc__DOT__dcacheReadIF__DOT__accIdx_r = 0;
    QData/*63:0*/ __Vdly__memc__DOT__dcacheReadIF__DOT__cur;
    __Vdly__memc__DOT__dcacheReadIF__DOT__cur = 0;
    QData/*63:0*/ __Vdly__memc__DOT__dcacheReadIF__DOT__next;
    __Vdly__memc__DOT__dcacheReadIF__DOT__next = 0;
    VlWide<3>/*73:0*/ __Vdly__memc__DOT__dcacheReadIF__DOT__readMetaSR;
    VL_ZERO_W(74, __Vdly__memc__DOT__dcacheReadIF__DOT__readMetaSR);
    CData/*4:0*/ __Vdly__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexIn;
    __Vdly__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexIn = 0;
    CData/*4:0*/ __Vdly__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexOut;
    __Vdly__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexOut = 0;
    CData/*1:0*/ __Vdly__memc__DOT__awFIFO__DOT__indexIn;
    __Vdly__memc__DOT__awFIFO__DOT__indexIn = 0;
    CData/*1:0*/ __Vdly__memc__DOT__awFIFO__DOT__indexOut;
    __Vdly__memc__DOT__awFIFO__DOT__indexOut = 0;
    SData/*11:0*/ __VdlyVal__MEMC_raddr__v0;
    __VdlyVal__MEMC_raddr__v0 = 0;
    SData/*11:0*/ __VdlyVal__MEMC_raddr__v1;
    __VdlyVal__MEMC_raddr__v1 = 0;
    VlWide<5>/*130:0*/ __VdlyVal__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0;
    VL_ZERO_W(131, __VdlyVal__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0);
    CData/*4:0*/ __VdlyDim0__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0;
    __VdlyDim0__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0;
    __VdlySet__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0 = 0;
    QData/*51:0*/ __VdlyVal__memc__DOT__awFIFO__DOT__mem__v0;
    __VdlyVal__memc__DOT__awFIFO__DOT__mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__memc__DOT__awFIFO__DOT__mem__v0;
    __VdlyDim0__memc__DOT__awFIFO__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__awFIFO__DOT__mem__v0;
    __VdlySet__memc__DOT__awFIFO__DOT__mem__v0 = 0;
    // Body
    __VdlySet__memc__DOT__awFIFO__DOT__mem__v0 = 0U;
    __Vdly__memc__DOT__awFIFO__DOT__indexIn = vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__indexIn;
    __Vdly__memc__DOT__awFIFO__DOT__indexOut = vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__indexOut;
    __Vdly__memc__DOT__dcacheReadIF__DOT__accIdx_r 
        = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__accIdx_r;
    __Vdly__memc__DOT__dcacheReadIF__DOT__next = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__next;
    __Vdly__memc__DOT__dcacheReadIF__DOT__readMetaSR[0U] 
        = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[0U];
    __Vdly__memc__DOT__dcacheReadIF__DOT__readMetaSR[1U] 
        = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[1U];
    __Vdly__memc__DOT__dcacheReadIF__DOT__readMetaSR[2U] 
        = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[2U];
    __Vdly__memc__DOT__dcacheReadIF__DOT__cur = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__cur;
    __VdlySet__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0 = 0U;
    __Vdly__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexIn 
        = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexIn;
    __Vdly__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexOut 
        = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexOut;
    __VdlyVal__MEMC_raddr__v0 = vlSelfRef.__PVT__MEMC_raddr
        [0U];
    __VdlyVal__MEMC_raddr__v1 = (0xfffU & vlSelfRef.__PVT__MC_DC_rd[4U]);
    if (vlSymsp->TOP.rst) {
        __Vdly__memc__DOT__awFIFO__DOT__indexIn = 0U;
        __Vdly__memc__DOT__dcacheReadIF__DOT__readMetaSR[0U] = 0U;
        __Vdly__memc__DOT__dcacheReadIF__DOT__readMetaSR[1U] = 0U;
        __Vdly__memc__DOT__dcacheReadIF__DOT__readMetaSR[2U] = 0U;
        __Vdly__memc__DOT__dcacheReadIF__DOT__cur = 0ULL;
        __Vdly__memc__DOT__dcacheReadIF__DOT__next = 0ULL;
        __Vdly__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexIn = 0U;
        vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__outValidReg = 0U;
        vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__fullCond = 0U;
        __Vdly__memc__DOT__awFIFO__DOT__indexOut = 0U;
        vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__outDataReg = 0ULL;
    } else {
        __Vdly__memc__DOT__dcacheReadIF__DOT__readMetaSR[0U] 
            = (IData)(((IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readSucc)
                        ? vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMeta
                        : 0ULL));
        __Vdly__memc__DOT__dcacheReadIF__DOT__readMetaSR[1U] 
            = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[0U]))))) 
                << 5U) | (IData)((((IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readSucc)
                                    ? vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMeta
                                    : 0ULL) >> 0x20U)));
        __Vdly__memc__DOT__dcacheReadIF__DOT__readMetaSR[2U] 
            = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[0U]))))) 
                >> 0x1bU) | ((IData)(((0x1fffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[0U])))) 
                                      >> 0x20U)) << 5U));
        vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__unnamedblk2__DOT__incoming = 0ULL;
        if (((IData)(vlSelfRef.__PVT__memc__DOT__DCR_reqValid) 
             & (IData)(vlSelfRef.__PVT__memc__DOT__DCR_reqReady))) {
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__unnamedblk2__DOT__incoming 
                = ((0xffffffffffff8000ULL & vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__unnamedblk2__DOT__incoming) 
                   | (IData)((IData)((1U | (((IData)(vlSelfRef.__PVT__memc__DOT__DCR_reqAddr) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.__PVT__memc__DOT__DCR_reqTId) 
                                               << 1U))))));
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__unnamedblk2__DOT__incoming 
                = ((0x7fffULL & vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__unnamedblk2__DOT__incoming) 
                   | (((QData)((IData)(vlSelfRef.__PVT__memc__DOT__DCR_reqMMIOData)) 
                       << 0x20U) | ((QData)((IData)(
                                                    (((IData)(vlSelfRef.__PVT__memc__DOT__DCR_reqMMIO) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.__PVT__memc__DOT__DCR_reqLen)))) 
                                    << 0xfU)));
        }
        if (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readSucc) {
            if ((1U & (IData)((vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMeta 
                               >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__next))) {
                    __Vdly__memc__DOT__dcacheReadIF__DOT__cur 
                        = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__next;
                    __Vdly__memc__DOT__dcacheReadIF__DOT__next = 0ULL;
                } else {
                    __Vdly__memc__DOT__dcacheReadIF__DOT__cur 
                        = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__unnamedblk2__DOT__incoming;
                    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__unnamedblk2__DOT__incoming = 0ULL;
                }
            } else {
                __Vdly__memc__DOT__dcacheReadIF__DOT__cur 
                    = ((0xffffffff807fffffULL & __Vdly__memc__DOT__dcacheReadIF__DOT__cur) 
                       | ((QData)((IData)((0xffU & 
                                           ((IData)(4U) 
                                            + (IData)(
                                                      (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__cur 
                                                       >> 0x17U)))))) 
                          << 0x17U));
            }
        }
        if ((1U & (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__unnamedblk2__DOT__incoming))) {
            if ((1U & (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__cur))) {
                __Vdly__memc__DOT__dcacheReadIF__DOT__next 
                    = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__unnamedblk2__DOT__incoming;
            } else {
                __Vdly__memc__DOT__dcacheReadIF__DOT__cur 
                    = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__unnamedblk2__DOT__incoming;
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__empty) 
                       & (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__doInsert)) 
                      & (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outputReady))))) {
            if (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__doInsert) {
                __VdlyVal__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0[0U] 
                    = vlSelfRef.memc__DOT__dcacheReadIF__DOT____Vcellinp__fifo__IN_data[0U];
                __VdlyVal__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0[1U] 
                    = vlSelfRef.memc__DOT__dcacheReadIF__DOT____Vcellinp__fifo__IN_data[1U];
                __VdlyVal__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0[2U] 
                    = vlSelfRef.memc__DOT__dcacheReadIF__DOT____Vcellinp__fifo__IN_data[2U];
                __VdlyVal__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0[3U] 
                    = vlSelfRef.memc__DOT__dcacheReadIF__DOT____Vcellinp__fifo__IN_data[3U];
                __VdlyVal__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0[4U] 
                    = vlSelfRef.memc__DOT__dcacheReadIF__DOT____Vcellinp__fifo__IN_data[4U];
                __VdlyDim0__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0 
                    = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexIn;
                __VdlySet__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0 = 1U;
                __Vdly__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexIn 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexIn)));
            }
        }
        if (vlSymsp->TOP__Top__extMem.__PVT__s_axi_awready) {
            vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__outValidReg = 0U;
        }
        if (vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__outputReady) {
            vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__outDataReg = 0ULL;
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__combPassthru) 
                      & (IData)(vlSymsp->TOP__Top__extMem.__PVT__s_axi_awready))))) {
            if ((1U & (~ (((IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__empty) 
                           & (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__doInsert)) 
                          & (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__outputReady))))) {
                if (vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__doInsert) {
                    __VdlyVal__memc__DOT__awFIFO__DOT__mem__v0 
                        = (0xfffffffffffffULL & (vlSelfRef.__PVT__memc__DOT__axiAW 
                                                 >> 1U));
                    __VdlyDim0__memc__DOT__awFIFO__DOT__mem__v0 
                        = vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__indexIn;
                    __VdlySet__memc__DOT__awFIFO__DOT__mem__v0 = 1U;
                    __Vdly__memc__DOT__awFIFO__DOT__indexIn 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__indexIn)));
                }
                if (((IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__doInsert) 
                     != (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__doExtract))) {
                    vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__fullCond 
                        = vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__doInsert;
                }
            }
            if ((((IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__empty) 
                  & (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__doInsert)) 
                 & (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__outputReady))) {
                vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__outValidReg = 1U;
                vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__outDataReg 
                    = (0xfffffffffffffULL & (vlSelfRef.__PVT__memc__DOT__axiAW 
                                             >> 1U));
            } else if (vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__doExtract) {
                vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__outValidReg = 1U;
                __Vdly__memc__DOT__awFIFO__DOT__indexOut 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__indexOut)));
                vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__outDataReg 
                    = vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__mem
                    [vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__indexOut];
            }
        }
    }
    if (vlSymsp->TOP.rst) {
        __Vdly__memc__DOT__dcacheReadIF__DOT__accIdx_r = 0U;
    } else {
        if (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__doAcc) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0x40U & vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[1U])))) {
                    VL_WRITEF_NX("[%0t] %%Error: CacheReadInterface.sv:121: Assertion failed in %NTop.soc.memc.dcacheReadIF: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/CacheReadInterface.sv", 121, "");
                }
            }
            VL_ASSIGNSEL_WW(128,128,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__accIdx_r), 7U)), __PVT__memc__DOT__dcacheReadIF__DOT__acc, vlSelfRef.__PVT__DC_dataOut);
        }
        __Vdly__memc__DOT__dcacheReadIF__DOT__accIdx_r 
            = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__accIdx_c;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outValidReg = 0U;
        vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__fullCond = 0U;
        __Vdly__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexOut = 0U;
        vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[0U] = 0U;
        vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[1U] = 0U;
        vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[2U] = 0U;
        vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[3U] = 0U;
        vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[4U] = 0U;
    } else {
        if (vlSymsp->TOP__Top__extMem.__PVT__s_axi_wready) {
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outValidReg = 0U;
        }
        if ((1U & (~ (((IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__empty) 
                       & (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__doInsert)) 
                      & (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outputReady))))) {
            if (((IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__doInsert) 
                 != (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__doExtract))) {
                vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__fullCond 
                    = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__doInsert;
            }
        }
        if (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outputReady) {
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[0U] = 0U;
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[1U] = 0U;
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[2U] = 0U;
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[3U] = 0U;
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[4U] = 0U;
        }
        if ((((IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__empty) 
              & (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__doInsert)) 
             & (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outputReady))) {
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outValidReg = 1U;
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[0U] 
                = vlSelfRef.memc__DOT__dcacheReadIF__DOT____Vcellinp__fifo__IN_data[0U];
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[1U] 
                = vlSelfRef.memc__DOT__dcacheReadIF__DOT____Vcellinp__fifo__IN_data[1U];
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[2U] 
                = vlSelfRef.memc__DOT__dcacheReadIF__DOT____Vcellinp__fifo__IN_data[2U];
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[3U] 
                = vlSelfRef.memc__DOT__dcacheReadIF__DOT____Vcellinp__fifo__IN_data[3U];
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[4U] 
                = vlSelfRef.memc__DOT__dcacheReadIF__DOT____Vcellinp__fifo__IN_data[4U];
        } else if (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__doExtract) {
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outValidReg = 1U;
            __Vdly__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexOut 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexOut)));
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[0U] 
                = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem
                [vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexOut][0U];
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[1U] 
                = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem
                [vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexOut][1U];
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[2U] 
                = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem
                [vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexOut][2U];
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[3U] 
                = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem
                [vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexOut][3U];
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[4U] 
                = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem
                [vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexOut][4U];
        }
    }
    vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__indexIn 
        = __Vdly__memc__DOT__awFIFO__DOT__indexIn;
    vlSelfRef.__PVT__MEMC_raddr[1U] = __VdlyVal__MEMC_raddr__v0;
    vlSelfRef.__PVT__MEMC_raddr[0U] = __VdlyVal__MEMC_raddr__v1;
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__next 
        = __Vdly__memc__DOT__dcacheReadIF__DOT__next;
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__cur 
        = __Vdly__memc__DOT__dcacheReadIF__DOT__cur;
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexIn 
        = __Vdly__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexIn;
    if (__VdlySet__memc__DOT__awFIFO__DOT__mem__v0) {
        vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__mem[__VdlyDim0__memc__DOT__awFIFO__DOT__mem__v0] 
            = __VdlyVal__memc__DOT__awFIFO__DOT__mem__v0;
    }
    vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__indexOut 
        = __Vdly__memc__DOT__awFIFO__DOT__indexOut;
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[0U] 
        = __Vdly__memc__DOT__dcacheReadIF__DOT__readMetaSR[0U];
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[1U] 
        = __Vdly__memc__DOT__dcacheReadIF__DOT__readMetaSR[1U];
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[2U] 
        = __Vdly__memc__DOT__dcacheReadIF__DOT__readMetaSR[2U];
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__accIdx_r 
        = __Vdly__memc__DOT__dcacheReadIF__DOT__accIdx_r;
    if (__VdlySet__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0) {
        vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem[__VdlyDim0__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0][0U] 
            = __VdlyVal__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0[0U];
        vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem[__VdlyDim0__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0][1U] 
            = __VdlyVal__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0[1U];
        vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem[__VdlyDim0__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0][2U] 
            = __VdlyVal__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0[2U];
        vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem[__VdlyDim0__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0][3U] 
            = __VdlyVal__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0[3U];
        vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem[__VdlyDim0__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0][4U] 
            = __VdlyVal__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem__v0[4U];
    }
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexOut 
        = __Vdly__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexOut;
    vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__equal 
        = ((IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__indexIn) 
           == (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__indexOut));
    vlSelfRef.__PVT__s_axi_wvalid = 0U;
    vlSelfRef.__PVT__s_axi_wstrb = 0U;
    vlSelfRef.__PVT__s_axi_wdata[0U] = 0U;
    vlSelfRef.__PVT__s_axi_wdata[1U] = 0U;
    vlSelfRef.__PVT__s_axi_wdata[2U] = 0U;
    vlSelfRef.__PVT__s_axi_wdata[3U] = 0U;
    vlSelfRef.__PVT__s_axi_wlast = 0U;
    if (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outValidReg) {
        vlSelfRef.__PVT__s_axi_wvalid = 1U;
        vlSelfRef.__PVT__s_axi_wstrb = 0xffffU;
        vlSelfRef.__PVT__s_axi_wdata[0U] = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[0U];
        vlSelfRef.__PVT__s_axi_wdata[1U] = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[1U];
        vlSelfRef.__PVT__s_axi_wdata[2U] = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[2U];
        vlSelfRef.__PVT__s_axi_wdata[3U] = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[3U];
        vlSelfRef.__PVT__s_axi_wlast = (1U & (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg[4U] 
                                              >> 2U));
    }
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__equal 
        = ((IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexIn) 
           == (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexOut));
    vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__fullCond)) 
           & (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__equal));
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__fullCond)) 
           & (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__equal));
    __PVT__memc__DOT__dcacheReadIF__DOT__unnamedblk1__DOT__inFlight 
        = (0x3fU & ((1U & (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[1U] 
                           >> 5U)) + (1U & vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[0U])));
    __PVT__memc__DOT__dcacheReadIF__DOT__allowNewRead 
        = (((IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__empty)
             ? 0x20U : (0x1fU & ((IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexOut) 
                                 - (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexIn)))) 
           > (IData)(__PVT__memc__DOT__dcacheReadIF__DOT__unnamedblk1__DOT__inFlight));
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMeta = 0ULL;
    memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_ce = 1U;
    memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_we = 1U;
    memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_addr = 0U;
    if (((IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__cur) 
         & (IData)(__PVT__memc__DOT__dcacheReadIF__DOT__allowNewRead))) {
        vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMeta 
            = (1ULL | vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMeta);
        vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMeta 
            = ((0x1fffffffe7ULL & vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMeta) 
               | ((QData)((IData)((3U & (IData)((vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__cur 
                                                 >> 1U))))) 
                  << 3U));
        vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMeta 
            = ((0x1ffffffffdULL & vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMeta) 
               | ((QData)((IData)((1U & (((0x3fU & (IData)(
                                                           (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__cur 
                                                            >> 0x19U))) 
                                          == (0x3fU 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__cur 
                                                         >> 0x11U)))) 
                                         | (IData)(
                                                   (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__cur 
                                                    >> 0x1fU)))))) 
                  << 1U));
        vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMeta 
            = ((0x1ffffffffbULL & vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMeta) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__cur 
                                                 >> 0x1fU))))) 
                  << 2U));
        vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMeta 
            = ((0x1fULL & vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMeta) 
               | ((QData)((IData)((IData)((vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__cur 
                                           >> 0x20U)))) 
                  << 5U));
        memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_ce = 0U;
        memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_we = 1U;
        memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_addr 
            = ((0xff0U & ((IData)((vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__cur 
                                   >> 7U)) << 4U)) 
               | (0xfU & ((IData)((vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__cur 
                                   >> 3U)) + (IData)(
                                                     (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__cur 
                                                      >> 0x17U)))));
    }
    vlSelfRef.__PVT__MC_DC_rd[0U] = 0U;
    vlSelfRef.__PVT__MC_DC_rd[1U] = 0U;
    vlSelfRef.__PVT__MC_DC_rd[2U] = 0U;
    vlSelfRef.__PVT__MC_DC_rd[3U] = 0U;
    vlSelfRef.__PVT__MC_DC_rd[4U] = ((0x20000000U & 
                                      vlSelfRef.__PVT__MC_DC_rd[4U]) 
                                     | (0x3fffffffU 
                                        & (((IData)(memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_we) 
                                            << 0x1cU) 
                                           | (IData)(memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_addr))));
    vlSelfRef.__PVT__MC_DC_rd[4U] = ((0x1fffffffU & 
                                      vlSelfRef.__PVT__MC_DC_rd[4U]) 
                                     | (0x3fffffffU 
                                        & ((IData)(memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_ce) 
                                           << 0x1dU)));
}

extern const VlWide<8>/*255:0*/ VTop__ConstPool__CONST_hbd3d39cf_0;

VL_INLINE_OPT void VTop_SoC___nba_sequent__TOP__Top__soc__5(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___nba_sequent__TOP__Top__soc__5\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl;
    __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl = 0;
    CData/*31:0*/ __Vtemp_5;
    CData/*31:0*/ __Vtemp_6;
    CData/*31:0*/ __Vtemp_7;
    CData/*31:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    CData/*31:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    CData/*31:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    // Body
    vlSelfRef.__PVT__memc__DOT__isMMIO = ((0xeU & (IData)(vlSelfRef.__PVT__memc__DOT__isMMIO)) 
                                          | ((0x10U 
                                              & vlSelfRef.__PVT__memc__DOT__transfers
                                              [0U][0U])
                                              ? ((1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__memc__DOT__transfers
                                                      [0U][0U] 
                                                      >> 3U))) 
                                                 && ((1U 
                                                      & (~ 
                                                         (vlSelfRef.__PVT__memc__DOT__transfers
                                                          [0U][0U] 
                                                          >> 2U))) 
                                                     && (1U 
                                                         & vlSelfRef.__PVT__memc__DOT__transfers
                                                         [0U][0U])))
                                              : ((1U 
                                                  & (vlSelfRef.__PVT__memc__DOT__transfers
                                                     [0U][0U] 
                                                     >> 3U)) 
                                                 && (1U 
                                                     & vlSelfRef.__PVT__memc__DOT__transfers
                                                     [0U][0U]))));
    vlSelfRef.__PVT__memc__DOT__isMMIO = ((0xdU & (IData)(vlSelfRef.__PVT__memc__DOT__isMMIO)) 
                                          | (((0x10U 
                                               & vlSelfRef.__PVT__memc__DOT__transfers
                                               [1U][0U])
                                               ? ((1U 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__memc__DOT__transfers
                                                       [1U][0U] 
                                                       >> 3U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__memc__DOT__transfers
                                                           [1U][0U] 
                                                           >> 2U))) 
                                                      && (1U 
                                                          & vlSelfRef.__PVT__memc__DOT__transfers
                                                          [1U][0U])))
                                               : ((1U 
                                                   & (vlSelfRef.__PVT__memc__DOT__transfers
                                                      [1U][0U] 
                                                      >> 3U)) 
                                                  && (1U 
                                                      & vlSelfRef.__PVT__memc__DOT__transfers
                                                      [1U][0U]))) 
                                             << 1U));
    vlSelfRef.__PVT__memc__DOT__isMMIO = ((0xbU & (IData)(vlSelfRef.__PVT__memc__DOT__isMMIO)) 
                                          | (((0x10U 
                                               & vlSelfRef.__PVT__memc__DOT__transfers
                                               [2U][0U])
                                               ? ((1U 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__memc__DOT__transfers
                                                       [2U][0U] 
                                                       >> 3U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__memc__DOT__transfers
                                                           [2U][0U] 
                                                           >> 2U))) 
                                                      && (1U 
                                                          & vlSelfRef.__PVT__memc__DOT__transfers
                                                          [2U][0U])))
                                               : ((1U 
                                                   & (vlSelfRef.__PVT__memc__DOT__transfers
                                                      [2U][0U] 
                                                      >> 3U)) 
                                                  && (1U 
                                                      & vlSelfRef.__PVT__memc__DOT__transfers
                                                      [2U][0U]))) 
                                             << 2U));
    vlSelfRef.__PVT__memc__DOT__isMMIO = ((7U & (IData)(vlSelfRef.__PVT__memc__DOT__isMMIO)) 
                                          | (((0x10U 
                                               & vlSelfRef.__PVT__memc__DOT__transfers
                                               [3U][0U])
                                               ? ((1U 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__memc__DOT__transfers
                                                       [3U][0U] 
                                                       >> 3U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__memc__DOT__transfers
                                                           [3U][0U] 
                                                           >> 2U))) 
                                                      && (1U 
                                                          & vlSelfRef.__PVT__memc__DOT__transfers
                                                          [3U][0U])))
                                               : ((1U 
                                                   & (vlSelfRef.__PVT__memc__DOT__transfers
                                                      [3U][0U] 
                                                      >> 3U)) 
                                                  && (1U 
                                                      & vlSelfRef.__PVT__memc__DOT__transfers
                                                      [3U][0U]))) 
                                             << 3U));
    vlSelfRef.MemC_ctrl[2U][0U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [2U][0U];
    vlSelfRef.MemC_ctrl[2U][1U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [2U][1U];
    vlSelfRef.MemC_ctrl[2U][2U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [2U][2U];
    vlSelfRef.MemC_ctrl[2U][3U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [2U][3U];
    vlSelfRef.MemC_ctrl[2U][4U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [2U][4U];
    vlSelfRef.MemC_ctrl[2U][5U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [2U][5U];
    vlSelfRef.MemC_ctrl[2U][6U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [2U][6U];
    vlSelfRef.MemC_ctrl[2U][7U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [2U][7U];
    vlSelfRef.MemC_ctrl[1U][0U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [1U][0U];
    vlSelfRef.MemC_ctrl[1U][1U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [1U][1U];
    vlSelfRef.MemC_ctrl[1U][2U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [1U][2U];
    vlSelfRef.MemC_ctrl[1U][3U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [1U][3U];
    vlSelfRef.MemC_ctrl[1U][4U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [1U][4U];
    vlSelfRef.MemC_ctrl[1U][5U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [1U][5U];
    vlSelfRef.MemC_ctrl[1U][6U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [1U][6U];
    vlSelfRef.MemC_ctrl[1U][7U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [1U][7U];
    vlSelfRef.MemC_ctrl[0U][0U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [0U][0U];
    vlSelfRef.MemC_ctrl[0U][1U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [0U][1U];
    vlSelfRef.MemC_ctrl[0U][2U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [0U][2U];
    vlSelfRef.MemC_ctrl[0U][3U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [0U][3U];
    vlSelfRef.MemC_ctrl[0U][4U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [0U][4U];
    vlSelfRef.MemC_ctrl[0U][5U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [0U][5U];
    vlSelfRef.MemC_ctrl[0U][6U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [0U][6U];
    vlSelfRef.MemC_ctrl[0U][7U] = vlSymsp->TOP__Top__soc__core.__PVT__OUT_memc
        [0U][7U];
    vlSelfRef.MemC_stat[0U] = (1U | vlSelfRef.MemC_stat[0U]);
    vlSelfRef.MemC_stat[1U] = (0x3fffffffU & vlSelfRef.MemC_stat[1U]);
    vlSelfRef.MemC_stat[2U] = 0U;
    vlSelfRef.MemC_stat[3U] = 0U;
    vlSelfRef.MemC_stat[4U] = (0xfffc0000U & vlSelfRef.MemC_stat[4U]);
    vlSelfRef.MemC_stat[1U] = (0xbfffffffU & vlSelfRef.MemC_stat[1U]);
    if ((1U & (vlSelfRef.__PVT__memc__DOT__transfers
               [0U][0U] & (~ (IData)(vlSelfRef.__PVT__memc__DOT__isMMIO))))) {
        vlSelfRef.MemC_stat[1U] = (0x40000000U | vlSelfRef.MemC_stat[1U]);
        vlSelfRef.memc__DOT____Vlvbound_h8d33e052__0 
            = (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                     [0U][0U] >> 5U));
        vlSelfRef.MemC_stat[2U] = ((0xfffffffeU & vlSelfRef.MemC_stat[2U]) 
                                   | (IData)(vlSelfRef.memc__DOT____Vlvbound_h8d33e052__0));
        vlSelfRef.memc__DOT____Vlvbound_hcddad6bd__0 
            = (0x1fU & (vlSelfRef.__PVT__memc__DOT__transfers
                        [0U][3U] >> 1U));
        vlSelfRef.MemC_stat[2U] = ((0xffffffc1U & vlSelfRef.MemC_stat[2U]) 
                                   | ((IData)(vlSelfRef.memc__DOT____Vlvbound_hcddad6bd__0) 
                                      << 1U));
        vlSelfRef.memc__DOT____Vlvbound_h8aeaf560__0 
            = (0xfffU & (vlSelfRef.__PVT__memc__DOT__transfers
                         [0U][2U] >> 0xbU));
        vlSelfRef.MemC_stat[2U] = ((0xfffc003fU & vlSelfRef.MemC_stat[2U]) 
                                   | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h8aeaf560__0) 
                                      << 6U));
        vlSelfRef.memc__DOT____Vlvbound_h14e0abbb__0 
            = ((vlSelfRef.__PVT__memc__DOT__transfers
                [0U][1U] << 0x15U) | (vlSelfRef.__PVT__memc__DOT__transfers
                                      [0U][0U] >> 0xbU));
        vlSelfRef.MemC_stat[3U] = ((0x3ffffU & vlSelfRef.MemC_stat[3U]) 
                                   | (vlSelfRef.memc__DOT____Vlvbound_h14e0abbb__0 
                                      << 0x12U));
        vlSelfRef.MemC_stat[4U] = ((0xfffc0000U & vlSelfRef.MemC_stat[4U]) 
                                   | (vlSelfRef.memc__DOT____Vlvbound_h14e0abbb__0 
                                      >> 0xeU));
        vlSelfRef.memc__DOT____Vlvbound_h1349bd51__0 
            = ((vlSelfRef.__PVT__memc__DOT__transfers
                [0U][2U] << 0x15U) | (vlSelfRef.__PVT__memc__DOT__transfers
                                      [0U][1U] >> 0xbU));
        vlSelfRef.MemC_stat[2U] = ((0x3ffffU & vlSelfRef.MemC_stat[2U]) 
                                   | (vlSelfRef.memc__DOT____Vlvbound_h1349bd51__0 
                                      << 0x12U));
        vlSelfRef.MemC_stat[3U] = ((0xfffc0000U & vlSelfRef.MemC_stat[3U]) 
                                   | (vlSelfRef.memc__DOT____Vlvbound_h1349bd51__0 
                                      >> 0xeU));
        vlSelfRef.memc__DOT____Vlvbound_h8cf1d8c4__0 
            = (((~ (vlSelfRef.__PVT__memc__DOT__transfers
                    [0U][0U] >> 0xaU)) & (0U == (3U 
                                                 & (vlSelfRef.__PVT__memc__DOT__transfers
                                                    [0U][0U] 
                                                    >> 8U)))) 
               & (0U != (0x1fU & (vlSelfRef.__PVT__memc__DOT__transfers
                                  [0U][3U] >> 6U))));
        vlSelfRef.MemC_stat[1U] = ((0x7fffffffU & vlSelfRef.MemC_stat[1U]) 
                                   | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h8cf1d8c4__0) 
                                      << 0x1fU));
    }
    vlSelfRef.MemC_stat[4U] = (0x3ffffU & vlSelfRef.MemC_stat[4U]);
    vlSelfRef.MemC_stat[5U] = 0U;
    vlSelfRef.MemC_stat[6U] = 0U;
    vlSelfRef.MemC_stat[7U] = (0xffffffc0U & vlSelfRef.MemC_stat[7U]);
    vlSelfRef.MemC_stat[4U] = (0xfffbffffU & vlSelfRef.MemC_stat[4U]);
    if ((1U & (vlSelfRef.__PVT__memc__DOT__transfers
               [1U][0U] & (~ ((IData)(vlSelfRef.__PVT__memc__DOT__isMMIO) 
                              >> 1U))))) {
        vlSelfRef.MemC_stat[4U] = (0x40000U | vlSelfRef.MemC_stat[4U]);
        vlSelfRef.memc__DOT____Vlvbound_h8d33e052__0 
            = (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                     [1U][0U] >> 5U));
        vlSelfRef.MemC_stat[4U] = ((0xffefffffU & vlSelfRef.MemC_stat[4U]) 
                                   | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h8d33e052__0) 
                                      << 0x14U));
        vlSelfRef.memc__DOT____Vlvbound_hcddad6bd__0 
            = (0x1fU & (vlSelfRef.__PVT__memc__DOT__transfers
                        [1U][3U] >> 1U));
        vlSelfRef.MemC_stat[4U] = ((0xfc1fffffU & vlSelfRef.MemC_stat[4U]) 
                                   | ((IData)(vlSelfRef.memc__DOT____Vlvbound_hcddad6bd__0) 
                                      << 0x15U));
        vlSelfRef.memc__DOT____Vlvbound_h8aeaf560__0 
            = (0xfffU & (vlSelfRef.__PVT__memc__DOT__transfers
                         [1U][2U] >> 0xbU));
        vlSelfRef.MemC_stat[4U] = ((0x3ffffffU & vlSelfRef.MemC_stat[4U]) 
                                   | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h8aeaf560__0) 
                                      << 0x1aU));
        vlSelfRef.MemC_stat[5U] = ((0xffffffc0U & vlSelfRef.MemC_stat[5U]) 
                                   | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h8aeaf560__0) 
                                      >> 6U));
        vlSelfRef.memc__DOT____Vlvbound_h14e0abbb__0 
            = ((vlSelfRef.__PVT__memc__DOT__transfers
                [1U][1U] << 0x15U) | (vlSelfRef.__PVT__memc__DOT__transfers
                                      [1U][0U] >> 0xbU));
        vlSelfRef.MemC_stat[6U] = ((0x3fU & vlSelfRef.MemC_stat[6U]) 
                                   | (vlSelfRef.memc__DOT____Vlvbound_h14e0abbb__0 
                                      << 6U));
        vlSelfRef.MemC_stat[7U] = ((0xffffffc0U & vlSelfRef.MemC_stat[7U]) 
                                   | (vlSelfRef.memc__DOT____Vlvbound_h14e0abbb__0 
                                      >> 0x1aU));
        vlSelfRef.memc__DOT____Vlvbound_h1349bd51__0 
            = ((vlSelfRef.__PVT__memc__DOT__transfers
                [1U][2U] << 0x15U) | (vlSelfRef.__PVT__memc__DOT__transfers
                                      [1U][1U] >> 0xbU));
        vlSelfRef.MemC_stat[5U] = ((0x3fU & vlSelfRef.MemC_stat[5U]) 
                                   | (vlSelfRef.memc__DOT____Vlvbound_h1349bd51__0 
                                      << 6U));
        vlSelfRef.MemC_stat[6U] = ((0xffffffc0U & vlSelfRef.MemC_stat[6U]) 
                                   | (vlSelfRef.memc__DOT____Vlvbound_h1349bd51__0 
                                      >> 0x1aU));
        vlSelfRef.memc__DOT____Vlvbound_h8cf1d8c4__0 
            = (((~ (vlSelfRef.__PVT__memc__DOT__transfers
                    [1U][0U] >> 0xaU)) & (0U == (3U 
                                                 & (vlSelfRef.__PVT__memc__DOT__transfers
                                                    [1U][0U] 
                                                    >> 8U)))) 
               & (0U != (0x1fU & (vlSelfRef.__PVT__memc__DOT__transfers
                                  [1U][3U] >> 6U))));
        vlSelfRef.MemC_stat[4U] = ((0xfff7ffffU & vlSelfRef.MemC_stat[4U]) 
                                   | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h8cf1d8c4__0) 
                                      << 0x13U));
    }
    vlSelfRef.MemC_stat[7U] = (0x3fU & vlSelfRef.MemC_stat[7U]);
    vlSelfRef.MemC_stat[8U] = 0U;
    vlSelfRef.MemC_stat[9U] = (0xfc000000U & vlSelfRef.MemC_stat[9U]);
    vlSelfRef.MemC_stat[7U] = (0xffffffbfU & vlSelfRef.MemC_stat[7U]);
    if ((1U & (vlSelfRef.__PVT__memc__DOT__transfers
               [2U][0U] & (~ ((IData)(vlSelfRef.__PVT__memc__DOT__isMMIO) 
                              >> 2U))))) {
        vlSelfRef.MemC_stat[7U] = (0x40U | vlSelfRef.MemC_stat[7U]);
        vlSelfRef.memc__DOT____Vlvbound_h8d33e052__0 
            = (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                     [2U][0U] >> 5U));
        vlSelfRef.MemC_stat[7U] = ((0xfffffeffU & vlSelfRef.MemC_stat[7U]) 
                                   | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h8d33e052__0) 
                                      << 8U));
        vlSelfRef.memc__DOT____Vlvbound_hcddad6bd__0 
            = (0x1fU & (vlSelfRef.__PVT__memc__DOT__transfers
                        [2U][3U] >> 1U));
        vlSelfRef.MemC_stat[7U] = ((0xffffc1ffU & vlSelfRef.MemC_stat[7U]) 
                                   | ((IData)(vlSelfRef.memc__DOT____Vlvbound_hcddad6bd__0) 
                                      << 9U));
        vlSelfRef.memc__DOT____Vlvbound_h8aeaf560__0 
            = (0xfffU & (vlSelfRef.__PVT__memc__DOT__transfers
                         [2U][2U] >> 0xbU));
        vlSelfRef.MemC_stat[7U] = ((0xfc003fffU & vlSelfRef.MemC_stat[7U]) 
                                   | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h8aeaf560__0) 
                                      << 0xeU));
        vlSelfRef.memc__DOT____Vlvbound_h14e0abbb__0 
            = ((vlSelfRef.__PVT__memc__DOT__transfers
                [2U][1U] << 0x15U) | (vlSelfRef.__PVT__memc__DOT__transfers
                                      [2U][0U] >> 0xbU));
        vlSelfRef.MemC_stat[8U] = ((0x3ffffffU & vlSelfRef.MemC_stat[8U]) 
                                   | (vlSelfRef.memc__DOT____Vlvbound_h14e0abbb__0 
                                      << 0x1aU));
        vlSelfRef.MemC_stat[9U] = ((0xfc000000U & vlSelfRef.MemC_stat[9U]) 
                                   | (vlSelfRef.memc__DOT____Vlvbound_h14e0abbb__0 
                                      >> 6U));
        vlSelfRef.memc__DOT____Vlvbound_h1349bd51__0 
            = ((vlSelfRef.__PVT__memc__DOT__transfers
                [2U][2U] << 0x15U) | (vlSelfRef.__PVT__memc__DOT__transfers
                                      [2U][1U] >> 0xbU));
        vlSelfRef.MemC_stat[7U] = ((0x3ffffffU & vlSelfRef.MemC_stat[7U]) 
                                   | (vlSelfRef.memc__DOT____Vlvbound_h1349bd51__0 
                                      << 0x1aU));
        vlSelfRef.MemC_stat[8U] = ((0xfc000000U & vlSelfRef.MemC_stat[8U]) 
                                   | (vlSelfRef.memc__DOT____Vlvbound_h1349bd51__0 
                                      >> 6U));
        vlSelfRef.memc__DOT____Vlvbound_h8cf1d8c4__0 
            = (((~ (vlSelfRef.__PVT__memc__DOT__transfers
                    [2U][0U] >> 0xaU)) & (0U == (3U 
                                                 & (vlSelfRef.__PVT__memc__DOT__transfers
                                                    [2U][0U] 
                                                    >> 8U)))) 
               & (0U != (0x1fU & (vlSelfRef.__PVT__memc__DOT__transfers
                                  [2U][3U] >> 6U))));
        vlSelfRef.MemC_stat[7U] = ((0xffffff7fU & vlSelfRef.MemC_stat[7U]) 
                                   | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h8cf1d8c4__0) 
                                      << 7U));
    }
    vlSelfRef.MemC_stat[9U] = (0x3ffffffU & vlSelfRef.MemC_stat[9U]);
    vlSelfRef.MemC_stat[0xaU] = 0U;
    vlSelfRef.MemC_stat[0xbU] = 0U;
    vlSelfRef.MemC_stat[0xcU] = (0xffffc000U & vlSelfRef.MemC_stat[0xcU]);
    vlSelfRef.MemC_stat[9U] = (0xfbffffffU & vlSelfRef.MemC_stat[9U]);
    if ((1U & (vlSelfRef.__PVT__memc__DOT__transfers
               [3U][0U] & (~ ((IData)(vlSelfRef.__PVT__memc__DOT__isMMIO) 
                              >> 3U))))) {
        vlSelfRef.MemC_stat[9U] = (0x4000000U | vlSelfRef.MemC_stat[9U]);
        vlSelfRef.memc__DOT____Vlvbound_h8d33e052__0 
            = (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                     [3U][0U] >> 5U));
        vlSelfRef.MemC_stat[9U] = ((0xefffffffU & vlSelfRef.MemC_stat[9U]) 
                                   | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h8d33e052__0) 
                                      << 0x1cU));
        vlSelfRef.memc__DOT____Vlvbound_hcddad6bd__0 
            = (0x1fU & (vlSelfRef.__PVT__memc__DOT__transfers
                        [3U][3U] >> 1U));
        vlSelfRef.MemC_stat[9U] = ((0x1fffffffU & vlSelfRef.MemC_stat[9U]) 
                                   | ((IData)(vlSelfRef.memc__DOT____Vlvbound_hcddad6bd__0) 
                                      << 0x1dU));
        vlSelfRef.MemC_stat[0xaU] = ((0xfffffffcU & 
                                      vlSelfRef.MemC_stat[0xaU]) 
                                     | ((IData)(vlSelfRef.memc__DOT____Vlvbound_hcddad6bd__0) 
                                        >> 3U));
        vlSelfRef.memc__DOT____Vlvbound_h8aeaf560__0 
            = (0xfffU & (vlSelfRef.__PVT__memc__DOT__transfers
                         [3U][2U] >> 0xbU));
        vlSelfRef.MemC_stat[0xaU] = ((0xffffc003U & 
                                      vlSelfRef.MemC_stat[0xaU]) 
                                     | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h8aeaf560__0) 
                                        << 2U));
        vlSelfRef.memc__DOT____Vlvbound_h14e0abbb__0 
            = ((vlSelfRef.__PVT__memc__DOT__transfers
                [3U][1U] << 0x15U) | (vlSelfRef.__PVT__memc__DOT__transfers
                                      [3U][0U] >> 0xbU));
        vlSelfRef.MemC_stat[0xbU] = ((0x3fffU & vlSelfRef.MemC_stat[0xbU]) 
                                     | (vlSelfRef.memc__DOT____Vlvbound_h14e0abbb__0 
                                        << 0xeU));
        vlSelfRef.MemC_stat[0xcU] = ((0xffffc000U & 
                                      vlSelfRef.MemC_stat[0xcU]) 
                                     | (vlSelfRef.memc__DOT____Vlvbound_h14e0abbb__0 
                                        >> 0x12U));
        vlSelfRef.memc__DOT____Vlvbound_h1349bd51__0 
            = ((vlSelfRef.__PVT__memc__DOT__transfers
                [3U][2U] << 0x15U) | (vlSelfRef.__PVT__memc__DOT__transfers
                                      [3U][1U] >> 0xbU));
        vlSelfRef.MemC_stat[0xaU] = ((0x3fffU & vlSelfRef.MemC_stat[0xaU]) 
                                     | (vlSelfRef.memc__DOT____Vlvbound_h1349bd51__0 
                                        << 0xeU));
        vlSelfRef.MemC_stat[0xbU] = ((0xffffc000U & 
                                      vlSelfRef.MemC_stat[0xbU]) 
                                     | (vlSelfRef.memc__DOT____Vlvbound_h1349bd51__0 
                                        >> 0x12U));
        vlSelfRef.memc__DOT____Vlvbound_h8cf1d8c4__0 
            = (((~ (vlSelfRef.__PVT__memc__DOT__transfers
                    [3U][0U] >> 0xaU)) & (0U == (3U 
                                                 & (vlSelfRef.__PVT__memc__DOT__transfers
                                                    [3U][0U] 
                                                    >> 8U)))) 
               & (0U != (0x1fU & (vlSelfRef.__PVT__memc__DOT__transfers
                                  [3U][3U] >> 6U))));
        vlSelfRef.MemC_stat[9U] = ((0xf7ffffffU & vlSelfRef.MemC_stat[9U]) 
                                   | ((IData)(vlSelfRef.memc__DOT____Vlvbound_h8cf1d8c4__0) 
                                      << 0x1bU));
    }
    vlSelfRef.MemC_stat[0xcU] = ((0x3fffU & vlSelfRef.MemC_stat[0xcU]) 
                                 | (vlSelfRef.__PVT__memc__DOT__ldDataFwd[0U] 
                                    << 0xeU));
    vlSelfRef.MemC_stat[0xdU] = ((vlSelfRef.__PVT__memc__DOT__ldDataFwd[0U] 
                                  >> 0x12U) | (vlSelfRef.__PVT__memc__DOT__ldDataFwd[1U] 
                                               << 0xeU));
    vlSelfRef.MemC_stat[0xeU] = ((vlSelfRef.__PVT__memc__DOT__ldDataFwd[1U] 
                                  >> 0x12U) | (vlSelfRef.__PVT__memc__DOT__ldDataFwd[2U] 
                                               << 0xeU));
    vlSelfRef.MemC_stat[0xfU] = ((vlSelfRef.__PVT__memc__DOT__ldDataFwd[2U] 
                                  >> 0x12U) | (vlSelfRef.__PVT__memc__DOT__ldDataFwd[3U] 
                                               << 0xeU));
    vlSelfRef.MemC_stat[0x10U] = ((vlSelfRef.__PVT__memc__DOT__ldDataFwd[3U] 
                                   >> 0x12U) | (vlSelfRef.__PVT__memc__DOT__ldDataFwd[4U] 
                                                << 0xeU));
    vlSelfRef.MemC_stat[0x11U] = (0x7fffU & ((vlSelfRef.__PVT__memc__DOT__ldDataFwd[4U] 
                                              >> 0x12U) 
                                             | (vlSelfRef.__PVT__memc__DOT__ldDataFwd[5U] 
                                                << 0xeU)));
    vlSelfRef.MemC_stat[0U] = ((0xfU & vlSelfRef.MemC_stat[0U]) 
                               | ((IData)(((vlSelfRef.__PVT__memc__DOT__sglLdRes 
                                            << 0xdU) 
                                           | (QData)((IData)(vlSelfRef.__PVT__memc__DOT__sglStRes)))) 
                                  << 4U));
    vlSelfRef.MemC_stat[1U] = ((0xc0000000U & vlSelfRef.MemC_stat[1U]) 
                               | (((IData)(((vlSelfRef.__PVT__memc__DOT__sglLdRes 
                                             << 0xdU) 
                                            | (QData)((IData)(vlSelfRef.__PVT__memc__DOT__sglStRes)))) 
                                   >> 0x1cU) | ((IData)(
                                                        (((vlSelfRef.__PVT__memc__DOT__sglLdRes 
                                                           << 0xdU) 
                                                          | (QData)((IData)(vlSelfRef.__PVT__memc__DOT__sglStRes))) 
                                                         >> 0x20U)) 
                                                << 4U)));
    __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl = 0U;
    vlSelfRef.MemC_stat[0U] = (0xeU | vlSelfRef.MemC_stat[0U]);
    vlSelfRef.__PVT__memc__DOT__selReq[0U] = VTop__ConstPool__CONST_hbd3d39cf_0[0U];
    vlSelfRef.__PVT__memc__DOT__selReq[1U] = VTop__ConstPool__CONST_hbd3d39cf_0[1U];
    vlSelfRef.__PVT__memc__DOT__selReq[2U] = VTop__ConstPool__CONST_hbd3d39cf_0[2U];
    vlSelfRef.__PVT__memc__DOT__selReq[3U] = VTop__ConstPool__CONST_hbd3d39cf_0[3U];
    vlSelfRef.__PVT__memc__DOT__selReq[4U] = VTop__ConstPool__CONST_hbd3d39cf_0[4U];
    vlSelfRef.__PVT__memc__DOT__selReq[5U] = VTop__ConstPool__CONST_hbd3d39cf_0[5U];
    vlSelfRef.__PVT__memc__DOT__selReq[6U] = VTop__ConstPool__CONST_hbd3d39cf_0[6U];
    vlSelfRef.__PVT__memc__DOT__selReq[7U] = VTop__ConstPool__CONST_hbd3d39cf_0[7U];
    vlSelfRef.__PVT__memc__DOT__selReq[0U] = (0xfffffff0U 
                                              & vlSelfRef.__PVT__memc__DOT__selReq[0U]);
    if (vlSelfRef.__PVT__memc__DOT__enqIdxValid) {
        if (((0U == (0xfU & vlSelfRef.__PVT__memc__DOT__selReq[0U])) 
             & (0U != (0xfU & vlSelfRef.MemC_ctrl[0U][0U])))) {
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = ((((vlSelfRef.__PVT__memc__DOT__transfers
                      [0U][0U] & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                        = (0xfU & vlSelfRef.MemC_ctrl
                                           [0U][0U]);
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                     & ([&]() {
                                vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                    = (0xfU & (vlSelfRef.__PVT__memc__DOT__transfers
                                               [0U][0U] 
                                               >> 1U));
                                vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                    = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                        | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                       | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                            }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                    & ((1U & (vlSelfRef.MemC_ctrl[0U][0U] 
                              >> 4U)) == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                                [0U][0U] 
                                                >> 5U)))) 
                   & ((0xffU & (vlSelfRef.MemC_ctrl
                                [0U][2U] >> 9U)) == 
                      (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                [0U][2U] >> 0xfU))));
            __Vtemp_5 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
                         | ((((vlSelfRef.__PVT__memc__DOT__transfers
                               [1U][0U] & ([&]() {
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                            = (0xfU 
                                               & vlSelfRef.MemC_ctrl
                                               [0U][0U]);
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                            = (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                    }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                              & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                        = (0xfU & (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [1U][0U] 
                                                   >> 1U));
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                             & ((1U & (vlSelfRef.MemC_ctrl
                                       [0U][0U] >> 4U)) 
                                == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                          [1U][0U] 
                                          >> 5U)))) 
                            & ((0xffU & (vlSelfRef.MemC_ctrl
                                         [0U][2U] >> 9U)) 
                               == (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                            [1U][2U] 
                                            >> 0xfU)))));
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = __Vtemp_5;
            __Vtemp_6 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
                         | ((((vlSelfRef.__PVT__memc__DOT__transfers
                               [2U][0U] & ([&]() {
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                            = (0xfU 
                                               & vlSelfRef.MemC_ctrl
                                               [0U][0U]);
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                            = (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                    }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                              & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                        = (0xfU & (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [2U][0U] 
                                                   >> 1U));
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                             & ((1U & (vlSelfRef.MemC_ctrl
                                       [0U][0U] >> 4U)) 
                                == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                          [2U][0U] 
                                          >> 5U)))) 
                            & ((0xffU & (vlSelfRef.MemC_ctrl
                                         [0U][2U] >> 9U)) 
                               == (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                            [2U][2U] 
                                            >> 0xfU)))));
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = __Vtemp_6;
            __Vtemp_7 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
                         | ((((vlSelfRef.__PVT__memc__DOT__transfers
                               [3U][0U] & ([&]() {
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                            = (0xfU 
                                               & vlSelfRef.MemC_ctrl
                                               [0U][0U]);
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                            = (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                    }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                              & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                        = (0xfU & (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [3U][0U] 
                                                   >> 1U));
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                             & ((1U & (vlSelfRef.MemC_ctrl
                                       [0U][0U] >> 4U)) 
                                == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                          [3U][0U] 
                                          >> 5U)))) 
                            & ((0xffU & (vlSelfRef.MemC_ctrl
                                         [0U][2U] >> 9U)) 
                               == (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                            [3U][2U] 
                                            >> 0xfU)))));
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = __Vtemp_7;
            if ((1U & (~ (IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl)))) {
                vlSelfRef.__PVT__memc__DOT__selReq[0U] 
                    = vlSelfRef.MemC_ctrl[0U][0U];
                vlSelfRef.__PVT__memc__DOT__selReq[1U] 
                    = vlSelfRef.MemC_ctrl[0U][1U];
                vlSelfRef.__PVT__memc__DOT__selReq[2U] 
                    = vlSelfRef.MemC_ctrl[0U][2U];
                vlSelfRef.__PVT__memc__DOT__selReq[3U] 
                    = vlSelfRef.MemC_ctrl[0U][3U];
                vlSelfRef.__PVT__memc__DOT__selReq[4U] 
                    = vlSelfRef.MemC_ctrl[0U][4U];
                vlSelfRef.__PVT__memc__DOT__selReq[5U] 
                    = vlSelfRef.MemC_ctrl[0U][5U];
                vlSelfRef.__PVT__memc__DOT__selReq[6U] 
                    = vlSelfRef.MemC_ctrl[0U][6U];
                vlSelfRef.__PVT__memc__DOT__selReq[7U] 
                    = vlSelfRef.MemC_ctrl[0U][7U];
                vlSelfRef.MemC_stat[0U] = (0xcU | (0xfffffff1U 
                                                   & vlSelfRef.MemC_stat[0U]));
            }
        }
        if (((0U == (0xfU & vlSelfRef.__PVT__memc__DOT__selReq[0U])) 
             & (0U != (0xfU & vlSelfRef.MemC_ctrl[1U][0U])))) {
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = ((((vlSelfRef.__PVT__memc__DOT__transfers
                      [0U][0U] & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                        = (0xfU & vlSelfRef.MemC_ctrl
                                           [1U][0U]);
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                     & ([&]() {
                                vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                    = (0xfU & (vlSelfRef.__PVT__memc__DOT__transfers
                                               [0U][0U] 
                                               >> 1U));
                                vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                    = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                        | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                       | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                            }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                    & ((1U & (vlSelfRef.MemC_ctrl[1U][0U] 
                              >> 4U)) == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                                [0U][0U] 
                                                >> 5U)))) 
                   & ((0xffU & (vlSelfRef.MemC_ctrl
                                [1U][2U] >> 9U)) == 
                      (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                [0U][2U] >> 0xfU))));
            __Vtemp_8 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
                         | ((((vlSelfRef.__PVT__memc__DOT__transfers
                               [1U][0U] & ([&]() {
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                            = (0xfU 
                                               & vlSelfRef.MemC_ctrl
                                               [1U][0U]);
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                            = (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                    }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                              & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                        = (0xfU & (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [1U][0U] 
                                                   >> 1U));
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                             & ((1U & (vlSelfRef.MemC_ctrl
                                       [1U][0U] >> 4U)) 
                                == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                          [1U][0U] 
                                          >> 5U)))) 
                            & ((0xffU & (vlSelfRef.MemC_ctrl
                                         [1U][2U] >> 9U)) 
                               == (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                            [1U][2U] 
                                            >> 0xfU)))));
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = __Vtemp_8;
            __Vtemp_9 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
                         | ((((vlSelfRef.__PVT__memc__DOT__transfers
                               [2U][0U] & ([&]() {
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                            = (0xfU 
                                               & vlSelfRef.MemC_ctrl
                                               [1U][0U]);
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                            = (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                    }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                              & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                        = (0xfU & (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [2U][0U] 
                                                   >> 1U));
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                             & ((1U & (vlSelfRef.MemC_ctrl
                                       [1U][0U] >> 4U)) 
                                == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                          [2U][0U] 
                                          >> 5U)))) 
                            & ((0xffU & (vlSelfRef.MemC_ctrl
                                         [1U][2U] >> 9U)) 
                               == (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                            [2U][2U] 
                                            >> 0xfU)))));
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = __Vtemp_9;
            __Vtemp_10 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
                          | ((((vlSelfRef.__PVT__memc__DOT__transfers
                                [3U][0U] & ([&]() {
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                            = (0xfU 
                                               & vlSelfRef.MemC_ctrl
                                               [1U][0U]);
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                            = (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                    }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                               & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                        = (0xfU & (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [3U][0U] 
                                                   >> 1U));
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                              & ((1U & (vlSelfRef.MemC_ctrl
                                        [1U][0U] >> 4U)) 
                                 == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                           [3U][0U] 
                                           >> 5U)))) 
                             & ((0xffU & (vlSelfRef.MemC_ctrl
                                          [1U][2U] 
                                          >> 9U)) == 
                                (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                          [3U][2U] 
                                          >> 0xfU)))));
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = __Vtemp_10;
            if ((1U & (~ (IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl)))) {
                vlSelfRef.__PVT__memc__DOT__selReq[0U] 
                    = vlSelfRef.MemC_ctrl[1U][0U];
                vlSelfRef.__PVT__memc__DOT__selReq[1U] 
                    = vlSelfRef.MemC_ctrl[1U][1U];
                vlSelfRef.__PVT__memc__DOT__selReq[2U] 
                    = vlSelfRef.MemC_ctrl[1U][2U];
                vlSelfRef.__PVT__memc__DOT__selReq[3U] 
                    = vlSelfRef.MemC_ctrl[1U][3U];
                vlSelfRef.__PVT__memc__DOT__selReq[4U] 
                    = vlSelfRef.MemC_ctrl[1U][4U];
                vlSelfRef.__PVT__memc__DOT__selReq[5U] 
                    = vlSelfRef.MemC_ctrl[1U][5U];
                vlSelfRef.__PVT__memc__DOT__selReq[6U] 
                    = vlSelfRef.MemC_ctrl[1U][6U];
                vlSelfRef.__PVT__memc__DOT__selReq[7U] 
                    = vlSelfRef.MemC_ctrl[1U][7U];
                vlSelfRef.MemC_stat[0U] = (0xaU | (0xfffffff1U 
                                                   & vlSelfRef.MemC_stat[0U]));
            }
        }
        if (((0U == (0xfU & vlSelfRef.__PVT__memc__DOT__selReq[0U])) 
             & (0U != (0xfU & vlSelfRef.MemC_ctrl[2U][0U])))) {
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = ((((vlSelfRef.__PVT__memc__DOT__transfers
                      [0U][0U] & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                        = (0xfU & vlSelfRef.MemC_ctrl
                                           [2U][0U]);
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                     & ([&]() {
                                vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                    = (0xfU & (vlSelfRef.__PVT__memc__DOT__transfers
                                               [0U][0U] 
                                               >> 1U));
                                vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                    = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                        | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                       | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                            }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                    & ((1U & (vlSelfRef.MemC_ctrl[2U][0U] 
                              >> 4U)) == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                                [0U][0U] 
                                                >> 5U)))) 
                   & ((0xffU & (vlSelfRef.MemC_ctrl
                                [2U][2U] >> 9U)) == 
                      (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                [0U][2U] >> 0xfU))));
            __Vtemp_11 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
                          | ((((vlSelfRef.__PVT__memc__DOT__transfers
                                [1U][0U] & ([&]() {
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                            = (0xfU 
                                               & vlSelfRef.MemC_ctrl
                                               [2U][0U]);
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                            = (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                    }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                               & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                        = (0xfU & (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [1U][0U] 
                                                   >> 1U));
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                              & ((1U & (vlSelfRef.MemC_ctrl
                                        [2U][0U] >> 4U)) 
                                 == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                           [1U][0U] 
                                           >> 5U)))) 
                             & ((0xffU & (vlSelfRef.MemC_ctrl
                                          [2U][2U] 
                                          >> 9U)) == 
                                (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                          [1U][2U] 
                                          >> 0xfU)))));
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = __Vtemp_11;
            __Vtemp_12 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
                          | ((((vlSelfRef.__PVT__memc__DOT__transfers
                                [2U][0U] & ([&]() {
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                            = (0xfU 
                                               & vlSelfRef.MemC_ctrl
                                               [2U][0U]);
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                            = (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                    }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                               & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                        = (0xfU & (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [2U][0U] 
                                                   >> 1U));
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                              & ((1U & (vlSelfRef.MemC_ctrl
                                        [2U][0U] >> 4U)) 
                                 == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                           [2U][0U] 
                                           >> 5U)))) 
                             & ((0xffU & (vlSelfRef.MemC_ctrl
                                          [2U][2U] 
                                          >> 9U)) == 
                                (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                          [2U][2U] 
                                          >> 0xfU)))));
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = __Vtemp_12;
            __Vtemp_13 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
                          | ((((vlSelfRef.__PVT__memc__DOT__transfers
                                [3U][0U] & ([&]() {
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                            = (0xfU 
                                               & vlSelfRef.MemC_ctrl
                                               [2U][0U]);
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                            = (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                    }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                               & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                        = (0xfU & (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [3U][0U] 
                                                   >> 1U));
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                              & ((1U & (vlSelfRef.MemC_ctrl
                                        [2U][0U] >> 4U)) 
                                 == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                           [3U][0U] 
                                           >> 5U)))) 
                             & ((0xffU & (vlSelfRef.MemC_ctrl
                                          [2U][2U] 
                                          >> 9U)) == 
                                (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                          [3U][2U] 
                                          >> 0xfU)))));
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = __Vtemp_13;
            if ((1U & (~ (IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl)))) {
                vlSelfRef.__PVT__memc__DOT__selReq[0U] 
                    = vlSelfRef.MemC_ctrl[2U][0U];
                vlSelfRef.__PVT__memc__DOT__selReq[1U] 
                    = vlSelfRef.MemC_ctrl[2U][1U];
                vlSelfRef.__PVT__memc__DOT__selReq[2U] 
                    = vlSelfRef.MemC_ctrl[2U][2U];
                vlSelfRef.__PVT__memc__DOT__selReq[3U] 
                    = vlSelfRef.MemC_ctrl[2U][3U];
                vlSelfRef.__PVT__memc__DOT__selReq[4U] 
                    = vlSelfRef.MemC_ctrl[2U][4U];
                vlSelfRef.__PVT__memc__DOT__selReq[5U] 
                    = vlSelfRef.MemC_ctrl[2U][5U];
                vlSelfRef.__PVT__memc__DOT__selReq[6U] 
                    = vlSelfRef.MemC_ctrl[2U][6U];
                vlSelfRef.__PVT__memc__DOT__selReq[7U] 
                    = vlSelfRef.MemC_ctrl[2U][7U];
                vlSelfRef.MemC_stat[0U] = (6U | (0xfffffff1U 
                                                 & vlSelfRef.MemC_stat[0U]));
            }
        }
    }
}

VL_INLINE_OPT void VTop_SoC___nba_sequent__TOP__Top__soc__6(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___nba_sequent__TOP__Top__soc__6\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__memc__DOT__arFIFO__DOT__indexIn;
    __Vdly__memc__DOT__arFIFO__DOT__indexIn = 0;
    CData/*0:0*/ __Vdly__memc__DOT__arFIFO__DOT__indexOut;
    __Vdly__memc__DOT__arFIFO__DOT__indexOut = 0;
    QData/*51:0*/ __VdlyVal__memc__DOT__arFIFO__DOT__mem__v0;
    __VdlyVal__memc__DOT__arFIFO__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlyDim0__memc__DOT__arFIFO__DOT__mem__v0;
    __VdlyDim0__memc__DOT__arFIFO__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__memc__DOT__arFIFO__DOT__mem__v0;
    __VdlySet__memc__DOT__arFIFO__DOT__mem__v0 = 0;
    // Body
    __VdlySet__memc__DOT__arFIFO__DOT__mem__v0 = 0U;
    __Vdly__memc__DOT__arFIFO__DOT__indexIn = vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__indexIn;
    __Vdly__memc__DOT__arFIFO__DOT__indexOut = vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__indexOut;
    vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtime 
        = vlSelfRef.__Vdly__mmio__DOT__aclint__DOT__mtime;
    if (vlSymsp->TOP.rst) {
        __Vdly__memc__DOT__arFIFO__DOT__indexIn = 0U;
        vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__fullCond = 0U;
        vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__outValidReg = 0U;
        __Vdly__memc__DOT__arFIFO__DOT__indexOut = 0U;
        vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__outDataReg = 0ULL;
    } else {
        if ((1U & (~ (((IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__empty) 
                       & (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__doInsert)) 
                      & (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__outputReady))))) {
            if (vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__doInsert) {
                __VdlyVal__memc__DOT__arFIFO__DOT__mem__v0 
                    = (0xfffffffffffffULL & (vlSelfRef.__PVT__memc__DOT__axiAR 
                                             >> 1U));
                __VdlyDim0__memc__DOT__arFIFO__DOT__mem__v0 
                    = vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__indexIn;
                __VdlySet__memc__DOT__arFIFO__DOT__mem__v0 = 1U;
                __Vdly__memc__DOT__arFIFO__DOT__indexIn 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__indexIn)));
            }
            if (((IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__doInsert) 
                 != (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__doExtract))) {
                vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__fullCond 
                    = vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__doInsert;
            }
        }
        if (vlSymsp->TOP__Top__extMem.__PVT__s_axi_arready) {
            vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__outValidReg = 0U;
        }
        if (vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__outputReady) {
            vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__outDataReg = 0ULL;
        }
        if ((((IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__empty) 
              & (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__doInsert)) 
             & (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__outputReady))) {
            vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__outValidReg = 1U;
            vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__outDataReg 
                = (0xfffffffffffffULL & (vlSelfRef.__PVT__memc__DOT__axiAR 
                                         >> 1U));
        } else if (vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__doExtract) {
            vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__outValidReg = 1U;
            __Vdly__memc__DOT__arFIFO__DOT__indexOut 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__indexOut)));
            vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__outDataReg 
                = vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__mem
                [vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__indexOut];
        }
    }
    vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__indexIn 
        = __Vdly__memc__DOT__arFIFO__DOT__indexIn;
    if (__VdlySet__memc__DOT__arFIFO__DOT__mem__v0) {
        vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__mem[__VdlyDim0__memc__DOT__arFIFO__DOT__mem__v0] 
            = __VdlyVal__memc__DOT__arFIFO__DOT__mem__v0;
    }
    vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__indexOut 
        = __Vdly__memc__DOT__arFIFO__DOT__indexOut;
    vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__equal 
        = ((IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__indexIn) 
           == (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__indexOut));
    vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__fullCond)) 
           & (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__equal));
}

VL_INLINE_OPT void VTop_SoC___nba_sequent__TOP__Top__soc__7(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___nba_sequent__TOP__Top__soc__7\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__memc__DOT__rFIFO__DOT__indexIn;
    __Vdly__memc__DOT__rFIFO__DOT__indexIn = 0;
    CData/*4:0*/ __Vdly__memc__DOT__rFIFO__DOT__indexOut;
    __Vdly__memc__DOT__rFIFO__DOT__indexOut = 0;
    // Body
    vlSelfRef.__VdlySet__memc__DOT__rFIFO__DOT__mem__v0 = 0U;
    __Vdly__memc__DOT__rFIFO__DOT__indexIn = vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__indexIn;
    __Vdly__memc__DOT__rFIFO__DOT__indexOut = vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__indexOut;
    if (vlSymsp->TOP.rst) {
        __Vdly__memc__DOT__rFIFO__DOT__indexIn = 0U;
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_r[0U] = 0U;
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_r[1U] = 0U;
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_r[2U] = 0U;
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_r[3U] = 0U;
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_r[4U] = 0U;
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_r[0U] = 0U;
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_r[1U] = 0U;
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_r[2U] = 0U;
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_r[3U] = 0U;
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_r[4U] = 0U;
        vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outValidReg = 0U;
        vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__fullCond = 0U;
        __Vdly__memc__DOT__rFIFO__DOT__indexOut = 0U;
        vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[0U] = 0U;
        vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[1U] = 0U;
        vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[2U] = 0U;
        vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[3U] = 0U;
        vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[4U] = 0U;
    } else {
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_r[0U] 
            = vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U];
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_r[1U] 
            = vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[1U];
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_r[2U] 
            = vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[2U];
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_r[3U] 
            = vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[3U];
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_r[4U] 
            = vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[4U];
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_r[0U] 
            = vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U];
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_r[1U] 
            = vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[1U];
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_r[2U] 
            = vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[2U];
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_r[3U] 
            = vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[3U];
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_r[4U] 
            = vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[4U];
        if (vlSelfRef.__PVT__memc__DOT__buf_rready) {
            vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outValidReg = 0U;
        }
        if (vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outputReady) {
            vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[0U] = 0U;
            vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[1U] = 0U;
            vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[2U] = 0U;
            vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[3U] = 0U;
            vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[4U] = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__combPassthru) 
                      & (IData)(vlSelfRef.__PVT__memc__DOT__buf_rready))))) {
            if ((1U & (~ (((IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__empty) 
                           & (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__doInsert)) 
                          & (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outputReady))))) {
                if (vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__doInsert) {
                    vlSelfRef.__VdlyVal__memc__DOT__rFIFO__DOT__mem__v0[0U] 
                        = vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[0U];
                    vlSelfRef.__VdlyVal__memc__DOT__rFIFO__DOT__mem__v0[1U] 
                        = vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[1U];
                    vlSelfRef.__VdlyVal__memc__DOT__rFIFO__DOT__mem__v0[2U] 
                        = vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[2U];
                    vlSelfRef.__VdlyVal__memc__DOT__rFIFO__DOT__mem__v0[3U] 
                        = vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[3U];
                    vlSelfRef.__VdlyVal__memc__DOT__rFIFO__DOT__mem__v0[4U] 
                        = vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[4U];
                    vlSelfRef.__VdlyDim0__memc__DOT__rFIFO__DOT__mem__v0 
                        = vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__indexIn;
                    vlSelfRef.__VdlySet__memc__DOT__rFIFO__DOT__mem__v0 = 1U;
                    __Vdly__memc__DOT__rFIFO__DOT__indexIn 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__indexIn)));
                }
                if (((IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__doInsert) 
                     != (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__doExtract))) {
                    vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__fullCond 
                        = vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__doInsert;
                }
            }
            if ((((IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__empty) 
                  & (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__doInsert)) 
                 & (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outputReady))) {
                vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outValidReg = 1U;
                vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[0U] 
                    = vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[0U];
                vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[1U] 
                    = vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[1U];
                vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[2U] 
                    = vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[2U];
                vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[3U] 
                    = vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[3U];
                vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[4U] 
                    = vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[4U];
            } else if (vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__doExtract) {
                vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outValidReg = 1U;
                __Vdly__memc__DOT__rFIFO__DOT__indexOut 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__indexOut)));
                vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[0U] 
                    = vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__mem
                    [vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__indexOut][0U];
                vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[1U] 
                    = vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__mem
                    [vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__indexOut][1U];
                vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[2U] 
                    = vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__mem
                    [vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__indexOut][2U];
                vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[3U] 
                    = vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__mem
                    [vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__indexOut][3U];
                vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[4U] 
                    = vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__mem
                    [vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__indexOut][4U];
            }
        }
    }
    vlSelfRef.__PVT__memc__DOT__ICW_ackValid = 0U;
    vlSelfRef.__PVT__memc__DOT__ICW_ackId = 0U;
    vlSelfRef.__PVT__memc__DOT__DCW_ackValid = 0U;
    vlSelfRef.__PVT__memc__DOT__DCW_ackId = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__writeLast) {
            vlSelfRef.__PVT__memc__DOT__ICW_ackValid = 1U;
            vlSelfRef.__PVT__memc__DOT__ICW_ackId = vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__writeLastId;
        }
        if (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__writeLast) {
            vlSelfRef.__PVT__memc__DOT__DCW_ackValid = 1U;
            vlSelfRef.__PVT__memc__DOT__DCW_ackId = vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__writeLastId;
        }
    }
    vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__indexIn 
        = __Vdly__memc__DOT__rFIFO__DOT__indexIn;
    vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[0U] 
        = ((vlSymsp->TOP__Top__extMem.__PVT__s_axi_rdata[0U] 
            << 1U) | (IData)(vlSymsp->TOP__Top__extMem.__PVT__s_axi_rlast));
    vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[1U] 
        = ((vlSymsp->TOP__Top__extMem.__PVT__s_axi_rdata[0U] 
            >> 0x1fU) | (vlSymsp->TOP__Top__extMem.__PVT__s_axi_rdata[1U] 
                         << 1U));
    vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[2U] 
        = ((vlSymsp->TOP__Top__extMem.__PVT__s_axi_rdata[1U] 
            >> 0x1fU) | (vlSymsp->TOP__Top__extMem.__PVT__s_axi_rdata[2U] 
                         << 1U));
    vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[3U] 
        = ((vlSymsp->TOP__Top__extMem.__PVT__s_axi_rdata[2U] 
            >> 0x1fU) | (vlSymsp->TOP__Top__extMem.__PVT__s_axi_rdata[3U] 
                         << 1U));
    vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[4U] 
        = (((IData)(vlSymsp->TOP__Top__extMem.__PVT__s_axi_rid) 
            << 1U) | (vlSymsp->TOP__Top__extMem.__PVT__s_axi_rdata[3U] 
                      >> 0x1fU));
    vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__indexOut 
        = __Vdly__memc__DOT__rFIFO__DOT__indexOut;
    vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__equal = 
        ((IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__indexIn) 
         == (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__indexOut));
    vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__fullCond)) 
         & (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__equal));
    vlSelfRef.__PVT__memc__DOT__buf_rvalid = vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outValidReg;
    vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[0U] 
        = vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[0U];
    vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[1U] 
        = vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[1U];
    vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[2U] 
        = vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[2U];
    vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[3U] 
        = vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[3U];
    vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
        = vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outDataReg[4U];
    vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__combPassthru = 0U;
    if (((~ (IData)(vlSelfRef.__PVT__memc__DOT__buf_rvalid)) 
         & (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__empty))) {
        vlSelfRef.__PVT__memc__DOT__buf_rvalid = vlSymsp->TOP__Top__extMem.__PVT__s_axi_rvalid;
        vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[0U] 
            = vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[0U];
        vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[1U] 
            = vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[1U];
        vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[2U] 
            = vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[2U];
        vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[3U] 
            = vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[3U];
        vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
            = vlSelfRef.memc__DOT____Vcellinp__rFIFO__IN_data[4U];
        vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__combPassthru = 1U;
    }
}

VL_INLINE_OPT void VTop_SoC___nba_sequent__TOP__Top__soc__8(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___nba_sequent__TOP__Top__soc__8\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = 0;
    VlWide<16>/*511:0*/ dcacheArb__DOT____Vlvbound_h89b306c0__0;
    VL_ZERO_W(512, dcacheArb__DOT____Vlvbound_h89b306c0__0);
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__bankRData[0U][0U][0U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data1[0U];
    vlSelfRef.__PVT__bankRData[0U][0U][1U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data1[1U];
    vlSelfRef.__PVT__bankRData[0U][0U][2U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data1[2U];
    vlSelfRef.__PVT__bankRData[0U][0U][3U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data1[3U];
    vlSelfRef.__PVT__bankRData[0U][0U][4U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data1[4U];
    vlSelfRef.__PVT__bankRData[0U][0U][5U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data1[5U];
    vlSelfRef.__PVT__bankRData[0U][0U][6U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data1[6U];
    vlSelfRef.__PVT__bankRData[0U][0U][7U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data1[7U];
    vlSelfRef.__PVT__bankRData[0U][0U][8U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data1[8U];
    vlSelfRef.__PVT__bankRData[0U][0U][9U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data1[9U];
    vlSelfRef.__PVT__bankRData[0U][0U][0xaU] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data1[0xaU];
    vlSelfRef.__PVT__bankRData[0U][0U][0xbU] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data1[0xbU];
    vlSelfRef.__PVT__bankRData[0U][0U][0xcU] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data1[0xcU];
    vlSelfRef.__PVT__bankRData[0U][0U][0xdU] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data1[0xdU];
    vlSelfRef.__PVT__bankRData[0U][0U][0xeU] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data1[0xeU];
    vlSelfRef.__PVT__bankRData[0U][0U][0xfU] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data1[0xfU];
    vlSelfRef.__PVT__bankRData[0U][1U][0U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data[0U];
    vlSelfRef.__PVT__bankRData[0U][1U][1U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data[1U];
    vlSelfRef.__PVT__bankRData[0U][1U][2U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data[2U];
    vlSelfRef.__PVT__bankRData[0U][1U][3U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data[3U];
    vlSelfRef.__PVT__bankRData[0U][1U][4U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data[4U];
    vlSelfRef.__PVT__bankRData[0U][1U][5U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data[5U];
    vlSelfRef.__PVT__bankRData[0U][1U][6U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data[6U];
    vlSelfRef.__PVT__bankRData[0U][1U][7U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data[7U];
    vlSelfRef.__PVT__bankRData[0U][1U][8U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data[8U];
    vlSelfRef.__PVT__bankRData[0U][1U][9U] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data[9U];
    vlSelfRef.__PVT__bankRData[0U][1U][0xaU] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data[0xaU];
    vlSelfRef.__PVT__bankRData[0U][1U][0xbU] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data[0xbU];
    vlSelfRef.__PVT__bankRData[0U][1U][0xcU] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data[0xcU];
    vlSelfRef.__PVT__bankRData[0U][1U][0xdU] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data[0xdU];
    vlSelfRef.__PVT__bankRData[0U][1U][0xeU] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data[0xeU];
    vlSelfRef.__PVT__bankRData[0U][1U][0xfU] = vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__PVT__OUT_data[0xfU];
    vlSelfRef.__PVT__bankRData[1U][0U][0U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data1[0U];
    vlSelfRef.__PVT__bankRData[1U][0U][1U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data1[1U];
    vlSelfRef.__PVT__bankRData[1U][0U][2U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data1[2U];
    vlSelfRef.__PVT__bankRData[1U][0U][3U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data1[3U];
    vlSelfRef.__PVT__bankRData[1U][0U][4U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data1[4U];
    vlSelfRef.__PVT__bankRData[1U][0U][5U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data1[5U];
    vlSelfRef.__PVT__bankRData[1U][0U][6U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data1[6U];
    vlSelfRef.__PVT__bankRData[1U][0U][7U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data1[7U];
    vlSelfRef.__PVT__bankRData[1U][0U][8U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data1[8U];
    vlSelfRef.__PVT__bankRData[1U][0U][9U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data1[9U];
    vlSelfRef.__PVT__bankRData[1U][0U][0xaU] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data1[0xaU];
    vlSelfRef.__PVT__bankRData[1U][0U][0xbU] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data1[0xbU];
    vlSelfRef.__PVT__bankRData[1U][0U][0xcU] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data1[0xcU];
    vlSelfRef.__PVT__bankRData[1U][0U][0xdU] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data1[0xdU];
    vlSelfRef.__PVT__bankRData[1U][0U][0xeU] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data1[0xeU];
    vlSelfRef.__PVT__bankRData[1U][0U][0xfU] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data1[0xfU];
    vlSelfRef.__PVT__bankRData[1U][1U][0U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data[0U];
    vlSelfRef.__PVT__bankRData[1U][1U][1U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data[1U];
    vlSelfRef.__PVT__bankRData[1U][1U][2U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data[2U];
    vlSelfRef.__PVT__bankRData[1U][1U][3U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data[3U];
    vlSelfRef.__PVT__bankRData[1U][1U][4U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data[4U];
    vlSelfRef.__PVT__bankRData[1U][1U][5U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data[5U];
    vlSelfRef.__PVT__bankRData[1U][1U][6U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data[6U];
    vlSelfRef.__PVT__bankRData[1U][1U][7U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data[7U];
    vlSelfRef.__PVT__bankRData[1U][1U][8U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data[8U];
    vlSelfRef.__PVT__bankRData[1U][1U][9U] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data[9U];
    vlSelfRef.__PVT__bankRData[1U][1U][0xaU] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data[0xaU];
    vlSelfRef.__PVT__bankRData[1U][1U][0xbU] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data[0xbU];
    vlSelfRef.__PVT__bankRData[1U][1U][0xcU] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data[0xcU];
    vlSelfRef.__PVT__bankRData[1U][1U][0xdU] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data[0xdU];
    vlSelfRef.__PVT__bankRData[1U][1U][0xeU] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data[0xeU];
    vlSelfRef.__PVT__bankRData[1U][1U][0xfU] = vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__PVT__OUT_data[0xfU];
    vlSelfRef.__PVT__bankRData[2U][0U][0U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data1[0U];
    vlSelfRef.__PVT__bankRData[2U][0U][1U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data1[1U];
    vlSelfRef.__PVT__bankRData[2U][0U][2U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data1[2U];
    vlSelfRef.__PVT__bankRData[2U][0U][3U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data1[3U];
    vlSelfRef.__PVT__bankRData[2U][0U][4U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data1[4U];
    vlSelfRef.__PVT__bankRData[2U][0U][5U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data1[5U];
    vlSelfRef.__PVT__bankRData[2U][0U][6U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data1[6U];
    vlSelfRef.__PVT__bankRData[2U][0U][7U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data1[7U];
    vlSelfRef.__PVT__bankRData[2U][0U][8U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data1[8U];
    vlSelfRef.__PVT__bankRData[2U][0U][9U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data1[9U];
    vlSelfRef.__PVT__bankRData[2U][0U][0xaU] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data1[0xaU];
    vlSelfRef.__PVT__bankRData[2U][0U][0xbU] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data1[0xbU];
    vlSelfRef.__PVT__bankRData[2U][0U][0xcU] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data1[0xcU];
    vlSelfRef.__PVT__bankRData[2U][0U][0xdU] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data1[0xdU];
    vlSelfRef.__PVT__bankRData[2U][0U][0xeU] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data1[0xeU];
    vlSelfRef.__PVT__bankRData[2U][0U][0xfU] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data1[0xfU];
    vlSelfRef.__PVT__bankRData[2U][1U][0U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data[0U];
    vlSelfRef.__PVT__bankRData[2U][1U][1U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data[1U];
    vlSelfRef.__PVT__bankRData[2U][1U][2U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data[2U];
    vlSelfRef.__PVT__bankRData[2U][1U][3U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data[3U];
    vlSelfRef.__PVT__bankRData[2U][1U][4U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data[4U];
    vlSelfRef.__PVT__bankRData[2U][1U][5U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data[5U];
    vlSelfRef.__PVT__bankRData[2U][1U][6U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data[6U];
    vlSelfRef.__PVT__bankRData[2U][1U][7U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data[7U];
    vlSelfRef.__PVT__bankRData[2U][1U][8U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data[8U];
    vlSelfRef.__PVT__bankRData[2U][1U][9U] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data[9U];
    vlSelfRef.__PVT__bankRData[2U][1U][0xaU] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data[0xaU];
    vlSelfRef.__PVT__bankRData[2U][1U][0xbU] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data[0xbU];
    vlSelfRef.__PVT__bankRData[2U][1U][0xcU] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data[0xcU];
    vlSelfRef.__PVT__bankRData[2U][1U][0xdU] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data[0xdU];
    vlSelfRef.__PVT__bankRData[2U][1U][0xeU] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data[0xeU];
    vlSelfRef.__PVT__bankRData[2U][1U][0xfU] = vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__PVT__OUT_data[0xfU];
    vlSelfRef.__PVT__bankRData[3U][0U][0U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data1[0U];
    vlSelfRef.__PVT__bankRData[3U][0U][1U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data1[1U];
    vlSelfRef.__PVT__bankRData[3U][0U][2U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data1[2U];
    vlSelfRef.__PVT__bankRData[3U][0U][3U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data1[3U];
    vlSelfRef.__PVT__bankRData[3U][0U][4U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data1[4U];
    vlSelfRef.__PVT__bankRData[3U][0U][5U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data1[5U];
    vlSelfRef.__PVT__bankRData[3U][0U][6U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data1[6U];
    vlSelfRef.__PVT__bankRData[3U][0U][7U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data1[7U];
    vlSelfRef.__PVT__bankRData[3U][0U][8U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data1[8U];
    vlSelfRef.__PVT__bankRData[3U][0U][9U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data1[9U];
    vlSelfRef.__PVT__bankRData[3U][0U][0xaU] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data1[0xaU];
    vlSelfRef.__PVT__bankRData[3U][0U][0xbU] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data1[0xbU];
    vlSelfRef.__PVT__bankRData[3U][0U][0xcU] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data1[0xcU];
    vlSelfRef.__PVT__bankRData[3U][0U][0xdU] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data1[0xdU];
    vlSelfRef.__PVT__bankRData[3U][0U][0xeU] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data1[0xeU];
    vlSelfRef.__PVT__bankRData[3U][0U][0xfU] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data1[0xfU];
    vlSelfRef.__PVT__bankRData[3U][1U][0U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data[0U];
    vlSelfRef.__PVT__bankRData[3U][1U][1U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data[1U];
    vlSelfRef.__PVT__bankRData[3U][1U][2U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data[2U];
    vlSelfRef.__PVT__bankRData[3U][1U][3U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data[3U];
    vlSelfRef.__PVT__bankRData[3U][1U][4U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data[4U];
    vlSelfRef.__PVT__bankRData[3U][1U][5U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data[5U];
    vlSelfRef.__PVT__bankRData[3U][1U][6U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data[6U];
    vlSelfRef.__PVT__bankRData[3U][1U][7U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data[7U];
    vlSelfRef.__PVT__bankRData[3U][1U][8U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data[8U];
    vlSelfRef.__PVT__bankRData[3U][1U][9U] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data[9U];
    vlSelfRef.__PVT__bankRData[3U][1U][0xaU] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data[0xaU];
    vlSelfRef.__PVT__bankRData[3U][1U][0xbU] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data[0xbU];
    vlSelfRef.__PVT__bankRData[3U][1U][0xcU] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data[0xcU];
    vlSelfRef.__PVT__bankRData[3U][1U][0xdU] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data[0xdU];
    vlSelfRef.__PVT__bankRData[3U][1U][0xeU] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data[0xeU];
    vlSelfRef.__PVT__bankRData[3U][1U][0xfU] = vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__PVT__OUT_data[0xfU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][1U][0U] 
        = vlSelfRef.__PVT__bankRData[3U][1U][0U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][1U][1U] 
        = vlSelfRef.__PVT__bankRData[3U][1U][1U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][1U][2U] 
        = vlSelfRef.__PVT__bankRData[3U][1U][2U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][1U][3U] 
        = vlSelfRef.__PVT__bankRData[3U][1U][3U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][1U][4U] 
        = vlSelfRef.__PVT__bankRData[3U][1U][4U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][1U][5U] 
        = vlSelfRef.__PVT__bankRData[3U][1U][5U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][1U][6U] 
        = vlSelfRef.__PVT__bankRData[3U][1U][6U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][1U][7U] 
        = vlSelfRef.__PVT__bankRData[3U][1U][7U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][1U][8U] 
        = vlSelfRef.__PVT__bankRData[3U][1U][8U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][1U][9U] 
        = vlSelfRef.__PVT__bankRData[3U][1U][9U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][1U][0xaU] 
        = vlSelfRef.__PVT__bankRData[3U][1U][0xaU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][1U][0xbU] 
        = vlSelfRef.__PVT__bankRData[3U][1U][0xbU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][1U][0xcU] 
        = vlSelfRef.__PVT__bankRData[3U][1U][0xcU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][1U][0xdU] 
        = vlSelfRef.__PVT__bankRData[3U][1U][0xdU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][1U][0xeU] 
        = vlSelfRef.__PVT__bankRData[3U][1U][0xeU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][1U][0xfU] 
        = vlSelfRef.__PVT__bankRData[3U][1U][0xfU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][0U][0U] 
        = vlSelfRef.__PVT__bankRData[3U][0U][0U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][0U][1U] 
        = vlSelfRef.__PVT__bankRData[3U][0U][1U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][0U][2U] 
        = vlSelfRef.__PVT__bankRData[3U][0U][2U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][0U][3U] 
        = vlSelfRef.__PVT__bankRData[3U][0U][3U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][0U][4U] 
        = vlSelfRef.__PVT__bankRData[3U][0U][4U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][0U][5U] 
        = vlSelfRef.__PVT__bankRData[3U][0U][5U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][0U][6U] 
        = vlSelfRef.__PVT__bankRData[3U][0U][6U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][0U][7U] 
        = vlSelfRef.__PVT__bankRData[3U][0U][7U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][0U][8U] 
        = vlSelfRef.__PVT__bankRData[3U][0U][8U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][0U][9U] 
        = vlSelfRef.__PVT__bankRData[3U][0U][9U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][0U][0xaU] 
        = vlSelfRef.__PVT__bankRData[3U][0U][0xaU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][0U][0xbU] 
        = vlSelfRef.__PVT__bankRData[3U][0U][0xbU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][0U][0xcU] 
        = vlSelfRef.__PVT__bankRData[3U][0U][0xcU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][0U][0xdU] 
        = vlSelfRef.__PVT__bankRData[3U][0U][0xdU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][0U][0xeU] 
        = vlSelfRef.__PVT__bankRData[3U][0U][0xeU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[3U][0U][0xfU] 
        = vlSelfRef.__PVT__bankRData[3U][0U][0xfU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][1U][0U] 
        = vlSelfRef.__PVT__bankRData[2U][1U][0U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][1U][1U] 
        = vlSelfRef.__PVT__bankRData[2U][1U][1U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][1U][2U] 
        = vlSelfRef.__PVT__bankRData[2U][1U][2U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][1U][3U] 
        = vlSelfRef.__PVT__bankRData[2U][1U][3U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][1U][4U] 
        = vlSelfRef.__PVT__bankRData[2U][1U][4U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][1U][5U] 
        = vlSelfRef.__PVT__bankRData[2U][1U][5U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][1U][6U] 
        = vlSelfRef.__PVT__bankRData[2U][1U][6U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][1U][7U] 
        = vlSelfRef.__PVT__bankRData[2U][1U][7U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][1U][8U] 
        = vlSelfRef.__PVT__bankRData[2U][1U][8U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][1U][9U] 
        = vlSelfRef.__PVT__bankRData[2U][1U][9U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][1U][0xaU] 
        = vlSelfRef.__PVT__bankRData[2U][1U][0xaU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][1U][0xbU] 
        = vlSelfRef.__PVT__bankRData[2U][1U][0xbU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][1U][0xcU] 
        = vlSelfRef.__PVT__bankRData[2U][1U][0xcU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][1U][0xdU] 
        = vlSelfRef.__PVT__bankRData[2U][1U][0xdU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][1U][0xeU] 
        = vlSelfRef.__PVT__bankRData[2U][1U][0xeU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][1U][0xfU] 
        = vlSelfRef.__PVT__bankRData[2U][1U][0xfU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][0U][0U] 
        = vlSelfRef.__PVT__bankRData[2U][0U][0U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][0U][1U] 
        = vlSelfRef.__PVT__bankRData[2U][0U][1U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][0U][2U] 
        = vlSelfRef.__PVT__bankRData[2U][0U][2U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][0U][3U] 
        = vlSelfRef.__PVT__bankRData[2U][0U][3U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][0U][4U] 
        = vlSelfRef.__PVT__bankRData[2U][0U][4U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][0U][5U] 
        = vlSelfRef.__PVT__bankRData[2U][0U][5U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][0U][6U] 
        = vlSelfRef.__PVT__bankRData[2U][0U][6U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][0U][7U] 
        = vlSelfRef.__PVT__bankRData[2U][0U][7U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][0U][8U] 
        = vlSelfRef.__PVT__bankRData[2U][0U][8U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][0U][9U] 
        = vlSelfRef.__PVT__bankRData[2U][0U][9U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][0U][0xaU] 
        = vlSelfRef.__PVT__bankRData[2U][0U][0xaU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][0U][0xbU] 
        = vlSelfRef.__PVT__bankRData[2U][0U][0xbU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][0U][0xcU] 
        = vlSelfRef.__PVT__bankRData[2U][0U][0xcU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][0U][0xdU] 
        = vlSelfRef.__PVT__bankRData[2U][0U][0xdU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][0U][0xeU] 
        = vlSelfRef.__PVT__bankRData[2U][0U][0xeU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[2U][0U][0xfU] 
        = vlSelfRef.__PVT__bankRData[2U][0U][0xfU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][1U][0U] 
        = vlSelfRef.__PVT__bankRData[1U][1U][0U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][1U][1U] 
        = vlSelfRef.__PVT__bankRData[1U][1U][1U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][1U][2U] 
        = vlSelfRef.__PVT__bankRData[1U][1U][2U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][1U][3U] 
        = vlSelfRef.__PVT__bankRData[1U][1U][3U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][1U][4U] 
        = vlSelfRef.__PVT__bankRData[1U][1U][4U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][1U][5U] 
        = vlSelfRef.__PVT__bankRData[1U][1U][5U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][1U][6U] 
        = vlSelfRef.__PVT__bankRData[1U][1U][6U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][1U][7U] 
        = vlSelfRef.__PVT__bankRData[1U][1U][7U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][1U][8U] 
        = vlSelfRef.__PVT__bankRData[1U][1U][8U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][1U][9U] 
        = vlSelfRef.__PVT__bankRData[1U][1U][9U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][1U][0xaU] 
        = vlSelfRef.__PVT__bankRData[1U][1U][0xaU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][1U][0xbU] 
        = vlSelfRef.__PVT__bankRData[1U][1U][0xbU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][1U][0xcU] 
        = vlSelfRef.__PVT__bankRData[1U][1U][0xcU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][1U][0xdU] 
        = vlSelfRef.__PVT__bankRData[1U][1U][0xdU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][1U][0xeU] 
        = vlSelfRef.__PVT__bankRData[1U][1U][0xeU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][1U][0xfU] 
        = vlSelfRef.__PVT__bankRData[1U][1U][0xfU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][0U][0U] 
        = vlSelfRef.__PVT__bankRData[1U][0U][0U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][0U][1U] 
        = vlSelfRef.__PVT__bankRData[1U][0U][1U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][0U][2U] 
        = vlSelfRef.__PVT__bankRData[1U][0U][2U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][0U][3U] 
        = vlSelfRef.__PVT__bankRData[1U][0U][3U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][0U][4U] 
        = vlSelfRef.__PVT__bankRData[1U][0U][4U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][0U][5U] 
        = vlSelfRef.__PVT__bankRData[1U][0U][5U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][0U][6U] 
        = vlSelfRef.__PVT__bankRData[1U][0U][6U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][0U][7U] 
        = vlSelfRef.__PVT__bankRData[1U][0U][7U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][0U][8U] 
        = vlSelfRef.__PVT__bankRData[1U][0U][8U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][0U][9U] 
        = vlSelfRef.__PVT__bankRData[1U][0U][9U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][0U][0xaU] 
        = vlSelfRef.__PVT__bankRData[1U][0U][0xaU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][0U][0xbU] 
        = vlSelfRef.__PVT__bankRData[1U][0U][0xbU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][0U][0xcU] 
        = vlSelfRef.__PVT__bankRData[1U][0U][0xcU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][0U][0xdU] 
        = vlSelfRef.__PVT__bankRData[1U][0U][0xdU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][0U][0xeU] 
        = vlSelfRef.__PVT__bankRData[1U][0U][0xeU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[1U][0U][0xfU] 
        = vlSelfRef.__PVT__bankRData[1U][0U][0xfU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][1U][0U] 
        = vlSelfRef.__PVT__bankRData[0U][1U][0U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][1U][1U] 
        = vlSelfRef.__PVT__bankRData[0U][1U][1U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][1U][2U] 
        = vlSelfRef.__PVT__bankRData[0U][1U][2U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][1U][3U] 
        = vlSelfRef.__PVT__bankRData[0U][1U][3U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][1U][4U] 
        = vlSelfRef.__PVT__bankRData[0U][1U][4U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][1U][5U] 
        = vlSelfRef.__PVT__bankRData[0U][1U][5U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][1U][6U] 
        = vlSelfRef.__PVT__bankRData[0U][1U][6U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][1U][7U] 
        = vlSelfRef.__PVT__bankRData[0U][1U][7U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][1U][8U] 
        = vlSelfRef.__PVT__bankRData[0U][1U][8U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][1U][9U] 
        = vlSelfRef.__PVT__bankRData[0U][1U][9U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][1U][0xaU] 
        = vlSelfRef.__PVT__bankRData[0U][1U][0xaU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][1U][0xbU] 
        = vlSelfRef.__PVT__bankRData[0U][1U][0xbU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][1U][0xcU] 
        = vlSelfRef.__PVT__bankRData[0U][1U][0xcU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][1U][0xdU] 
        = vlSelfRef.__PVT__bankRData[0U][1U][0xdU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][1U][0xeU] 
        = vlSelfRef.__PVT__bankRData[0U][1U][0xeU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][1U][0xfU] 
        = vlSelfRef.__PVT__bankRData[0U][1U][0xfU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][0U][0U] 
        = vlSelfRef.__PVT__bankRData[0U][0U][0U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][0U][1U] 
        = vlSelfRef.__PVT__bankRData[0U][0U][1U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][0U][2U] 
        = vlSelfRef.__PVT__bankRData[0U][0U][2U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][0U][3U] 
        = vlSelfRef.__PVT__bankRData[0U][0U][3U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][0U][4U] 
        = vlSelfRef.__PVT__bankRData[0U][0U][4U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][0U][5U] 
        = vlSelfRef.__PVT__bankRData[0U][0U][5U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][0U][6U] 
        = vlSelfRef.__PVT__bankRData[0U][0U][6U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][0U][7U] 
        = vlSelfRef.__PVT__bankRData[0U][0U][7U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][0U][8U] 
        = vlSelfRef.__PVT__bankRData[0U][0U][8U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][0U][9U] 
        = vlSelfRef.__PVT__bankRData[0U][0U][9U];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][0U][0xaU] 
        = vlSelfRef.__PVT__bankRData[0U][0U][0xaU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][0U][0xbU] 
        = vlSelfRef.__PVT__bankRData[0U][0U][0xbU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][0U][0xcU] 
        = vlSelfRef.__PVT__bankRData[0U][0U][0xcU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][0U][0xdU] 
        = vlSelfRef.__PVT__bankRData[0U][0U][0xdU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][0U][0xeU] 
        = vlSelfRef.__PVT__bankRData[0U][0U][0xeU];
    vlSelfRef.__Vcellinp__dcacheArb__IN_portRData[0U][0U][0xfU] 
        = vlSelfRef.__PVT__bankRData[0U][0U][0xfU];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][0U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][0U])][0U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[1U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][0U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][0U])][1U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[2U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][0U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][0U])][2U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[3U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][0U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][0U])][3U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[4U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][0U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][0U])][4U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[5U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][0U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][0U])][5U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[6U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][0U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][0U])][6U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[7U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][0U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][0U])][7U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[8U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][0U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][0U])][8U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[9U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][0U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][0U])][9U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0xaU] = 
        vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][0U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][0U])][0xaU];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0xbU] = 
        vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][0U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][0U])][0xbU];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0xcU] = 
        vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][0U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][0U])][0xcU];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0xdU] = 
        vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][0U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][0U])][0xdU];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0xeU] = 
        vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][0U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][0U])][0xeU];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0xfU] = 
        vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][0U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][0U])][0xfU];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[0U][0U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[0U][1U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[1U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[0U][2U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[2U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[0U][3U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[3U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[0U][4U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[4U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[0U][5U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[5U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[0U][6U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[6U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[0U][7U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[7U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[0U][8U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[8U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[0U][9U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[9U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[0U][0xaU] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0xaU];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[0U][0xbU] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0xbU];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[0U][0xcU] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0xcU];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[0U][0xdU] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0xdU];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[0U][0xeU] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0xeU];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[0U][0xfU] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0xfU];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][1U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][1U])][0U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[1U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][1U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][1U])][1U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[2U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][1U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][1U])][2U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[3U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][1U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][1U])][3U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[4U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][1U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][1U])][4U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[5U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][1U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][1U])][5U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[6U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][1U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][1U])][6U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[7U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][1U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][1U])][7U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[8U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][1U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][1U])][8U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[9U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][1U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][1U])][9U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0xaU] = 
        vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][1U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][1U])][0xaU];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0xbU] = 
        vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][1U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][1U])][0xbU];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0xcU] = 
        vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][1U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][1U])][0xcU];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0xdU] = 
        vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][1U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][1U])][0xdU];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0xeU] = 
        vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][1U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][1U])][0xeU];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0xfU] = 
        vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][1U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][1U])][0xfU];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[1U][0U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[1U][1U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[1U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[1U][2U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[2U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[1U][3U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[3U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[1U][4U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[4U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[1U][5U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[5U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[1U][6U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[6U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[1U][7U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[7U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[1U][8U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[8U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[1U][9U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[9U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[1U][0xaU] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0xaU];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[1U][0xbU] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0xbU];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[1U][0xcU] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0xcU];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[1U][0xdU] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0xdU];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[1U][0xeU] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0xeU];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[1U][0xfU] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0xfU];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][2U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][2U])][0U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[1U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][2U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][2U])][1U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[2U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][2U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][2U])][2U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[3U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][2U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][2U])][3U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[4U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][2U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][2U])][4U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[5U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][2U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][2U])][5U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[6U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][2U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][2U])][6U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[7U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][2U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][2U])][7U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[8U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][2U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][2U])][8U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[9U] = vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][2U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][2U])][9U];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0xaU] = 
        vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][2U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][2U])][0xaU];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0xbU] = 
        vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][2U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][2U])][0xbU];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0xcU] = 
        vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][2U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][2U])][0xcU];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0xdU] = 
        vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][2U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][2U])][0xdU];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0xeU] = 
        vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][2U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][2U])][0xeU];
    dcacheArb__DOT____Vlvbound_h89b306c0__0[0xfU] = 
        vlSelfRef.__Vcellinp__dcacheArb__IN_portRData
        [(3U & (vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                [1U][2U] >> 1U))][(1U & vlSelfRef.__PVT__dcacheArb__DOT__readIdxs
                                   [1U][2U])][0xfU];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[2U][0U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[2U][1U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[1U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[2U][2U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[2U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[2U][3U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[3U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[2U][4U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[4U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[2U][5U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[5U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[2U][6U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[6U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[2U][7U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[7U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[2U][8U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[8U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[2U][9U] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[9U];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[2U][0xaU] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0xaU];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[2U][0xbU] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0xbU];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[2U][0xcU] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0xcU];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[2U][0xdU] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0xdU];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[2U][0xeU] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0xeU];
    vlSelfRef.__Vcellout__dcacheArb__OUT_portRData[2U][0xfU] 
        = dcacheArb__DOT____Vlvbound_h89b306c0__0[0xfU];
    vlSelfRef.__PVT__cacheRData[2U][0U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [2U][0U];
    vlSelfRef.__PVT__cacheRData[2U][1U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [2U][1U];
    vlSelfRef.__PVT__cacheRData[2U][2U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [2U][2U];
    vlSelfRef.__PVT__cacheRData[2U][3U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [2U][3U];
    vlSelfRef.__PVT__cacheRData[2U][4U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [2U][4U];
    vlSelfRef.__PVT__cacheRData[2U][5U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [2U][5U];
    vlSelfRef.__PVT__cacheRData[2U][6U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [2U][6U];
    vlSelfRef.__PVT__cacheRData[2U][7U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [2U][7U];
    vlSelfRef.__PVT__cacheRData[2U][8U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [2U][8U];
    vlSelfRef.__PVT__cacheRData[2U][9U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [2U][9U];
    vlSelfRef.__PVT__cacheRData[2U][0xaU] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [2U][0xaU];
    vlSelfRef.__PVT__cacheRData[2U][0xbU] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [2U][0xbU];
    vlSelfRef.__PVT__cacheRData[2U][0xcU] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [2U][0xcU];
    vlSelfRef.__PVT__cacheRData[2U][0xdU] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [2U][0xdU];
    vlSelfRef.__PVT__cacheRData[2U][0xeU] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [2U][0xeU];
    vlSelfRef.__PVT__cacheRData[2U][0xfU] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [2U][0xfU];
    vlSelfRef.__PVT__cacheRData[1U][0U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [1U][0U];
    vlSelfRef.__PVT__cacheRData[1U][1U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [1U][1U];
    vlSelfRef.__PVT__cacheRData[1U][2U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [1U][2U];
    vlSelfRef.__PVT__cacheRData[1U][3U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [1U][3U];
    vlSelfRef.__PVT__cacheRData[1U][4U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [1U][4U];
    vlSelfRef.__PVT__cacheRData[1U][5U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [1U][5U];
    vlSelfRef.__PVT__cacheRData[1U][6U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [1U][6U];
    vlSelfRef.__PVT__cacheRData[1U][7U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [1U][7U];
    vlSelfRef.__PVT__cacheRData[1U][8U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [1U][8U];
    vlSelfRef.__PVT__cacheRData[1U][9U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [1U][9U];
    vlSelfRef.__PVT__cacheRData[1U][0xaU] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [1U][0xaU];
    vlSelfRef.__PVT__cacheRData[1U][0xbU] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [1U][0xbU];
    vlSelfRef.__PVT__cacheRData[1U][0xcU] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [1U][0xcU];
    vlSelfRef.__PVT__cacheRData[1U][0xdU] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [1U][0xdU];
    vlSelfRef.__PVT__cacheRData[1U][0xeU] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [1U][0xeU];
    vlSelfRef.__PVT__cacheRData[1U][0xfU] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [1U][0xfU];
    vlSelfRef.__PVT__cacheRData[0U][0U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [0U][0U];
    vlSelfRef.__PVT__cacheRData[0U][1U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [0U][1U];
    vlSelfRef.__PVT__cacheRData[0U][2U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [0U][2U];
    vlSelfRef.__PVT__cacheRData[0U][3U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [0U][3U];
    vlSelfRef.__PVT__cacheRData[0U][4U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [0U][4U];
    vlSelfRef.__PVT__cacheRData[0U][5U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [0U][5U];
    vlSelfRef.__PVT__cacheRData[0U][6U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [0U][6U];
    vlSelfRef.__PVT__cacheRData[0U][7U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [0U][7U];
    vlSelfRef.__PVT__cacheRData[0U][8U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [0U][8U];
    vlSelfRef.__PVT__cacheRData[0U][9U] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [0U][9U];
    vlSelfRef.__PVT__cacheRData[0U][0xaU] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [0U][0xaU];
    vlSelfRef.__PVT__cacheRData[0U][0xbU] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [0U][0xbU];
    vlSelfRef.__PVT__cacheRData[0U][0xcU] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [0U][0xcU];
    vlSelfRef.__PVT__cacheRData[0U][0xdU] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [0U][0xdU];
    vlSelfRef.__PVT__cacheRData[0U][0xeU] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [0U][0xeU];
    vlSelfRef.__PVT__cacheRData[0U][0xfU] = vlSelfRef.__Vcellout__dcacheArb__OUT_portRData
        [0U][0xfU];
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [0U][0U];
    vlSelfRef.__PVT__cacheRData_t[0U][0U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [0U][1U];
    vlSelfRef.__PVT__cacheRData_t[0U][4U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [0U][2U];
    vlSelfRef.__PVT__cacheRData_t[0U][8U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [0U][3U];
    vlSelfRef.__PVT__cacheRData_t[0U][0xcU] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [0U][4U];
    vlSelfRef.__PVT__cacheRData_t[0U][1U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [0U][5U];
    vlSelfRef.__PVT__cacheRData_t[0U][5U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [0U][6U];
    vlSelfRef.__PVT__cacheRData_t[0U][9U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [0U][7U];
    vlSelfRef.__PVT__cacheRData_t[0U][0xdU] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [0U][8U];
    vlSelfRef.__PVT__cacheRData_t[0U][2U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [0U][9U];
    vlSelfRef.__PVT__cacheRData_t[0U][6U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [0U][0xaU];
    vlSelfRef.__PVT__cacheRData_t[0U][0xaU] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [0U][0xbU];
    vlSelfRef.__PVT__cacheRData_t[0U][0xeU] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [0U][0xcU];
    vlSelfRef.__PVT__cacheRData_t[0U][3U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [0U][0xdU];
    vlSelfRef.__PVT__cacheRData_t[0U][7U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [0U][0xeU];
    vlSelfRef.__PVT__cacheRData_t[0U][0xbU] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [0U][0xfU];
    vlSelfRef.__PVT__cacheRData_t[0U][0xfU] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [1U][0U];
    vlSelfRef.__PVT__cacheRData_t[1U][0U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [1U][1U];
    vlSelfRef.__PVT__cacheRData_t[1U][4U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [1U][2U];
    vlSelfRef.__PVT__cacheRData_t[1U][8U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [1U][3U];
    vlSelfRef.__PVT__cacheRData_t[1U][0xcU] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [1U][4U];
    vlSelfRef.__PVT__cacheRData_t[1U][1U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [1U][5U];
    vlSelfRef.__PVT__cacheRData_t[1U][5U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [1U][6U];
    vlSelfRef.__PVT__cacheRData_t[1U][9U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [1U][7U];
    vlSelfRef.__PVT__cacheRData_t[1U][0xdU] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [1U][8U];
    vlSelfRef.__PVT__cacheRData_t[1U][2U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [1U][9U];
    vlSelfRef.__PVT__cacheRData_t[1U][6U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [1U][0xaU];
    vlSelfRef.__PVT__cacheRData_t[1U][0xaU] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [1U][0xbU];
    vlSelfRef.__PVT__cacheRData_t[1U][0xeU] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [1U][0xcU];
    vlSelfRef.__PVT__cacheRData_t[1U][3U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [1U][0xdU];
    vlSelfRef.__PVT__cacheRData_t[1U][7U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [1U][0xeU];
    vlSelfRef.__PVT__cacheRData_t[1U][0xbU] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [1U][0xfU];
    vlSelfRef.__PVT__cacheRData_t[1U][0xfU] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [2U][0U];
    vlSelfRef.__PVT__cacheRData_t[2U][0U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [2U][1U];
    vlSelfRef.__PVT__cacheRData_t[2U][4U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [2U][2U];
    vlSelfRef.__PVT__cacheRData_t[2U][8U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [2U][3U];
    vlSelfRef.__PVT__cacheRData_t[2U][0xcU] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [2U][4U];
    vlSelfRef.__PVT__cacheRData_t[2U][1U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [2U][5U];
    vlSelfRef.__PVT__cacheRData_t[2U][5U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [2U][6U];
    vlSelfRef.__PVT__cacheRData_t[2U][9U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [2U][7U];
    vlSelfRef.__PVT__cacheRData_t[2U][0xdU] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [2U][8U];
    vlSelfRef.__PVT__cacheRData_t[2U][2U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [2U][9U];
    vlSelfRef.__PVT__cacheRData_t[2U][6U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [2U][0xaU];
    vlSelfRef.__PVT__cacheRData_t[2U][0xaU] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [2U][0xbU];
    vlSelfRef.__PVT__cacheRData_t[2U][0xeU] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [2U][0xcU];
    vlSelfRef.__PVT__cacheRData_t[2U][3U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [2U][0xdU];
    vlSelfRef.__PVT__cacheRData_t[2U][7U] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [2U][0xeU];
    vlSelfRef.__PVT__cacheRData_t[2U][0xbU] = __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = vlSelfRef.__PVT__cacheRData
        [2U][0xfU];
    vlSelfRef.__PVT__cacheRData_t[2U][0xfU] = __Vlvbound_head56157__0;
    __Vtemp_1[0U] = (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                    (3U 
                                                     & vlSelfRef.__PVT__CORE_raddr
                                                     [0U]
                                                     [1U]), 7U)))
                       ? 0U : (vlSelfRef.__PVT__cacheRData_t
                               [1U][((IData)(1U) + 
                                     (0xfU & (VL_SHIFTL_III(9,32,32, 
                                                            (3U 
                                                             & vlSelfRef.__PVT__CORE_raddr
                                                             [0U]
                                                             [1U]), 7U) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                          (3U 
                                                           & vlSelfRef.__PVT__CORE_raddr
                                                           [0U]
                                                           [1U]), 7U))))) 
                     | (vlSelfRef.__PVT__cacheRData_t
                        [1U][(0xfU & (VL_SHIFTL_III(9,32,32, 
                                                    (3U 
                                                     & vlSelfRef.__PVT__CORE_raddr
                                                     [0U]
                                                     [1U]), 7U) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   (3U 
                                                                    & vlSelfRef.__PVT__CORE_raddr
                                                                    [0U]
                                                                    [1U]), 7U))));
    __Vtemp_1[1U] = (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                    (3U 
                                                     & vlSelfRef.__PVT__CORE_raddr
                                                     [0U]
                                                     [1U]), 7U)))
                       ? 0U : (vlSelfRef.__PVT__cacheRData_t
                               [1U][((IData)(2U) + 
                                     (0xfU & (VL_SHIFTL_III(9,32,32, 
                                                            (3U 
                                                             & vlSelfRef.__PVT__CORE_raddr
                                                             [0U]
                                                             [1U]), 7U) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                          (3U 
                                                           & vlSelfRef.__PVT__CORE_raddr
                                                           [0U]
                                                           [1U]), 7U))))) 
                     | (vlSelfRef.__PVT__cacheRData_t
                        [1U][((IData)(1U) + (0xfU & 
                                             (VL_SHIFTL_III(9,32,32, 
                                                            (3U 
                                                             & vlSelfRef.__PVT__CORE_raddr
                                                             [0U]
                                                             [1U]), 7U) 
                                              >> 5U)))] 
                        >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                  (3U 
                                                   & vlSelfRef.__PVT__CORE_raddr
                                                   [0U]
                                                   [1U]), 7U))));
    __Vtemp_1[2U] = (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                    (3U 
                                                     & vlSelfRef.__PVT__CORE_raddr
                                                     [0U]
                                                     [1U]), 7U)))
                       ? 0U : (vlSelfRef.__PVT__cacheRData_t
                               [1U][((IData)(3U) + 
                                     (0xfU & (VL_SHIFTL_III(9,32,32, 
                                                            (3U 
                                                             & vlSelfRef.__PVT__CORE_raddr
                                                             [0U]
                                                             [1U]), 7U) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                          (3U 
                                                           & vlSelfRef.__PVT__CORE_raddr
                                                           [0U]
                                                           [1U]), 7U))))) 
                     | (vlSelfRef.__PVT__cacheRData_t
                        [1U][((IData)(2U) + (0xfU & 
                                             (VL_SHIFTL_III(9,32,32, 
                                                            (3U 
                                                             & vlSelfRef.__PVT__CORE_raddr
                                                             [0U]
                                                             [1U]), 7U) 
                                              >> 5U)))] 
                        >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                  (3U 
                                                   & vlSelfRef.__PVT__CORE_raddr
                                                   [0U]
                                                   [1U]), 7U))));
    __Vtemp_1[3U] = (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                    (3U 
                                                     & vlSelfRef.__PVT__CORE_raddr
                                                     [0U]
                                                     [1U]), 7U)))
                       ? 0U : (vlSelfRef.__PVT__cacheRData_t
                               [1U][((IData)(4U) + 
                                     (0xfU & (VL_SHIFTL_III(9,32,32, 
                                                            (3U 
                                                             & vlSelfRef.__PVT__CORE_raddr
                                                             [0U]
                                                             [1U]), 7U) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                          (3U 
                                                           & vlSelfRef.__PVT__CORE_raddr
                                                           [0U]
                                                           [1U]), 7U))))) 
                     | (vlSelfRef.__PVT__cacheRData_t
                        [1U][((IData)(3U) + (0xfU & 
                                             (VL_SHIFTL_III(9,32,32, 
                                                            (3U 
                                                             & vlSelfRef.__PVT__CORE_raddr
                                                             [0U]
                                                             [1U]), 7U) 
                                              >> 5U)))] 
                        >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                  (3U 
                                                   & vlSelfRef.__PVT__CORE_raddr
                                                   [0U]
                                                   [1U]), 7U))));
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[0U] 
        = __Vtemp_1[0U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[1U] 
        = __Vtemp_1[1U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[2U] 
        = __Vtemp_1[2U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[3U] 
        = __Vtemp_1[3U];
    __Vtemp_2[0U] = (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                    (3U 
                                                     & vlSelfRef.__PVT__CORE_raddr
                                                     [1U]
                                                     [1U]), 7U)))
                       ? 0U : (vlSelfRef.__PVT__cacheRData_t
                               [2U][((IData)(1U) + 
                                     (0xfU & (VL_SHIFTL_III(9,32,32, 
                                                            (3U 
                                                             & vlSelfRef.__PVT__CORE_raddr
                                                             [1U]
                                                             [1U]), 7U) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                          (3U 
                                                           & vlSelfRef.__PVT__CORE_raddr
                                                           [1U]
                                                           [1U]), 7U))))) 
                     | (vlSelfRef.__PVT__cacheRData_t
                        [2U][(0xfU & (VL_SHIFTL_III(9,32,32, 
                                                    (3U 
                                                     & vlSelfRef.__PVT__CORE_raddr
                                                     [1U]
                                                     [1U]), 7U) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   (3U 
                                                                    & vlSelfRef.__PVT__CORE_raddr
                                                                    [1U]
                                                                    [1U]), 7U))));
    __Vtemp_2[1U] = (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                    (3U 
                                                     & vlSelfRef.__PVT__CORE_raddr
                                                     [1U]
                                                     [1U]), 7U)))
                       ? 0U : (vlSelfRef.__PVT__cacheRData_t
                               [2U][((IData)(2U) + 
                                     (0xfU & (VL_SHIFTL_III(9,32,32, 
                                                            (3U 
                                                             & vlSelfRef.__PVT__CORE_raddr
                                                             [1U]
                                                             [1U]), 7U) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                          (3U 
                                                           & vlSelfRef.__PVT__CORE_raddr
                                                           [1U]
                                                           [1U]), 7U))))) 
                     | (vlSelfRef.__PVT__cacheRData_t
                        [2U][((IData)(1U) + (0xfU & 
                                             (VL_SHIFTL_III(9,32,32, 
                                                            (3U 
                                                             & vlSelfRef.__PVT__CORE_raddr
                                                             [1U]
                                                             [1U]), 7U) 
                                              >> 5U)))] 
                        >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                  (3U 
                                                   & vlSelfRef.__PVT__CORE_raddr
                                                   [1U]
                                                   [1U]), 7U))));
    __Vtemp_2[2U] = (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                    (3U 
                                                     & vlSelfRef.__PVT__CORE_raddr
                                                     [1U]
                                                     [1U]), 7U)))
                       ? 0U : (vlSelfRef.__PVT__cacheRData_t
                               [2U][((IData)(3U) + 
                                     (0xfU & (VL_SHIFTL_III(9,32,32, 
                                                            (3U 
                                                             & vlSelfRef.__PVT__CORE_raddr
                                                             [1U]
                                                             [1U]), 7U) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                          (3U 
                                                           & vlSelfRef.__PVT__CORE_raddr
                                                           [1U]
                                                           [1U]), 7U))))) 
                     | (vlSelfRef.__PVT__cacheRData_t
                        [2U][((IData)(2U) + (0xfU & 
                                             (VL_SHIFTL_III(9,32,32, 
                                                            (3U 
                                                             & vlSelfRef.__PVT__CORE_raddr
                                                             [1U]
                                                             [1U]), 7U) 
                                              >> 5U)))] 
                        >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                  (3U 
                                                   & vlSelfRef.__PVT__CORE_raddr
                                                   [1U]
                                                   [1U]), 7U))));
    __Vtemp_2[3U] = (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                    (3U 
                                                     & vlSelfRef.__PVT__CORE_raddr
                                                     [1U]
                                                     [1U]), 7U)))
                       ? 0U : (vlSelfRef.__PVT__cacheRData_t
                               [2U][((IData)(4U) + 
                                     (0xfU & (VL_SHIFTL_III(9,32,32, 
                                                            (3U 
                                                             & vlSelfRef.__PVT__CORE_raddr
                                                             [1U]
                                                             [1U]), 7U) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                          (3U 
                                                           & vlSelfRef.__PVT__CORE_raddr
                                                           [1U]
                                                           [1U]), 7U))))) 
                     | (vlSelfRef.__PVT__cacheRData_t
                        [2U][((IData)(3U) + (0xfU & 
                                             (VL_SHIFTL_III(9,32,32, 
                                                            (3U 
                                                             & vlSelfRef.__PVT__CORE_raddr
                                                             [1U]
                                                             [1U]), 7U) 
                                              >> 5U)))] 
                        >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                  (3U 
                                                   & vlSelfRef.__PVT__CORE_raddr
                                                   [1U]
                                                   [1U]), 7U))));
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[4U] 
        = __Vtemp_2[0U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[5U] 
        = __Vtemp_2[1U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[6U] 
        = __Vtemp_2[2U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[7U] 
        = __Vtemp_2[3U];
}
