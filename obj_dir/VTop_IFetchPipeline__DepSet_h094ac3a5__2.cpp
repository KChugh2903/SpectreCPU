// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IFetchPipeline.h"
#include "VTop__Syms.h"

extern const VlWide<8>/*255:0*/ VTop__ConstPool__CONST_hbd3d39cf_0;

VL_INLINE_OPT void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__5(VTop_IFetchPipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__5\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__OUT_memc[0U] = VTop__ConstPool__CONST_hbd3d39cf_0[0U];
        vlSelfRef.__PVT__OUT_memc[1U] = VTop__ConstPool__CONST_hbd3d39cf_0[1U];
        vlSelfRef.__PVT__OUT_memc[2U] = VTop__ConstPool__CONST_hbd3d39cf_0[2U];
        vlSelfRef.__PVT__OUT_memc[3U] = VTop__ConstPool__CONST_hbd3d39cf_0[3U];
        vlSelfRef.__PVT__OUT_memc[4U] = VTop__ConstPool__CONST_hbd3d39cf_0[4U];
        vlSelfRef.__PVT__OUT_memc[5U] = VTop__ConstPool__CONST_hbd3d39cf_0[5U];
        vlSelfRef.__PVT__OUT_memc[6U] = VTop__ConstPool__CONST_hbd3d39cf_0[6U];
        vlSelfRef.__PVT__OUT_memc[7U] = VTop__ConstPool__CONST_hbd3d39cf_0[7U];
    } else {
        vlSelfRef.__PVT__OUT_memc[0U] = vlSelfRef.__PVT__OUT_memc_c[0U];
        vlSelfRef.__PVT__OUT_memc[1U] = vlSelfRef.__PVT__OUT_memc_c[1U];
        vlSelfRef.__PVT__OUT_memc[2U] = vlSelfRef.__PVT__OUT_memc_c[2U];
        vlSelfRef.__PVT__OUT_memc[3U] = vlSelfRef.__PVT__OUT_memc_c[3U];
        vlSelfRef.__PVT__OUT_memc[4U] = vlSelfRef.__PVT__OUT_memc_c[4U];
        vlSelfRef.__PVT__OUT_memc[5U] = vlSelfRef.__PVT__OUT_memc_c[5U];
        vlSelfRef.__PVT__OUT_memc[6U] = vlSelfRef.__PVT__OUT_memc_c[6U];
        vlSelfRef.__PVT__OUT_memc[7U] = vlSelfRef.__PVT__OUT_memc_c[7U];
    }
}

VL_INLINE_OPT void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__6(VTop_IFetchPipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__6\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ instrAligner__DOT____Vlvbound_hd81ee699__0;
    instrAligner__DOT____Vlvbound_hd81ee699__0 = 0;
    CData/*0:0*/ instrAligner__DOT____Vlvbound_hdfada5ae__0;
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = 0;
    CData/*1:0*/ __Vdly__assocCnt;
    __Vdly__assocCnt = 0;
    CData/*0:0*/ __Vdly__itlb__DOT__ignoreCur;
    __Vdly__itlb__DOT__ignoreCur = 0;
    CData/*1:0*/ __Vdly__outFIFO__DOT__indexIn;
    __Vdly__outFIFO__DOT__indexIn = 0;
    CData/*0:0*/ __VdlySet__itlb__DOT__counters__v0;
    __VdlySet__itlb__DOT__counters__v0 = 0;
    CData/*0:0*/ __VdlySet__itlb__DOT__tlb__v1;
    __VdlySet__itlb__DOT__tlb__v1 = 0;
    CData/*0:0*/ __VdlySet__itlb__DOT__tlb__v8;
    __VdlySet__itlb__DOT__tlb__v8 = 0;
    CData/*0:0*/ __VdlySet__itlb__DOT__tlb__v9;
    __VdlySet__itlb__DOT__tlb__v9 = 0;
    CData/*2:0*/ __VdlyVal__itlb__DOT__tlb__v16;
    __VdlyVal__itlb__DOT__tlb__v16 = 0;
    CData/*1:0*/ __VdlyDim0__itlb__DOT__tlb__v16;
    __VdlyDim0__itlb__DOT__tlb__v16 = 0;
    CData/*0:0*/ __VdlyDim1__itlb__DOT__tlb__v16;
    __VdlyDim1__itlb__DOT__tlb__v16 = 0;
    CData/*0:0*/ __VdlySet__itlb__DOT__tlb__v16;
    __VdlySet__itlb__DOT__tlb__v16 = 0;
    CData/*0:0*/ __VdlyVal__itlb__DOT__tlb__v17;
    __VdlyVal__itlb__DOT__tlb__v17 = 0;
    CData/*1:0*/ __VdlyDim0__itlb__DOT__tlb__v17;
    __VdlyDim0__itlb__DOT__tlb__v17 = 0;
    CData/*0:0*/ __VdlyDim1__itlb__DOT__tlb__v17;
    __VdlyDim1__itlb__DOT__tlb__v17 = 0;
    IData/*19:0*/ __VdlyVal__itlb__DOT__tlb__v18;
    __VdlyVal__itlb__DOT__tlb__v18 = 0;
    CData/*1:0*/ __VdlyDim0__itlb__DOT__tlb__v18;
    __VdlyDim0__itlb__DOT__tlb__v18 = 0;
    CData/*0:0*/ __VdlyDim1__itlb__DOT__tlb__v18;
    __VdlyDim1__itlb__DOT__tlb__v18 = 0;
    IData/*18:0*/ __VdlyVal__itlb__DOT__tlb__v19;
    __VdlyVal__itlb__DOT__tlb__v19 = 0;
    CData/*1:0*/ __VdlyDim0__itlb__DOT__tlb__v19;
    __VdlyDim0__itlb__DOT__tlb__v19 = 0;
    CData/*0:0*/ __VdlyDim1__itlb__DOT__tlb__v19;
    __VdlyDim1__itlb__DOT__tlb__v19 = 0;
    CData/*0:0*/ __VdlyVal__itlb__DOT__tlb__v20;
    __VdlyVal__itlb__DOT__tlb__v20 = 0;
    CData/*1:0*/ __VdlyDim0__itlb__DOT__tlb__v20;
    __VdlyDim0__itlb__DOT__tlb__v20 = 0;
    CData/*0:0*/ __VdlyDim1__itlb__DOT__tlb__v20;
    __VdlyDim1__itlb__DOT__tlb__v20 = 0;
    CData/*0:0*/ __VdlyVal__itlb__DOT__tlb__v21;
    __VdlyVal__itlb__DOT__tlb__v21 = 0;
    CData/*1:0*/ __VdlyDim0__itlb__DOT__tlb__v21;
    __VdlyDim0__itlb__DOT__tlb__v21 = 0;
    CData/*0:0*/ __VdlyDim1__itlb__DOT__tlb__v21;
    __VdlyDim1__itlb__DOT__tlb__v21 = 0;
    CData/*0:0*/ __VdlyVal__itlb__DOT__tlb__v22;
    __VdlyVal__itlb__DOT__tlb__v22 = 0;
    CData/*1:0*/ __VdlyDim0__itlb__DOT__tlb__v22;
    __VdlyDim0__itlb__DOT__tlb__v22 = 0;
    CData/*0:0*/ __VdlyDim1__itlb__DOT__tlb__v22;
    __VdlyDim1__itlb__DOT__tlb__v22 = 0;
    CData/*0:0*/ __VdlyVal__itlb__DOT__tlb__v23;
    __VdlyVal__itlb__DOT__tlb__v23 = 0;
    CData/*1:0*/ __VdlyDim0__itlb__DOT__tlb__v23;
    __VdlyDim0__itlb__DOT__tlb__v23 = 0;
    CData/*0:0*/ __VdlyDim1__itlb__DOT__tlb__v23;
    __VdlyDim1__itlb__DOT__tlb__v23 = 0;
    CData/*1:0*/ __VdlyDim0__itlb__DOT__tlb__v24;
    __VdlyDim0__itlb__DOT__tlb__v24 = 0;
    CData/*0:0*/ __VdlyDim1__itlb__DOT__tlb__v24;
    __VdlyDim1__itlb__DOT__tlb__v24 = 0;
    CData/*1:0*/ __VdlyVal__itlb__DOT__counters__v2;
    __VdlyVal__itlb__DOT__counters__v2 = 0;
    CData/*0:0*/ __VdlySet__itlb__DOT__counters__v2;
    __VdlySet__itlb__DOT__counters__v2 = 0;
    CData/*1:0*/ __VdlyVal__itlb__DOT__counters__v3;
    __VdlyVal__itlb__DOT__counters__v3 = 0;
    CData/*0:0*/ __VdlySet__itlb__DOT__counters__v3;
    __VdlySet__itlb__DOT__counters__v3 = 0;
    VlWide<7>/*203:0*/ __VdlyVal__outFIFO__DOT__mem__v0;
    VL_ZERO_W(204, __VdlyVal__outFIFO__DOT__mem__v0);
    CData/*1:0*/ __VdlyDim0__outFIFO__DOT__mem__v0;
    __VdlyDim0__outFIFO__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__outFIFO__DOT__mem__v0;
    __VdlySet__outFIFO__DOT__mem__v0 = 0;
    // Body
    __VdlySet__outFIFO__DOT__mem__v0 = 0U;
    __Vdly__assocCnt = vlSelfRef.__PVT__assocCnt;
    __Vdly__outFIFO__DOT__indexIn = vlSelfRef.__PVT__outFIFO__DOT__indexIn;
    __Vdly__itlb__DOT__ignoreCur = vlSelfRef.__PVT__itlb__DOT__ignoreCur;
    __VdlySet__itlb__DOT__counters__v0 = 0U;
    __VdlySet__itlb__DOT__counters__v2 = 0U;
    __VdlySet__itlb__DOT__counters__v3 = 0U;
    __VdlySet__itlb__DOT__tlb__v1 = 0U;
    __VdlySet__itlb__DOT__tlb__v8 = 0U;
    __VdlySet__itlb__DOT__tlb__v9 = 0U;
    __VdlySet__itlb__DOT__tlb__v16 = 0U;
    vlSelfRef.__PVT__flushAssocIter = vlSelfRef.__Vdly__flushAssocIter;
    vlSelfRef.__PVT__flushAddrIter = vlSelfRef.__Vdly__flushAddrIter;
    vlSelfRef.fetchID = vlSelfRef.__Vdly__fetchID;
    vlSelfRef.__PVT__flushState = vlSelfRef.__Vdly__flushState;
    vlSelfRef.__PVT__outFIFO__DOT__indexOut = vlSelfRef.__Vdly__outFIFO__DOT__indexOut;
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[1U] 
                                                      << 0xfU) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0U] 
                                                        >> 0x11U)));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[0U] 
        = ((0xffff0000U & vlSelfRef.__PVT__instrAligner__DOT__window_c[0U]) 
           | (IData)(instrAligner__DOT____Vlvbound_hd81ee699__0));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[1U] 
                                                     >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[0U] 
        = ((0xffffU & vlSelfRef.__PVT__instrAligner__DOT__window_c[0U]) 
           | ((IData)(instrAligner__DOT____Vlvbound_hd81ee699__0) 
              << 0x10U));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[2U] 
                                                      << 0xfU) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[1U] 
                                                        >> 0x11U)));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[1U] 
        = ((0xffff0000U & vlSelfRef.__PVT__instrAligner__DOT__window_c[1U]) 
           | (IData)(instrAligner__DOT____Vlvbound_hd81ee699__0));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[2U] 
                                                     >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[1U] 
        = ((0xffffU & vlSelfRef.__PVT__instrAligner__DOT__window_c[1U]) 
           | ((IData)(instrAligner__DOT____Vlvbound_hd81ee699__0) 
              << 0x10U));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[3U] 
                                                      << 0xfU) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[2U] 
                                                        >> 0x11U)));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[2U] 
        = ((0xffff0000U & vlSelfRef.__PVT__instrAligner__DOT__window_c[2U]) 
           | (IData)(instrAligner__DOT____Vlvbound_hd81ee699__0));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[3U] 
                                                     >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[2U] 
        = ((0xffffU & vlSelfRef.__PVT__instrAligner__DOT__window_c[2U]) 
           | ((IData)(instrAligner__DOT____Vlvbound_hd81ee699__0) 
              << 0x10U));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[4U] 
                                                      << 0xfU) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[3U] 
                                                        >> 0x11U)));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[3U] 
        = ((0xffff0000U & vlSelfRef.__PVT__instrAligner__DOT__window_c[3U]) 
           | (IData)(instrAligner__DOT____Vlvbound_hd81ee699__0));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[4U] 
                                                     >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[3U] 
        = ((0xffffU & vlSelfRef.__PVT__instrAligner__DOT__window_c[3U]) 
           | ((IData)(instrAligner__DOT____Vlvbound_hd81ee699__0) 
              << 0x10U));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U] 
                                                     >> 0xeU));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[4U] 
        = ((0xffff0000U & vlSelfRef.__PVT__instrAligner__DOT__window_c[4U]) 
           | (IData)(instrAligner__DOT____Vlvbound_hd81ee699__0));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[8U] 
                                                      << 2U) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U] 
                                                        >> 0x1eU)));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[4U] 
        = ((0xffffU & vlSelfRef.__PVT__instrAligner__DOT__window_c[4U]) 
           | ((IData)(instrAligner__DOT____Vlvbound_hd81ee699__0) 
              << 0x10U));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[8U] 
                                                     >> 0xeU));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[5U] 
        = ((0xffff0000U & vlSelfRef.__PVT__instrAligner__DOT__window_c[5U]) 
           | (IData)(instrAligner__DOT____Vlvbound_hd81ee699__0));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[9U] 
                                                      << 2U) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[8U] 
                                                        >> 0x1eU)));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[5U] 
        = ((0xffffU & vlSelfRef.__PVT__instrAligner__DOT__window_c[5U]) 
           | ((IData)(instrAligner__DOT____Vlvbound_hd81ee699__0) 
              << 0x10U));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[9U] 
                                                     >> 0xeU));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[6U] 
        = ((0xffff0000U & vlSelfRef.__PVT__instrAligner__DOT__window_c[6U]) 
           | (IData)(instrAligner__DOT____Vlvbound_hd81ee699__0));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xaU] 
                                                      << 2U) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[9U] 
                                                        >> 0x1eU)));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[6U] 
        = ((0xffffU & vlSelfRef.__PVT__instrAligner__DOT__window_c[6U]) 
           | ((IData)(instrAligner__DOT____Vlvbound_hd81ee699__0) 
              << 0x10U));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xaU] 
                                                     >> 0xeU));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[7U] 
        = ((0xffff0000U & vlSelfRef.__PVT__instrAligner__DOT__window_c[7U]) 
           | (IData)(instrAligner__DOT____Vlvbound_hd81ee699__0));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xbU] 
                                                      << 2U) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xaU] 
                                                        >> 0x1eU)));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[7U] 
        = ((0xffffU & vlSelfRef.__PVT__instrAligner__DOT__window_c[7U]) 
           | ((IData)(instrAligner__DOT____Vlvbound_hd81ee699__0) 
              << 0x10U));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xeU] 
                                                     >> 0xbU));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[8U] 
        = ((0xffff0000U & vlSelfRef.__PVT__instrAligner__DOT__window_c[8U]) 
           | (IData)(instrAligner__DOT____Vlvbound_hd81ee699__0));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xfU] 
                                                      << 5U) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xeU] 
                                                        >> 0x1bU)));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[8U] 
        = ((0xffffU & vlSelfRef.__PVT__instrAligner__DOT__window_c[8U]) 
           | ((IData)(instrAligner__DOT____Vlvbound_hd81ee699__0) 
              << 0x10U));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xfU] 
                                                     >> 0xbU));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[9U] 
        = ((0xffff0000U & vlSelfRef.__PVT__instrAligner__DOT__window_c[9U]) 
           | (IData)(instrAligner__DOT____Vlvbound_hd81ee699__0));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x10U] 
                                                      << 5U) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xfU] 
                                                        >> 0x1bU)));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[9U] 
        = ((0xffffU & vlSelfRef.__PVT__instrAligner__DOT__window_c[9U]) 
           | ((IData)(instrAligner__DOT____Vlvbound_hd81ee699__0) 
              << 0x10U));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x10U] 
                                                     >> 0xbU));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[0xaU] 
        = ((0xffff0000U & vlSelfRef.__PVT__instrAligner__DOT__window_c[0xaU]) 
           | (IData)(instrAligner__DOT____Vlvbound_hd81ee699__0));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x11U] 
                                                      << 5U) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x10U] 
                                                        >> 0x1bU)));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[0xaU] 
        = ((0xffffU & vlSelfRef.__PVT__instrAligner__DOT__window_c[0xaU]) 
           | ((IData)(instrAligner__DOT____Vlvbound_hd81ee699__0) 
              << 0x10U));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x11U] 
                                                     >> 0xbU));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[0xbU] 
        = ((0xffff0000U & vlSelfRef.__PVT__instrAligner__DOT__window_c[0xbU]) 
           | (IData)(instrAligner__DOT____Vlvbound_hd81ee699__0));
    instrAligner__DOT____Vlvbound_hd81ee699__0 = (0xffffU 
                                                  & ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x12U] 
                                                      << 5U) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x11U] 
                                                        >> 0x1bU)));
    vlSelfRef.__PVT__instrAligner__DOT__window_c[0xbU] 
        = ((0xffffU & vlSelfRef.__PVT__instrAligner__DOT__window_c[0xbU]) 
           | ((IData)(instrAligner__DOT____Vlvbound_hd81ee699__0) 
              << 0x10U));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0U]);
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xfffffeU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | (IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0U] 
                                                     >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xfffffdU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 1U));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0U] 
                                                     >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xfffffbU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 2U));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0U] 
                                                     >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xfffff7U & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 3U));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0U] 
                                                     >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xffffefU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 4U));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0U] 
                                                     >> 5U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xffffdfU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 5U));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0U] 
                                                     >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xffffbfU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 6U));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0U] 
                                                     >> 7U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xffff7fU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 7U));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[6U] 
                                                     >> 0x1dU));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xfffeffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 8U));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[6U] 
                                                     >> 0x1eU));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xfffdffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 9U));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[6U] 
                                                  >> 0x1fU);
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xfffbffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 0xaU));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U]);
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xfff7ffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 0xbU));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U] 
                                                     >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xffefffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 0xcU));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U] 
                                                     >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xffdfffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 0xdU));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U] 
                                                     >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xffbfffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 0xeU));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U] 
                                                     >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xff7fffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 0xfU));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xdU] 
                                                     >> 0x1aU));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xfeffffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 0x10U));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xdU] 
                                                     >> 0x1bU));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xfdffffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 0x11U));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xdU] 
                                                     >> 0x1cU));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xfbffffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 0x12U));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xdU] 
                                                     >> 0x1dU));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xf7ffffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 0x13U));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xdU] 
                                                     >> 0x1eU));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xefffffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 0x14U));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xdU] 
                                                  >> 0x1fU);
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xdfffffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 0x15U));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xeU]);
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0xbfffffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 0x16U));
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xeU] 
                                                     >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
        = ((0x7fffffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hdfada5ae__0) 
              << 0x17U));
    if (vlSymsp->TOP.rst) {
        __Vdly__assocCnt = 0U;
        __VdlySet__itlb__DOT__counters__v0 = 1U;
        __Vdly__itlb__DOT__ignoreCur = 0U;
        __VdlySet__itlb__DOT__tlb__v1 = 1U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__Top__soc__core__ifetch.__Vcellinp__ifp__IN_mispr)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__BH_decBranch)))) {
                if (vlSelfRef.__PVT__handlingMiss) {
                    __Vdly__assocCnt = (3U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__assocCnt)));
                }
            }
        }
        if (vlSelfRef.__Vcellinp__itlb__clear) {
            __VdlySet__itlb__DOT__tlb__v8 = 1U;
            __Vdly__itlb__DOT__ignoreCur = 1U;
            __VdlySet__itlb__DOT__tlb__v9 = 1U;
        } else {
            if (((IData)(vlSelfRef.__PVT__itlb__DOT__ignoreCur) 
                 & (~ (IData)((vlSymsp->TOP__Top__soc__core.__PVT__PW_res 
                               >> 1U))))) {
                __Vdly__itlb__DOT__ignoreCur = 0U;
            }
            if ((IData)(((1ULL == (0xdULL & vlSymsp->TOP__Top__soc__core.__PVT__PW_res)) 
                         & (~ (IData)(vlSelfRef.__PVT__itlb__DOT__ignoreCur))))) {
                vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__idx 
                    = (1U & (IData)((vlSymsp->TOP__Top__soc__core.__PVT__PW_res 
                                     >> 0x21U)));
                vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__assocIdx 
                    = vlSelfRef.__PVT__itlb__DOT__counters
                    [vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__idx];
                __VdlyVal__itlb__DOT__tlb__v16 = (7U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__Top__soc__core.__PVT__PW_res 
                                                             >> 4U)));
                __VdlyDim0__itlb__DOT__tlb__v16 = vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__assocIdx;
                __VdlyDim1__itlb__DOT__tlb__v16 = vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__idx;
                __VdlySet__itlb__DOT__tlb__v16 = 1U;
                __VdlyVal__itlb__DOT__tlb__v17 = (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__Top__soc__core.__PVT__PW_res 
                                                             >> 9U)));
                __VdlyDim0__itlb__DOT__tlb__v17 = vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__assocIdx;
                __VdlyDim1__itlb__DOT__tlb__v17 = vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__idx;
                __VdlyVal__itlb__DOT__tlb__v18 = (0xfffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__Top__soc__core.__PVT__PW_res 
                                                             >> 0xbU)));
                __VdlyDim0__itlb__DOT__tlb__v18 = vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__assocIdx;
                __VdlyDim1__itlb__DOT__tlb__v18 = vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__idx;
                __VdlyVal__itlb__DOT__tlb__v19 = (0x7ffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__Top__soc__core.__PVT__PW_res 
                                                             >> 0x22U)));
                __VdlyDim0__itlb__DOT__tlb__v19 = vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__assocIdx;
                __VdlyDim1__itlb__DOT__tlb__v19 = vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__idx;
                __VdlyVal__itlb__DOT__tlb__v20 = (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__Top__soc__core.__PVT__PW_res 
                                                             >> 8U)));
                __VdlyDim0__itlb__DOT__tlb__v20 = vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__assocIdx;
                __VdlyDim1__itlb__DOT__tlb__v20 = vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__idx;
                __VdlyVal__itlb__DOT__tlb__v21 = (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__Top__soc__core.__PVT__PW_res 
                                                             >> 7U)));
                __VdlyDim0__itlb__DOT__tlb__v21 = vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__assocIdx;
                __VdlyDim1__itlb__DOT__tlb__v21 = vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__idx;
                __VdlyVal__itlb__DOT__tlb__v22 = (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__Top__soc__core.__PVT__PW_res 
                                                             >> 0xaU)));
                __VdlyDim0__itlb__DOT__tlb__v22 = vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__assocIdx;
                __VdlyDim1__itlb__DOT__tlb__v22 = vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__idx;
                __VdlyVal__itlb__DOT__tlb__v23 = (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__Top__soc__core.__PVT__PW_res 
                                                              >> 0x1fU))));
                __VdlyDim0__itlb__DOT__tlb__v23 = vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__assocIdx;
                __VdlyDim1__itlb__DOT__tlb__v23 = vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__idx;
                __VdlyDim0__itlb__DOT__tlb__v24 = vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__assocIdx;
                __VdlyDim1__itlb__DOT__tlb__v24 = vlSelfRef.__PVT__itlb__DOT__unnamedblk8__DOT__idx;
            }
            if ((1U & (IData)(vlSelfRef.__PVT__itlb__DOT__inc))) {
                __VdlyVal__itlb__DOT__counters__v2 
                    = (3U & ((IData)(1U) + vlSelfRef.__PVT__itlb__DOT__counters
                             [0U]));
                __VdlySet__itlb__DOT__counters__v2 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.__PVT__itlb__DOT__inc))) {
                __VdlyVal__itlb__DOT__counters__v3 
                    = (3U & ((IData)(1U) + vlSelfRef.__PVT__itlb__DOT__counters
                             [1U]));
                __VdlySet__itlb__DOT__counters__v3 = 1U;
            }
        }
    }
    if (vlSelfRef.__Vcellinp__outFIFO__rst) {
        __Vdly__outFIFO__DOT__indexIn = 0U;
        vlSelfRef.__PVT__outFIFO__DOT__fullCond = 0U;
    } else if ((1U & (~ (((IData)(vlSelfRef.__PVT__outFIFO__DOT__empty) 
                          & (IData)(vlSelfRef.__PVT__outFIFO__DOT__doInsert)) 
                         & (IData)(vlSelfRef.__PVT__outFIFO__DOT__outputReady))))) {
        if (vlSelfRef.__PVT__outFIFO__DOT__doInsert) {
            __VdlyVal__outFIFO__DOT__mem__v0[0U] = 
                ((vlSelfRef.packetRePred[1U] << 0x1fU) 
                 | (vlSelfRef.packetRePred[0U] >> 1U));
            __VdlyVal__outFIFO__DOT__mem__v0[1U] = 
                ((vlSelfRef.packetRePred[2U] << 0x1fU) 
                 | (vlSelfRef.packetRePred[1U] >> 1U));
            __VdlyVal__outFIFO__DOT__mem__v0[2U] = 
                ((vlSelfRef.packetRePred[3U] << 0x1fU) 
                 | (vlSelfRef.packetRePred[2U] >> 1U));
            __VdlyVal__outFIFO__DOT__mem__v0[3U] = 
                ((vlSelfRef.packetRePred[4U] << 0x1fU) 
                 | (vlSelfRef.packetRePred[3U] >> 1U));
            __VdlyVal__outFIFO__DOT__mem__v0[4U] = 
                ((vlSelfRef.packetRePred[5U] << 0x1fU) 
                 | (vlSelfRef.packetRePred[4U] >> 1U));
            __VdlyVal__outFIFO__DOT__mem__v0[5U] = 
                ((vlSelfRef.packetRePred[6U] << 0x1fU) 
                 | (vlSelfRef.packetRePred[5U] >> 1U));
            __VdlyVal__outFIFO__DOT__mem__v0[6U] = 
                (0xfffU & (vlSelfRef.packetRePred[6U] 
                           >> 1U));
            __VdlyDim0__outFIFO__DOT__mem__v0 = vlSelfRef.__PVT__outFIFO__DOT__indexIn;
            __VdlySet__outFIFO__DOT__mem__v0 = 1U;
            __Vdly__outFIFO__DOT__indexIn = (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__outFIFO__DOT__indexIn)));
        }
        if (((IData)(vlSelfRef.__PVT__outFIFO__DOT__doInsert) 
             != (IData)(vlSelfRef.__PVT__outFIFO__DOT__doExtract))) {
            vlSelfRef.__PVT__outFIFO__DOT__fullCond 
                = vlSelfRef.__PVT__outFIFO__DOT__doInsert;
        }
    }
    vlSelfRef.__PVT__assocCnt = __Vdly__assocCnt;
    if (__VdlySet__outFIFO__DOT__mem__v0) {
        vlSelfRef.__PVT__outFIFO__DOT__mem[__VdlyDim0__outFIFO__DOT__mem__v0][0U] 
            = __VdlyVal__outFIFO__DOT__mem__v0[0U];
        vlSelfRef.__PVT__outFIFO__DOT__mem[__VdlyDim0__outFIFO__DOT__mem__v0][1U] 
            = __VdlyVal__outFIFO__DOT__mem__v0[1U];
        vlSelfRef.__PVT__outFIFO__DOT__mem[__VdlyDim0__outFIFO__DOT__mem__v0][2U] 
            = __VdlyVal__outFIFO__DOT__mem__v0[2U];
        vlSelfRef.__PVT__outFIFO__DOT__mem[__VdlyDim0__outFIFO__DOT__mem__v0][3U] 
            = __VdlyVal__outFIFO__DOT__mem__v0[3U];
        vlSelfRef.__PVT__outFIFO__DOT__mem[__VdlyDim0__outFIFO__DOT__mem__v0][4U] 
            = __VdlyVal__outFIFO__DOT__mem__v0[4U];
        vlSelfRef.__PVT__outFIFO__DOT__mem[__VdlyDim0__outFIFO__DOT__mem__v0][5U] 
            = __VdlyVal__outFIFO__DOT__mem__v0[5U];
        vlSelfRef.__PVT__outFIFO__DOT__mem[__VdlyDim0__outFIFO__DOT__mem__v0][6U] 
            = __VdlyVal__outFIFO__DOT__mem__v0[6U];
    }
    vlSelfRef.__PVT__outFIFO__DOT__indexIn = __Vdly__outFIFO__DOT__indexIn;
    vlSelfRef.__PVT__itlb__DOT__ignoreCur = __Vdly__itlb__DOT__ignoreCur;
    if (__VdlySet__itlb__DOT__counters__v0) {
        vlSelfRef.__PVT__itlb__DOT__counters[0U] = 0U;
        vlSelfRef.__PVT__itlb__DOT__tlb[0U][0U] = 0ULL;
    }
    if (__VdlySet__itlb__DOT__counters__v2) {
        vlSelfRef.__PVT__itlb__DOT__counters[0U] = __VdlyVal__itlb__DOT__counters__v2;
    }
    if (__VdlySet__itlb__DOT__counters__v3) {
        vlSelfRef.__PVT__itlb__DOT__counters[1U] = __VdlyVal__itlb__DOT__counters__v3;
    }
    if (__VdlySet__itlb__DOT__tlb__v1) {
        vlSelfRef.__PVT__itlb__DOT__tlb[0U][1U] = 0ULL;
        vlSelfRef.__PVT__itlb__DOT__counters[1U] = 0U;
        vlSelfRef.__PVT__itlb__DOT__tlb[0U][2U] = 0ULL;
        vlSelfRef.__PVT__itlb__DOT__tlb[0U][3U] = 0ULL;
        vlSelfRef.__PVT__itlb__DOT__tlb[1U][0U] = 0ULL;
        vlSelfRef.__PVT__itlb__DOT__tlb[1U][1U] = 0ULL;
        vlSelfRef.__PVT__itlb__DOT__tlb[1U][2U] = 0ULL;
        vlSelfRef.__PVT__itlb__DOT__tlb[1U][3U] = 0ULL;
    }
    if (__VdlySet__itlb__DOT__tlb__v8) {
        vlSelfRef.__PVT__itlb__DOT__tlb[0U][0U] = 0ULL;
    }
    if (__VdlySet__itlb__DOT__tlb__v9) {
        vlSelfRef.__PVT__itlb__DOT__tlb[0U][1U] = 0ULL;
        vlSelfRef.__PVT__itlb__DOT__tlb[0U][2U] = 0ULL;
        vlSelfRef.__PVT__itlb__DOT__tlb[0U][3U] = 0ULL;
        vlSelfRef.__PVT__itlb__DOT__tlb[1U][0U] = 0ULL;
        vlSelfRef.__PVT__itlb__DOT__tlb[1U][1U] = 0ULL;
        vlSelfRef.__PVT__itlb__DOT__tlb[1U][2U] = 0ULL;
        vlSelfRef.__PVT__itlb__DOT__tlb[1U][3U] = 0ULL;
    }
    if (__VdlySet__itlb__DOT__tlb__v16) {
        vlSelfRef.__PVT__itlb__DOT__tlb[__VdlyDim1__itlb__DOT__tlb__v16][__VdlyDim0__itlb__DOT__tlb__v16] 
            = ((0xffffffffffc7ULL & vlSelfRef.__PVT__itlb__DOT__tlb
                [__VdlyDim1__itlb__DOT__tlb__v16][__VdlyDim0__itlb__DOT__tlb__v16]) 
               | ((QData)((IData)(__VdlyVal__itlb__DOT__tlb__v16)) 
                  << 3U));
        vlSelfRef.__PVT__itlb__DOT__tlb[__VdlyDim1__itlb__DOT__tlb__v17][__VdlyDim0__itlb__DOT__tlb__v17] 
            = ((0xfffffffffeffULL & vlSelfRef.__PVT__itlb__DOT__tlb
                [__VdlyDim1__itlb__DOT__tlb__v17][__VdlyDim0__itlb__DOT__tlb__v17]) 
               | ((QData)((IData)(__VdlyVal__itlb__DOT__tlb__v17)) 
                  << 8U));
        vlSelfRef.__PVT__itlb__DOT__tlb[__VdlyDim1__itlb__DOT__tlb__v18][__VdlyDim0__itlb__DOT__tlb__v18] 
            = ((0xffffe00001ffULL & vlSelfRef.__PVT__itlb__DOT__tlb
                [__VdlyDim1__itlb__DOT__tlb__v18][__VdlyDim0__itlb__DOT__tlb__v18]) 
               | ((QData)((IData)(__VdlyVal__itlb__DOT__tlb__v18)) 
                  << 9U));
        vlSelfRef.__PVT__itlb__DOT__tlb[__VdlyDim1__itlb__DOT__tlb__v19][__VdlyDim0__itlb__DOT__tlb__v19] 
            = ((0x1fffffffULL & vlSelfRef.__PVT__itlb__DOT__tlb
                [__VdlyDim1__itlb__DOT__tlb__v19][__VdlyDim0__itlb__DOT__tlb__v19]) 
               | ((QData)((IData)(__VdlyVal__itlb__DOT__tlb__v19)) 
                  << 0x1dU));
        vlSelfRef.__PVT__itlb__DOT__tlb[__VdlyDim1__itlb__DOT__tlb__v20][__VdlyDim0__itlb__DOT__tlb__v20] 
            = ((0xffffffffffbfULL & vlSelfRef.__PVT__itlb__DOT__tlb
                [__VdlyDim1__itlb__DOT__tlb__v20][__VdlyDim0__itlb__DOT__tlb__v20]) 
               | ((QData)((IData)(__VdlyVal__itlb__DOT__tlb__v20)) 
                  << 6U));
        vlSelfRef.__PVT__itlb__DOT__tlb[__VdlyDim1__itlb__DOT__tlb__v21][__VdlyDim0__itlb__DOT__tlb__v21] 
            = ((0xffffffffff7fULL & vlSelfRef.__PVT__itlb__DOT__tlb
                [__VdlyDim1__itlb__DOT__tlb__v21][__VdlyDim0__itlb__DOT__tlb__v21]) 
               | ((QData)((IData)(__VdlyVal__itlb__DOT__tlb__v21)) 
                  << 7U));
        vlSelfRef.__PVT__itlb__DOT__tlb[__VdlyDim1__itlb__DOT__tlb__v22][__VdlyDim0__itlb__DOT__tlb__v22] 
            = ((0xfffffffffffdULL & vlSelfRef.__PVT__itlb__DOT__tlb
                [__VdlyDim1__itlb__DOT__tlb__v22][__VdlyDim0__itlb__DOT__tlb__v22]) 
               | ((QData)((IData)(__VdlyVal__itlb__DOT__tlb__v22)) 
                  << 1U));
        vlSelfRef.__PVT__itlb__DOT__tlb[__VdlyDim1__itlb__DOT__tlb__v23][__VdlyDim0__itlb__DOT__tlb__v23] 
            = ((0xfffffffffffbULL & vlSelfRef.__PVT__itlb__DOT__tlb
                [__VdlyDim1__itlb__DOT__tlb__v23][__VdlyDim0__itlb__DOT__tlb__v23]) 
               | ((QData)((IData)(__VdlyVal__itlb__DOT__tlb__v23)) 
                  << 2U));
        vlSelfRef.__PVT__itlb__DOT__tlb[__VdlyDim1__itlb__DOT__tlb__v24][__VdlyDim0__itlb__DOT__tlb__v24] 
            = (1ULL | vlSelfRef.__PVT__itlb__DOT__tlb
               [__VdlyDim1__itlb__DOT__tlb__v24][__VdlyDim0__itlb__DOT__tlb__v24]);
    }
    vlSelfRef.__PVT__outFIFO__DOT__equal = ((IData)(vlSelfRef.__PVT__outFIFO__DOT__indexIn) 
                                            == (IData)(vlSelfRef.__PVT__outFIFO__DOT__indexOut));
    vlSelfRef.__PVT__outFIFO__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__outFIFO__DOT__fullCond)) 
                                            & (IData)(vlSelfRef.__PVT__outFIFO__DOT__equal));
}

VL_INLINE_OPT void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__7(VTop_IFetchPipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__7\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx;
    __PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx = 0;
    // Body
    vlSelfRef.__Vcellinp__itlb__clear = ((IData)(vlSymsp->TOP__Top__soc__core.__PVT__TH_clearICache) 
                                         | (IData)(vlSymsp->TOP__Top__soc__core.__PVT__TH_flushTLB));
    vlSelfRef.fetch0[0U] = 0U;
    vlSelfRef.fetch0[1U] = 0U;
    vlSelfRef.fetch0[2U] = 0U;
    vlSelfRef.fetch0[3U] = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__Top__soc__core__ifetch.__Vcellinp__ifp__IN_mispr)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__BH_decBranch)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__cacheMiss) 
                              | (IData)(vlSelfRef.__PVT__tlbMiss))))) {
                    if ((1U & (vlSymsp->TOP__Top__soc__core__ifetch.__PVT__ifetchOp[0U] 
                               & (~ (IData)(vlSelfRef.__PVT__OUT_stall))))) {
                        vlSelfRef.fetch0[0U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__ifetchOp[0U];
                        vlSelfRef.fetch0[1U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__ifetchOp[1U];
                        vlSelfRef.fetch0[2U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__ifetchOp[2U];
                        vlSelfRef.fetch0[3U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__ifetchOp[3U];
                    }
                }
            }
        }
    }
    vlSelfRef.__Vcellinp__itlb__IN_rqs[0U] = ((0x1ffffeU 
                                               & (vlSelfRef.fetch0[3U] 
                                                  >> 3U)) 
                                              | (1U 
                                                 & vlSelfRef.fetch0[0U]));
    vlSelfRef.__PVT__itlb__DOT__inc = 0U;
    __PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
        = (1U & (vlSelfRef.__Vcellinp__itlb__IN_rqs
                 [0U] >> 1U));
    vlSelfRef.__Vcellout__itlb__OUT_res[0U] = 0U;
    vlSelfRef.__Vcellout__itlb__OUT_res[0U] = (0xfffff7fU 
                                               & vlSelfRef.__Vcellout__itlb__OUT_res
                                               [0U]);
    vlSelfRef.__Vcellout__itlb__OUT_res[0U] = (0xfffffbfU 
                                               & vlSelfRef.__Vcellout__itlb__OUT_res
                                               [0U]);
    vlSelfRef.__Vcellout__itlb__OUT_res[0U] = (0xffffffeU 
                                               & vlSelfRef.__Vcellout__itlb__OUT_res
                                               [0U]);
    if ((1U & vlSelfRef.__Vcellinp__itlb__IN_rqs[0U])) {
        if (((IData)(vlSelfRef.__PVT__itlb__DOT__tlb
                     [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                     [0U]) & ((1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                             [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                             [0U] >> 8U)))
                               ? ((0x3ffU & (IData)(
                                                    (vlSelfRef.__PVT__itlb__DOT__tlb
                                                     [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                     [0U] 
                                                     >> 0x26U))) 
                                  == (0x3ffU & (vlSelfRef.__Vcellinp__itlb__IN_rqs
                                                [0U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__itlb__DOT__tlb
                                                       [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [0U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__Vcellinp__itlb__IN_rqs
                                                  [0U] 
                                                  >> 2U)))))) {
            vlSelfRef.itlb__DOT____Vlvbound_hcb230f52__1 
                = (1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [0U] >> 2U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xfffffbfU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hcb230f52__1) 
                             << 6U));
            vlSelfRef.itlb__DOT____Vlvbound_hcb223e82__1 
                = (1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [0U] >> 1U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xfffff7fU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hcb223e82__1) 
                             << 7U));
            vlSelfRef.itlb__DOT____Vlvbound_hf4ef825e__0 
                = (7U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [0U] >> 3U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xfffffc7U & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hf4ef825e__0) 
                             << 3U));
            vlSelfRef.itlb__DOT____Vlvbound_hcb229d0c__0 
                = (1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [0U] >> 7U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xffffffdU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hcb229d0c__0) 
                             << 1U));
            vlSelfRef.itlb__DOT____Vlvbound_hcb224d1f__0 
                = (1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [0U] >> 8U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xffffffbU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hcb224d1f__0) 
                             << 2U));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = (1U | vlSelfRef.__Vcellout__itlb__OUT_res
                   [0U]);
            vlSelfRef.itlb__DOT____Vlvbound_hdeabf1e7__0 
                = (0xfffffU & ((1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                              [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                              [0U] 
                                              >> 8U)))
                                ? ((0xffc00U & ((IData)(
                                                        (vlSelfRef.__PVT__itlb__DOT__tlb
                                                         [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [0U] 
                                                         >> 0x13U)) 
                                                << 0xaU)) 
                                   | (0x3ffU & (vlSelfRef.__Vcellinp__itlb__IN_rqs
                                                [0U] 
                                                >> 1U)))
                                : (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                           [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                           [0U] >> 9U))));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xffU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | (vlSelfRef.itlb__DOT____Vlvbound_hdeabf1e7__0 
                             << 8U));
            if ((0U == vlSelfRef.__PVT__itlb__DOT__counters
                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__itlb__DOT__inc = (1U 
                                                   | (IData)(vlSelfRef.__PVT__itlb__DOT__inc));
            }
        }
        if (((IData)(vlSelfRef.__PVT__itlb__DOT__tlb
                     [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                     [1U]) & ((1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                             [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                             [1U] >> 8U)))
                               ? ((0x3ffU & (IData)(
                                                    (vlSelfRef.__PVT__itlb__DOT__tlb
                                                     [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                     [1U] 
                                                     >> 0x26U))) 
                                  == (0x3ffU & (vlSelfRef.__Vcellinp__itlb__IN_rqs
                                                [0U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__itlb__DOT__tlb
                                                       [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [1U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__Vcellinp__itlb__IN_rqs
                                                  [0U] 
                                                  >> 2U)))))) {
            vlSelfRef.itlb__DOT____Vlvbound_hcb230f52__1 
                = (1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [1U] >> 2U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xfffffbfU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hcb230f52__1) 
                             << 6U));
            vlSelfRef.itlb__DOT____Vlvbound_hcb223e82__1 
                = (1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [1U] >> 1U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xfffff7fU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hcb223e82__1) 
                             << 7U));
            vlSelfRef.itlb__DOT____Vlvbound_hf4ef825e__0 
                = (7U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [1U] >> 3U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xfffffc7U & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hf4ef825e__0) 
                             << 3U));
            vlSelfRef.itlb__DOT____Vlvbound_hcb229d0c__0 
                = (1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [1U] >> 7U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xffffffdU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hcb229d0c__0) 
                             << 1U));
            vlSelfRef.itlb__DOT____Vlvbound_hcb224d1f__0 
                = (1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [1U] >> 8U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xffffffbU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hcb224d1f__0) 
                             << 2U));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = (1U | vlSelfRef.__Vcellout__itlb__OUT_res
                   [0U]);
            vlSelfRef.itlb__DOT____Vlvbound_hdeabf1e7__0 
                = (0xfffffU & ((1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                              [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                              [1U] 
                                              >> 8U)))
                                ? ((0xffc00U & ((IData)(
                                                        (vlSelfRef.__PVT__itlb__DOT__tlb
                                                         [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [1U] 
                                                         >> 0x13U)) 
                                                << 0xaU)) 
                                   | (0x3ffU & (vlSelfRef.__Vcellinp__itlb__IN_rqs
                                                [0U] 
                                                >> 1U)))
                                : (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                           [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                           [1U] >> 9U))));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xffU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | (vlSelfRef.itlb__DOT____Vlvbound_hdeabf1e7__0 
                             << 8U));
            if ((1U == vlSelfRef.__PVT__itlb__DOT__counters
                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__itlb__DOT__inc = (1U 
                                                   | (IData)(vlSelfRef.__PVT__itlb__DOT__inc));
            }
        }
        if (((IData)(vlSelfRef.__PVT__itlb__DOT__tlb
                     [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                     [2U]) & ((1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                             [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                             [2U] >> 8U)))
                               ? ((0x3ffU & (IData)(
                                                    (vlSelfRef.__PVT__itlb__DOT__tlb
                                                     [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                     [2U] 
                                                     >> 0x26U))) 
                                  == (0x3ffU & (vlSelfRef.__Vcellinp__itlb__IN_rqs
                                                [0U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__itlb__DOT__tlb
                                                       [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [2U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__Vcellinp__itlb__IN_rqs
                                                  [0U] 
                                                  >> 2U)))))) {
            vlSelfRef.itlb__DOT____Vlvbound_hcb230f52__1 
                = (1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [2U] >> 2U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xfffffbfU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hcb230f52__1) 
                             << 6U));
            vlSelfRef.itlb__DOT____Vlvbound_hcb223e82__1 
                = (1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [2U] >> 1U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xfffff7fU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hcb223e82__1) 
                             << 7U));
            vlSelfRef.itlb__DOT____Vlvbound_hf4ef825e__0 
                = (7U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [2U] >> 3U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xfffffc7U & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hf4ef825e__0) 
                             << 3U));
            vlSelfRef.itlb__DOT____Vlvbound_hcb229d0c__0 
                = (1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [2U] >> 7U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xffffffdU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hcb229d0c__0) 
                             << 1U));
            vlSelfRef.itlb__DOT____Vlvbound_hcb224d1f__0 
                = (1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [2U] >> 8U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xffffffbU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hcb224d1f__0) 
                             << 2U));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = (1U | vlSelfRef.__Vcellout__itlb__OUT_res
                   [0U]);
            vlSelfRef.itlb__DOT____Vlvbound_hdeabf1e7__0 
                = (0xfffffU & ((1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                              [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                              [2U] 
                                              >> 8U)))
                                ? ((0xffc00U & ((IData)(
                                                        (vlSelfRef.__PVT__itlb__DOT__tlb
                                                         [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [2U] 
                                                         >> 0x13U)) 
                                                << 0xaU)) 
                                   | (0x3ffU & (vlSelfRef.__Vcellinp__itlb__IN_rqs
                                                [0U] 
                                                >> 1U)))
                                : (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                           [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                           [2U] >> 9U))));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xffU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | (vlSelfRef.itlb__DOT____Vlvbound_hdeabf1e7__0 
                             << 8U));
            if ((2U == vlSelfRef.__PVT__itlb__DOT__counters
                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__itlb__DOT__inc = (1U 
                                                   | (IData)(vlSelfRef.__PVT__itlb__DOT__inc));
            }
        }
        if (((IData)(vlSelfRef.__PVT__itlb__DOT__tlb
                     [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                     [3U]) & ((1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                             [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                             [3U] >> 8U)))
                               ? ((0x3ffU & (IData)(
                                                    (vlSelfRef.__PVT__itlb__DOT__tlb
                                                     [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                     [3U] 
                                                     >> 0x26U))) 
                                  == (0x3ffU & (vlSelfRef.__Vcellinp__itlb__IN_rqs
                                                [0U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__itlb__DOT__tlb
                                                       [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [3U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__Vcellinp__itlb__IN_rqs
                                                  [0U] 
                                                  >> 2U)))))) {
            vlSelfRef.itlb__DOT____Vlvbound_hcb230f52__1 
                = (1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [3U] >> 2U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xfffffbfU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hcb230f52__1) 
                             << 6U));
            vlSelfRef.itlb__DOT____Vlvbound_hcb223e82__1 
                = (1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [3U] >> 1U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xfffff7fU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hcb223e82__1) 
                             << 7U));
            vlSelfRef.itlb__DOT____Vlvbound_hf4ef825e__0 
                = (7U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [3U] >> 3U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xfffffc7U & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hf4ef825e__0) 
                             << 3U));
            vlSelfRef.itlb__DOT____Vlvbound_hcb229d0c__0 
                = (1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [3U] >> 7U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xffffffdU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hcb229d0c__0) 
                             << 1U));
            vlSelfRef.itlb__DOT____Vlvbound_hcb224d1f__0 
                = (1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                 [3U] >> 8U)));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xffffffbU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | ((IData)(vlSelfRef.itlb__DOT____Vlvbound_hcb224d1f__0) 
                             << 2U));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = (1U | vlSelfRef.__Vcellout__itlb__OUT_res
                   [0U]);
            vlSelfRef.itlb__DOT____Vlvbound_hdeabf1e7__0 
                = (0xfffffU & ((1U & (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                              [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                              [3U] 
                                              >> 8U)))
                                ? ((0xffc00U & ((IData)(
                                                        (vlSelfRef.__PVT__itlb__DOT__tlb
                                                         [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [3U] 
                                                         >> 0x13U)) 
                                                << 0xaU)) 
                                   | (0x3ffU & (vlSelfRef.__Vcellinp__itlb__IN_rqs
                                                [0U] 
                                                >> 1U)))
                                : (IData)((vlSelfRef.__PVT__itlb__DOT__tlb
                                           [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                           [3U] >> 9U))));
            vlSelfRef.__Vcellout__itlb__OUT_res[0U] 
                = ((0xffU & vlSelfRef.__Vcellout__itlb__OUT_res
                    [0U]) | (vlSelfRef.itlb__DOT____Vlvbound_hdeabf1e7__0 
                             << 8U));
            if ((3U == vlSelfRef.__PVT__itlb__DOT__counters
                 [__PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__itlb__DOT__inc = (1U 
                                                   | (IData)(vlSelfRef.__PVT__itlb__DOT__inc));
            }
        }
    }
}

VL_INLINE_OPT void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__8(VTop_IFetchPipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__8\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__cacheHit;
    __PVT__cacheHit = 0;
    CData/*0:0*/ __PVT__doCacheLoad;
    __PVT__doCacheLoad = 0;
    CData/*0:0*/ __PVT__unnamedblk3__DOT__transferExists;
    __PVT__unnamedblk3__DOT__transferExists = 0;
    CData/*0:0*/ __PVT__unnamedblk3__DOT__allowPassThru;
    __PVT__unnamedblk3__DOT__allowPassThru = 0;
    // Body
    vlSelfRef.__PVT__pageFault = 0U;
    vlSelfRef.__PVT__tlbMiss = 0U;
    if (((vlSelfRef.fetch1[0U] & (0U == (0x60000U & 
                                         vlSelfRef.fetch1[2U]))) 
         & (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
            >> 0x1dU))) {
        if ((1U & vlSelfRef.__PVT__TLB_res)) {
            if ((1U & (((IData)((8U != (0x88U & vlSelfRef.__PVT__TLB_res))) 
                        | ((0U == (3U & vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem)) 
                           & (~ (vlSelfRef.__PVT__TLB_res 
                                 >> 1U)))) | (IData)(
                                                     ((1U 
                                                       == 
                                                       (0x23U 
                                                        & vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem)) 
                                                      & (vlSelfRef.__PVT__TLB_res 
                                                         >> 1U)))))) {
                vlSelfRef.__PVT__pageFault = 1U;
            }
        }
        if ((1U & (~ vlSelfRef.__PVT__TLB_res))) {
            vlSelfRef.__PVT__tlbMiss = 1U;
        }
    }
    vlSelfRef.__PVT__OUT_pw = vlSelfRef.__PVT__OUT_pw_c;
    __PVT__unnamedblk3__DOT__transferExists = 0U;
    __PVT__unnamedblk3__DOT__allowPassThru = 0U;
    vlSelfRef.__PVT__packet[0U] = 0U;
    vlSelfRef.__PVT__packet[1U] = 0U;
    vlSelfRef.__PVT__packet[2U] = 0U;
    vlSelfRef.__PVT__packet[3U] = 0U;
    vlSelfRef.__PVT__packet[4U] = 0U;
    vlSelfRef.__PVT__packet[5U] = 0U;
    vlSelfRef.__PVT__packet[6U] = 0U;
    vlSelfRef.__PVT__packet[5U] = ((0xfffff3ffU & vlSelfRef.__PVT__packet[5U]) 
                                   | (0xc00U & (vlSelfRef.fetch1[2U] 
                                                >> 7U)));
    __PVT__cacheHit = 0U;
    vlSelfRef.__PVT__cacheMiss = 0U;
    __PVT__doCacheLoad = 1U;
    if ((1U & vlSelfRef.fetch1[0U])) {
        if (vlSelfRef.__PVT__pageFault) {
            vlSelfRef.__PVT__packet[5U] = (0xc00U | 
                                           vlSelfRef.__PVT__packet[5U]);
        }
        if (((~ (IData)(vlSelfRef.__PVT__tlbMiss)) 
             & (0U == (0xc00U & vlSelfRef.__PVT__packet[5U])))) {
            if ((1U & ((~ (((0x80000000U <= vlSelfRef.__PVT__phyPC) 
                            & (0x90000000U > vlSelfRef.__PVT__phyPC)) 
                           | ((0x80000000U > vlSelfRef.__PVT__phyPC) 
                              & (0x10000000U <= vlSelfRef.__PVT__phyPC)))) 
                       | (0x80000000U > vlSelfRef.__PVT__phyPC)))) {
                vlSelfRef.__PVT__packet[5U] = (0x800U 
                                               | (0xfffff3ffU 
                                                  & vlSelfRef.__PVT__packet[5U]));
            }
        }
        if (((~ (IData)(vlSelfRef.__PVT__tlbMiss)) 
             & (0U == (0xc00U & vlSelfRef.__PVT__packet[5U])))) {
            if ((1U & (IData)(vlSelfRef.__PVT__assocHit))) {
                __PVT__cacheHit = 1U;
                __PVT__doCacheLoad = 0U;
                vlSelfRef.__PVT__packet[0U] = ((1U 
                                                & vlSelfRef.__PVT__packet[0U]) 
                                               | (vlSelfRef.__PVT__assocHitInstrs[0U] 
                                                  << 1U));
                vlSelfRef.__PVT__packet[1U] = ((vlSelfRef.__PVT__assocHitInstrs[0U] 
                                                >> 0x1fU) 
                                               | (vlSelfRef.__PVT__assocHitInstrs[1U] 
                                                  << 1U));
                vlSelfRef.__PVT__packet[2U] = ((vlSelfRef.__PVT__assocHitInstrs[1U] 
                                                >> 0x1fU) 
                                               | (vlSelfRef.__PVT__assocHitInstrs[2U] 
                                                  << 1U));
                vlSelfRef.__PVT__packet[3U] = ((vlSelfRef.__PVT__assocHitInstrs[2U] 
                                                >> 0x1fU) 
                                               | (vlSelfRef.__PVT__assocHitInstrs[3U] 
                                                  << 1U));
                vlSelfRef.__PVT__packet[4U] = ((0xfffffffeU 
                                                & vlSelfRef.__PVT__packet[4U]) 
                                               | (vlSelfRef.__PVT__assocHitInstrs[3U] 
                                                  >> 0x1fU));
            }
            __PVT__unnamedblk3__DOT__allowPassThru 
                = (1U & (([&]() {
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__addr 
                                = vlSelfRef.__PVT__phyPC;
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[0U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[1U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[1U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[2U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[2U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[3U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[3U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[4U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[4U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[5U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[5U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[6U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[6U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[7U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[7U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[8U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[8U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[9U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[9U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[0xaU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xaU];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[0xbU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xbU];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[0xcU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xcU];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[0xdU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xdU];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[0xeU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xeU];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[0xfU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xfU];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[0x10U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0x10U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[0x11U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0x11U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcReq[0U] 
                                = vlSelfRef.__PVT__OUT_memc[0U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcReq[1U] 
                                = vlSelfRef.__PVT__OUT_memc[1U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcReq[2U] 
                                = vlSelfRef.__PVT__OUT_memc[2U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcReq[3U] 
                                = vlSelfRef.__PVT__OUT_memc[3U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcReq[4U] 
                                = vlSelfRef.__PVT__OUT_memc[4U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcReq[5U] 
                                = vlSelfRef.__PVT__OUT_memc[5U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcReq[6U] 
                                = vlSelfRef.__PVT__OUT_memc[6U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__memcReq[7U] 
                                = vlSelfRef.__PVT__OUT_memc[7U];
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__rv = 0U;
                            if ((((vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[1U] 
                                   >> 0x1eU) & vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[2U]) 
                                 & ((0x3ffffffU & (
                                                   (vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[3U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[2U] 
                                                      >> 0x18U))) 
                                    == (vlSelfRef.__Vfunc_CheckTransfersIF__0__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfersIF__0__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfersIF__0__rv));
                                vlSelfRef.__Vfunc_CheckTransfersIF__0__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfersIF__0__rv)) 
                                       | (((7U & (vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[2U] 
                                                  >> 3U)) 
                                           > (7U & 
                                              ((3U 
                                                & (vlSelfRef.__Vfunc_CheckTransfersIF__0__addr 
                                                   >> 4U)) 
                                               - (3U 
                                                  & (vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[2U] 
                                                     >> 0x16U))))) 
                                          << 1U));
                            }
                            if (((IData)((0x140000U 
                                          == (0x140000U 
                                              & vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[4U]))) 
                                 & ((0x3ffffffU & (
                                                   (vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[6U] 
                                                    << 0x14U) 
                                                   | (vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[5U] 
                                                      >> 0xcU))) 
                                    == (vlSelfRef.__Vfunc_CheckTransfersIF__0__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfersIF__0__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfersIF__0__rv));
                                vlSelfRef.__Vfunc_CheckTransfersIF__0__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfersIF__0__rv)) 
                                       | (((7U & (vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[4U] 
                                                  >> 0x17U)) 
                                           > (7U & 
                                              ((3U 
                                                & (vlSelfRef.__Vfunc_CheckTransfersIF__0__addr 
                                                   >> 4U)) 
                                               - (3U 
                                                  & (vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[5U] 
                                                     >> 0xaU))))) 
                                          << 1U));
                            }
                            if (((IData)((0x140U == 
                                          (0x140U & 
                                           vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[7U]))) 
                                 & ((0x3ffffffU & vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[8U]) 
                                    == (vlSelfRef.__Vfunc_CheckTransfersIF__0__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfersIF__0__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfersIF__0__rv));
                                vlSelfRef.__Vfunc_CheckTransfersIF__0__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfersIF__0__rv)) 
                                       | (((7U & (vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[7U] 
                                                  >> 0xbU)) 
                                           > (7U & 
                                              ((3U 
                                                & (vlSelfRef.__Vfunc_CheckTransfersIF__0__addr 
                                                   >> 4U)) 
                                               - (vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[7U] 
                                                  >> 0x1eU)))) 
                                          << 1U));
                            }
                            if (((IData)((0x14000000U 
                                          == (0x14000000U 
                                              & vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[9U]))) 
                                 & ((0x3ffffffU & (
                                                   (vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[0xbU] 
                                                    << 0xcU) 
                                                   | (vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[0xaU] 
                                                      >> 0x14U))) 
                                    == (vlSelfRef.__Vfunc_CheckTransfersIF__0__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfersIF__0__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfersIF__0__rv));
                                vlSelfRef.__Vfunc_CheckTransfersIF__0__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfersIF__0__rv)) 
                                       | (((7U & ((
                                                   vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[0xaU] 
                                                   << 1U) 
                                                  | (vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[9U] 
                                                     >> 0x1fU))) 
                                           > (7U & 
                                              ((3U 
                                                & (vlSelfRef.__Vfunc_CheckTransfersIF__0__addr 
                                                   >> 4U)) 
                                               - (3U 
                                                  & (vlSelfRef.__Vfunc_CheckTransfersIF__0__memcRes[0xaU] 
                                                     >> 0x12U))))) 
                                          << 1U));
                            }
                            if (((((1U == (0xfU & vlSelfRef.__Vfunc_CheckTransfersIF__0__memcReq[0U])) 
                                   | (3U == (0xfU & 
                                             vlSelfRef.__Vfunc_CheckTransfersIF__0__memcReq[0U]))) 
                                  & ((0x3ffffffU & 
                                      ((vlSelfRef.__Vfunc_CheckTransfersIF__0__memcReq[2U] 
                                        << 0x15U) | 
                                       (vlSelfRef.__Vfunc_CheckTransfersIF__0__memcReq[1U] 
                                        >> 0xbU))) 
                                     == (vlSelfRef.__Vfunc_CheckTransfersIF__0__addr 
                                         >> 6U))) & 
                                 (vlSelfRef.__Vfunc_CheckTransfersIF__0__memcReq[0U] 
                                  >> 4U))) {
                                vlSelfRef.__Vfunc_CheckTransfersIF__0__rv = 1U;
                            }
                            vlSelfRef.__Vfunc_CheckTransfersIF__0__Vfuncout 
                                = vlSelfRef.__Vfunc_CheckTransfersIF__0__rv;
                        }(), (IData)(vlSelfRef.__Vfunc_CheckTransfersIF__0__Vfuncout)) 
                         >> 1U));
            __PVT__unnamedblk3__DOT__transferExists 
                = (1U & ([&]() {
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__addr 
                            = vlSelfRef.__PVT__phyPC;
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[0U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[1U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[1U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[2U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[2U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[3U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[3U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[4U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[4U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[5U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[5U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[6U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[6U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[7U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[7U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[8U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[8U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[9U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[9U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[0xaU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xaU];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[0xbU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xbU];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[0xcU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xcU];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[0xdU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xdU];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[0xeU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xeU];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[0xfU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xfU];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[0x10U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0x10U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[0x11U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0x11U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcReq[0U] 
                            = vlSelfRef.__PVT__OUT_memc[0U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcReq[1U] 
                            = vlSelfRef.__PVT__OUT_memc[1U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcReq[2U] 
                            = vlSelfRef.__PVT__OUT_memc[2U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcReq[3U] 
                            = vlSelfRef.__PVT__OUT_memc[3U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcReq[4U] 
                            = vlSelfRef.__PVT__OUT_memc[4U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcReq[5U] 
                            = vlSelfRef.__PVT__OUT_memc[5U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcReq[6U] 
                            = vlSelfRef.__PVT__OUT_memc[6U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__memcReq[7U] 
                            = vlSelfRef.__PVT__OUT_memc[7U];
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__rv = 0U;
                        if ((((vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[1U] 
                               >> 0x1eU) & vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[2U]) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[2U] 
                                                  >> 0x18U))) 
                                == (vlSelfRef.__Vfunc_CheckTransfersIF__1__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfersIF__1__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfersIF__1__rv));
                            vlSelfRef.__Vfunc_CheckTransfersIF__1__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfersIF__1__rv)) 
                                   | (((7U & (vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[2U] 
                                              >> 3U)) 
                                       > (7U & ((3U 
                                                 & (vlSelfRef.__Vfunc_CheckTransfersIF__1__addr 
                                                    >> 4U)) 
                                                - (3U 
                                                   & (vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[2U] 
                                                      >> 0x16U))))) 
                                      << 1U));
                        }
                        if (((IData)((0x140000U == 
                                      (0x140000U & 
                                       vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[4U]))) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[6U] 
                                                << 0x14U) 
                                               | (vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[5U] 
                                                  >> 0xcU))) 
                                == (vlSelfRef.__Vfunc_CheckTransfersIF__1__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfersIF__1__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfersIF__1__rv));
                            vlSelfRef.__Vfunc_CheckTransfersIF__1__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfersIF__1__rv)) 
                                   | (((7U & (vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[4U] 
                                              >> 0x17U)) 
                                       > (7U & ((3U 
                                                 & (vlSelfRef.__Vfunc_CheckTransfersIF__1__addr 
                                                    >> 4U)) 
                                                - (3U 
                                                   & (vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[5U] 
                                                      >> 0xaU))))) 
                                      << 1U));
                        }
                        if (((IData)((0x140U == (0x140U 
                                                 & vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[7U]))) 
                             & ((0x3ffffffU & vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[8U]) 
                                == (vlSelfRef.__Vfunc_CheckTransfersIF__1__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfersIF__1__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfersIF__1__rv));
                            vlSelfRef.__Vfunc_CheckTransfersIF__1__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfersIF__1__rv)) 
                                   | (((7U & (vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[7U] 
                                              >> 0xbU)) 
                                       > (7U & ((3U 
                                                 & (vlSelfRef.__Vfunc_CheckTransfersIF__1__addr 
                                                    >> 4U)) 
                                                - (
                                                   vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[7U] 
                                                   >> 0x1eU)))) 
                                      << 1U));
                        }
                        if (((IData)((0x14000000U == 
                                      (0x14000000U 
                                       & vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[9U]))) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[0xbU] 
                                                << 0xcU) 
                                               | (vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[0xaU] 
                                                  >> 0x14U))) 
                                == (vlSelfRef.__Vfunc_CheckTransfersIF__1__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfersIF__1__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfersIF__1__rv));
                            vlSelfRef.__Vfunc_CheckTransfersIF__1__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfersIF__1__rv)) 
                                   | (((7U & ((vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[0xaU] 
                                               << 1U) 
                                              | (vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[9U] 
                                                 >> 0x1fU))) 
                                       > (7U & ((3U 
                                                 & (vlSelfRef.__Vfunc_CheckTransfersIF__1__addr 
                                                    >> 4U)) 
                                                - (3U 
                                                   & (vlSelfRef.__Vfunc_CheckTransfersIF__1__memcRes[0xaU] 
                                                      >> 0x12U))))) 
                                      << 1U));
                        }
                        if (((((1U == (0xfU & vlSelfRef.__Vfunc_CheckTransfersIF__1__memcReq[0U])) 
                               | (3U == (0xfU & vlSelfRef.__Vfunc_CheckTransfersIF__1__memcReq[0U]))) 
                              & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfersIF__1__memcReq[2U] 
                                                 << 0x15U) 
                                                | (vlSelfRef.__Vfunc_CheckTransfersIF__1__memcReq[1U] 
                                                   >> 0xbU))) 
                                 == (vlSelfRef.__Vfunc_CheckTransfersIF__1__addr 
                                     >> 6U))) & (vlSelfRef.__Vfunc_CheckTransfersIF__1__memcReq[0U] 
                                                 >> 4U))) {
                            vlSelfRef.__Vfunc_CheckTransfersIF__1__rv = 1U;
                        }
                        vlSelfRef.__Vfunc_CheckTransfersIF__1__Vfuncout 
                            = vlSelfRef.__Vfunc_CheckTransfersIF__1__rv;
                    }(), (IData)(vlSelfRef.__Vfunc_CheckTransfersIF__1__Vfuncout)));
            if (__PVT__unnamedblk3__DOT__transferExists) {
                __PVT__cacheHit = ((IData)(__PVT__cacheHit) 
                                   & (IData)(__PVT__unnamedblk3__DOT__allowPassThru));
                __PVT__doCacheLoad = 0U;
            }
            vlSelfRef.__PVT__cacheMiss = (1U & (~ (IData)(__PVT__cacheHit)));
        }
        if ((0U != (3U & (vlSelfRef.__PVT__packet[5U] 
                          >> 0xaU)))) {
            vlSelfRef.__PVT__packet[5U] = ((0x1ffffU 
                                            & vlSelfRef.__PVT__packet[5U]) 
                                           | (0xfffe0000U 
                                              & ((vlSelfRef.fetch1[3U] 
                                                  << 0x15U) 
                                                 | (0x1e0000U 
                                                    & (vlSelfRef.fetch1[2U] 
                                                       >> 0xbU)))));
            vlSelfRef.__PVT__packet[6U] = (0x1fffU 
                                           & (vlSelfRef.fetch1[3U] 
                                              >> 0xbU));
            vlSelfRef.__PVT__packet[5U] = ((0xfffffc01U 
                                            & vlSelfRef.__PVT__packet[5U]) 
                                           | (0xfffffffeU 
                                              & (0xeU 
                                                 | ((0x380U 
                                                     & (vlSelfRef.fetch1[2U] 
                                                        >> 0x12U)) 
                                                    | (0x70U 
                                                       & (vlSelfRef.fetch1[2U] 
                                                          >> 0x15U))))));
            vlSelfRef.__PVT__packet[4U] = (1U & vlSelfRef.__PVT__packet[4U]);
            vlSelfRef.__PVT__packet[5U] = (0xfffffffeU 
                                           & vlSelfRef.__PVT__packet[5U]);
            vlSelfRef.__PVT__packet[5U] = ((0xfffe0fffU 
                                            & vlSelfRef.__PVT__packet[5U]) 
                                           | (0x1f000U 
                                              & (vlSelfRef.fetch1[2U] 
                                                 >> 7U)));
            vlSelfRef.__PVT__packet[0U] = 1U;
            vlSelfRef.__PVT__packet[1U] = 0U;
            vlSelfRef.__PVT__packet[2U] = 0U;
            vlSelfRef.__PVT__packet[3U] = 0U;
            vlSelfRef.__PVT__packet[4U] = (0xfffffffeU 
                                           & vlSelfRef.__PVT__packet[4U]);
        } else if (((~ (IData)(vlSelfRef.__PVT__tlbMiss)) 
                    & (IData)(__PVT__cacheHit))) {
            vlSelfRef.__PVT__packet[5U] = ((0x1ffffU 
                                            & vlSelfRef.__PVT__packet[5U]) 
                                           | (0xfffe0000U 
                                              & ((vlSelfRef.fetch1[3U] 
                                                  << 0x15U) 
                                                 | (0x1e0000U 
                                                    & (vlSelfRef.fetch1[2U] 
                                                       >> 0xbU)))));
            vlSelfRef.__PVT__packet[6U] = (0x1fffU 
                                           & (vlSelfRef.fetch1[3U] 
                                              >> 0xbU));
            vlSelfRef.__PVT__packet[5U] = ((0xfffffc01U 
                                            & vlSelfRef.__PVT__packet[5U]) 
                                           | (0xfffffffeU 
                                              & ((0x380U 
                                                  & (vlSelfRef.fetch1[2U] 
                                                     >> 0x12U)) 
                                                 | ((0x70U 
                                                     & (vlSelfRef.fetch1[2U] 
                                                        >> 0xaU)) 
                                                    | (0xeU 
                                                       & (vlSelfRef.fetch1[1U] 
                                                          >> 0xbU))))));
            vlSelfRef.__PVT__packet[5U] = ((0xfffffffeU 
                                            & vlSelfRef.__PVT__packet[5U]) 
                                           | (IData)(
                                                     (0xa0U 
                                                      == 
                                                      (0xe0U 
                                                       & vlSelfRef.fetch1[1U]))));
            vlSelfRef.__PVT__packet[4U] = ((1U & vlSelfRef.__PVT__packet[4U]) 
                                           | (0xfffffffeU 
                                              & ((vlSelfRef.fetch1[2U] 
                                                  << 0x12U) 
                                                 | (0x3fffeU 
                                                    & (vlSelfRef.fetch1[1U] 
                                                       >> 0xeU)))));
            vlSelfRef.__PVT__packet[5U] = ((0xfffe0fffU 
                                            & vlSelfRef.__PVT__packet[5U]) 
                                           | (0x1f000U 
                                              & (vlSelfRef.fetch1[2U] 
                                                 >> 7U)));
            vlSelfRef.__PVT__packet[0U] = (1U | vlSelfRef.__PVT__packet[0U]);
        }
    }
    vlSelfRef.__PVT__OUT_memc_c[0U] = VTop__ConstPool__CONST_hbd3d39cf_0[0U];
    vlSelfRef.__PVT__OUT_memc_c[1U] = VTop__ConstPool__CONST_hbd3d39cf_0[1U];
    vlSelfRef.__PVT__OUT_memc_c[2U] = VTop__ConstPool__CONST_hbd3d39cf_0[2U];
    vlSelfRef.__PVT__OUT_memc_c[3U] = VTop__ConstPool__CONST_hbd3d39cf_0[3U];
    vlSelfRef.__PVT__OUT_memc_c[4U] = VTop__ConstPool__CONST_hbd3d39cf_0[4U];
    vlSelfRef.__PVT__OUT_memc_c[5U] = VTop__ConstPool__CONST_hbd3d39cf_0[5U];
    vlSelfRef.__PVT__OUT_memc_c[6U] = VTop__ConstPool__CONST_hbd3d39cf_0[6U];
    vlSelfRef.__PVT__OUT_memc_c[7U] = VTop__ConstPool__CONST_hbd3d39cf_0[7U];
    vlSelfRef.__PVT__OUT_memc_c[0U] = (0xfffffff0U 
                                       & vlSelfRef.__PVT__OUT_memc_c[0U]);
    vlSelfRef.__PVT__handlingMiss = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (((0U != (0xfU & vlSelfRef.__PVT__OUT_memc[0U])) 
             & (vlSymsp->TOP__Top__soc.MemC_stat[0U] 
                >> 1U))) {
            vlSelfRef.__PVT__OUT_memc_c[0U] = vlSelfRef.__PVT__OUT_memc[0U];
            vlSelfRef.__PVT__OUT_memc_c[1U] = vlSelfRef.__PVT__OUT_memc[1U];
            vlSelfRef.__PVT__OUT_memc_c[2U] = vlSelfRef.__PVT__OUT_memc[2U];
            vlSelfRef.__PVT__OUT_memc_c[3U] = vlSelfRef.__PVT__OUT_memc[3U];
            vlSelfRef.__PVT__OUT_memc_c[4U] = vlSelfRef.__PVT__OUT_memc[4U];
            vlSelfRef.__PVT__OUT_memc_c[5U] = vlSelfRef.__PVT__OUT_memc[5U];
            vlSelfRef.__PVT__OUT_memc_c[6U] = vlSelfRef.__PVT__OUT_memc[6U];
            vlSelfRef.__PVT__OUT_memc_c[7U] = vlSelfRef.__PVT__OUT_memc[7U];
        } else if (((IData)(vlSelfRef.__PVT__cacheMiss) 
                    & (IData)(__PVT__doCacheLoad))) {
            vlSelfRef.__PVT__OUT_memc_c[0U] = (3U | 
                                               (0xfffffff0U 
                                                & vlSelfRef.__PVT__OUT_memc_c[0U]));
            vlSelfRef.__PVT__OUT_memc_c[2U] = ((0xfffe001fU 
                                                & vlSelfRef.__PVT__OUT_memc_c[2U]) 
                                               | (0xffffffe0U 
                                                  & (((IData)(vlSelfRef.__PVT__assocCnt) 
                                                      << 0xfU) 
                                                     | (0x7f80U 
                                                        & (vlSelfRef.__PVT__phyPC 
                                                           << 3U)))));
            vlSelfRef.__PVT__OUT_memc_c[1U] = ((0x1fU 
                                                & vlSelfRef.__PVT__OUT_memc_c[1U]) 
                                               | (0xfffffe00U 
                                                  & (vlSelfRef.__PVT__phyPC 
                                                     << 5U)));
            vlSelfRef.__PVT__OUT_memc_c[2U] = ((0xffffffe0U 
                                                & vlSelfRef.__PVT__OUT_memc_c[2U]) 
                                               | (vlSelfRef.__PVT__phyPC 
                                                  >> 0x1bU));
            vlSelfRef.__PVT__OUT_memc_c[0U] = (0x10U 
                                               | vlSelfRef.__PVT__OUT_memc_c[0U]);
            vlSelfRef.__PVT__OUT_memc_c[2U] = (0x1ffffU 
                                               & vlSelfRef.__PVT__OUT_memc_c[2U]);
            vlSelfRef.__PVT__OUT_memc_c[3U] = 0U;
            vlSelfRef.__PVT__OUT_memc_c[4U] = 0U;
            vlSelfRef.__PVT__OUT_memc_c[5U] = 0U;
            vlSelfRef.__PVT__OUT_memc_c[6U] = 0U;
            vlSelfRef.__PVT__OUT_memc_c[7U] = 0U;
        }
        if ((1U & (~ ((0U != (0xfU & vlSelfRef.__PVT__OUT_memc[0U])) 
                      & (vlSymsp->TOP__Top__soc.MemC_stat[0U] 
                         >> 1U))))) {
            if (((IData)(vlSelfRef.__PVT__cacheMiss) 
                 & (IData)(__PVT__doCacheLoad))) {
                vlSelfRef.__PVT__handlingMiss = 1U;
            }
        }
    }
    vlSymsp->TOP__Top__soc__IF_ict.__PVT__we = 0U;
    vlSymsp->TOP__Top__soc__IF_ict.__PVT__wdata = 0U;
    vlSymsp->TOP__Top__soc__IF_ict.__PVT__wassoc = 0U;
    vlSymsp->TOP__Top__soc__IF_ict.__PVT__waddr = 0U;
    if ((2U == (IData)(vlSelfRef.__PVT__flushState))) {
        vlSymsp->TOP__Top__soc__IF_ict.__PVT__we = 1U;
        vlSymsp->TOP__Top__soc__IF_ict.__PVT__wdata = 0U;
        vlSymsp->TOP__Top__soc__IF_ict.__PVT__wassoc 
            = vlSelfRef.__PVT__flushAssocIter;
        vlSymsp->TOP__Top__soc__IF_ict.__PVT__waddr 
            = ((IData)(vlSelfRef.__PVT__flushAddrIter) 
               << 6U);
    } else if (vlSelfRef.__PVT__handlingMiss) {
        vlSymsp->TOP__Top__soc__IF_ict.__PVT__we = 1U;
        vlSymsp->TOP__Top__soc__IF_ict.__PVT__wdata 
            = (1U | (0x1ffffeU & (vlSelfRef.__PVT__phyPC 
                                  >> 0xbU)));
        vlSymsp->TOP__Top__soc__IF_ict.__PVT__wassoc 
            = vlSelfRef.__PVT__assocCnt;
        vlSymsp->TOP__Top__soc__IF_ict.__PVT__waddr 
            = (0xfffU & vlSelfRef.__PVT__phyPC);
    }
}

VL_INLINE_OPT void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__9(VTop_IFetchPipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__9\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__OUT_pw_c = 0ULL;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if ((1U & ((IData)(vlSelfRef.__PVT__OUT_pw) 
                   & (IData)((vlSymsp->TOP__Top__soc__core.__PVT__PW_res 
                              >> 1U))))) {
            vlSelfRef.__PVT__OUT_pw_c = vlSelfRef.__PVT__OUT_pw;
        } else if (vlSelfRef.__PVT__tlbMiss) {
            vlSelfRef.__PVT__OUT_pw_c = (((QData)((IData)(
                                                          ((vlSelfRef.fetch1[3U] 
                                                            << 8U) 
                                                           | (vlSelfRef.fetch1[2U] 
                                                              >> 0x18U)))) 
                                          << 0x17U) 
                                         | (QData)((IData)(
                                                           (1U 
                                                            | (0x7ffffeU 
                                                               & (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                                                                  >> 6U))))));
        }
    }
    vlSelfRef.__Vcellinp__outFIFO__rst = ((IData)(vlSymsp->TOP__Top__soc__core__ifetch.__Vcellinp__ifp__IN_mispr) 
                                          | (IData)(vlSymsp->TOP.rst));
    vlSelfRef.__PVT__OUT_stall = 0U;
    if ((IData)((2ULL == (0xeULL & vlSymsp->TOP__Top__soc__core.__PVT__PW_res)))) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
    if (VL_GTES_III(32, 0xffffffffU, (((((IData)(vlSelfRef.__PVT__outFIFO__DOT__empty)
                                          ? 4U : (3U 
                                                  & ((IData)(vlSelfRef.__PVT__outFIFO__DOT__indexOut) 
                                                     - (IData)(vlSelfRef.__PVT__outFIFO__DOT__indexIn)))) 
                                        - (1U & vlSelfRef.fetch0[0U])) 
                                       - (1U & vlSelfRef.fetch1[0U])) 
                                      - (IData)(1U)))) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
    if (((0x1fU & ((1U & (IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_fetchLimit))
                    ? ((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_fetchLimit) 
                       >> 1U) : (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_curFetchID))) 
         == (0x1fU & ((IData)(vlSelfRef.fetchID) + 
                      (1U & vlSelfRef.fetch0[0U]))))) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
    if ((0U != (IData)(vlSelfRef.__PVT__flushState))) {
        vlSelfRef.__PVT__OUT_stall = 1U;
    }
}

VL_INLINE_OPT void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__10(VTop_IFetchPipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__10\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__branchHandler__DOT__is16bit;
    __PVT__branchHandler__DOT__is16bit = 0;
    CData/*0:0*/ __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart;
    __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0;
    IData/*31:0*/ __PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32;
    __PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 = 0;
    VlWide<4>/*100:0*/ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr;
    VL_ZERO_W(101, __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr);
    CData/*1:0*/ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple;
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple = 0;
    CData/*0:0*/ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch;
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch = 0;
    IData/*30:0*/ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC;
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC = 0;
    IData/*30:0*/ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC;
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC = 0;
    CData/*0:0*/ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted;
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted = 0;
    // Body
    __PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
        = vlSelfRef.__PVT__branchHandler__DOT__instrsView[0U];
    vlSelfRef.__PVT__branchHandler__DOT__J_target[0U] 
        = (vlSelfRef.__PVT__branchHandler__DOT__pc[0U] 
           + (((- (IData)((__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                           >> 0x1fU))) << 0x14U) | 
              (((0xff000U & __PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32) 
                | (0x800U & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                             >> 9U))) | (0x7feU & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                   >> 0x14U)))));
    vlSelfRef.__PVT__branchHandler__DOT__B_target[0U] 
        = (vlSelfRef.__PVT__branchHandler__DOT__pc[0U] 
           + (((- (IData)((__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                           >> 0x1fU))) << 0xcU) | (
                                                   (0x800U 
                                                    & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                            >> 7U))))));
    __PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
        = ((vlSelfRef.__PVT__branchHandler__DOT__instrsView[1U] 
            << 0x10U) | (vlSelfRef.__PVT__branchHandler__DOT__instrsView[0U] 
                         >> 0x10U));
    vlSelfRef.__PVT__branchHandler__DOT__J_target[1U] 
        = (vlSelfRef.__PVT__branchHandler__DOT__pc[1U] 
           + (((- (IData)((__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                           >> 0x1fU))) << 0x14U) | 
              (((0xff000U & __PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32) 
                | (0x800U & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                             >> 9U))) | (0x7feU & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                   >> 0x14U)))));
    vlSelfRef.__PVT__branchHandler__DOT__B_target[1U] 
        = (vlSelfRef.__PVT__branchHandler__DOT__pc[1U] 
           + (((- (IData)((__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                           >> 0x1fU))) << 0xcU) | (
                                                   (0x800U 
                                                    & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                            >> 7U))))));
    __PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
        = vlSelfRef.__PVT__branchHandler__DOT__instrsView[1U];
    vlSelfRef.__PVT__branchHandler__DOT__J_target[2U] 
        = (vlSelfRef.__PVT__branchHandler__DOT__pc[2U] 
           + (((- (IData)((__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                           >> 0x1fU))) << 0x14U) | 
              (((0xff000U & __PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32) 
                | (0x800U & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                             >> 9U))) | (0x7feU & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                   >> 0x14U)))));
    vlSelfRef.__PVT__branchHandler__DOT__B_target[2U] 
        = (vlSelfRef.__PVT__branchHandler__DOT__pc[2U] 
           + (((- (IData)((__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                           >> 0x1fU))) << 0xcU) | (
                                                   (0x800U 
                                                    & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                            >> 7U))))));
    __PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
        = ((vlSelfRef.__PVT__branchHandler__DOT__instrsView[2U] 
            << 0x10U) | (vlSelfRef.__PVT__branchHandler__DOT__instrsView[1U] 
                         >> 0x10U));
    vlSelfRef.__PVT__branchHandler__DOT__J_target[3U] 
        = (vlSelfRef.__PVT__branchHandler__DOT__pc[3U] 
           + (((- (IData)((__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                           >> 0x1fU))) << 0x14U) | 
              (((0xff000U & __PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32) 
                | (0x800U & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                             >> 9U))) | (0x7feU & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                   >> 0x14U)))));
    vlSelfRef.__PVT__branchHandler__DOT__B_target[3U] 
        = (vlSelfRef.__PVT__branchHandler__DOT__pc[3U] 
           + (((- (IData)((__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                           >> 0x1fU))) << 0xcU) | (
                                                   (0x800U 
                                                    & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                            >> 7U))))));
    __PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
        = vlSelfRef.__PVT__branchHandler__DOT__instrsView[2U];
    vlSelfRef.__PVT__branchHandler__DOT__J_target[4U] 
        = (vlSelfRef.__PVT__branchHandler__DOT__pc[4U] 
           + (((- (IData)((__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                           >> 0x1fU))) << 0x14U) | 
              (((0xff000U & __PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32) 
                | (0x800U & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                             >> 9U))) | (0x7feU & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                   >> 0x14U)))));
    vlSelfRef.__PVT__branchHandler__DOT__B_target[4U] 
        = (vlSelfRef.__PVT__branchHandler__DOT__pc[4U] 
           + (((- (IData)((__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                           >> 0x1fU))) << 0xcU) | (
                                                   (0x800U 
                                                    & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                            >> 7U))))));
    __PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
        = ((vlSelfRef.__PVT__branchHandler__DOT__instrsView[3U] 
            << 0x10U) | (vlSelfRef.__PVT__branchHandler__DOT__instrsView[2U] 
                         >> 0x10U));
    vlSelfRef.__PVT__branchHandler__DOT__J_target[5U] 
        = (vlSelfRef.__PVT__branchHandler__DOT__pc[5U] 
           + (((- (IData)((__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                           >> 0x1fU))) << 0x14U) | 
              (((0xff000U & __PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32) 
                | (0x800U & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                             >> 9U))) | (0x7feU & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                   >> 0x14U)))));
    vlSelfRef.__PVT__branchHandler__DOT__B_target[5U] 
        = (vlSelfRef.__PVT__branchHandler__DOT__pc[5U] 
           + (((- (IData)((__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                           >> 0x1fU))) << 0xcU) | (
                                                   (0x800U 
                                                    & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                            >> 7U))))));
    __PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
        = vlSelfRef.__PVT__branchHandler__DOT__instrsView[3U];
    vlSelfRef.__PVT__branchHandler__DOT__J_target[6U] 
        = (vlSelfRef.__PVT__branchHandler__DOT__pc[6U] 
           + (((- (IData)((__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                           >> 0x1fU))) << 0x14U) | 
              (((0xff000U & __PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32) 
                | (0x800U & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                             >> 9U))) | (0x7feU & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                   >> 0x14U)))));
    vlSelfRef.__PVT__branchHandler__DOT__B_target[6U] 
        = (vlSelfRef.__PVT__branchHandler__DOT__pc[6U] 
           + (((- (IData)((__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                           >> 0x1fU))) << 0xcU) | (
                                                   (0x800U 
                                                    & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                            >> 7U))))));
    __PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
        = ((vlSelfRef.__PVT__branchHandler__DOT__instrsView[4U] 
            << 0x10U) | (vlSelfRef.__PVT__branchHandler__DOT__instrsView[3U] 
                         >> 0x10U));
    vlSelfRef.__PVT__branchHandler__DOT__J_target[7U] 
        = (vlSelfRef.__PVT__branchHandler__DOT__pc[7U] 
           + (((- (IData)((__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                           >> 0x1fU))) << 0x14U) | 
              (((0xff000U & __PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32) 
                | (0x800U & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                             >> 9U))) | (0x7feU & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                   >> 0x14U)))));
    vlSelfRef.__PVT__branchHandler__DOT__B_target[7U] 
        = (vlSelfRef.__PVT__branchHandler__DOT__pc[7U] 
           + (((- (IData)((__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                           >> 0x1fU))) << 0xcU) | (
                                                   (0x800U 
                                                    & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (__PVT__branchHandler__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i32 
                                                            >> 7U))))));
    __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
    __PVT__branchHandler__DOT__is16bit = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__is32bit = 0U;
    if (((IData)(vlSelfRef.__PVT__branchHandler__DOT__lastInstrValid) 
         & (0U == (0xe000000U & vlSelfRef.fetch1[2U])))) {
        vlSelfRef.__PVT__branchHandler__DOT__is32bit 
            = (1U | (IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit));
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
    }
    if ((0U < (IData)(vlSelfRef.__PVT__branchHandler__DOT__firstValid))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
    }
    if (((0U == (IData)(vlSelfRef.__PVT__branchHandler__DOT__firstValid)) 
         & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__lastInstrValid)))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
    }
    if (__PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart) {
        if ((3U == (3U & (vlSelfRef.__PVT__branchHandler__DOT__instrsView[0U] 
                          >> 0x10U)))) {
            vlSelfRef.__PVT__branchHandler__DOT__is32bit 
                = (2U | (IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit));
            __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
        } else {
            __PVT__branchHandler__DOT__is16bit = (2U 
                                                  | (IData)(__PVT__branchHandler__DOT__is16bit));
            __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
        }
    } else {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
    }
    if ((1U < (IData)(vlSelfRef.__PVT__branchHandler__DOT__firstValid))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
    }
    if (((1U == (IData)(vlSelfRef.__PVT__branchHandler__DOT__firstValid)) 
         & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__lastInstrValid)))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
    }
    if ((1U > (7U & (vlSelfRef.fetch1[2U] >> 0xeU)))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
    }
    if (__PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart) {
        if ((3U == (3U & vlSelfRef.__PVT__branchHandler__DOT__instrsView[1U]))) {
            vlSelfRef.__PVT__branchHandler__DOT__is32bit 
                = (4U | (IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit));
            __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
        } else {
            __PVT__branchHandler__DOT__is16bit = (4U 
                                                  | (IData)(__PVT__branchHandler__DOT__is16bit));
            __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
        }
    } else {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
    }
    if ((2U < (IData)(vlSelfRef.__PVT__branchHandler__DOT__firstValid))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
    }
    if (((2U == (IData)(vlSelfRef.__PVT__branchHandler__DOT__firstValid)) 
         & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__lastInstrValid)))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
    }
    if ((2U > (7U & (vlSelfRef.fetch1[2U] >> 0xeU)))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
    }
    if (__PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart) {
        if ((3U == (3U & (vlSelfRef.__PVT__branchHandler__DOT__instrsView[1U] 
                          >> 0x10U)))) {
            vlSelfRef.__PVT__branchHandler__DOT__is32bit 
                = (8U | (IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit));
            __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
        } else {
            __PVT__branchHandler__DOT__is16bit = (8U 
                                                  | (IData)(__PVT__branchHandler__DOT__is16bit));
            __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
        }
    } else {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
    }
    if ((3U < (IData)(vlSelfRef.__PVT__branchHandler__DOT__firstValid))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
    }
    if (((3U == (IData)(vlSelfRef.__PVT__branchHandler__DOT__firstValid)) 
         & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__lastInstrValid)))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
    }
    if ((3U > (7U & (vlSelfRef.fetch1[2U] >> 0xeU)))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
    }
    if (__PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart) {
        if ((3U == (3U & vlSelfRef.__PVT__branchHandler__DOT__instrsView[2U]))) {
            vlSelfRef.__PVT__branchHandler__DOT__is32bit 
                = (0x10U | (IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit));
            __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
        } else {
            __PVT__branchHandler__DOT__is16bit = (0x10U 
                                                  | (IData)(__PVT__branchHandler__DOT__is16bit));
            __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
        }
    } else {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
    }
    if ((4U < (IData)(vlSelfRef.__PVT__branchHandler__DOT__firstValid))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
    }
    if (((4U == (IData)(vlSelfRef.__PVT__branchHandler__DOT__firstValid)) 
         & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__lastInstrValid)))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
    }
    if ((4U > (7U & (vlSelfRef.fetch1[2U] >> 0xeU)))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
    }
    if (__PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart) {
        if ((3U == (3U & (vlSelfRef.__PVT__branchHandler__DOT__instrsView[2U] 
                          >> 0x10U)))) {
            vlSelfRef.__PVT__branchHandler__DOT__is32bit 
                = (0x20U | (IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit));
            __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
        } else {
            __PVT__branchHandler__DOT__is16bit = (0x20U 
                                                  | (IData)(__PVT__branchHandler__DOT__is16bit));
            __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
        }
    } else {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
    }
    if ((5U < (IData)(vlSelfRef.__PVT__branchHandler__DOT__firstValid))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
    }
    if (((5U == (IData)(vlSelfRef.__PVT__branchHandler__DOT__firstValid)) 
         & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__lastInstrValid)))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
    }
    if ((5U > (7U & (vlSelfRef.fetch1[2U] >> 0xeU)))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
    }
    if (__PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart) {
        if ((3U == (3U & vlSelfRef.__PVT__branchHandler__DOT__instrsView[3U]))) {
            vlSelfRef.__PVT__branchHandler__DOT__is32bit 
                = (0x40U | (IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit));
            __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
        } else {
            __PVT__branchHandler__DOT__is16bit = (0x40U 
                                                  | (IData)(__PVT__branchHandler__DOT__is16bit));
            __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
        }
    } else {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
    }
    if ((6U < (IData)(vlSelfRef.__PVT__branchHandler__DOT__firstValid))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
    }
    if (((6U == (IData)(vlSelfRef.__PVT__branchHandler__DOT__firstValid)) 
         & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__lastInstrValid)))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
    }
    if ((6U > (7U & (vlSelfRef.fetch1[2U] >> 0xeU)))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
    }
    if (__PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart) {
        if ((3U == (3U & (vlSelfRef.__PVT__branchHandler__DOT__instrsView[3U] 
                          >> 0x10U)))) {
            vlSelfRef.__PVT__branchHandler__DOT__is32bit 
                = (0x80U | (IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit));
            __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
        } else {
            __PVT__branchHandler__DOT__is16bit = (0x80U 
                                                  | (IData)(__PVT__branchHandler__DOT__is16bit));
            __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
        }
    } else {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
    }
    if (((7U == (IData)(vlSelfRef.__PVT__branchHandler__DOT__firstValid)) 
         & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__lastInstrValid)))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
    }
    if ((7U > (7U & (vlSelfRef.fetch1[2U] >> 0xeU)))) {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
    }
    if (__PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart) {
        if ((3U == (3U & vlSelfRef.__PVT__branchHandler__DOT__instrsView[4U]))) {
            vlSelfRef.__PVT__branchHandler__DOT__is32bit 
                = (0x100U | (IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit));
            __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0U;
        } else {
            __PVT__branchHandler__DOT__is16bit = (0x100U 
                                                  | (IData)(__PVT__branchHandler__DOT__is16bit));
            __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
        }
    } else {
        __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 1U;
    }
    vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[0U][1U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[0U][2U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[0U][3U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[1U][1U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[1U][2U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[1U][3U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[2U][1U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[2U][2U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[2U][3U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[3U][1U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[3U][2U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[3U][3U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[4U][1U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[4U][2U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[4U][3U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[5U][1U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[5U][2U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[5U][3U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[6U][1U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[6U][2U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[6U][3U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[7U][1U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[7U][2U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__branch[7U][3U] = 0U;
    if ((2U & (IData)(__PVT__branchHandler__DOT__is16bit))) {
        vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16 
            = (vlSelfRef.__PVT__branchHandler__DOT__instrsView[0U] 
               >> 0x10U);
        if (((0x2001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
             || (0xa001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [0U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [0U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][0U]) | (((1U == (7U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                                >> 0xdU)))
                                   ? 2U : 0U) << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__CJ_target
                                 [1U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__CJ_target
                   [1U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [1U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [1U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [1U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [1U] >> 0x1bU));
        } else if ((0x8002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))) {
            if ((0U != (0x1fU & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                 >> 7U)))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [0U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                    = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [0U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                    = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [0U][0U]) | (((1U == (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                                 >> 7U)))
                                       ? 7U : 1U) << 2U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][2U] 
                    = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [0U][2U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][3U] = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [0U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [1U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [0U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [1U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [0U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [1U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [0U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [1U] >> 0x1bU));
            }
        } else if ((0x9002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))) {
            if ((0U != (0x1fU & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                 >> 7U)))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [0U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                    = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [0U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                    = (0xcU | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                               [0U][0U]));
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][2U] 
                    = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [0U][2U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][3U] = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [0U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [1U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [0U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [1U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [0U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [1U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [0U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [1U] >> 0x1bU));
            }
        } else if (((0xe001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                    || (0xc001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [0U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [0U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                = (0x10U | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                            [0U][0U]));
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__CB_target
                                 [1U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__CB_target
                   [1U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [1U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [1U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [1U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [1U] >> 0x1bU));
        }
        if ((1U & (~ VL_ONEHOT_I(((((0xc001U == (0xe003U 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                    << 5U) | (((0xe001U 
                                                == 
                                                (0xe003U 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                               << 4U) 
                                              | ((0x9002U 
                                                  == 
                                                  (0xf07fU 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                                 << 3U))) 
                                  | (((0x8002U == (0xf07fU 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                      << 2U) | (((0xa001U 
                                                  == 
                                                  (0xe003U 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                                 << 1U) 
                                                | (0x2001U 
                                                   == 
                                                   (0xe003U 
                                                    & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))))))))) {
            if ((0U != ((((0xc001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                          << 5U) | (((0xe001U == (0xe003U 
                                                  & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                     << 4U) | ((0x9002U 
                                                == 
                                                (0xf07fU 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                               << 3U))) 
                        | (((0x8002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                            << 2U) | (((0xa001U == 
                                        (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                       << 1U) | (0x2001U 
                                                 == 
                                                 (0xe003U 
                                                  & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: BranchHandler.sv:136: Assertion failed in %NTop.soc.core.ifetch.ifp.branchHandler.unnamedblk9.unnamedblk10: unique case, but multiple matches found for '16'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 16,(IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16));
                    VL_STOP_MT("src/BranchHandler.sv", 136, "");
                }
            }
        }
    }
    if ((4U & (IData)(__PVT__branchHandler__DOT__is16bit))) {
        vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16 
            = (0xffffU & vlSelfRef.__PVT__branchHandler__DOT__instrsView[1U]);
        if (((0x2001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
             || (0xa001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [1U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [1U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][0U]) | (((1U == (7U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                                >> 0xdU)))
                                   ? 2U : 0U) << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__CJ_target
                                 [2U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__CJ_target
                   [2U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [2U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [2U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [2U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [2U] >> 0x1bU));
        } else if ((0x8002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))) {
            if ((0U != (0x1fU & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                 >> 7U)))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [1U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                    = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [1U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                    = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [1U][0U]) | (((1U == (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                                 >> 7U)))
                                       ? 7U : 1U) << 2U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][2U] 
                    = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [1U][2U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][3U] = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [1U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [2U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [1U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [2U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [1U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [2U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [1U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [2U] >> 0x1bU));
            }
        } else if ((0x9002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))) {
            if ((0U != (0x1fU & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                 >> 7U)))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [1U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                    = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [1U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                    = (0xcU | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                               [1U][0U]));
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][2U] 
                    = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [1U][2U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][3U] = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [1U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [2U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [1U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [2U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [1U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [2U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [1U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [2U] >> 0x1bU));
            }
        } else if (((0xe001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                    || (0xc001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [1U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [1U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                = (0x10U | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                            [1U][0U]));
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__CB_target
                                 [2U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__CB_target
                   [2U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [2U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [2U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [2U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [2U] >> 0x1bU));
        }
        if ((1U & (~ VL_ONEHOT_I(((((0xc001U == (0xe003U 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                    << 5U) | (((0xe001U 
                                                == 
                                                (0xe003U 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                               << 4U) 
                                              | ((0x9002U 
                                                  == 
                                                  (0xf07fU 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                                 << 3U))) 
                                  | (((0x8002U == (0xf07fU 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                      << 2U) | (((0xa001U 
                                                  == 
                                                  (0xe003U 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                                 << 1U) 
                                                | (0x2001U 
                                                   == 
                                                   (0xe003U 
                                                    & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))))))))) {
            if ((0U != ((((0xc001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                          << 5U) | (((0xe001U == (0xe003U 
                                                  & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                     << 4U) | ((0x9002U 
                                                == 
                                                (0xf07fU 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                               << 3U))) 
                        | (((0x8002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                            << 2U) | (((0xa001U == 
                                        (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                       << 1U) | (0x2001U 
                                                 == 
                                                 (0xe003U 
                                                  & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: BranchHandler.sv:136: Assertion failed in %NTop.soc.core.ifetch.ifp.branchHandler.unnamedblk9.unnamedblk10: unique case, but multiple matches found for '16'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 16,(IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16));
                    VL_STOP_MT("src/BranchHandler.sv", 136, "");
                }
            }
        }
    }
    if ((8U & (IData)(__PVT__branchHandler__DOT__is16bit))) {
        vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16 
            = (vlSelfRef.__PVT__branchHandler__DOT__instrsView[1U] 
               >> 0x10U);
        if (((0x2001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
             || (0xa001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [2U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [2U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][0U]) | (((1U == (7U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                                >> 0xdU)))
                                   ? 2U : 0U) << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__CJ_target
                                 [3U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__CJ_target
                   [3U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [3U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [3U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [3U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [3U] >> 0x1bU));
        } else if ((0x8002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))) {
            if ((0U != (0x1fU & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                 >> 7U)))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [2U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                    = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [2U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                    = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [2U][0U]) | (((1U == (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                                 >> 7U)))
                                       ? 7U : 1U) << 2U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][2U] 
                    = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [2U][2U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][3U] = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [2U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [3U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [2U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [3U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [2U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [3U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [2U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [3U] >> 0x1bU));
            }
        } else if ((0x9002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))) {
            if ((0U != (0x1fU & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                 >> 7U)))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [2U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                    = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [2U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                    = (0xcU | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                               [2U][0U]));
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][2U] 
                    = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [2U][2U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][3U] = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [2U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [3U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [2U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [3U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [2U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [3U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [2U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [3U] >> 0x1bU));
            }
        } else if (((0xe001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                    || (0xc001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [2U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [2U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                = (0x10U | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                            [2U][0U]));
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__CB_target
                                 [3U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__CB_target
                   [3U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [3U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [3U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [3U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [3U] >> 0x1bU));
        }
        if ((1U & (~ VL_ONEHOT_I(((((0xc001U == (0xe003U 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                    << 5U) | (((0xe001U 
                                                == 
                                                (0xe003U 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                               << 4U) 
                                              | ((0x9002U 
                                                  == 
                                                  (0xf07fU 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                                 << 3U))) 
                                  | (((0x8002U == (0xf07fU 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                      << 2U) | (((0xa001U 
                                                  == 
                                                  (0xe003U 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                                 << 1U) 
                                                | (0x2001U 
                                                   == 
                                                   (0xe003U 
                                                    & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))))))))) {
            if ((0U != ((((0xc001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                          << 5U) | (((0xe001U == (0xe003U 
                                                  & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                     << 4U) | ((0x9002U 
                                                == 
                                                (0xf07fU 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                               << 3U))) 
                        | (((0x8002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                            << 2U) | (((0xa001U == 
                                        (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                       << 1U) | (0x2001U 
                                                 == 
                                                 (0xe003U 
                                                  & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: BranchHandler.sv:136: Assertion failed in %NTop.soc.core.ifetch.ifp.branchHandler.unnamedblk9.unnamedblk10: unique case, but multiple matches found for '16'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 16,(IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16));
                    VL_STOP_MT("src/BranchHandler.sv", 136, "");
                }
            }
        }
    }
    if ((0x10U & (IData)(__PVT__branchHandler__DOT__is16bit))) {
        vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16 
            = (0xffffU & vlSelfRef.__PVT__branchHandler__DOT__instrsView[2U]);
        if (((0x2001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
             || (0xa001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [3U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [3U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][0U]) | (((1U == (7U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                                >> 0xdU)))
                                   ? 2U : 0U) << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__CJ_target
                                 [4U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__CJ_target
                   [4U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [4U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [4U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [4U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [4U] >> 0x1bU));
        } else if ((0x8002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))) {
            if ((0U != (0x1fU & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                 >> 7U)))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [3U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                    = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [3U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                    = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [3U][0U]) | (((1U == (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                                 >> 7U)))
                                       ? 7U : 1U) << 2U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][2U] 
                    = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [3U][2U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][3U] = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [3U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [4U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [3U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [4U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [3U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [4U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [3U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [4U] >> 0x1bU));
            }
        } else if ((0x9002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))) {
            if ((0U != (0x1fU & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                 >> 7U)))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [3U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                    = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [3U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                    = (0xcU | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                               [3U][0U]));
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][2U] 
                    = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [3U][2U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][3U] = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [3U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [4U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [3U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [4U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [3U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [4U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [3U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [4U] >> 0x1bU));
            }
        } else if (((0xe001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                    || (0xc001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [3U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [3U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                = (0x10U | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                            [3U][0U]));
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__CB_target
                                 [4U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__CB_target
                   [4U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [4U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [4U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [4U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [4U] >> 0x1bU));
        }
        if ((1U & (~ VL_ONEHOT_I(((((0xc001U == (0xe003U 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                    << 5U) | (((0xe001U 
                                                == 
                                                (0xe003U 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                               << 4U) 
                                              | ((0x9002U 
                                                  == 
                                                  (0xf07fU 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                                 << 3U))) 
                                  | (((0x8002U == (0xf07fU 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                      << 2U) | (((0xa001U 
                                                  == 
                                                  (0xe003U 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                                 << 1U) 
                                                | (0x2001U 
                                                   == 
                                                   (0xe003U 
                                                    & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))))))))) {
            if ((0U != ((((0xc001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                          << 5U) | (((0xe001U == (0xe003U 
                                                  & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                     << 4U) | ((0x9002U 
                                                == 
                                                (0xf07fU 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                               << 3U))) 
                        | (((0x8002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                            << 2U) | (((0xa001U == 
                                        (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                       << 1U) | (0x2001U 
                                                 == 
                                                 (0xe003U 
                                                  & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: BranchHandler.sv:136: Assertion failed in %NTop.soc.core.ifetch.ifp.branchHandler.unnamedblk9.unnamedblk10: unique case, but multiple matches found for '16'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 16,(IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16));
                    VL_STOP_MT("src/BranchHandler.sv", 136, "");
                }
            }
        }
    }
    if ((0x20U & (IData)(__PVT__branchHandler__DOT__is16bit))) {
        vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16 
            = (vlSelfRef.__PVT__branchHandler__DOT__instrsView[2U] 
               >> 0x10U);
        if (((0x2001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
             || (0xa001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [4U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [4U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][0U]) | (((1U == (7U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                                >> 0xdU)))
                                   ? 2U : 0U) << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__CJ_target
                                 [5U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__CJ_target
                   [5U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [5U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [5U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [5U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [5U] >> 0x1bU));
        } else if ((0x8002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))) {
            if ((0U != (0x1fU & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                 >> 7U)))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [4U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                    = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [4U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                    = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [4U][0U]) | (((1U == (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                                 >> 7U)))
                                       ? 7U : 1U) << 2U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][2U] 
                    = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [4U][2U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][3U] = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [4U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [5U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [4U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [5U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [4U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [5U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [4U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [5U] >> 0x1bU));
            }
        } else if ((0x9002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))) {
            if ((0U != (0x1fU & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                 >> 7U)))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [4U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                    = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [4U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                    = (0xcU | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                               [4U][0U]));
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][2U] 
                    = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [4U][2U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][3U] = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [4U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [5U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [4U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [5U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [4U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [5U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [4U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [5U] >> 0x1bU));
            }
        } else if (((0xe001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                    || (0xc001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [4U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [4U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                = (0x10U | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                            [4U][0U]));
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__CB_target
                                 [5U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__CB_target
                   [5U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [5U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [5U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [5U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [5U] >> 0x1bU));
        }
        if ((1U & (~ VL_ONEHOT_I(((((0xc001U == (0xe003U 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                    << 5U) | (((0xe001U 
                                                == 
                                                (0xe003U 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                               << 4U) 
                                              | ((0x9002U 
                                                  == 
                                                  (0xf07fU 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                                 << 3U))) 
                                  | (((0x8002U == (0xf07fU 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                      << 2U) | (((0xa001U 
                                                  == 
                                                  (0xe003U 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                                 << 1U) 
                                                | (0x2001U 
                                                   == 
                                                   (0xe003U 
                                                    & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))))))))) {
            if ((0U != ((((0xc001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                          << 5U) | (((0xe001U == (0xe003U 
                                                  & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                     << 4U) | ((0x9002U 
                                                == 
                                                (0xf07fU 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                               << 3U))) 
                        | (((0x8002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                            << 2U) | (((0xa001U == 
                                        (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                       << 1U) | (0x2001U 
                                                 == 
                                                 (0xe003U 
                                                  & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: BranchHandler.sv:136: Assertion failed in %NTop.soc.core.ifetch.ifp.branchHandler.unnamedblk9.unnamedblk10: unique case, but multiple matches found for '16'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 16,(IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16));
                    VL_STOP_MT("src/BranchHandler.sv", 136, "");
                }
            }
        }
    }
    if ((0x40U & (IData)(__PVT__branchHandler__DOT__is16bit))) {
        vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16 
            = (0xffffU & vlSelfRef.__PVT__branchHandler__DOT__instrsView[3U]);
        if (((0x2001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
             || (0xa001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [5U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [5U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][0U]) | (((1U == (7U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                                >> 0xdU)))
                                   ? 2U : 0U) << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__CJ_target
                                 [6U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__CJ_target
                   [6U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [6U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [6U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [6U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [6U] >> 0x1bU));
        } else if ((0x8002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))) {
            if ((0U != (0x1fU & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                 >> 7U)))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [5U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                    = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [5U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                    = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [5U][0U]) | (((1U == (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                                 >> 7U)))
                                       ? 7U : 1U) << 2U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][2U] 
                    = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [5U][2U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][3U] = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [5U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [6U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [5U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [6U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [5U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [6U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [5U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [6U] >> 0x1bU));
            }
        } else if ((0x9002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))) {
            if ((0U != (0x1fU & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                 >> 7U)))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [5U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                    = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [5U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                    = (0xcU | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                               [5U][0U]));
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][2U] 
                    = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [5U][2U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][3U] = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [5U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [6U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [5U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [6U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [5U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [6U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [5U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [6U] >> 0x1bU));
            }
        } else if (((0xe001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                    || (0xc001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [5U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [5U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                = (0x10U | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                            [5U][0U]));
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__CB_target
                                 [6U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__CB_target
                   [6U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [6U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [6U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [6U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [6U] >> 0x1bU));
        }
        if ((1U & (~ VL_ONEHOT_I(((((0xc001U == (0xe003U 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                    << 5U) | (((0xe001U 
                                                == 
                                                (0xe003U 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                               << 4U) 
                                              | ((0x9002U 
                                                  == 
                                                  (0xf07fU 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                                 << 3U))) 
                                  | (((0x8002U == (0xf07fU 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                      << 2U) | (((0xa001U 
                                                  == 
                                                  (0xe003U 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                                 << 1U) 
                                                | (0x2001U 
                                                   == 
                                                   (0xe003U 
                                                    & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))))))))) {
            if ((0U != ((((0xc001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                          << 5U) | (((0xe001U == (0xe003U 
                                                  & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                     << 4U) | ((0x9002U 
                                                == 
                                                (0xf07fU 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                               << 3U))) 
                        | (((0x8002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                            << 2U) | (((0xa001U == 
                                        (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                       << 1U) | (0x2001U 
                                                 == 
                                                 (0xe003U 
                                                  & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: BranchHandler.sv:136: Assertion failed in %NTop.soc.core.ifetch.ifp.branchHandler.unnamedblk9.unnamedblk10: unique case, but multiple matches found for '16'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 16,(IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16));
                    VL_STOP_MT("src/BranchHandler.sv", 136, "");
                }
            }
        }
    }
    if ((0x80U & (IData)(__PVT__branchHandler__DOT__is16bit))) {
        vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16 
            = (vlSelfRef.__PVT__branchHandler__DOT__instrsView[3U] 
               >> 0x10U);
        if (((0x2001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
             || (0xa001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [6U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [6U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][0U]) | (((1U == (7U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                                >> 0xdU)))
                                   ? 2U : 0U) << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__CJ_target
                                 [7U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__CJ_target
                   [7U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [7U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [7U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [7U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [7U] >> 0x1bU));
        } else if ((0x8002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))) {
            if ((0U != (0x1fU & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                 >> 7U)))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [6U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                    = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [6U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                    = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [6U][0U]) | (((1U == (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                                 >> 7U)))
                                       ? 7U : 1U) << 2U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][2U] 
                    = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [6U][2U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][3U] = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [6U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [7U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [6U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [7U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [6U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [7U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [6U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [7U] >> 0x1bU));
            }
        } else if ((0x9002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))) {
            if ((0U != (0x1fU & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                 >> 7U)))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [6U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                    = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [6U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                    = (0xcU | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                               [6U][0U]));
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][2U] 
                    = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [6U][2U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][3U] = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [6U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [7U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [6U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [7U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [6U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [7U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [6U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [7U] >> 0x1bU));
            }
        } else if (((0xe001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                    || (0xc001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [6U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [6U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                = (0x10U | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                            [6U][0U]));
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__CB_target
                                 [7U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__CB_target
                   [7U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [7U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [7U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [7U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [7U] >> 0x1bU));
        }
        if ((1U & (~ VL_ONEHOT_I(((((0xc001U == (0xe003U 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                    << 5U) | (((0xe001U 
                                                == 
                                                (0xe003U 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                               << 4U) 
                                              | ((0x9002U 
                                                  == 
                                                  (0xf07fU 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                                 << 3U))) 
                                  | (((0x8002U == (0xf07fU 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                      << 2U) | (((0xa001U 
                                                  == 
                                                  (0xe003U 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                                 << 1U) 
                                                | (0x2001U 
                                                   == 
                                                   (0xe003U 
                                                    & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))))))))) {
            if ((0U != ((((0xc001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                          << 5U) | (((0xe001U == (0xe003U 
                                                  & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                     << 4U) | ((0x9002U 
                                                == 
                                                (0xf07fU 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                               << 3U))) 
                        | (((0x8002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                            << 2U) | (((0xa001U == 
                                        (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                       << 1U) | (0x2001U 
                                                 == 
                                                 (0xe003U 
                                                  & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: BranchHandler.sv:136: Assertion failed in %NTop.soc.core.ifetch.ifp.branchHandler.unnamedblk9.unnamedblk10: unique case, but multiple matches found for '16'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 16,(IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16));
                    VL_STOP_MT("src/BranchHandler.sv", 136, "");
                }
            }
        }
    }
    if ((0x100U & (IData)(__PVT__branchHandler__DOT__is16bit))) {
        vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16 
            = (0xffffU & vlSelfRef.__PVT__branchHandler__DOT__instrsView[4U]);
        if (((0x2001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
             || (0xa001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [7U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [7U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][0U]) | (((1U == (7U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                                >> 0xdU)))
                                   ? 2U : 0U) << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__CJ_target
                                 [8U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__CJ_target
                   [8U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [8U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [8U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [8U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [8U] >> 0x1bU));
        } else if ((0x8002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))) {
            if ((0U != (0x1fU & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                 >> 7U)))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [7U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                    = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [7U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                    = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [7U][0U]) | (((1U == (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                                 >> 7U)))
                                       ? 7U : 1U) << 2U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][2U] 
                    = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [7U][2U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][3U] = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [7U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [8U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [7U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [8U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [7U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [8U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [7U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [8U] >> 0x1bU));
            }
        } else if ((0x9002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))) {
            if ((0U != (0x1fU & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16) 
                                 >> 7U)))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [7U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                    = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [7U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                    = (0xcU | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                               [7U][0U]));
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][2U] 
                    = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [7U][2U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][3U] = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [7U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [8U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [7U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [8U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [7U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [8U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [7U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [8U] >> 0x1bU));
            }
        } else if (((0xe001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                    || (0xc001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [7U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                = (2U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [7U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                = (0x10U | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                            [7U][0U]));
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__CB_target
                                 [8U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__CB_target
                   [8U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [8U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [8U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [8U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [8U] >> 0x1bU));
        }
        if ((1U & (~ VL_ONEHOT_I(((((0xc001U == (0xe003U 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                    << 5U) | (((0xe001U 
                                                == 
                                                (0xe003U 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                               << 4U) 
                                              | ((0x9002U 
                                                  == 
                                                  (0xf07fU 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                                 << 3U))) 
                                  | (((0x8002U == (0xf07fU 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                      << 2U) | (((0xa001U 
                                                  == 
                                                  (0xe003U 
                                                   & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                                 << 1U) 
                                                | (0x2001U 
                                                   == 
                                                   (0xe003U 
                                                    & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))))))))) {
            if ((0U != ((((0xc001U == (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                          << 5U) | (((0xe001U == (0xe003U 
                                                  & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                     << 4U) | ((0x9002U 
                                                == 
                                                (0xf07fU 
                                                 & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                               << 3U))) 
                        | (((0x8002U == (0xf07fU & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                            << 2U) | (((0xa001U == 
                                        (0xe003U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16))) 
                                       << 1U) | (0x2001U 
                                                 == 
                                                 (0xe003U 
                                                  & (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16)))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: BranchHandler.sv:136: Assertion failed in %NTop.soc.core.ifetch.ifp.branchHandler.unnamedblk9.unnamedblk10: unique case, but multiple matches found for '16'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 16,(IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16));
                    VL_STOP_MT("src/BranchHandler.sv", 136, "");
                }
            }
        }
    }
    if ((1U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit))) {
        vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
            = vlSelfRef.__PVT__branchHandler__DOT__instrsView[0U];
        if ((0x6fU == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [0U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [0U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][0U]) | ((((1U == (0x1fU & 
                                           (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                            >> 7U))) 
                                   | (5U == (0x1fU 
                                             & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 7U))))
                                   ? 2U : 0U) << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__J_target
                                 [0U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__J_target
                   [0U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [0U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [0U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [1U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [1U] >> 0x1bU));
        } else if ((0x67U == (0x707fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [0U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [0U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][0U]) | ((((1U == (0x1fU & 
                                           (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                            >> 7U))) 
                                   | (5U == (0x1fU 
                                             & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 7U))))
                                   ? (((1U == (0x1fU 
                                               & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                  >> 0xfU))) 
                                       | (5U == (0x1fU 
                                                 & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                    >> 0xfU))))
                                       ? (((1U & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                  >> 0x11U)) 
                                           == (1U & 
                                               (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 9U)))
                                           ? 3U : 1U)
                                       : 3U) : (((1U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                      >> 0xfU))) 
                                                 | (5U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                        >> 0xfU))))
                                                 ? 7U
                                                 : 1U)) 
                                 << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][2U] 
                = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [0U][2U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][3U] = 0U;
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [0U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [0U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [1U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[0U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [0U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [1U] >> 0x1bU));
        } else if ((0x63U == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            if (((2U != (7U & (vlSelfRef.__PVT__branchHandler__DOT__instrsView[0U] 
                               >> 0xcU))) & (3U != 
                                             (7U & 
                                              (vlSelfRef.__PVT__branchHandler__DOT__instrsView[0U] 
                                               >> 0xcU))))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [0U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                    = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [0U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                    = (0x10U | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                                [0U][0U]));
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][2U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [0U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__B_target
                                     [0U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][3U] 
                    = (vlSelfRef.__PVT__branchHandler__DOT__B_target
                       [0U] >> 0x1bU);
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [0U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [0U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [0U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [0U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [0U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [1U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[0U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [0U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [1U] >> 0x1bU));
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((0x63U == (0x7fU 
                                              & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                   << 2U) | (((0x67U 
                                               == (0x707fU 
                                                   & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                              << 1U) 
                                             | (0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)))))))) {
            if ((0U != (((0x63U == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                         << 2U) | (((0x67U == (0x707fU 
                                               & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                    << 1U) | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: BranchHandler.sv:179: Assertion failed in %NTop.soc.core.ifetch.ifp.branchHandler.unnamedblk11.unnamedblk12: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32);
                    VL_STOP_MT("src/BranchHandler.sv", 179, "");
                }
            }
        }
    }
    if ((2U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit))) {
        vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
            = ((vlSelfRef.__PVT__branchHandler__DOT__instrsView[1U] 
                << 0x10U) | (vlSelfRef.__PVT__branchHandler__DOT__instrsView[0U] 
                             >> 0x10U));
        if ((0x6fU == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [1U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [1U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][0U]) | ((((1U == (0x1fU & 
                                           (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                            >> 7U))) 
                                   | (5U == (0x1fU 
                                             & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 7U))))
                                   ? 2U : 0U) << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__J_target
                                 [1U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__J_target
                   [1U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [1U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [1U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [2U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [2U] >> 0x1bU));
        } else if ((0x67U == (0x707fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [1U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [1U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][0U]) | ((((1U == (0x1fU & 
                                           (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                            >> 7U))) 
                                   | (5U == (0x1fU 
                                             & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 7U))))
                                   ? (((1U == (0x1fU 
                                               & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                  >> 0xfU))) 
                                       | (5U == (0x1fU 
                                                 & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                    >> 0xfU))))
                                       ? (((1U & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                  >> 0x11U)) 
                                           == (1U & 
                                               (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 9U)))
                                           ? 3U : 1U)
                                       : 3U) : (((1U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                      >> 0xfU))) 
                                                 | (5U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                        >> 0xfU))))
                                                 ? 7U
                                                 : 1U)) 
                                 << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][2U] 
                = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [1U][2U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][3U] = 0U;
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [1U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [1U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [2U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[1U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [1U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [2U] >> 0x1bU));
        } else if ((0x63U == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            if (((2U != (7U & (vlSelfRef.__PVT__branchHandler__DOT__instrsView[0U] 
                               >> 0x1cU))) & (3U != 
                                              (7U & 
                                               (vlSelfRef.__PVT__branchHandler__DOT__instrsView[0U] 
                                                >> 0x1cU))))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [1U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                    = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [1U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                    = (0x10U | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                                [1U][0U]));
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][2U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [1U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__B_target
                                     [1U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][3U] 
                    = (vlSelfRef.__PVT__branchHandler__DOT__B_target
                       [1U] >> 0x1bU);
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [1U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [1U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [1U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [1U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [1U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [2U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[1U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [1U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [2U] >> 0x1bU));
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((0x63U == (0x7fU 
                                              & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                   << 2U) | (((0x67U 
                                               == (0x707fU 
                                                   & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                              << 1U) 
                                             | (0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)))))))) {
            if ((0U != (((0x63U == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                         << 2U) | (((0x67U == (0x707fU 
                                               & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                    << 1U) | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: BranchHandler.sv:179: Assertion failed in %NTop.soc.core.ifetch.ifp.branchHandler.unnamedblk11.unnamedblk12: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32);
                    VL_STOP_MT("src/BranchHandler.sv", 179, "");
                }
            }
        }
    }
    if ((4U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit))) {
        vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
            = vlSelfRef.__PVT__branchHandler__DOT__instrsView[1U];
        if ((0x6fU == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [2U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [2U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][0U]) | ((((1U == (0x1fU & 
                                           (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                            >> 7U))) 
                                   | (5U == (0x1fU 
                                             & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 7U))))
                                   ? 2U : 0U) << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__J_target
                                 [2U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__J_target
                   [2U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [2U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [2U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [3U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [3U] >> 0x1bU));
        } else if ((0x67U == (0x707fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [2U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [2U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][0U]) | ((((1U == (0x1fU & 
                                           (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                            >> 7U))) 
                                   | (5U == (0x1fU 
                                             & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 7U))))
                                   ? (((1U == (0x1fU 
                                               & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                  >> 0xfU))) 
                                       | (5U == (0x1fU 
                                                 & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                    >> 0xfU))))
                                       ? (((1U & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                  >> 0x11U)) 
                                           == (1U & 
                                               (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 9U)))
                                           ? 3U : 1U)
                                       : 3U) : (((1U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                      >> 0xfU))) 
                                                 | (5U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                        >> 0xfU))))
                                                 ? 7U
                                                 : 1U)) 
                                 << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][2U] 
                = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [2U][2U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][3U] = 0U;
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [2U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [2U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [3U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[2U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [2U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [3U] >> 0x1bU));
        } else if ((0x63U == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            if (((2U != (7U & (vlSelfRef.__PVT__branchHandler__DOT__instrsView[1U] 
                               >> 0xcU))) & (3U != 
                                             (7U & 
                                              (vlSelfRef.__PVT__branchHandler__DOT__instrsView[1U] 
                                               >> 0xcU))))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [2U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                    = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [2U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                    = (0x10U | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                                [2U][0U]));
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][2U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [2U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__B_target
                                     [2U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][3U] 
                    = (vlSelfRef.__PVT__branchHandler__DOT__B_target
                       [2U] >> 0x1bU);
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [2U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [2U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [2U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [2U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [2U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [3U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[2U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [2U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [3U] >> 0x1bU));
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((0x63U == (0x7fU 
                                              & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                   << 2U) | (((0x67U 
                                               == (0x707fU 
                                                   & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                              << 1U) 
                                             | (0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)))))))) {
            if ((0U != (((0x63U == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                         << 2U) | (((0x67U == (0x707fU 
                                               & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                    << 1U) | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: BranchHandler.sv:179: Assertion failed in %NTop.soc.core.ifetch.ifp.branchHandler.unnamedblk11.unnamedblk12: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32);
                    VL_STOP_MT("src/BranchHandler.sv", 179, "");
                }
            }
        }
    }
    if ((8U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit))) {
        vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
            = ((vlSelfRef.__PVT__branchHandler__DOT__instrsView[2U] 
                << 0x10U) | (vlSelfRef.__PVT__branchHandler__DOT__instrsView[1U] 
                             >> 0x10U));
        if ((0x6fU == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [3U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [3U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][0U]) | ((((1U == (0x1fU & 
                                           (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                            >> 7U))) 
                                   | (5U == (0x1fU 
                                             & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 7U))))
                                   ? 2U : 0U) << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__J_target
                                 [3U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__J_target
                   [3U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [3U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [3U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [4U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [4U] >> 0x1bU));
        } else if ((0x67U == (0x707fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [3U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [3U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][0U]) | ((((1U == (0x1fU & 
                                           (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                            >> 7U))) 
                                   | (5U == (0x1fU 
                                             & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 7U))))
                                   ? (((1U == (0x1fU 
                                               & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                  >> 0xfU))) 
                                       | (5U == (0x1fU 
                                                 & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                    >> 0xfU))))
                                       ? (((1U & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                  >> 0x11U)) 
                                           == (1U & 
                                               (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 9U)))
                                           ? 3U : 1U)
                                       : 3U) : (((1U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                      >> 0xfU))) 
                                                 | (5U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                        >> 0xfU))))
                                                 ? 7U
                                                 : 1U)) 
                                 << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][2U] 
                = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [3U][2U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][3U] = 0U;
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [3U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [3U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [4U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[3U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [3U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [4U] >> 0x1bU));
        } else if ((0x63U == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            if (((2U != (7U & (vlSelfRef.__PVT__branchHandler__DOT__instrsView[1U] 
                               >> 0x1cU))) & (3U != 
                                              (7U & 
                                               (vlSelfRef.__PVT__branchHandler__DOT__instrsView[1U] 
                                                >> 0x1cU))))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [3U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                    = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [3U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                    = (0x10U | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                                [3U][0U]));
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][2U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [3U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__B_target
                                     [3U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][3U] 
                    = (vlSelfRef.__PVT__branchHandler__DOT__B_target
                       [3U] >> 0x1bU);
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [3U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [3U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [3U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [3U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [3U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [4U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[3U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [3U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [4U] >> 0x1bU));
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((0x63U == (0x7fU 
                                              & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                   << 2U) | (((0x67U 
                                               == (0x707fU 
                                                   & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                              << 1U) 
                                             | (0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)))))))) {
            if ((0U != (((0x63U == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                         << 2U) | (((0x67U == (0x707fU 
                                               & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                    << 1U) | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: BranchHandler.sv:179: Assertion failed in %NTop.soc.core.ifetch.ifp.branchHandler.unnamedblk11.unnamedblk12: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32);
                    VL_STOP_MT("src/BranchHandler.sv", 179, "");
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit))) {
        vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
            = vlSelfRef.__PVT__branchHandler__DOT__instrsView[2U];
        if ((0x6fU == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [4U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [4U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][0U]) | ((((1U == (0x1fU & 
                                           (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                            >> 7U))) 
                                   | (5U == (0x1fU 
                                             & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 7U))))
                                   ? 2U : 0U) << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__J_target
                                 [4U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__J_target
                   [4U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [4U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [4U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [5U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [5U] >> 0x1bU));
        } else if ((0x67U == (0x707fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [4U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [4U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][0U]) | ((((1U == (0x1fU & 
                                           (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                            >> 7U))) 
                                   | (5U == (0x1fU 
                                             & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 7U))))
                                   ? (((1U == (0x1fU 
                                               & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                  >> 0xfU))) 
                                       | (5U == (0x1fU 
                                                 & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                    >> 0xfU))))
                                       ? (((1U & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                  >> 0x11U)) 
                                           == (1U & 
                                               (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 9U)))
                                           ? 3U : 1U)
                                       : 3U) : (((1U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                      >> 0xfU))) 
                                                 | (5U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                        >> 0xfU))))
                                                 ? 7U
                                                 : 1U)) 
                                 << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][2U] 
                = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [4U][2U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][3U] = 0U;
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [4U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [4U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [5U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[4U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [4U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [5U] >> 0x1bU));
        } else if ((0x63U == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            if (((2U != (7U & (vlSelfRef.__PVT__branchHandler__DOT__instrsView[2U] 
                               >> 0xcU))) & (3U != 
                                             (7U & 
                                              (vlSelfRef.__PVT__branchHandler__DOT__instrsView[2U] 
                                               >> 0xcU))))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [4U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                    = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [4U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                    = (0x10U | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                                [4U][0U]));
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][2U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [4U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__B_target
                                     [4U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][3U] 
                    = (vlSelfRef.__PVT__branchHandler__DOT__B_target
                       [4U] >> 0x1bU);
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [4U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [4U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [4U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [4U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [4U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [5U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[4U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [4U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [5U] >> 0x1bU));
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((0x63U == (0x7fU 
                                              & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                   << 2U) | (((0x67U 
                                               == (0x707fU 
                                                   & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                              << 1U) 
                                             | (0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)))))))) {
            if ((0U != (((0x63U == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                         << 2U) | (((0x67U == (0x707fU 
                                               & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                    << 1U) | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: BranchHandler.sv:179: Assertion failed in %NTop.soc.core.ifetch.ifp.branchHandler.unnamedblk11.unnamedblk12: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32);
                    VL_STOP_MT("src/BranchHandler.sv", 179, "");
                }
            }
        }
    }
    if ((0x20U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit))) {
        vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
            = ((vlSelfRef.__PVT__branchHandler__DOT__instrsView[3U] 
                << 0x10U) | (vlSelfRef.__PVT__branchHandler__DOT__instrsView[2U] 
                             >> 0x10U));
        if ((0x6fU == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [5U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [5U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][0U]) | ((((1U == (0x1fU & 
                                           (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                            >> 7U))) 
                                   | (5U == (0x1fU 
                                             & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 7U))))
                                   ? 2U : 0U) << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__J_target
                                 [5U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__J_target
                   [5U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [5U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [5U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [6U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [6U] >> 0x1bU));
        } else if ((0x67U == (0x707fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [5U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [5U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][0U]) | ((((1U == (0x1fU & 
                                           (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                            >> 7U))) 
                                   | (5U == (0x1fU 
                                             & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 7U))))
                                   ? (((1U == (0x1fU 
                                               & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                  >> 0xfU))) 
                                       | (5U == (0x1fU 
                                                 & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                    >> 0xfU))))
                                       ? (((1U & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                  >> 0x11U)) 
                                           == (1U & 
                                               (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 9U)))
                                           ? 3U : 1U)
                                       : 3U) : (((1U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                      >> 0xfU))) 
                                                 | (5U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                        >> 0xfU))))
                                                 ? 7U
                                                 : 1U)) 
                                 << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][2U] 
                = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [5U][2U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][3U] = 0U;
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [5U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [5U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [6U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[5U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [5U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [6U] >> 0x1bU));
        } else if ((0x63U == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            if (((2U != (7U & (vlSelfRef.__PVT__branchHandler__DOT__instrsView[2U] 
                               >> 0x1cU))) & (3U != 
                                              (7U & 
                                               (vlSelfRef.__PVT__branchHandler__DOT__instrsView[2U] 
                                                >> 0x1cU))))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [5U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                    = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [5U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                    = (0x10U | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                                [5U][0U]));
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][2U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [5U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__B_target
                                     [5U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][3U] 
                    = (vlSelfRef.__PVT__branchHandler__DOT__B_target
                       [5U] >> 0x1bU);
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [5U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [5U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [5U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [5U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [5U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [6U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[5U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [5U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [6U] >> 0x1bU));
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((0x63U == (0x7fU 
                                              & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                   << 2U) | (((0x67U 
                                               == (0x707fU 
                                                   & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                              << 1U) 
                                             | (0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)))))))) {
            if ((0U != (((0x63U == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                         << 2U) | (((0x67U == (0x707fU 
                                               & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                    << 1U) | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: BranchHandler.sv:179: Assertion failed in %NTop.soc.core.ifetch.ifp.branchHandler.unnamedblk11.unnamedblk12: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32);
                    VL_STOP_MT("src/BranchHandler.sv", 179, "");
                }
            }
        }
    }
    if ((0x40U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit))) {
        vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
            = vlSelfRef.__PVT__branchHandler__DOT__instrsView[3U];
        if ((0x6fU == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [6U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [6U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][0U]) | ((((1U == (0x1fU & 
                                           (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                            >> 7U))) 
                                   | (5U == (0x1fU 
                                             & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 7U))))
                                   ? 2U : 0U) << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__J_target
                                 [6U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__J_target
                   [6U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [6U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [6U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [7U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [7U] >> 0x1bU));
        } else if ((0x67U == (0x707fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [6U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [6U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][0U]) | ((((1U == (0x1fU & 
                                           (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                            >> 7U))) 
                                   | (5U == (0x1fU 
                                             & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 7U))))
                                   ? (((1U == (0x1fU 
                                               & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                  >> 0xfU))) 
                                       | (5U == (0x1fU 
                                                 & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                    >> 0xfU))))
                                       ? (((1U & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                  >> 0x11U)) 
                                           == (1U & 
                                               (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 9U)))
                                           ? 3U : 1U)
                                       : 3U) : (((1U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                      >> 0xfU))) 
                                                 | (5U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                        >> 0xfU))))
                                                 ? 7U
                                                 : 1U)) 
                                 << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][2U] 
                = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [6U][2U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][3U] = 0U;
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [6U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [6U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [7U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[6U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [6U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [7U] >> 0x1bU));
        } else if ((0x63U == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            if (((2U != (7U & (vlSelfRef.__PVT__branchHandler__DOT__instrsView[3U] 
                               >> 0xcU))) & (3U != 
                                             (7U & 
                                              (vlSelfRef.__PVT__branchHandler__DOT__instrsView[3U] 
                                               >> 0xcU))))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [6U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                    = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [6U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                    = (0x10U | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                                [6U][0U]));
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][2U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [6U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__B_target
                                     [6U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][3U] 
                    = (vlSelfRef.__PVT__branchHandler__DOT__B_target
                       [6U] >> 0x1bU);
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [6U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [6U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [6U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [6U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [6U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [7U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[6U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [6U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [7U] >> 0x1bU));
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((0x63U == (0x7fU 
                                              & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                   << 2U) | (((0x67U 
                                               == (0x707fU 
                                                   & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                              << 1U) 
                                             | (0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)))))))) {
            if ((0U != (((0x63U == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                         << 2U) | (((0x67U == (0x707fU 
                                               & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                    << 1U) | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: BranchHandler.sv:179: Assertion failed in %NTop.soc.core.ifetch.ifp.branchHandler.unnamedblk11.unnamedblk12: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32);
                    VL_STOP_MT("src/BranchHandler.sv", 179, "");
                }
            }
        }
    }
    if ((0x80U & (IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit))) {
        vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
            = ((vlSelfRef.__PVT__branchHandler__DOT__instrsView[4U] 
                << 0x10U) | (vlSelfRef.__PVT__branchHandler__DOT__instrsView[3U] 
                             >> 0x10U));
        if ((0x6fU == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [7U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [7U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][0U]) | ((((1U == (0x1fU & 
                                           (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                            >> 7U))) 
                                   | (5U == (0x1fU 
                                             & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 7U))))
                                   ? 2U : 0U) << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][2U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__J_target
                                 [7U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][3U] 
                = (vlSelfRef.__PVT__branchHandler__DOT__J_target
                   [7U] >> 0x1bU);
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [7U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [7U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [8U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [8U] >> 0x1bU));
        } else if ((0x67U == (0x707fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                   [7U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [7U][0U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                = ((0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][0U]) | ((((1U == (0x1fU & 
                                           (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                            >> 7U))) 
                                   | (5U == (0x1fU 
                                             & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 7U))))
                                   ? (((1U == (0x1fU 
                                               & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                  >> 0xfU))) 
                                       | (5U == (0x1fU 
                                                 & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                    >> 0xfU))))
                                       ? (((1U & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                  >> 0x11U)) 
                                           == (1U & 
                                               (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                >> 9U)))
                                           ? 3U : 1U)
                                       : 3U) : (((1U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                      >> 0xfU))) 
                                                 | (5U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 
                                                        >> 0xfU))))
                                                 ? 7U
                                                 : 1U)) 
                                 << 2U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][2U] 
                = (0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                   [7U][2U]);
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][3U] = 0U;
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][1U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [7U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][2U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [7U] >> 0x1bU));
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [8U] << 5U));
            vlSelfRef.__PVT__branchHandler__DOT__branch[7U][1U] 
                = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                    [7U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                 [8U] >> 0x1bU));
        } else if ((0x63U == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32))) {
            if (((2U != (7U & (vlSelfRef.__PVT__branchHandler__DOT__instrsView[3U] 
                               >> 0x1cU))) & (3U != 
                                              (7U & 
                                               (vlSelfRef.__PVT__branchHandler__DOT__instrsView[3U] 
                                                >> 0x1cU))))) {
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                    = (1U | vlSelfRef.__PVT__branchHandler__DOT__branch
                       [7U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                    = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__branch
                       [7U][0U]);
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                    = (0x10U | (0xffffffe3U & vlSelfRef.__PVT__branchHandler__DOT__branch
                                [7U][0U]));
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][2U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [7U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__B_target
                                     [7U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][3U] 
                    = (vlSelfRef.__PVT__branchHandler__DOT__B_target
                       [7U] >> 0x1bU);
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][1U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [7U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [7U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][2U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [7U][2U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [7U] >> 0x1bU));
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][0U] 
                    = ((0x1fU & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [7U][0U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [8U] << 5U));
                vlSelfRef.__PVT__branchHandler__DOT__branch[7U][1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__branchHandler__DOT__branch
                        [7U][1U]) | (vlSelfRef.__PVT__branchHandler__DOT__pc
                                     [8U] >> 0x1bU));
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((0x63U == (0x7fU 
                                              & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                   << 2U) | (((0x67U 
                                               == (0x707fU 
                                                   & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                              << 1U) 
                                             | (0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)))))))) {
            if ((0U != (((0x63U == (0x7fU & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                         << 2U) | (((0x67U == (0x707fU 
                                               & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)) 
                                    << 1U) | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: BranchHandler.sv:179: Assertion failed in %NTop.soc.core.ifetch.ifp.branchHandler.unnamedblk11.unnamedblk12: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,vlSelfRef.__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32);
                    VL_STOP_MT("src/BranchHandler.sv", 179, "");
                }
            }
        }
    }
    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c = 0ULL;
    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__retUpd_c = 0ULL;
    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
        = (0x1000000000000ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
    vlSelfRef.__PVT__branchHandler__DOT__endOffs = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c 
        = (IData)((0xa0U == (0xa0U & vlSelfRef.fetch1[1U])));
    vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c 
        = (7U & (vlSelfRef.fetch1[1U] >> 0xcU));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [0U][0U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [0U][1U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [0U][2U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [0U][3U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple 
        = (3U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                 >> 3U));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch 
        = (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
           & (((1U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 2U))) | (3U == (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U)))) 
              | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                              >> 2U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC 
        = (0x7ffffff8U & ((vlSelfRef.fetch1[3U] << 7U) 
                          | (0x78U & (vlSelfRef.fetch1[2U] 
                                      >> 0x19U))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC 
        = (0x7fffffffU & ((IData)(1U) + __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted 
        = (IData)((0x20U == (0x7060U & vlSelfRef.fetch1[1U])));
    if ((1U & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__decBranch_c)))) {
        if ((0U >= (7U & (vlSelfRef.fetch1[2U] >> 0x19U)))) {
            if (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) 
                 & (vlSelfRef.fetch1[1U] >> 7U))) {
                if ((1U & (((~ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                            | ((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                               != (3U & (vlSelfRef.fetch1[1U] 
                                         >> 9U)))) 
                           | ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                              & ((0x7fffffffU & ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                  << 0x1aU) 
                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                    >> 6U))) 
                                 != (0x7fffffffU & 
                                     ((vlSelfRef.fetch1[2U] 
                                       << 0x11U) | 
                                      (vlSelfRef.fetch1[1U] 
                                       >> 0xfU)))))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal 
                        = ((8U >= (0xfU & ((IData)(1U) 
                                           + (7U & 
                                              (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))))) 
                           && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                     >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 (7U 
                                                  & (vlSelfRef.fetch1[1U] 
                                                     >> 0xcU)))))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xe00U & (vlSelfRef.fetch1[2U] 
                                        >> 0x10U)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                           | (0xfffff000U & ((0xffff8000U 
                                              & ((vlSelfRef.fetch1[3U] 
                                                  << 0x14U) 
                                                 | (0xf8000U 
                                                    & (vlSelfRef.fetch1[2U] 
                                                       >> 0xcU)))) 
                                             | (0x7000U 
                                                & vlSelfRef.fetch1[1U]))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & (vlSelfRef.fetch1[3U] 
                                     >> 0xcU));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1c1ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(
                                                       (0x11U 
                                                        == 
                                                        (0x1dU 
                                                         & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])))
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                         & ((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                          >> 2U))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U)))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                            = (((QData)((IData)((0xfffffffU 
                                                 & ((vlSelfRef.fetch1[3U] 
                                                     << 4U) 
                                                    | (vlSelfRef.fetch1[2U] 
                                                       >> 0x1cU))))) 
                                << 9U) | (QData)((IData)(
                                                         (1U 
                                                          | ((0x1c0U 
                                                              & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                                                             | (0x3eU 
                                                                & vlSelfRef.fetch1[0U]))))));
                    }
                    if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                        if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                           >> 2U))) 
                             || (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                              >> 2U))))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x20000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        } else if ((7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 >> 2U)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x40000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        }
                    }
                    if ((1U & (((~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal)) 
                                & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                               & ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                                  | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                  >> 2U))))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0x7fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                              << 0x1bU) 
                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                >> 5U)))) 
                                            << 5U) 
                                           | (QData)((IData)(
                                                             ((0x1cU 
                                                               & (vlSelfRef.fetch1[2U] 
                                                                  >> 0x17U)) 
                                                              | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffff000U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (((IData)((((QData)((IData)(
                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                               << 0x1bU) 
                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                 >> 5U)))) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              ((0x1cU 
                                                                & (vlSelfRef.fetch1[2U] 
                                                                   >> 0x17U)) 
                                                               | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                   >> 0x19U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                               >> 5U)))) 
                                                           << 5U) 
                                                          | (QData)((IData)(
                                                                            ((0x1cU 
                                                                              & (vlSelfRef.fetch1[2U] 
                                                                                >> 0x17U)) 
                                                                             | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple))))) 
                                                         >> 0x20U)) 
                                                << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (0xfffff000U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                            = (0xfffU & ((0xf80U & 
                                          (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                           << 7U)) 
                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 0x19U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        << 1U)));
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)((0x7fffffffU 
                                                   & ((7U 
                                                       == 
                                                       (7U 
                                                        & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                           >> 2U)))
                                                       ? 
                                                      ((vlSelfRef.fetch1[1U] 
                                                        << 0x1aU) 
                                                       | (vlSelfRef.fetch1[0U] 
                                                          >> 6U))
                                                       : 
                                                      ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                        << 0x1aU) 
                                                       | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                          >> 6U)))))) 
                                  << 7U));
                    } else if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal) {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & (vlSelfRef.fetch1[1U] 
                                     >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        if ((7U != (7U & (vlSelfRef.fetch1[1U] 
                                          >> 0xcU)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                            vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                                = (7U & ((IData)(1U) 
                                         + ((vlSelfRef.fetch1[1U] 
                                             << 0x14U) 
                                            | (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))));
                        }
                    }
                }
            } else if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs 
                    = (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 6U));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly 
                    = (IData)(((0x10U == (0x1cU & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) 
                               & (0x60U == (0x60U & 
                                            vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken 
                    = ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly) 
                       & (vlSelfRef.fetch1[1U] >> 7U));
                if (((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                     >> 2U))) | (2U 
                                                 == 
                                                 (7U 
                                                  & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                     >> 2U)))) 
                      | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))) | (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c 
                        = vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1c7ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x7fffffffU 
                                               & ((7U 
                                                   == 
                                                   (7U 
                                                    & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                       >> 2U)))
                                                   ? 
                                                  ((vlSelfRef.fetch1[1U] 
                                                    << 0x1aU) 
                                                   | (vlSelfRef.fetch1[0U] 
                                                      >> 6U))
                                                   : 
                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                    << 0x1aU) 
                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                      >> 6U)))))) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken)
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((2U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : (
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                        >> 2U)))
                                                    ? 2U
                                                    : 0U)))) 
                              << 0x29U));
                } else if (((((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                              & (0x10U == (0x1cU & 
                                           __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]))) 
                             & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1c7ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((3U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x29U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((4U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                }
                if (((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                     & ((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U))) | 
                          (2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U)))) | 
                         (4U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                       >> 2U)))) | 
                        (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (1U | (0xfffffffcU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffff7U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                               > (7U & (vlSelfRef.fetch1[1U] 
                                        >> 0xcU))) 
                              << 3U));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffe0fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xfffffff0U & (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                                              << 7U) 
                                             | (0x70U 
                                                & (((IData)(1U) 
                                                    + 
                                                    ((vlSelfRef.fetch1[1U] 
                                                      << 0x14U) 
                                                     | (vlSelfRef.fetch1[1U] 
                                                        >> 0xcU))) 
                                                   << 4U)))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0x1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)((((QData)((IData)(
                                                         ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                           << 0x1bU) 
                                                          | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                             >> 5U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                            << 0x1bU) 
                                                           | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                              >> 5U)))))) 
                               << 0xcU) | (0xe00U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x10U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0x1ffU & ((IData)((((QData)((IData)(
                                                                ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                  << 0x1bU) 
                                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                    >> 5U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                     >> 5U)))))) 
                                      >> 0x14U)) | 
                           ((0xe00U & ((IData)((((QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                     >> 5U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                    << 0x1bU) 
                                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                      >> 5U)))))) 
                                       >> 0x14U)) | 
                            ((IData)(((((QData)((IData)(
                                                        ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                          << 0x1bU) 
                                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                            >> 5U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                      << 0x1bU) 
                                                                     | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                        >> 5U))))) 
                                      >> 0x20U)) << 0xcU)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & ((0x1ffU & ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                               >> 5U)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                              << 0x1bU) 
                                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                         >> 0x20U)) 
                                                >> 0x14U)) 
                                     | (0xe00U & ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                               << 0x1bU) 
                                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                                >> 5U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                                << 0x1bU) 
                                                                               | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                           >> 0x20U)) 
                                                  >> 0x14U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                    << 1U)));
                }
                if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                   >> 2U))) | (3U == 
                                               (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                        = (((QData)((IData)((0xfffffffU 
                                             & ((vlSelfRef.fetch1[3U] 
                                                 << 4U) 
                                                | (vlSelfRef.fetch1[2U] 
                                                   >> 0x1cU))))) 
                            << 9U) | (QData)((IData)(
                                                     (1U 
                                                      | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                                                          << 6U) 
                                                         | (0x3eU 
                                                            & vlSelfRef.fetch1[0U]))))));
                }
            } else if (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal 
                    = ((8U >= (0xfU & ((IData)(1U) 
                                       + (7U & (vlSelfRef.fetch1[1U] 
                                                >> 0xcU))))) 
                       && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                 >> (0xfU & ((IData)(1U) 
                                             + (7U 
                                                & (vlSelfRef.fetch1[1U] 
                                                   >> 0xcU)))))));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x1000000000001ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | (((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                           << 7U) | ((QData)((IData)(
                                                     (0x3eU 
                                                      & (vlSelfRef.fetch1[2U] 
                                                         >> 0x12U)))) 
                                     << 1U)));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                       | (0xe00U & (vlSelfRef.fetch1[2U] 
                                    >> 0x10U)));
                vlSelfRef.__PVT__branchHandler__DOT__endOffs = 1U;
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                    = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                       | (0xfffff000U & ((0xffff8000U 
                                          & ((vlSelfRef.fetch1[3U] 
                                              << 0x14U) 
                                             | (0xf8000U 
                                                & (vlSelfRef.fetch1[2U] 
                                                   >> 0xcU)))) 
                                         | (0x7000U 
                                            & vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                    = (0xfffU & (vlSelfRef.fetch1[3U] 
                                 >> 0xcU));
                if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal) {
                    vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__endOffs = 0U;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                              << 7U));
                }
            }
        }
    }
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [1U][0U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [1U][1U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [1U][2U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [1U][3U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple 
        = (3U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                 >> 3U));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch 
        = (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
           & (((1U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 2U))) | (3U == (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U)))) 
              | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                              >> 2U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC 
        = (1U | (0x7ffffff8U & ((vlSelfRef.fetch1[3U] 
                                 << 7U) | (0x78U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x19U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC 
        = (0x7fffffffU & ((IData)(1U) + __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted 
        = (IData)((0x1020U == (0x7060U & vlSelfRef.fetch1[1U])));
    if ((1U & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__decBranch_c)))) {
        if ((1U & (~ ((1U > (7U & (vlSelfRef.fetch1[2U] 
                                   >> 0xeU))) | (1U 
                                                 < 
                                                 (7U 
                                                  & (vlSelfRef.fetch1[2U] 
                                                     >> 0x19U))))))) {
            if (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) 
                 & (vlSelfRef.fetch1[1U] >> 7U))) {
                if ((1U & (((~ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                            | ((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                               != (3U & (vlSelfRef.fetch1[1U] 
                                         >> 9U)))) 
                           | ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                              & ((0x7fffffffU & ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                  << 0x1aU) 
                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                    >> 6U))) 
                                 != (0x7fffffffU & 
                                     ((vlSelfRef.fetch1[2U] 
                                       << 0x11U) | 
                                      (vlSelfRef.fetch1[1U] 
                                       >> 0xfU)))))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal 
                        = ((8U >= (0xfU & ((IData)(1U) 
                                           + (7U & 
                                              (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))))) 
                           && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                     >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 (7U 
                                                  & (vlSelfRef.fetch1[1U] 
                                                     >> 0xcU)))))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xe00U & (vlSelfRef.fetch1[2U] 
                                        >> 0x10U)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                           | (0xfffff000U & ((0xffff8000U 
                                              & ((vlSelfRef.fetch1[3U] 
                                                  << 0x14U) 
                                                 | (0xf8000U 
                                                    & (vlSelfRef.fetch1[2U] 
                                                       >> 0xcU)))) 
                                             | (0x7000U 
                                                & vlSelfRef.fetch1[1U]))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & (vlSelfRef.fetch1[3U] 
                                     >> 0xcU));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x80000000000ULL | (0x1c1ffffffffffULL 
                                               & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(
                                                       (0x11U 
                                                        == 
                                                        (0x1dU 
                                                         & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])))
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                         & ((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                          >> 2U))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U)))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                            = (((QData)((IData)((0xfffffffU 
                                                 & ((vlSelfRef.fetch1[3U] 
                                                     << 4U) 
                                                    | (vlSelfRef.fetch1[2U] 
                                                       >> 0x1cU))))) 
                                << 9U) | (QData)((IData)(
                                                         (1U 
                                                          | ((0x1c0U 
                                                              & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                                                             | (0x3eU 
                                                                & vlSelfRef.fetch1[0U]))))));
                    }
                    if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                        if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                           >> 2U))) 
                             || (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                              >> 2U))))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x20000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        } else if ((7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 >> 2U)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x40000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        }
                    }
                    if ((1U & (((~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal)) 
                                & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                               & ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                                  | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                  >> 2U))))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0x7fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                              << 0x1bU) 
                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                >> 5U)))) 
                                            << 5U) 
                                           | (QData)((IData)(
                                                             ((0x1cU 
                                                               & (vlSelfRef.fetch1[2U] 
                                                                  >> 0x17U)) 
                                                              | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffff000U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (((IData)((((QData)((IData)(
                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                               << 0x1bU) 
                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                 >> 5U)))) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              ((0x1cU 
                                                                & (vlSelfRef.fetch1[2U] 
                                                                   >> 0x17U)) 
                                                               | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                   >> 0x19U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                               >> 5U)))) 
                                                           << 5U) 
                                                          | (QData)((IData)(
                                                                            ((0x1cU 
                                                                              & (vlSelfRef.fetch1[2U] 
                                                                                >> 0x17U)) 
                                                                             | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple))))) 
                                                         >> 0x20U)) 
                                                << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (0xfffff000U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                            = (0xfffU & ((0xf80U & 
                                          (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                           << 7U)) 
                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 0x19U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        << 1U)));
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)((0x7fffffffU 
                                                   & ((7U 
                                                       == 
                                                       (7U 
                                                        & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                           >> 2U)))
                                                       ? 
                                                      ((vlSelfRef.fetch1[1U] 
                                                        << 0x1aU) 
                                                       | (vlSelfRef.fetch1[0U] 
                                                          >> 6U))
                                                       : 
                                                      ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                        << 0x1aU) 
                                                       | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                          >> 6U)))))) 
                                  << 7U));
                    } else if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal) {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & (vlSelfRef.fetch1[1U] 
                                     >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        if ((7U != (7U & (vlSelfRef.fetch1[1U] 
                                          >> 0xcU)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                            vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                                = (7U & ((IData)(1U) 
                                         + ((vlSelfRef.fetch1[1U] 
                                             << 0x14U) 
                                            | (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))));
                        }
                    }
                }
            } else if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs 
                    = (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 6U));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly 
                    = (IData)(((0x10U == (0x1cU & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) 
                               & (0x60U == (0x60U & 
                                            vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken 
                    = ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly) 
                       & (vlSelfRef.fetch1[1U] >> 7U));
                if (((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                     >> 2U))) | (2U 
                                                 == 
                                                 (7U 
                                                  & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                     >> 2U)))) 
                      | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))) | (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c 
                        = vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x80000000000ULL | (0x1c7ffffffffffULL 
                                               & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x7fffffffU 
                                               & ((7U 
                                                   == 
                                                   (7U 
                                                    & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                       >> 2U)))
                                                   ? 
                                                  ((vlSelfRef.fetch1[1U] 
                                                    << 0x1aU) 
                                                   | (vlSelfRef.fetch1[0U] 
                                                      >> 6U))
                                                   : 
                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                    << 0x1aU) 
                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                      >> 6U)))))) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken)
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((2U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : (
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                        >> 2U)))
                                                    ? 2U
                                                    : 0U)))) 
                              << 0x29U));
                } else if (((((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                              & (0x10U == (0x1cU & 
                                           __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]))) 
                             & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x80000000000ULL | (0x1c7ffffffffffULL 
                                               & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((3U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x29U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((4U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                }
                if (((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                     & ((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U))) | 
                          (2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U)))) | 
                         (4U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                       >> 2U)))) | 
                        (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (1U | (0xfffffffcU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffff7U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                               > (7U & (vlSelfRef.fetch1[1U] 
                                        >> 0xcU))) 
                              << 3U));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffe0fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xfffffff0U & (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                                              << 7U) 
                                             | (0x70U 
                                                & (((IData)(1U) 
                                                    + 
                                                    ((vlSelfRef.fetch1[1U] 
                                                      << 0x14U) 
                                                     | (vlSelfRef.fetch1[1U] 
                                                        >> 0xcU))) 
                                                   << 4U)))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0x1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)((((QData)((IData)(
                                                         ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                           << 0x1bU) 
                                                          | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                             >> 5U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                            << 0x1bU) 
                                                           | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                              >> 5U)))))) 
                               << 0xcU) | (0xe00U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x10U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0x1ffU & ((IData)((((QData)((IData)(
                                                                ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                  << 0x1bU) 
                                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                    >> 5U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                     >> 5U)))))) 
                                      >> 0x14U)) | 
                           ((0xe00U & ((IData)((((QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                     >> 5U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                    << 0x1bU) 
                                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                      >> 5U)))))) 
                                       >> 0x14U)) | 
                            ((IData)(((((QData)((IData)(
                                                        ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                          << 0x1bU) 
                                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                            >> 5U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                      << 0x1bU) 
                                                                     | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                        >> 5U))))) 
                                      >> 0x20U)) << 0xcU)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & ((0x1ffU & ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                               >> 5U)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                              << 0x1bU) 
                                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                         >> 0x20U)) 
                                                >> 0x14U)) 
                                     | (0xe00U & ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                               << 0x1bU) 
                                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                                >> 5U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                                << 0x1bU) 
                                                                               | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                           >> 0x20U)) 
                                                  >> 0x14U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                    << 1U)));
                }
                if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                   >> 2U))) | (3U == 
                                               (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                        = (((QData)((IData)((0xfffffffU 
                                             & ((vlSelfRef.fetch1[3U] 
                                                 << 4U) 
                                                | (vlSelfRef.fetch1[2U] 
                                                   >> 0x1cU))))) 
                            << 9U) | (QData)((IData)(
                                                     (1U 
                                                      | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                                                          << 6U) 
                                                         | (0x3eU 
                                                            & vlSelfRef.fetch1[0U]))))));
                }
            } else if (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal 
                    = ((8U >= (0xfU & ((IData)(1U) 
                                       + (7U & (vlSelfRef.fetch1[1U] 
                                                >> 0xcU))))) 
                       && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                 >> (0xfU & ((IData)(1U) 
                                             + (7U 
                                                & (vlSelfRef.fetch1[1U] 
                                                   >> 0xcU)))))));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | ((QData)((IData)((0x1fU & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x13U)))) 
                          << 2U));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x100000000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | (0x80000000000ULL | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                              << 7U)));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                       | (0xe00U & (vlSelfRef.fetch1[2U] 
                                    >> 0x10U)));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                    = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                       | (0xfffff000U & ((0xffff8000U 
                                          & ((vlSelfRef.fetch1[3U] 
                                              << 0x14U) 
                                             | (0xf8000U 
                                                & (vlSelfRef.fetch1[2U] 
                                                   >> 0xcU)))) 
                                         | (0x7000U 
                                            & vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                    = (0xfffU & (vlSelfRef.fetch1[3U] 
                                 >> 0xcU));
                vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                vlSelfRef.__PVT__branchHandler__DOT__endOffs = 2U;
                if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal) {
                    vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__endOffs = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                              << 7U));
                }
            }
        }
    }
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [2U][0U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [2U][1U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [2U][2U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [2U][3U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple 
        = (3U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                 >> 3U));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch 
        = (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
           & (((1U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 2U))) | (3U == (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U)))) 
              | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                              >> 2U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC 
        = (2U | (0x7ffffff8U & ((vlSelfRef.fetch1[3U] 
                                 << 7U) | (0x78U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x19U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC 
        = (0x7fffffffU & ((IData)(1U) + __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted 
        = (IData)((0x2020U == (0x7060U & vlSelfRef.fetch1[1U])));
    if ((1U & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__decBranch_c)))) {
        if ((1U & (~ ((2U > (7U & (vlSelfRef.fetch1[2U] 
                                   >> 0xeU))) | (2U 
                                                 < 
                                                 (7U 
                                                  & (vlSelfRef.fetch1[2U] 
                                                     >> 0x19U))))))) {
            if (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) 
                 & (vlSelfRef.fetch1[1U] >> 7U))) {
                if ((1U & (((~ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                            | ((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                               != (3U & (vlSelfRef.fetch1[1U] 
                                         >> 9U)))) 
                           | ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                              & ((0x7fffffffU & ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                  << 0x1aU) 
                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                    >> 6U))) 
                                 != (0x7fffffffU & 
                                     ((vlSelfRef.fetch1[2U] 
                                       << 0x11U) | 
                                      (vlSelfRef.fetch1[1U] 
                                       >> 0xfU)))))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal 
                        = ((8U >= (0xfU & ((IData)(1U) 
                                           + (7U & 
                                              (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))))) 
                           && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                     >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 (7U 
                                                  & (vlSelfRef.fetch1[1U] 
                                                     >> 0xcU)))))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xe00U & (vlSelfRef.fetch1[2U] 
                                        >> 0x10U)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                           | (0xfffff000U & ((0xffff8000U 
                                              & ((vlSelfRef.fetch1[3U] 
                                                  << 0x14U) 
                                                 | (0xf8000U 
                                                    & (vlSelfRef.fetch1[2U] 
                                                       >> 0xcU)))) 
                                             | (0x7000U 
                                                & vlSelfRef.fetch1[1U]))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & (vlSelfRef.fetch1[3U] 
                                     >> 0xcU));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x100000000000ULL | (0x1c1ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(
                                                       (0x11U 
                                                        == 
                                                        (0x1dU 
                                                         & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])))
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                         & ((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                          >> 2U))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U)))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                            = (((QData)((IData)((0xfffffffU 
                                                 & ((vlSelfRef.fetch1[3U] 
                                                     << 4U) 
                                                    | (vlSelfRef.fetch1[2U] 
                                                       >> 0x1cU))))) 
                                << 9U) | (QData)((IData)(
                                                         (1U 
                                                          | ((0x1c0U 
                                                              & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                                                             | (0x3eU 
                                                                & vlSelfRef.fetch1[0U]))))));
                    }
                    if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                        if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                           >> 2U))) 
                             || (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                              >> 2U))))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x20000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        } else if ((7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 >> 2U)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x40000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        }
                    }
                    if ((1U & (((~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal)) 
                                & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                               & ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                                  | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                  >> 2U))))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0x7fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                              << 0x1bU) 
                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                >> 5U)))) 
                                            << 5U) 
                                           | (QData)((IData)(
                                                             ((0x1cU 
                                                               & (vlSelfRef.fetch1[2U] 
                                                                  >> 0x17U)) 
                                                              | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffff000U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (((IData)((((QData)((IData)(
                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                               << 0x1bU) 
                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                 >> 5U)))) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              ((0x1cU 
                                                                & (vlSelfRef.fetch1[2U] 
                                                                   >> 0x17U)) 
                                                               | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                   >> 0x19U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                               >> 5U)))) 
                                                           << 5U) 
                                                          | (QData)((IData)(
                                                                            ((0x1cU 
                                                                              & (vlSelfRef.fetch1[2U] 
                                                                                >> 0x17U)) 
                                                                             | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple))))) 
                                                         >> 0x20U)) 
                                                << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (0xfffff000U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                            = (0xfffU & ((0xf80U & 
                                          (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                           << 7U)) 
                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 0x19U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        << 1U)));
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)((0x7fffffffU 
                                                   & ((7U 
                                                       == 
                                                       (7U 
                                                        & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                           >> 2U)))
                                                       ? 
                                                      ((vlSelfRef.fetch1[1U] 
                                                        << 0x1aU) 
                                                       | (vlSelfRef.fetch1[0U] 
                                                          >> 6U))
                                                       : 
                                                      ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                        << 0x1aU) 
                                                       | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                          >> 6U)))))) 
                                  << 7U));
                    } else if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal) {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & (vlSelfRef.fetch1[1U] 
                                     >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        if ((7U != (7U & (vlSelfRef.fetch1[1U] 
                                          >> 0xcU)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                            vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                                = (7U & ((IData)(1U) 
                                         + ((vlSelfRef.fetch1[1U] 
                                             << 0x14U) 
                                            | (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))));
                        }
                    }
                }
            } else if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs 
                    = (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 6U));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly 
                    = (IData)(((0x10U == (0x1cU & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) 
                               & (0x60U == (0x60U & 
                                            vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken 
                    = ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly) 
                       & (vlSelfRef.fetch1[1U] >> 7U));
                if (((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                     >> 2U))) | (2U 
                                                 == 
                                                 (7U 
                                                  & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                     >> 2U)))) 
                      | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))) | (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c 
                        = vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x100000000000ULL | (0x1c7ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x7fffffffU 
                                               & ((7U 
                                                   == 
                                                   (7U 
                                                    & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                       >> 2U)))
                                                   ? 
                                                  ((vlSelfRef.fetch1[1U] 
                                                    << 0x1aU) 
                                                   | (vlSelfRef.fetch1[0U] 
                                                      >> 6U))
                                                   : 
                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                    << 0x1aU) 
                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                      >> 6U)))))) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken)
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((2U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : (
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                        >> 2U)))
                                                    ? 2U
                                                    : 0U)))) 
                              << 0x29U));
                } else if (((((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                              & (0x10U == (0x1cU & 
                                           __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]))) 
                             & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x100000000000ULL | (0x1c7ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((3U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x29U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((4U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                }
                if (((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                     & ((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U))) | 
                          (2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U)))) | 
                         (4U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                       >> 2U)))) | 
                        (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (1U | (0xfffffffcU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffff7U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                               > (7U & (vlSelfRef.fetch1[1U] 
                                        >> 0xcU))) 
                              << 3U));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffe0fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xfffffff0U & (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                                              << 7U) 
                                             | (0x70U 
                                                & (((IData)(1U) 
                                                    + 
                                                    ((vlSelfRef.fetch1[1U] 
                                                      << 0x14U) 
                                                     | (vlSelfRef.fetch1[1U] 
                                                        >> 0xcU))) 
                                                   << 4U)))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0x1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)((((QData)((IData)(
                                                         ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                           << 0x1bU) 
                                                          | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                             >> 5U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                            << 0x1bU) 
                                                           | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                              >> 5U)))))) 
                               << 0xcU) | (0xe00U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x10U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0x1ffU & ((IData)((((QData)((IData)(
                                                                ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                  << 0x1bU) 
                                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                    >> 5U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                     >> 5U)))))) 
                                      >> 0x14U)) | 
                           ((0xe00U & ((IData)((((QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                     >> 5U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                    << 0x1bU) 
                                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                      >> 5U)))))) 
                                       >> 0x14U)) | 
                            ((IData)(((((QData)((IData)(
                                                        ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                          << 0x1bU) 
                                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                            >> 5U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                      << 0x1bU) 
                                                                     | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                        >> 5U))))) 
                                      >> 0x20U)) << 0xcU)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & ((0x1ffU & ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                               >> 5U)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                              << 0x1bU) 
                                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                         >> 0x20U)) 
                                                >> 0x14U)) 
                                     | (0xe00U & ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                               << 0x1bU) 
                                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                                >> 5U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                                << 0x1bU) 
                                                                               | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                           >> 0x20U)) 
                                                  >> 0x14U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                    << 1U)));
                }
                if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                   >> 2U))) | (3U == 
                                               (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                        = (((QData)((IData)((0xfffffffU 
                                             & ((vlSelfRef.fetch1[3U] 
                                                 << 4U) 
                                                | (vlSelfRef.fetch1[2U] 
                                                   >> 0x1cU))))) 
                            << 9U) | (QData)((IData)(
                                                     (1U 
                                                      | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                                                          << 6U) 
                                                         | (0x3eU 
                                                            & vlSelfRef.fetch1[0U]))))));
                }
            } else if (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal 
                    = ((8U >= (0xfU & ((IData)(1U) 
                                       + (7U & (vlSelfRef.fetch1[1U] 
                                                >> 0xcU))))) 
                       && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                 >> (0xfU & ((IData)(1U) 
                                             + (7U 
                                                & (vlSelfRef.fetch1[1U] 
                                                   >> 0xcU)))))));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | ((QData)((IData)((0x1fU & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x13U)))) 
                          << 2U));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x100000000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | (0x100000000000ULL | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                               << 7U)));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                       | (0xe00U & (vlSelfRef.fetch1[2U] 
                                    >> 0x10U)));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                    = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                       | (0xfffff000U & ((0xffff8000U 
                                          & ((vlSelfRef.fetch1[3U] 
                                              << 0x14U) 
                                             | (0xf8000U 
                                                & (vlSelfRef.fetch1[2U] 
                                                   >> 0xcU)))) 
                                         | (0x7000U 
                                            & vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                    = (0xfffU & (vlSelfRef.fetch1[3U] 
                                 >> 0xcU));
                vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                vlSelfRef.__PVT__branchHandler__DOT__endOffs = 3U;
                if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal) {
                    vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__endOffs = 2U;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                              << 7U));
                }
            }
        }
    }
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [3U][0U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [3U][1U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [3U][2U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [3U][3U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple 
        = (3U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                 >> 3U));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch 
        = (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
           & (((1U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 2U))) | (3U == (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U)))) 
              | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                              >> 2U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC 
        = (3U | (0x7ffffff8U & ((vlSelfRef.fetch1[3U] 
                                 << 7U) | (0x78U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x19U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC 
        = (0x7fffffffU & ((IData)(1U) + __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted 
        = (IData)((0x3020U == (0x7060U & vlSelfRef.fetch1[1U])));
    if ((1U & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__decBranch_c)))) {
        if ((1U & (~ ((3U > (7U & (vlSelfRef.fetch1[2U] 
                                   >> 0xeU))) | (3U 
                                                 < 
                                                 (7U 
                                                  & (vlSelfRef.fetch1[2U] 
                                                     >> 0x19U))))))) {
            if (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) 
                 & (vlSelfRef.fetch1[1U] >> 7U))) {
                if ((1U & (((~ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                            | ((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                               != (3U & (vlSelfRef.fetch1[1U] 
                                         >> 9U)))) 
                           | ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                              & ((0x7fffffffU & ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                  << 0x1aU) 
                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                    >> 6U))) 
                                 != (0x7fffffffU & 
                                     ((vlSelfRef.fetch1[2U] 
                                       << 0x11U) | 
                                      (vlSelfRef.fetch1[1U] 
                                       >> 0xfU)))))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal 
                        = ((8U >= (0xfU & ((IData)(1U) 
                                           + (7U & 
                                              (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))))) 
                           && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                     >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 (7U 
                                                  & (vlSelfRef.fetch1[1U] 
                                                     >> 0xcU)))))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xe00U & (vlSelfRef.fetch1[2U] 
                                        >> 0x10U)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                           | (0xfffff000U & ((0xffff8000U 
                                              & ((vlSelfRef.fetch1[3U] 
                                                  << 0x14U) 
                                                 | (0xf8000U 
                                                    & (vlSelfRef.fetch1[2U] 
                                                       >> 0xcU)))) 
                                             | (0x7000U 
                                                & vlSelfRef.fetch1[1U]))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & (vlSelfRef.fetch1[3U] 
                                     >> 0xcU));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x180000000000ULL | (0x1c1ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(
                                                       (0x11U 
                                                        == 
                                                        (0x1dU 
                                                         & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])))
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                         & ((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                          >> 2U))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U)))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                            = (((QData)((IData)((0xfffffffU 
                                                 & ((vlSelfRef.fetch1[3U] 
                                                     << 4U) 
                                                    | (vlSelfRef.fetch1[2U] 
                                                       >> 0x1cU))))) 
                                << 9U) | (QData)((IData)(
                                                         (1U 
                                                          | ((0x1c0U 
                                                              & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                                                             | (0x3eU 
                                                                & vlSelfRef.fetch1[0U]))))));
                    }
                    if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                        if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                           >> 2U))) 
                             || (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                              >> 2U))))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x20000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        } else if ((7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 >> 2U)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x40000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        }
                    }
                    if ((1U & (((~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal)) 
                                & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                               & ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                                  | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                  >> 2U))))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0x7fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                              << 0x1bU) 
                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                >> 5U)))) 
                                            << 5U) 
                                           | (QData)((IData)(
                                                             ((0x1cU 
                                                               & (vlSelfRef.fetch1[2U] 
                                                                  >> 0x17U)) 
                                                              | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffff000U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (((IData)((((QData)((IData)(
                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                               << 0x1bU) 
                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                 >> 5U)))) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              ((0x1cU 
                                                                & (vlSelfRef.fetch1[2U] 
                                                                   >> 0x17U)) 
                                                               | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                   >> 0x19U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                               >> 5U)))) 
                                                           << 5U) 
                                                          | (QData)((IData)(
                                                                            ((0x1cU 
                                                                              & (vlSelfRef.fetch1[2U] 
                                                                                >> 0x17U)) 
                                                                             | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple))))) 
                                                         >> 0x20U)) 
                                                << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (0xfffff000U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                            = (0xfffU & ((0xf80U & 
                                          (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                           << 7U)) 
                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 0x19U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        << 1U)));
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)((0x7fffffffU 
                                                   & ((7U 
                                                       == 
                                                       (7U 
                                                        & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                           >> 2U)))
                                                       ? 
                                                      ((vlSelfRef.fetch1[1U] 
                                                        << 0x1aU) 
                                                       | (vlSelfRef.fetch1[0U] 
                                                          >> 6U))
                                                       : 
                                                      ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                        << 0x1aU) 
                                                       | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                          >> 6U)))))) 
                                  << 7U));
                    } else if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal) {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & (vlSelfRef.fetch1[1U] 
                                     >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        if ((7U != (7U & (vlSelfRef.fetch1[1U] 
                                          >> 0xcU)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                            vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                                = (7U & ((IData)(1U) 
                                         + ((vlSelfRef.fetch1[1U] 
                                             << 0x14U) 
                                            | (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))));
                        }
                    }
                }
            } else if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs 
                    = (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 6U));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly 
                    = (IData)(((0x10U == (0x1cU & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) 
                               & (0x60U == (0x60U & 
                                            vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken 
                    = ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly) 
                       & (vlSelfRef.fetch1[1U] >> 7U));
                if (((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                     >> 2U))) | (2U 
                                                 == 
                                                 (7U 
                                                  & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                     >> 2U)))) 
                      | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))) | (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c 
                        = vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x180000000000ULL | (0x1c7ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x7fffffffU 
                                               & ((7U 
                                                   == 
                                                   (7U 
                                                    & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                       >> 2U)))
                                                   ? 
                                                  ((vlSelfRef.fetch1[1U] 
                                                    << 0x1aU) 
                                                   | (vlSelfRef.fetch1[0U] 
                                                      >> 6U))
                                                   : 
                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                    << 0x1aU) 
                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                      >> 6U)))))) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken)
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((2U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : (
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                        >> 2U)))
                                                    ? 2U
                                                    : 0U)))) 
                              << 0x29U));
                } else if (((((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                              & (0x10U == (0x1cU & 
                                           __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]))) 
                             & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x180000000000ULL | (0x1c7ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((3U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x29U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((4U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                }
                if (((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                     & ((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U))) | 
                          (2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U)))) | 
                         (4U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                       >> 2U)))) | 
                        (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (1U | (0xfffffffcU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffff7U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                               > (7U & (vlSelfRef.fetch1[1U] 
                                        >> 0xcU))) 
                              << 3U));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffe0fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xfffffff0U & (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                                              << 7U) 
                                             | (0x70U 
                                                & (((IData)(1U) 
                                                    + 
                                                    ((vlSelfRef.fetch1[1U] 
                                                      << 0x14U) 
                                                     | (vlSelfRef.fetch1[1U] 
                                                        >> 0xcU))) 
                                                   << 4U)))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0x1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)((((QData)((IData)(
                                                         ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                           << 0x1bU) 
                                                          | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                             >> 5U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                            << 0x1bU) 
                                                           | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                              >> 5U)))))) 
                               << 0xcU) | (0xe00U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x10U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0x1ffU & ((IData)((((QData)((IData)(
                                                                ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                  << 0x1bU) 
                                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                    >> 5U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                     >> 5U)))))) 
                                      >> 0x14U)) | 
                           ((0xe00U & ((IData)((((QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                     >> 5U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                    << 0x1bU) 
                                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                      >> 5U)))))) 
                                       >> 0x14U)) | 
                            ((IData)(((((QData)((IData)(
                                                        ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                          << 0x1bU) 
                                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                            >> 5U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                      << 0x1bU) 
                                                                     | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                        >> 5U))))) 
                                      >> 0x20U)) << 0xcU)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & ((0x1ffU & ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                               >> 5U)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                              << 0x1bU) 
                                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                         >> 0x20U)) 
                                                >> 0x14U)) 
                                     | (0xe00U & ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                               << 0x1bU) 
                                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                                >> 5U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                                << 0x1bU) 
                                                                               | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                           >> 0x20U)) 
                                                  >> 0x14U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                    << 1U)));
                }
                if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                   >> 2U))) | (3U == 
                                               (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                        = (((QData)((IData)((0xfffffffU 
                                             & ((vlSelfRef.fetch1[3U] 
                                                 << 4U) 
                                                | (vlSelfRef.fetch1[2U] 
                                                   >> 0x1cU))))) 
                            << 9U) | (QData)((IData)(
                                                     (1U 
                                                      | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                                                          << 6U) 
                                                         | (0x3eU 
                                                            & vlSelfRef.fetch1[0U]))))));
                }
            } else if (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal 
                    = ((8U >= (0xfU & ((IData)(1U) 
                                       + (7U & (vlSelfRef.fetch1[1U] 
                                                >> 0xcU))))) 
                       && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                 >> (0xfU & ((IData)(1U) 
                                             + (7U 
                                                & (vlSelfRef.fetch1[1U] 
                                                   >> 0xcU)))))));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | ((QData)((IData)((0x1fU & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x13U)))) 
                          << 2U));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x100000000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | (0x180000000000ULL | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                               << 7U)));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                       | (0xe00U & (vlSelfRef.fetch1[2U] 
                                    >> 0x10U)));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                    = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                       | (0xfffff000U & ((0xffff8000U 
                                          & ((vlSelfRef.fetch1[3U] 
                                              << 0x14U) 
                                             | (0xf8000U 
                                                & (vlSelfRef.fetch1[2U] 
                                                   >> 0xcU)))) 
                                         | (0x7000U 
                                            & vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                    = (0xfffU & (vlSelfRef.fetch1[3U] 
                                 >> 0xcU));
                vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                vlSelfRef.__PVT__branchHandler__DOT__endOffs = 4U;
                if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal) {
                    vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__endOffs = 3U;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                              << 7U));
                }
            }
        }
    }
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [4U][0U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [4U][1U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [4U][2U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [4U][3U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple 
        = (3U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                 >> 3U));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch 
        = (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
           & (((1U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 2U))) | (3U == (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U)))) 
              | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                              >> 2U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC 
        = (4U | (0x7ffffff8U & ((vlSelfRef.fetch1[3U] 
                                 << 7U) | (0x78U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x19U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC 
        = (0x7fffffffU & ((IData)(1U) + __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted 
        = (IData)((0x4020U == (0x7060U & vlSelfRef.fetch1[1U])));
    if ((1U & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__decBranch_c)))) {
        if ((1U & (~ ((4U > (7U & (vlSelfRef.fetch1[2U] 
                                   >> 0xeU))) | (4U 
                                                 < 
                                                 (7U 
                                                  & (vlSelfRef.fetch1[2U] 
                                                     >> 0x19U))))))) {
            if (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) 
                 & (vlSelfRef.fetch1[1U] >> 7U))) {
                if ((1U & (((~ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                            | ((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                               != (3U & (vlSelfRef.fetch1[1U] 
                                         >> 9U)))) 
                           | ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                              & ((0x7fffffffU & ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                  << 0x1aU) 
                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                    >> 6U))) 
                                 != (0x7fffffffU & 
                                     ((vlSelfRef.fetch1[2U] 
                                       << 0x11U) | 
                                      (vlSelfRef.fetch1[1U] 
                                       >> 0xfU)))))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal 
                        = ((8U >= (0xfU & ((IData)(1U) 
                                           + (7U & 
                                              (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))))) 
                           && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                     >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 (7U 
                                                  & (vlSelfRef.fetch1[1U] 
                                                     >> 0xcU)))))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xe00U & (vlSelfRef.fetch1[2U] 
                                        >> 0x10U)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                           | (0xfffff000U & ((0xffff8000U 
                                              & ((vlSelfRef.fetch1[3U] 
                                                  << 0x14U) 
                                                 | (0xf8000U 
                                                    & (vlSelfRef.fetch1[2U] 
                                                       >> 0xcU)))) 
                                             | (0x7000U 
                                                & vlSelfRef.fetch1[1U]))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & (vlSelfRef.fetch1[3U] 
                                     >> 0xcU));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x200000000000ULL | (0x1c1ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(
                                                       (0x11U 
                                                        == 
                                                        (0x1dU 
                                                         & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])))
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                         & ((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                          >> 2U))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U)))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                            = (((QData)((IData)((0xfffffffU 
                                                 & ((vlSelfRef.fetch1[3U] 
                                                     << 4U) 
                                                    | (vlSelfRef.fetch1[2U] 
                                                       >> 0x1cU))))) 
                                << 9U) | (QData)((IData)(
                                                         (1U 
                                                          | ((0x1c0U 
                                                              & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                                                             | (0x3eU 
                                                                & vlSelfRef.fetch1[0U]))))));
                    }
                    if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                        if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                           >> 2U))) 
                             || (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                              >> 2U))))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x20000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        } else if ((7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 >> 2U)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x40000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        }
                    }
                    if ((1U & (((~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal)) 
                                & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                               & ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                                  | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                  >> 2U))))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0x7fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                              << 0x1bU) 
                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                >> 5U)))) 
                                            << 5U) 
                                           | (QData)((IData)(
                                                             ((0x1cU 
                                                               & (vlSelfRef.fetch1[2U] 
                                                                  >> 0x17U)) 
                                                              | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffff000U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (((IData)((((QData)((IData)(
                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                               << 0x1bU) 
                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                 >> 5U)))) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              ((0x1cU 
                                                                & (vlSelfRef.fetch1[2U] 
                                                                   >> 0x17U)) 
                                                               | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                   >> 0x19U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                               >> 5U)))) 
                                                           << 5U) 
                                                          | (QData)((IData)(
                                                                            ((0x1cU 
                                                                              & (vlSelfRef.fetch1[2U] 
                                                                                >> 0x17U)) 
                                                                             | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple))))) 
                                                         >> 0x20U)) 
                                                << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (0xfffff000U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                            = (0xfffU & ((0xf80U & 
                                          (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                           << 7U)) 
                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 0x19U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        << 1U)));
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)((0x7fffffffU 
                                                   & ((7U 
                                                       == 
                                                       (7U 
                                                        & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                           >> 2U)))
                                                       ? 
                                                      ((vlSelfRef.fetch1[1U] 
                                                        << 0x1aU) 
                                                       | (vlSelfRef.fetch1[0U] 
                                                          >> 6U))
                                                       : 
                                                      ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                        << 0x1aU) 
                                                       | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                          >> 6U)))))) 
                                  << 7U));
                    } else if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal) {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & (vlSelfRef.fetch1[1U] 
                                     >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        if ((7U != (7U & (vlSelfRef.fetch1[1U] 
                                          >> 0xcU)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                            vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                                = (7U & ((IData)(1U) 
                                         + ((vlSelfRef.fetch1[1U] 
                                             << 0x14U) 
                                            | (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))));
                        }
                    }
                }
            } else if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs 
                    = (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 6U));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly 
                    = (IData)(((0x10U == (0x1cU & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) 
                               & (0x60U == (0x60U & 
                                            vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken 
                    = ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly) 
                       & (vlSelfRef.fetch1[1U] >> 7U));
                if (((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                     >> 2U))) | (2U 
                                                 == 
                                                 (7U 
                                                  & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                     >> 2U)))) 
                      | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))) | (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c 
                        = vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x200000000000ULL | (0x1c7ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x7fffffffU 
                                               & ((7U 
                                                   == 
                                                   (7U 
                                                    & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                       >> 2U)))
                                                   ? 
                                                  ((vlSelfRef.fetch1[1U] 
                                                    << 0x1aU) 
                                                   | (vlSelfRef.fetch1[0U] 
                                                      >> 6U))
                                                   : 
                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                    << 0x1aU) 
                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                      >> 6U)))))) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken)
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((2U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : (
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                        >> 2U)))
                                                    ? 2U
                                                    : 0U)))) 
                              << 0x29U));
                } else if (((((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                              & (0x10U == (0x1cU & 
                                           __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]))) 
                             & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x200000000000ULL | (0x1c7ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((3U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x29U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((4U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                }
                if (((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                     & ((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U))) | 
                          (2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U)))) | 
                         (4U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                       >> 2U)))) | 
                        (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (1U | (0xfffffffcU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffff7U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                               > (7U & (vlSelfRef.fetch1[1U] 
                                        >> 0xcU))) 
                              << 3U));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffe0fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xfffffff0U & (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                                              << 7U) 
                                             | (0x70U 
                                                & (((IData)(1U) 
                                                    + 
                                                    ((vlSelfRef.fetch1[1U] 
                                                      << 0x14U) 
                                                     | (vlSelfRef.fetch1[1U] 
                                                        >> 0xcU))) 
                                                   << 4U)))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0x1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)((((QData)((IData)(
                                                         ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                           << 0x1bU) 
                                                          | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                             >> 5U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                            << 0x1bU) 
                                                           | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                              >> 5U)))))) 
                               << 0xcU) | (0xe00U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x10U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0x1ffU & ((IData)((((QData)((IData)(
                                                                ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                  << 0x1bU) 
                                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                    >> 5U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                     >> 5U)))))) 
                                      >> 0x14U)) | 
                           ((0xe00U & ((IData)((((QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                     >> 5U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                    << 0x1bU) 
                                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                      >> 5U)))))) 
                                       >> 0x14U)) | 
                            ((IData)(((((QData)((IData)(
                                                        ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                          << 0x1bU) 
                                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                            >> 5U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                      << 0x1bU) 
                                                                     | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                        >> 5U))))) 
                                      >> 0x20U)) << 0xcU)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & ((0x1ffU & ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                               >> 5U)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                              << 0x1bU) 
                                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                         >> 0x20U)) 
                                                >> 0x14U)) 
                                     | (0xe00U & ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                               << 0x1bU) 
                                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                                >> 5U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                                << 0x1bU) 
                                                                               | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                           >> 0x20U)) 
                                                  >> 0x14U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                    << 1U)));
                }
                if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                   >> 2U))) | (3U == 
                                               (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                        = (((QData)((IData)((0xfffffffU 
                                             & ((vlSelfRef.fetch1[3U] 
                                                 << 4U) 
                                                | (vlSelfRef.fetch1[2U] 
                                                   >> 0x1cU))))) 
                            << 9U) | (QData)((IData)(
                                                     (1U 
                                                      | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                                                          << 6U) 
                                                         | (0x3eU 
                                                            & vlSelfRef.fetch1[0U]))))));
                }
            } else if (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal 
                    = ((8U >= (0xfU & ((IData)(1U) 
                                       + (7U & (vlSelfRef.fetch1[1U] 
                                                >> 0xcU))))) 
                       && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                 >> (0xfU & ((IData)(1U) 
                                             + (7U 
                                                & (vlSelfRef.fetch1[1U] 
                                                   >> 0xcU)))))));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | ((QData)((IData)((0x1fU & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x13U)))) 
                          << 2U));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x100000000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | (0x200000000000ULL | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                               << 7U)));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                       | (0xe00U & (vlSelfRef.fetch1[2U] 
                                    >> 0x10U)));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                    = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                       | (0xfffff000U & ((0xffff8000U 
                                          & ((vlSelfRef.fetch1[3U] 
                                              << 0x14U) 
                                             | (0xf8000U 
                                                & (vlSelfRef.fetch1[2U] 
                                                   >> 0xcU)))) 
                                         | (0x7000U 
                                            & vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                    = (0xfffU & (vlSelfRef.fetch1[3U] 
                                 >> 0xcU));
                vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                vlSelfRef.__PVT__branchHandler__DOT__endOffs = 5U;
                if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal) {
                    vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__endOffs = 4U;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                              << 7U));
                }
            }
        }
    }
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [5U][0U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [5U][1U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [5U][2U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [5U][3U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple 
        = (3U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                 >> 3U));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch 
        = (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
           & (((1U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 2U))) | (3U == (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U)))) 
              | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                              >> 2U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC 
        = (5U | (0x7ffffff8U & ((vlSelfRef.fetch1[3U] 
                                 << 7U) | (0x78U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x19U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC 
        = (0x7fffffffU & ((IData)(1U) + __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted 
        = (IData)((0x5020U == (0x7060U & vlSelfRef.fetch1[1U])));
    if ((1U & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__decBranch_c)))) {
        if ((1U & (~ ((5U > (7U & (vlSelfRef.fetch1[2U] 
                                   >> 0xeU))) | (5U 
                                                 < 
                                                 (7U 
                                                  & (vlSelfRef.fetch1[2U] 
                                                     >> 0x19U))))))) {
            if (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) 
                 & (vlSelfRef.fetch1[1U] >> 7U))) {
                if ((1U & (((~ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                            | ((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                               != (3U & (vlSelfRef.fetch1[1U] 
                                         >> 9U)))) 
                           | ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                              & ((0x7fffffffU & ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                  << 0x1aU) 
                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                    >> 6U))) 
                                 != (0x7fffffffU & 
                                     ((vlSelfRef.fetch1[2U] 
                                       << 0x11U) | 
                                      (vlSelfRef.fetch1[1U] 
                                       >> 0xfU)))))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal 
                        = ((8U >= (0xfU & ((IData)(1U) 
                                           + (7U & 
                                              (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))))) 
                           && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                     >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 (7U 
                                                  & (vlSelfRef.fetch1[1U] 
                                                     >> 0xcU)))))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xe00U & (vlSelfRef.fetch1[2U] 
                                        >> 0x10U)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                           | (0xfffff000U & ((0xffff8000U 
                                              & ((vlSelfRef.fetch1[3U] 
                                                  << 0x14U) 
                                                 | (0xf8000U 
                                                    & (vlSelfRef.fetch1[2U] 
                                                       >> 0xcU)))) 
                                             | (0x7000U 
                                                & vlSelfRef.fetch1[1U]))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & (vlSelfRef.fetch1[3U] 
                                     >> 0xcU));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x280000000000ULL | (0x1c1ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(
                                                       (0x11U 
                                                        == 
                                                        (0x1dU 
                                                         & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])))
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                         & ((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                          >> 2U))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U)))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                            = (((QData)((IData)((0xfffffffU 
                                                 & ((vlSelfRef.fetch1[3U] 
                                                     << 4U) 
                                                    | (vlSelfRef.fetch1[2U] 
                                                       >> 0x1cU))))) 
                                << 9U) | (QData)((IData)(
                                                         (1U 
                                                          | ((0x1c0U 
                                                              & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                                                             | (0x3eU 
                                                                & vlSelfRef.fetch1[0U]))))));
                    }
                    if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                        if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                           >> 2U))) 
                             || (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                              >> 2U))))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x20000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        } else if ((7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 >> 2U)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x40000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        }
                    }
                    if ((1U & (((~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal)) 
                                & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                               & ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                                  | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                  >> 2U))))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0x7fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                              << 0x1bU) 
                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                >> 5U)))) 
                                            << 5U) 
                                           | (QData)((IData)(
                                                             ((0x1cU 
                                                               & (vlSelfRef.fetch1[2U] 
                                                                  >> 0x17U)) 
                                                              | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffff000U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (((IData)((((QData)((IData)(
                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                               << 0x1bU) 
                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                 >> 5U)))) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              ((0x1cU 
                                                                & (vlSelfRef.fetch1[2U] 
                                                                   >> 0x17U)) 
                                                               | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                   >> 0x19U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                               >> 5U)))) 
                                                           << 5U) 
                                                          | (QData)((IData)(
                                                                            ((0x1cU 
                                                                              & (vlSelfRef.fetch1[2U] 
                                                                                >> 0x17U)) 
                                                                             | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple))))) 
                                                         >> 0x20U)) 
                                                << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (0xfffff000U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                            = (0xfffU & ((0xf80U & 
                                          (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                           << 7U)) 
                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 0x19U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        << 1U)));
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)((0x7fffffffU 
                                                   & ((7U 
                                                       == 
                                                       (7U 
                                                        & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                           >> 2U)))
                                                       ? 
                                                      ((vlSelfRef.fetch1[1U] 
                                                        << 0x1aU) 
                                                       | (vlSelfRef.fetch1[0U] 
                                                          >> 6U))
                                                       : 
                                                      ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                        << 0x1aU) 
                                                       | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                          >> 6U)))))) 
                                  << 7U));
                    } else if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal) {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & (vlSelfRef.fetch1[1U] 
                                     >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        if ((7U != (7U & (vlSelfRef.fetch1[1U] 
                                          >> 0xcU)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                            vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                                = (7U & ((IData)(1U) 
                                         + ((vlSelfRef.fetch1[1U] 
                                             << 0x14U) 
                                            | (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))));
                        }
                    }
                }
            } else if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs 
                    = (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 6U));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly 
                    = (IData)(((0x10U == (0x1cU & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) 
                               & (0x60U == (0x60U & 
                                            vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken 
                    = ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly) 
                       & (vlSelfRef.fetch1[1U] >> 7U));
                if (((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                     >> 2U))) | (2U 
                                                 == 
                                                 (7U 
                                                  & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                     >> 2U)))) 
                      | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))) | (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c 
                        = vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x280000000000ULL | (0x1c7ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x7fffffffU 
                                               & ((7U 
                                                   == 
                                                   (7U 
                                                    & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                       >> 2U)))
                                                   ? 
                                                  ((vlSelfRef.fetch1[1U] 
                                                    << 0x1aU) 
                                                   | (vlSelfRef.fetch1[0U] 
                                                      >> 6U))
                                                   : 
                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                    << 0x1aU) 
                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                      >> 6U)))))) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken)
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((2U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : (
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                        >> 2U)))
                                                    ? 2U
                                                    : 0U)))) 
                              << 0x29U));
                } else if (((((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                              & (0x10U == (0x1cU & 
                                           __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]))) 
                             & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x280000000000ULL | (0x1c7ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((3U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x29U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((4U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                }
                if (((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                     & ((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U))) | 
                          (2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U)))) | 
                         (4U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                       >> 2U)))) | 
                        (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (1U | (0xfffffffcU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffff7U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                               > (7U & (vlSelfRef.fetch1[1U] 
                                        >> 0xcU))) 
                              << 3U));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffe0fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xfffffff0U & (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                                              << 7U) 
                                             | (0x70U 
                                                & (((IData)(1U) 
                                                    + 
                                                    ((vlSelfRef.fetch1[1U] 
                                                      << 0x14U) 
                                                     | (vlSelfRef.fetch1[1U] 
                                                        >> 0xcU))) 
                                                   << 4U)))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0x1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)((((QData)((IData)(
                                                         ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                           << 0x1bU) 
                                                          | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                             >> 5U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                            << 0x1bU) 
                                                           | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                              >> 5U)))))) 
                               << 0xcU) | (0xe00U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x10U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0x1ffU & ((IData)((((QData)((IData)(
                                                                ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                  << 0x1bU) 
                                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                    >> 5U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                     >> 5U)))))) 
                                      >> 0x14U)) | 
                           ((0xe00U & ((IData)((((QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                     >> 5U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                    << 0x1bU) 
                                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                      >> 5U)))))) 
                                       >> 0x14U)) | 
                            ((IData)(((((QData)((IData)(
                                                        ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                          << 0x1bU) 
                                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                            >> 5U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                      << 0x1bU) 
                                                                     | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                        >> 5U))))) 
                                      >> 0x20U)) << 0xcU)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & ((0x1ffU & ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                               >> 5U)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                              << 0x1bU) 
                                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                         >> 0x20U)) 
                                                >> 0x14U)) 
                                     | (0xe00U & ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                               << 0x1bU) 
                                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                                >> 5U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                                << 0x1bU) 
                                                                               | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                           >> 0x20U)) 
                                                  >> 0x14U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                    << 1U)));
                }
                if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                   >> 2U))) | (3U == 
                                               (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                        = (((QData)((IData)((0xfffffffU 
                                             & ((vlSelfRef.fetch1[3U] 
                                                 << 4U) 
                                                | (vlSelfRef.fetch1[2U] 
                                                   >> 0x1cU))))) 
                            << 9U) | (QData)((IData)(
                                                     (1U 
                                                      | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                                                          << 6U) 
                                                         | (0x3eU 
                                                            & vlSelfRef.fetch1[0U]))))));
                }
            } else if (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal 
                    = ((8U >= (0xfU & ((IData)(1U) 
                                       + (7U & (vlSelfRef.fetch1[1U] 
                                                >> 0xcU))))) 
                       && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                 >> (0xfU & ((IData)(1U) 
                                             + (7U 
                                                & (vlSelfRef.fetch1[1U] 
                                                   >> 0xcU)))))));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | ((QData)((IData)((0x1fU & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x13U)))) 
                          << 2U));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x100000000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | (0x280000000000ULL | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                               << 7U)));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                       | (0xe00U & (vlSelfRef.fetch1[2U] 
                                    >> 0x10U)));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                    = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                       | (0xfffff000U & ((0xffff8000U 
                                          & ((vlSelfRef.fetch1[3U] 
                                              << 0x14U) 
                                             | (0xf8000U 
                                                & (vlSelfRef.fetch1[2U] 
                                                   >> 0xcU)))) 
                                         | (0x7000U 
                                            & vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                    = (0xfffU & (vlSelfRef.fetch1[3U] 
                                 >> 0xcU));
                vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                vlSelfRef.__PVT__branchHandler__DOT__endOffs = 6U;
                if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal) {
                    vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__endOffs = 5U;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                              << 7U));
                }
            }
        }
    }
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [6U][0U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [6U][1U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [6U][2U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [6U][3U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple 
        = (3U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                 >> 3U));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch 
        = (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
           & (((1U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 2U))) | (3U == (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U)))) 
              | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                              >> 2U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC 
        = (6U | (0x7ffffff8U & ((vlSelfRef.fetch1[3U] 
                                 << 7U) | (0x78U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x19U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC 
        = (0x7fffffffU & ((IData)(1U) + __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted 
        = (IData)((0x6020U == (0x7060U & vlSelfRef.fetch1[1U])));
    if ((1U & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__decBranch_c)))) {
        if ((1U & (~ ((6U > (7U & (vlSelfRef.fetch1[2U] 
                                   >> 0xeU))) | (6U 
                                                 < 
                                                 (7U 
                                                  & (vlSelfRef.fetch1[2U] 
                                                     >> 0x19U))))))) {
            if (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) 
                 & (vlSelfRef.fetch1[1U] >> 7U))) {
                if ((1U & (((~ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                            | ((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                               != (3U & (vlSelfRef.fetch1[1U] 
                                         >> 9U)))) 
                           | ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                              & ((0x7fffffffU & ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                  << 0x1aU) 
                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                    >> 6U))) 
                                 != (0x7fffffffU & 
                                     ((vlSelfRef.fetch1[2U] 
                                       << 0x11U) | 
                                      (vlSelfRef.fetch1[1U] 
                                       >> 0xfU)))))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal 
                        = ((8U >= (0xfU & ((IData)(1U) 
                                           + (7U & 
                                              (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))))) 
                           && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                     >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 (7U 
                                                  & (vlSelfRef.fetch1[1U] 
                                                     >> 0xcU)))))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xe00U & (vlSelfRef.fetch1[2U] 
                                        >> 0x10U)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                           | (0xfffff000U & ((0xffff8000U 
                                              & ((vlSelfRef.fetch1[3U] 
                                                  << 0x14U) 
                                                 | (0xf8000U 
                                                    & (vlSelfRef.fetch1[2U] 
                                                       >> 0xcU)))) 
                                             | (0x7000U 
                                                & vlSelfRef.fetch1[1U]))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & (vlSelfRef.fetch1[3U] 
                                     >> 0xcU));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x300000000000ULL | (0x1c1ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(
                                                       (0x11U 
                                                        == 
                                                        (0x1dU 
                                                         & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])))
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                         & ((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                          >> 2U))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U)))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                            = (((QData)((IData)((0xfffffffU 
                                                 & ((vlSelfRef.fetch1[3U] 
                                                     << 4U) 
                                                    | (vlSelfRef.fetch1[2U] 
                                                       >> 0x1cU))))) 
                                << 9U) | (QData)((IData)(
                                                         (1U 
                                                          | ((0x1c0U 
                                                              & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                                                             | (0x3eU 
                                                                & vlSelfRef.fetch1[0U]))))));
                    }
                    if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                        if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                           >> 2U))) 
                             || (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                              >> 2U))))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x20000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        } else if ((7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 >> 2U)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x40000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        }
                    }
                    if ((1U & (((~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal)) 
                                & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                               & ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                                  | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                  >> 2U))))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0x7fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                              << 0x1bU) 
                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                >> 5U)))) 
                                            << 5U) 
                                           | (QData)((IData)(
                                                             ((0x1cU 
                                                               & (vlSelfRef.fetch1[2U] 
                                                                  >> 0x17U)) 
                                                              | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffff000U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (((IData)((((QData)((IData)(
                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                               << 0x1bU) 
                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                 >> 5U)))) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              ((0x1cU 
                                                                & (vlSelfRef.fetch1[2U] 
                                                                   >> 0x17U)) 
                                                               | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                   >> 0x19U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                               >> 5U)))) 
                                                           << 5U) 
                                                          | (QData)((IData)(
                                                                            ((0x1cU 
                                                                              & (vlSelfRef.fetch1[2U] 
                                                                                >> 0x17U)) 
                                                                             | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple))))) 
                                                         >> 0x20U)) 
                                                << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (0xfffff000U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                            = (0xfffU & ((0xf80U & 
                                          (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                           << 7U)) 
                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 0x19U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        << 1U)));
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)((0x7fffffffU 
                                                   & ((7U 
                                                       == 
                                                       (7U 
                                                        & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                           >> 2U)))
                                                       ? 
                                                      ((vlSelfRef.fetch1[1U] 
                                                        << 0x1aU) 
                                                       | (vlSelfRef.fetch1[0U] 
                                                          >> 6U))
                                                       : 
                                                      ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                        << 0x1aU) 
                                                       | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                          >> 6U)))))) 
                                  << 7U));
                    } else if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal) {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & (vlSelfRef.fetch1[1U] 
                                     >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        if ((7U != (7U & (vlSelfRef.fetch1[1U] 
                                          >> 0xcU)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                            vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                                = (7U & ((IData)(1U) 
                                         + ((vlSelfRef.fetch1[1U] 
                                             << 0x14U) 
                                            | (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))));
                        }
                    }
                }
            } else if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs 
                    = (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 6U));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly 
                    = (IData)(((0x10U == (0x1cU & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) 
                               & (0x60U == (0x60U & 
                                            vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken 
                    = ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly) 
                       & (vlSelfRef.fetch1[1U] >> 7U));
                if (((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                     >> 2U))) | (2U 
                                                 == 
                                                 (7U 
                                                  & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                     >> 2U)))) 
                      | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))) | (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c 
                        = vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x300000000000ULL | (0x1c7ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x7fffffffU 
                                               & ((7U 
                                                   == 
                                                   (7U 
                                                    & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                       >> 2U)))
                                                   ? 
                                                  ((vlSelfRef.fetch1[1U] 
                                                    << 0x1aU) 
                                                   | (vlSelfRef.fetch1[0U] 
                                                      >> 6U))
                                                   : 
                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                    << 0x1aU) 
                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                      >> 6U)))))) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken)
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((2U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : (
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                        >> 2U)))
                                                    ? 2U
                                                    : 0U)))) 
                              << 0x29U));
                } else if (((((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                              & (0x10U == (0x1cU & 
                                           __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]))) 
                             & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x300000000000ULL | (0x1c7ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((3U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x29U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((4U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                }
                if (((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                     & ((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U))) | 
                          (2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U)))) | 
                         (4U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                       >> 2U)))) | 
                        (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (1U | (0xfffffffcU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffff7U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                               > (7U & (vlSelfRef.fetch1[1U] 
                                        >> 0xcU))) 
                              << 3U));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffe0fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xfffffff0U & (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                                              << 7U) 
                                             | (0x70U 
                                                & (((IData)(1U) 
                                                    + 
                                                    ((vlSelfRef.fetch1[1U] 
                                                      << 0x14U) 
                                                     | (vlSelfRef.fetch1[1U] 
                                                        >> 0xcU))) 
                                                   << 4U)))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0x1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)((((QData)((IData)(
                                                         ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                           << 0x1bU) 
                                                          | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                             >> 5U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                            << 0x1bU) 
                                                           | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                              >> 5U)))))) 
                               << 0xcU) | (0xe00U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x10U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0x1ffU & ((IData)((((QData)((IData)(
                                                                ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                  << 0x1bU) 
                                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                    >> 5U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                     >> 5U)))))) 
                                      >> 0x14U)) | 
                           ((0xe00U & ((IData)((((QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                     >> 5U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                    << 0x1bU) 
                                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                      >> 5U)))))) 
                                       >> 0x14U)) | 
                            ((IData)(((((QData)((IData)(
                                                        ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                          << 0x1bU) 
                                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                            >> 5U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                      << 0x1bU) 
                                                                     | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                        >> 5U))))) 
                                      >> 0x20U)) << 0xcU)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & ((0x1ffU & ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                               >> 5U)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                              << 0x1bU) 
                                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                         >> 0x20U)) 
                                                >> 0x14U)) 
                                     | (0xe00U & ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                               << 0x1bU) 
                                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                                >> 5U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                                << 0x1bU) 
                                                                               | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                           >> 0x20U)) 
                                                  >> 0x14U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                    << 1U)));
                }
                if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                   >> 2U))) | (3U == 
                                               (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                        = (((QData)((IData)((0xfffffffU 
                                             & ((vlSelfRef.fetch1[3U] 
                                                 << 4U) 
                                                | (vlSelfRef.fetch1[2U] 
                                                   >> 0x1cU))))) 
                            << 9U) | (QData)((IData)(
                                                     (1U 
                                                      | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                                                          << 6U) 
                                                         | (0x3eU 
                                                            & vlSelfRef.fetch1[0U]))))));
                }
            } else if (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal 
                    = ((8U >= (0xfU & ((IData)(1U) 
                                       + (7U & (vlSelfRef.fetch1[1U] 
                                                >> 0xcU))))) 
                       && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                 >> (0xfU & ((IData)(1U) 
                                             + (7U 
                                                & (vlSelfRef.fetch1[1U] 
                                                   >> 0xcU)))))));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | ((QData)((IData)((0x1fU & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x13U)))) 
                          << 2U));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x100000000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | (0x300000000000ULL | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                               << 7U)));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                       | (0xe00U & (vlSelfRef.fetch1[2U] 
                                    >> 0x10U)));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                    = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                       | (0xfffff000U & ((0xffff8000U 
                                          & ((vlSelfRef.fetch1[3U] 
                                              << 0x14U) 
                                             | (0xf8000U 
                                                & (vlSelfRef.fetch1[2U] 
                                                   >> 0xcU)))) 
                                         | (0x7000U 
                                            & vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                    = (0xfffU & (vlSelfRef.fetch1[3U] 
                                 >> 0xcU));
                vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                vlSelfRef.__PVT__branchHandler__DOT__endOffs = 7U;
                if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal) {
                    vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__endOffs = 6U;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                              << 7U));
                }
            }
        }
    }
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [7U][0U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [7U][1U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [7U][2U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [7U][3U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple 
        = (3U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                 >> 3U));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch 
        = (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
           & (((1U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 2U))) | (3U == (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U)))) 
              | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                              >> 2U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC 
        = (7U | (0x7ffffff8U & ((vlSelfRef.fetch1[3U] 
                                 << 7U) | (0x78U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x19U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC 
        = (0x7fffffffU & ((IData)(1U) + __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted 
        = (IData)((0x7020U == (0x7060U & vlSelfRef.fetch1[1U])));
    if ((1U & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__decBranch_c)))) {
        if ((7U <= (7U & (vlSelfRef.fetch1[2U] >> 0xeU)))) {
            if (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) 
                 & (vlSelfRef.fetch1[1U] >> 7U))) {
                if ((1U & (((~ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                            | ((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                               != (3U & (vlSelfRef.fetch1[1U] 
                                         >> 9U)))) 
                           | ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                              & ((0x7fffffffU & ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                  << 0x1aU) 
                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                    >> 6U))) 
                                 != (0x7fffffffU & 
                                     ((vlSelfRef.fetch1[2U] 
                                       << 0x11U) | 
                                      (vlSelfRef.fetch1[1U] 
                                       >> 0xfU)))))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal 
                        = ((8U >= (0xfU & ((IData)(1U) 
                                           + (7U & 
                                              (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))))) 
                           && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                     >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 (7U 
                                                  & (vlSelfRef.fetch1[1U] 
                                                     >> 0xcU)))))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xe00U & (vlSelfRef.fetch1[2U] 
                                        >> 0x10U)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                           | (0xfffff000U & ((0xffff8000U 
                                              & ((vlSelfRef.fetch1[3U] 
                                                  << 0x14U) 
                                                 | (0xf8000U 
                                                    & (vlSelfRef.fetch1[2U] 
                                                       >> 0xcU)))) 
                                             | (0x7000U 
                                                & vlSelfRef.fetch1[1U]))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & (vlSelfRef.fetch1[3U] 
                                     >> 0xcU));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x380000000000ULL | (0x1c1ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(
                                                       (0x11U 
                                                        == 
                                                        (0x1dU 
                                                         & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])))
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                         & ((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                          >> 2U))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U)))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                            = (((QData)((IData)((0xfffffffU 
                                                 & ((vlSelfRef.fetch1[3U] 
                                                     << 4U) 
                                                    | (vlSelfRef.fetch1[2U] 
                                                       >> 0x1cU))))) 
                                << 9U) | (QData)((IData)(
                                                         (1U 
                                                          | ((0x1c0U 
                                                              & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                                                             | (0x3eU 
                                                                & vlSelfRef.fetch1[0U]))))));
                    }
                    if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                        if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                           >> 2U))) 
                             || (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                              >> 2U))))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x20000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        } else if ((7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 >> 2U)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x40000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        }
                    }
                    if ((1U & (((~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal)) 
                                & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                               & ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                                  | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                  >> 2U))))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0x7fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                              << 0x1bU) 
                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                >> 5U)))) 
                                            << 5U) 
                                           | (QData)((IData)(
                                                             ((0x1cU 
                                                               & (vlSelfRef.fetch1[2U] 
                                                                  >> 0x17U)) 
                                                              | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffff000U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (((IData)((((QData)((IData)(
                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                               << 0x1bU) 
                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                 >> 5U)))) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              ((0x1cU 
                                                                & (vlSelfRef.fetch1[2U] 
                                                                   >> 0x17U)) 
                                                               | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                   >> 0x19U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                               >> 5U)))) 
                                                           << 5U) 
                                                          | (QData)((IData)(
                                                                            ((0x1cU 
                                                                              & (vlSelfRef.fetch1[2U] 
                                                                                >> 0x17U)) 
                                                                             | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple))))) 
                                                         >> 0x20U)) 
                                                << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (0xfffff000U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                            = (0xfffU & ((0xf80U & 
                                          (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                           << 7U)) 
                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 0x19U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        << 1U)));
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)((0x7fffffffU 
                                                   & ((7U 
                                                       == 
                                                       (7U 
                                                        & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                           >> 2U)))
                                                       ? 
                                                      ((vlSelfRef.fetch1[1U] 
                                                        << 0x1aU) 
                                                       | (vlSelfRef.fetch1[0U] 
                                                          >> 6U))
                                                       : 
                                                      ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                        << 0x1aU) 
                                                       | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                          >> 6U)))))) 
                                  << 7U));
                    } else if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal) {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & (vlSelfRef.fetch1[1U] 
                                     >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        if ((7U != (7U & (vlSelfRef.fetch1[1U] 
                                          >> 0xcU)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                            vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                                = (7U & ((IData)(1U) 
                                         + ((vlSelfRef.fetch1[1U] 
                                             << 0x14U) 
                                            | (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))));
                        }
                    }
                }
            } else if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs 
                    = (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 6U));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly 
                    = (IData)(((0x10U == (0x1cU & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) 
                               & (0x60U == (0x60U & 
                                            vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken 
                    = ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly) 
                       & (vlSelfRef.fetch1[1U] >> 7U));
                if (((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                     >> 2U))) | (2U 
                                                 == 
                                                 (7U 
                                                  & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                     >> 2U)))) 
                      | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))) | (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c 
                        = vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x380000000000ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x7fffffffU 
                                               & ((7U 
                                                   == 
                                                   (7U 
                                                    & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                       >> 2U)))
                                                   ? 
                                                  ((vlSelfRef.fetch1[1U] 
                                                    << 0x1aU) 
                                                   | (vlSelfRef.fetch1[0U] 
                                                      >> 6U))
                                                   : 
                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                    << 0x1aU) 
                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                      >> 6U)))))) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken)
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((2U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : (
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                        >> 2U)))
                                                    ? 2U
                                                    : 0U)))) 
                              << 0x29U));
                } else if (((((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                              & (0x10U == (0x1cU & 
                                           __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]))) 
                             & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x380000000000ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((3U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x29U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((4U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                }
                if (((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                     & ((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U))) | 
                          (2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U)))) | 
                         (4U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                       >> 2U)))) | 
                        (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (1U | (0xfffffffcU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffff7U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                               > (7U & (vlSelfRef.fetch1[1U] 
                                        >> 0xcU))) 
                              << 3U));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffe0fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xfffffff0U & (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                                              << 7U) 
                                             | (0x70U 
                                                & (((IData)(1U) 
                                                    + 
                                                    ((vlSelfRef.fetch1[1U] 
                                                      << 0x14U) 
                                                     | (vlSelfRef.fetch1[1U] 
                                                        >> 0xcU))) 
                                                   << 4U)))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0x1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)((((QData)((IData)(
                                                         ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                           << 0x1bU) 
                                                          | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                             >> 5U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                            << 0x1bU) 
                                                           | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                              >> 5U)))))) 
                               << 0xcU) | (0xe00U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x10U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0x1ffU & ((IData)((((QData)((IData)(
                                                                ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                  << 0x1bU) 
                                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                    >> 5U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                     >> 5U)))))) 
                                      >> 0x14U)) | 
                           ((0xe00U & ((IData)((((QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                     >> 5U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                    << 0x1bU) 
                                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                      >> 5U)))))) 
                                       >> 0x14U)) | 
                            ((IData)(((((QData)((IData)(
                                                        ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                          << 0x1bU) 
                                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                            >> 5U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                      << 0x1bU) 
                                                                     | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                        >> 5U))))) 
                                      >> 0x20U)) << 0xcU)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & ((0x1ffU & ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                               >> 5U)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                              << 0x1bU) 
                                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                         >> 0x20U)) 
                                                >> 0x14U)) 
                                     | (0xe00U & ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                               << 0x1bU) 
                                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                                >> 5U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                                << 0x1bU) 
                                                                               | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                           >> 0x20U)) 
                                                  >> 0x14U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                    << 1U)));
                }
                if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                   >> 2U))) | (3U == 
                                               (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                        = (((QData)((IData)((0xfffffffU 
                                             & ((vlSelfRef.fetch1[3U] 
                                                 << 4U) 
                                                | (vlSelfRef.fetch1[2U] 
                                                   >> 0x1cU))))) 
                            << 9U) | (QData)((IData)(
                                                     (1U 
                                                      | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                                                          << 6U) 
                                                         | (0x3eU 
                                                            & vlSelfRef.fetch1[0U]))))));
                }
            } else if (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal 
                    = ((8U >= (0xfU & ((IData)(1U) 
                                       + (7U & (vlSelfRef.fetch1[1U] 
                                                >> 0xcU))))) 
                       && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                 >> (0xfU & ((IData)(1U) 
                                             + (7U 
                                                & (vlSelfRef.fetch1[1U] 
                                                   >> 0xcU)))))));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | ((QData)((IData)((0x1fU & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x13U)))) 
                          << 2U));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x100000000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | (0x380000000000ULL | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                               << 7U)));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                       | (0xe00U & (vlSelfRef.fetch1[2U] 
                                    >> 0x10U)));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                    = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                       | (0xfffff000U & ((0xffff8000U 
                                          & ((vlSelfRef.fetch1[3U] 
                                              << 0x14U) 
                                             | (0xf8000U 
                                                & (vlSelfRef.fetch1[2U] 
                                                   >> 0xcU)))) 
                                         | (0x7000U 
                                            & vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                    = (0xfffU & (vlSelfRef.fetch1[3U] 
                                 >> 0xcU));
                if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal) {
                    vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__endOffs = 7U;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                              << 7U));
                }
            }
        }
    }
}
