// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_SoC.h"
#include "VTop__Syms.h"

extern const VlWide<8>/*255:0*/ VTop__ConstPool__CONST_hbd3d39cf_0;

VL_ATTR_COLD void VTop_SoC___stl_sequent__TOP__Top__soc__0(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___stl_sequent__TOP__Top__soc__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vlvbound_head56157__0;
    __Vlvbound_head56157__0 = 0;
    CData/*0:0*/ __PVT__memc__DOT__arIdxValid;
    __PVT__memc__DOT__arIdxValid = 0;
    CData/*0:0*/ __PVT__memc__DOT__ICW_valid;
    __PVT__memc__DOT__ICW_valid = 0;
    SData/*11:0*/ __PVT__memc__DOT__ICW_addr;
    __PVT__memc__DOT__ICW_addr = 0;
    VlWide<4>/*127:0*/ __PVT__memc__DOT__ICW_data;
    VL_ZERO_W(128, __PVT__memc__DOT__ICW_data);
    CData/*1:0*/ __PVT__memc__DOT__ICW_id;
    __PVT__memc__DOT__ICW_id = 0;
    CData/*0:0*/ __PVT__memc__DOT__DCW_valid;
    __PVT__memc__DOT__DCW_valid = 0;
    SData/*11:0*/ __PVT__memc__DOT__DCW_addr;
    __PVT__memc__DOT__DCW_addr = 0;
    VlWide<4>/*127:0*/ __PVT__memc__DOT__DCW_data;
    VL_ZERO_W(128, __PVT__memc__DOT__DCW_data);
    CData/*1:0*/ __PVT__memc__DOT__DCW_id;
    __PVT__memc__DOT__DCW_id = 0;
    SData/*11:0*/ memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_addr;
    memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_addr = 0;
    CData/*0:0*/ memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_we;
    memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_we = 0;
    CData/*0:0*/ memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_ce;
    memc__DOT____Vcellout__dcacheReadIF__OUT_CACHE_ce = 0;
    CData/*0:0*/ __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl;
    __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl = 0;
    CData/*0:0*/ __PVT__memc__DOT__unnamedblk11__DOT__isExclusive;
    __PVT__memc__DOT__unnamedblk11__DOT__isExclusive = 0;
    VlWide<4>/*127:0*/ __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data;
    VL_ZERO_W(128, __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data);
    CData/*1:0*/ __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_id;
    __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_id = 0;
    CData/*0:0*/ __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_last;
    __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_last = 0;
    CData/*0:0*/ __PVT__memc__DOT__dcacheReadIF__DOT__allowNewRead;
    __PVT__memc__DOT__dcacheReadIF__DOT__allowNewRead = 0;
    CData/*5:0*/ __PVT__memc__DOT__dcacheReadIF__DOT__unnamedblk1__DOT__inFlight;
    __PVT__memc__DOT__dcacheReadIF__DOT__unnamedblk1__DOT__inFlight = 0;
    VlWide<16>/*511:0*/ dcacheArb__DOT____Vlvbound_h89b306c0__0;
    VL_ZERO_W(512, dcacheArb__DOT____Vlvbound_h89b306c0__0);
    CData/*31:0*/ __Vtemp_6;
    CData/*31:0*/ __Vtemp_7;
    CData/*31:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    CData/*31:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    CData/*31:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    CData/*31:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_33;
    // Body
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
    vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__equal 
        = ((IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__indexIn) 
           == (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__indexOut));
    vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__equal 
        = ((IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__indexIn) 
           == (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__indexOut));
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
    vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__equal = 
        ((IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__indexIn) 
         == (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__indexOut));
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__equal 
        = ((IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexIn) 
           == (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexOut));
    vlSymsp->TOP__Top__soc__IF_mmio.__PVT__rdata = 0U;
    if (vlSelfRef.__PVT__mmio__DOT__aclintRValid) {
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__rdata 
            = vlSelfRef.__PVT__mmio__DOT__aclintData;
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
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[0U] 
        = vlSymsp->TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable.__PVT__OUT_data[0U];
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[1U] 
        = vlSymsp->TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable.__PVT__OUT_data[1U];
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[2U] 
        = ((0xfff00000U & vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[2U]) 
           | vlSymsp->TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable.__PVT__OUT_data[2U]);
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__ridx = ((0x3cU 
                                                  & (IData)(vlSymsp->TOP__Top__soc__IF_ct.__PVT__ridx)) 
                                                 | (IData)(vlSymsp->TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt.__PVT__OUT_data));
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[2U] 
        = ((0xfffffU & vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[2U]) 
           | (vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable.__PVT__OUT_data[0U] 
              << 0x14U));
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[3U] 
        = ((vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable.__PVT__OUT_data[0U] 
            >> 0xcU) | (vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable.__PVT__OUT_data[1U] 
                        << 0x14U));
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[4U] 
        = ((vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable.__PVT__OUT_data[1U] 
            >> 0xcU) | (vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable.__PVT__OUT_data[2U] 
                        << 0x14U));
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[5U] 
        = ((0xffffff00U & vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[5U]) 
           | (vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable.__PVT__OUT_data[2U] 
              >> 0xcU));
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__ridx = ((0x33U 
                                                  & (IData)(vlSymsp->TOP__Top__soc__IF_ct.__PVT__ridx)) 
                                                 | ((IData)(vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt.__PVT__OUT_data) 
                                                    << 2U));
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[5U] 
        = ((0xffU & vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[5U]) 
           | (vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable.__PVT__OUT_data[0U] 
              << 8U));
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[6U] 
        = ((vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable.__PVT__OUT_data[0U] 
            >> 0x18U) | (vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable.__PVT__OUT_data[1U] 
                         << 8U));
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__rdata[7U] 
        = (0xfffffffU & ((vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable.__PVT__OUT_data[1U] 
                          >> 0x18U) | (vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable.__PVT__OUT_data[2U] 
                                       << 8U)));
    vlSymsp->TOP__Top__soc__IF_ct.__PVT__ridx = ((0xfU 
                                                  & (IData)(vlSymsp->TOP__Top__soc__IF_ct.__PVT__ridx)) 
                                                 | ((IData)(vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt.__PVT__OUT_data) 
                                                    << 4U));
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
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outputReady 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outValidReg)) 
                 | (IData)(vlSymsp->TOP__Top__extMem.__PVT__s_axi_wready)));
    vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__outputReady 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__outValidReg)) 
                 | (IData)(vlSymsp->TOP__Top__extMem.__PVT__s_axi_arready)));
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
    vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__fullCond)) 
           & (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__equal));
    vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__fullCond)) 
           & (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__equal));
    vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__fullCond)) 
         & (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__equal));
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__fullCond)) 
           & (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__equal));
    vlSelfRef.__PVT__memc__DOT__axiAR = 0ULL;
    vlSelfRef.__PVT__memc__DOT__axiAR = (0x1ffffffffffffeULL 
                                         & vlSelfRef.__PVT__memc__DOT__axiAR);
    vlSelfRef.__PVT__memc__DOT__arIdx = 0U;
    __PVT__memc__DOT__arIdxValid = 0U;
    if ((1U & (vlSelfRef.__PVT__memc__DOT__transfers
               [0U][0U] & (vlSelfRef.__PVT__memc__DOT__transfers
                           [0U][0U] >> 0xaU)))) {
        vlSelfRef.__PVT__memc__DOT__arIdx = 0U;
        __PVT__memc__DOT__arIdxValid = 1U;
    }
    if ((1U & (((~ (IData)(__PVT__memc__DOT__arIdxValid)) 
                & vlSelfRef.__PVT__memc__DOT__transfers
                [1U][0U]) & (vlSelfRef.__PVT__memc__DOT__transfers
                             [1U][0U] >> 0xaU)))) {
        vlSelfRef.__PVT__memc__DOT__arIdx = 1U;
        __PVT__memc__DOT__arIdxValid = 1U;
    }
    if ((1U & (((~ (IData)(__PVT__memc__DOT__arIdxValid)) 
                & vlSelfRef.__PVT__memc__DOT__transfers
                [2U][0U]) & (vlSelfRef.__PVT__memc__DOT__transfers
                             [2U][0U] >> 0xaU)))) {
        vlSelfRef.__PVT__memc__DOT__arIdx = 2U;
        __PVT__memc__DOT__arIdxValid = 1U;
    }
    if ((1U & (((~ (IData)(__PVT__memc__DOT__arIdxValid)) 
                & vlSelfRef.__PVT__memc__DOT__transfers
                [3U][0U]) & (vlSelfRef.__PVT__memc__DOT__transfers
                             [3U][0U] >> 0xaU)))) {
        vlSelfRef.__PVT__memc__DOT__arIdx = 3U;
        __PVT__memc__DOT__arIdxValid = 1U;
    }
    if (__PVT__memc__DOT__arIdxValid) {
        vlSelfRef.__PVT__memc__DOT__axiAR = (1ULL | vlSelfRef.__PVT__memc__DOT__axiAR);
        vlSelfRef.__PVT__memc__DOT__axiAR = ((0x1fffffffffff3fULL 
                                              & vlSelfRef.__PVT__memc__DOT__axiAR) 
                                             | ((QData)((IData)(
                                                                ((1U 
                                                                  & ((IData)(vlSelfRef.__PVT__memc__DOT__isMMIO) 
                                                                     >> (IData)(vlSelfRef.__PVT__memc__DOT__arIdx)))
                                                                  ? 0U
                                                                  : 2U))) 
                                                << 6U));
        vlSelfRef.__PVT__memc__DOT__axiAR = ((0x1ffffffff807ffULL 
                                              & vlSelfRef.__PVT__memc__DOT__axiAR) 
                                             | ((QData)((IData)(
                                                                ((1U 
                                                                  & ((IData)(vlSelfRef.__PVT__memc__DOT__isMMIO) 
                                                                     >> (IData)(vlSelfRef.__PVT__memc__DOT__arIdx)))
                                                                  ? 0U
                                                                  : 3U))) 
                                                << 0xbU));
        vlSelfRef.__PVT__memc__DOT__axiAR = ((0x7ffffULL 
                                              & vlSelfRef.__PVT__memc__DOT__axiAR) 
                                             | (((QData)((IData)(vlSelfRef.__PVT__memc__DOT__arIdx)) 
                                                 << 0x33U) 
                                                | ((QData)((IData)(
                                                                   ((vlSelfRef.__PVT__memc__DOT__transfers
                                                                     [vlSelfRef.__PVT__memc__DOT__arIdx][2U] 
                                                                     << 0x15U) 
                                                                    | (vlSelfRef.__PVT__memc__DOT__transfers
                                                                       [vlSelfRef.__PVT__memc__DOT__arIdx][1U] 
                                                                       >> 0xbU)))) 
                                                   << 0x13U)));
        vlSelfRef.__PVT__memc__DOT__axiAR = ((0x1ffffffffff8ffULL 
                                              & vlSelfRef.__PVT__memc__DOT__axiAR) 
                                             | ((QData)((IData)(
                                                                ((4U 
                                                                  == 
                                                                  (0xfU 
                                                                   & (vlSelfRef.__PVT__memc__DOT__transfers
                                                                      [vlSelfRef.__PVT__memc__DOT__arIdx][0U] 
                                                                      >> 1U)))
                                                                  ? 0U
                                                                  : 
                                                                 ((5U 
                                                                   == 
                                                                   (0xfU 
                                                                    & (vlSelfRef.__PVT__memc__DOT__transfers
                                                                       [vlSelfRef.__PVT__memc__DOT__arIdx][0U] 
                                                                       >> 1U)))
                                                                   ? 1U
                                                                   : 
                                                                  ((6U 
                                                                    == 
                                                                    (0xfU 
                                                                     & (vlSelfRef.__PVT__memc__DOT__transfers
                                                                        [vlSelfRef.__PVT__memc__DOT__arIdx][0U] 
                                                                        >> 1U)))
                                                                    ? 2U
                                                                    : 4U))))) 
                                                << 8U));
    }
    __PVT__memc__DOT__unnamedblk11__DOT__isExclusive = 0U;
    vlSelfRef.__PVT__memc__DOT__axiAW = 0ULL;
    vlSelfRef.__PVT__memc__DOT__axiAW = (0x1ffffffffffffeULL 
                                         & vlSelfRef.__PVT__memc__DOT__axiAW);
    vlSelfRef.__PVT__memc__DOT__DCR_reqAddr = 0U;
    vlSelfRef.__PVT__memc__DOT__DCR_reqLen = 0U;
    vlSelfRef.__PVT__memc__DOT__DCR_reqTId = 0U;
    vlSelfRef.__PVT__memc__DOT__DCR_reqMMIOData = 0U;
    vlSelfRef.__PVT__memc__DOT__DCR_reqMMIO = 0U;
    vlSelfRef.__PVT__memc__DOT__DCR_reqValid = 0U;
    vlSelfRef.__PVT__memc__DOT__awIdx = 0U;
    vlSelfRef.__PVT__memc__DOT__awIdxValid = 0U;
    if ((vlSelfRef.__PVT__memc__DOT__transfers[0U][0U] 
         & (0U != (3U & (vlSelfRef.__PVT__memc__DOT__transfers
                         [0U][0U] >> 8U))))) {
        if ((1U & (~ (IData)(__PVT__memc__DOT__unnamedblk11__DOT__isExclusive)))) {
            __PVT__memc__DOT__unnamedblk11__DOT__isExclusive 
                = (3U != (3U & (vlSelfRef.__PVT__memc__DOT__transfers
                                [0U][0U] >> 8U)));
            vlSelfRef.__PVT__memc__DOT__awIdx = 0U;
            vlSelfRef.__PVT__memc__DOT__awIdxValid = 1U;
        }
    }
    if ((vlSelfRef.__PVT__memc__DOT__transfers[1U][0U] 
         & (0U != (3U & (vlSelfRef.__PVT__memc__DOT__transfers
                         [1U][0U] >> 8U))))) {
        if ((1U & (~ (IData)(__PVT__memc__DOT__unnamedblk11__DOT__isExclusive)))) {
            __PVT__memc__DOT__unnamedblk11__DOT__isExclusive 
                = (3U != (3U & (vlSelfRef.__PVT__memc__DOT__transfers
                                [1U][0U] >> 8U)));
            vlSelfRef.__PVT__memc__DOT__awIdx = 1U;
            vlSelfRef.__PVT__memc__DOT__awIdxValid = 1U;
        }
    }
    if ((vlSelfRef.__PVT__memc__DOT__transfers[2U][0U] 
         & (0U != (3U & (vlSelfRef.__PVT__memc__DOT__transfers
                         [2U][0U] >> 8U))))) {
        if ((1U & (~ (IData)(__PVT__memc__DOT__unnamedblk11__DOT__isExclusive)))) {
            __PVT__memc__DOT__unnamedblk11__DOT__isExclusive 
                = (3U != (3U & (vlSelfRef.__PVT__memc__DOT__transfers
                                [2U][0U] >> 8U)));
            vlSelfRef.__PVT__memc__DOT__awIdx = 2U;
            vlSelfRef.__PVT__memc__DOT__awIdxValid = 1U;
        }
    }
    if ((vlSelfRef.__PVT__memc__DOT__transfers[3U][0U] 
         & (0U != (3U & (vlSelfRef.__PVT__memc__DOT__transfers
                         [3U][0U] >> 8U))))) {
        if ((1U & (~ (IData)(__PVT__memc__DOT__unnamedblk11__DOT__isExclusive)))) {
            __PVT__memc__DOT__unnamedblk11__DOT__isExclusive 
                = (3U != (3U & (vlSelfRef.__PVT__memc__DOT__transfers
                                [3U][0U] >> 8U)));
            vlSelfRef.__PVT__memc__DOT__awIdx = 3U;
            vlSelfRef.__PVT__memc__DOT__awIdxValid = 1U;
        }
    }
    if (((IData)(vlSelfRef.__PVT__memc__DOT__awIdxValid) 
         & (vlSelfRef.__PVT__memc__DOT__transfers[vlSelfRef.__PVT__memc__DOT__awIdx][0U] 
            >> 9U))) {
        vlSelfRef.__PVT__memc__DOT__axiAW = (1ULL | vlSelfRef.__PVT__memc__DOT__axiAW);
        vlSelfRef.__PVT__memc__DOT__axiAW = ((0x1fffffffffff3fULL 
                                              & vlSelfRef.__PVT__memc__DOT__axiAW) 
                                             | ((QData)((IData)(
                                                                ((1U 
                                                                  & ((IData)(vlSelfRef.__PVT__memc__DOT__isMMIO) 
                                                                     >> (IData)(vlSelfRef.__PVT__memc__DOT__awIdx)))
                                                                  ? 0U
                                                                  : 2U))) 
                                                << 6U));
        vlSelfRef.__PVT__memc__DOT__axiAW = ((0x1ffffffff807ffULL 
                                              & vlSelfRef.__PVT__memc__DOT__axiAW) 
                                             | ((QData)((IData)(
                                                                ((1U 
                                                                  & ((IData)(vlSelfRef.__PVT__memc__DOT__isMMIO) 
                                                                     >> (IData)(vlSelfRef.__PVT__memc__DOT__awIdx)))
                                                                  ? 0U
                                                                  : 3U))) 
                                                << 0xbU));
        vlSelfRef.__PVT__memc__DOT__axiAW = ((0x7ffffULL 
                                              & vlSelfRef.__PVT__memc__DOT__axiAW) 
                                             | (((QData)((IData)(vlSelfRef.__PVT__memc__DOT__awIdx)) 
                                                 << 0x33U) 
                                                | ((QData)((IData)(
                                                                   ((vlSelfRef.__PVT__memc__DOT__transfers
                                                                     [vlSelfRef.__PVT__memc__DOT__awIdx][1U] 
                                                                     << 0x15U) 
                                                                    | (vlSelfRef.__PVT__memc__DOT__transfers
                                                                       [vlSelfRef.__PVT__memc__DOT__awIdx][0U] 
                                                                       >> 0xbU)))) 
                                                   << 0x13U)));
        vlSelfRef.__PVT__memc__DOT__axiAW = ((0x1ffffffffff8ffULL 
                                              & vlSelfRef.__PVT__memc__DOT__axiAW) 
                                             | ((QData)((IData)(
                                                                ((7U 
                                                                  == 
                                                                  (0xfU 
                                                                   & (vlSelfRef.__PVT__memc__DOT__transfers
                                                                      [vlSelfRef.__PVT__memc__DOT__awIdx][0U] 
                                                                      >> 1U)))
                                                                  ? 0U
                                                                  : 
                                                                 ((8U 
                                                                   == 
                                                                   (0xfU 
                                                                    & (vlSelfRef.__PVT__memc__DOT__transfers
                                                                       [vlSelfRef.__PVT__memc__DOT__awIdx][0U] 
                                                                       >> 1U)))
                                                                   ? 1U
                                                                   : 
                                                                  ((9U 
                                                                    == 
                                                                    (0xfU 
                                                                     & (vlSelfRef.__PVT__memc__DOT__transfers
                                                                        [vlSelfRef.__PVT__memc__DOT__awIdx][0U] 
                                                                        >> 1U)))
                                                                    ? 2U
                                                                    : 4U))))) 
                                                << 8U));
    }
    if (((IData)(vlSelfRef.__PVT__memc__DOT__awIdxValid) 
         & (vlSelfRef.__PVT__memc__DOT__transfers[vlSelfRef.__PVT__memc__DOT__awIdx][0U] 
            >> 8U))) {
        vlSelfRef.__PVT__memc__DOT__DCR_reqValid = 1U;
        vlSelfRef.__PVT__memc__DOT__DCR_reqTId = vlSelfRef.__PVT__memc__DOT__awIdx;
        if ((1U & ((IData)(vlSelfRef.__PVT__memc__DOT__isMMIO) 
                   >> (IData)(vlSelfRef.__PVT__memc__DOT__awIdx)))) {
            vlSelfRef.__PVT__memc__DOT__DCR_reqLen = 0U;
            vlSelfRef.__PVT__memc__DOT__DCR_reqAddr = 0U;
            vlSelfRef.__PVT__memc__DOT__DCR_reqMMIOData 
                = ((vlSelfRef.__PVT__memc__DOT__transfers
                    [vlSelfRef.__PVT__memc__DOT__awIdx][4U] 
                    << 5U) | (vlSelfRef.__PVT__memc__DOT__transfers
                              [vlSelfRef.__PVT__memc__DOT__awIdx][3U] 
                              >> 0x1bU));
            vlSelfRef.__PVT__memc__DOT__DCR_reqMMIO = 1U;
        } else {
            vlSelfRef.__PVT__memc__DOT__DCR_reqLen = 0xfU;
            vlSelfRef.__PVT__memc__DOT__DCR_reqAddr 
                = (0xfffU & (vlSelfRef.__PVT__memc__DOT__transfers
                             [vlSelfRef.__PVT__memc__DOT__awIdx][2U] 
                             >> 0xbU));
            vlSelfRef.__PVT__memc__DOT__DCR_reqMMIOData = 0U;
            vlSelfRef.__PVT__memc__DOT__DCR_reqMMIO = 0U;
        }
    }
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
            __Vtemp_6 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
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
                = __Vtemp_6;
            __Vtemp_7 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
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
                = __Vtemp_7;
            __Vtemp_8 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
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
                = __Vtemp_8;
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
            __Vtemp_9 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
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
                = __Vtemp_9;
            __Vtemp_10 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
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
                                          [1U][2U] 
                                          >> 9U)) == 
                                (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                          [2U][2U] 
                                          >> 0xfU)))));
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = __Vtemp_10;
            __Vtemp_11 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
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
                = __Vtemp_11;
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
            __Vtemp_12 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
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
                = __Vtemp_12;
            __Vtemp_13 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
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
                = __Vtemp_13;
            __Vtemp_14 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
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
                = __Vtemp_14;
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
    vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__doExtract 
        = ((~ (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__empty)) 
           & (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__outputReady));
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
    __PVT__memc__DOT__dcacheReadIF__DOT__unnamedblk1__DOT__inFlight 
        = (0x3fU & ((1U & (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[1U] 
                           >> 5U)) + (1U & vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[0U])));
    __PVT__memc__DOT__dcacheReadIF__DOT__allowNewRead 
        = (((IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__empty)
             ? 0x20U : (0x1fU & ((IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexOut) 
                                 - (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexIn)))) 
           > (IData)(__PVT__memc__DOT__dcacheReadIF__DOT__unnamedblk1__DOT__inFlight));
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__doExtract 
        = ((~ (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__empty)) 
           & (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outputReady));
    vlSelfRef.__PVT__memc__DOT__awFIFO_outValid = vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__outValidReg;
    vlSelfRef.memc__DOT____Vcellout__awFIFO__OUT_data 
        = vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__outDataReg;
    vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__combPassthru = 0U;
    if (((~ (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO_outValid)) 
         & (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__empty))) {
        vlSelfRef.__PVT__memc__DOT__awFIFO_outValid 
            = (1U & (IData)(vlSelfRef.__PVT__memc__DOT__axiAW));
        vlSelfRef.memc__DOT____Vcellout__awFIFO__OUT_data 
            = (0xfffffffffffffULL & (vlSelfRef.__PVT__memc__DOT__axiAW 
                                     >> 1U));
        vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__combPassthru = 1U;
    }
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
    vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__doInsert 
        = (1U & ((IData)(vlSelfRef.__PVT__memc__DOT__axiAR) 
                 & ((~ ((IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__fullCond) 
                        & (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__equal))) 
                    | (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__doExtract))));
    vlSelfRef.__PVT__memc__DOT__buf_rready = 0U;
    __PVT__memc__DOT__ICW_valid = 0U;
    __PVT__memc__DOT__ICW_addr = 0U;
    __PVT__memc__DOT__ICW_data[0U] = 0U;
    __PVT__memc__DOT__ICW_data[1U] = 0U;
    __PVT__memc__DOT__ICW_data[2U] = 0U;
    __PVT__memc__DOT__ICW_data[3U] = 0U;
    __PVT__memc__DOT__ICW_id = 0U;
    __PVT__memc__DOT__DCW_valid = 0U;
    __PVT__memc__DOT__DCW_addr = 0U;
    __PVT__memc__DOT__DCW_data[0U] = 0U;
    __PVT__memc__DOT__DCW_data[1U] = 0U;
    __PVT__memc__DOT__DCW_data[2U] = 0U;
    __PVT__memc__DOT__DCW_data[3U] = 0U;
    __PVT__memc__DOT__DCW_id = 0U;
    if (vlSelfRef.__PVT__memc__DOT__buf_rvalid) {
        if ((1U & ((IData)(vlSelfRef.__PVT__memc__DOT__isMMIO) 
                   >> (3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                             >> 1U))))) {
            vlSelfRef.__PVT__memc__DOT__buf_rready = 1U;
        } else {
            vlSelfRef.__PVT__memc__DOT__unnamedblk9__DOT__cID 
                = (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                         [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                 >> 1U))][0U] >> 5U));
            if (vlSelfRef.__PVT__memc__DOT__unnamedblk9__DOT__cID) {
                if (vlSelfRef.__PVT__memc__DOT__unnamedblk9__DOT__cID) {
                    if ((1U & (~ vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_r[0U]))) {
                        vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__3__t[0U] 
                            = vlSelfRef.__PVT__memc__DOT__transfers
                            [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                    >> 1U))][0U];
                        vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__3__t[1U] 
                            = vlSelfRef.__PVT__memc__DOT__transfers
                            [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                    >> 1U))][1U];
                        vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__3__t[2U] 
                            = vlSelfRef.__PVT__memc__DOT__transfers
                            [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                    >> 1U))][2U];
                        vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__3__t[3U] 
                            = vlSelfRef.__PVT__memc__DOT__transfers
                            [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                    >> 1U))][3U];
                        vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__3__t[4U] 
                            = vlSelfRef.__PVT__memc__DOT__transfers
                            [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                    >> 1U))][4U];
                        vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__3__t[5U] 
                            = vlSelfRef.__PVT__memc__DOT__transfers
                            [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                    >> 1U))][5U];
                        vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__3__t[6U] 
                            = vlSelfRef.__PVT__memc__DOT__transfers
                            [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                    >> 1U))][6U];
                        vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__3__t[7U] 
                            = vlSelfRef.__PVT__memc__DOT__transfers
                            [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                    >> 1U))][7U];
                        vlSelfRef.__PVT__memc__DOT__buf_rready = 1U;
                        __PVT__memc__DOT__ICW_valid = 1U;
                        vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__3__Vfuncout 
                            = (0xfffU & (((1U == (0xfU 
                                                  & (vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__3__t[0U] 
                                                     >> 1U))) 
                                          || (3U == 
                                              (0xfU 
                                               & (vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__3__t[0U] 
                                                  >> 1U))))
                                          ? ((0xff0U 
                                              & (vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__3__t[2U] 
                                                 >> 0xbU)) 
                                             | (0xfU 
                                                & (((vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__3__t[2U] 
                                                     << 0x15U) 
                                                    | (vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__3__t[2U] 
                                                       >> 0xbU)) 
                                                   + 
                                                   ((vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__3__t[2U] 
                                                     << 4U) 
                                                    | (vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__3__t[2U] 
                                                       >> 0x1cU)))))
                                          : ((vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__3__t[2U] 
                                              << 0x15U) 
                                             | (vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__3__t[2U] 
                                                >> 0xbU))));
                        __PVT__memc__DOT__ICW_data[0U] 
                            = ((vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[1U] 
                                << 0x1fU) | (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[0U] 
                                             >> 1U));
                        __PVT__memc__DOT__ICW_data[1U] 
                            = ((vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[2U] 
                                << 0x1fU) | (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[1U] 
                                             >> 1U));
                        __PVT__memc__DOT__ICW_data[2U] 
                            = ((vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[3U] 
                                << 0x1fU) | (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[2U] 
                                             >> 1U));
                        __PVT__memc__DOT__ICW_data[3U] 
                            = ((vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                << 0x1fU) | (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[3U] 
                                             >> 1U));
                        __PVT__memc__DOT__ICW_id = 
                            (3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                   >> 1U));
                        __PVT__memc__DOT__ICW_addr 
                            = vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__3__Vfuncout;
                    }
                }
            } else if (((~ vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_r[0U]) 
                        & ((0x1fU & (vlSelfRef.__PVT__memc__DOT__transfers
                                     [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                             >> 1U))][3U] 
                                     >> 6U)) > (0x1fU 
                                                & ((vlSelfRef.__PVT__memc__DOT__transfers
                                                    [
                                                    (3U 
                                                     & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                        >> 1U))][3U] 
                                                    << 4U) 
                                                   | (vlSelfRef.__PVT__memc__DOT__transfers
                                                      [
                                                      (3U 
                                                       & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                          >> 1U))][2U] 
                                                      >> 0x1cU)))))) {
                vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__2__t[0U] 
                    = vlSelfRef.__PVT__memc__DOT__transfers
                    [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                            >> 1U))][0U];
                vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__2__t[1U] 
                    = vlSelfRef.__PVT__memc__DOT__transfers
                    [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                            >> 1U))][1U];
                vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__2__t[2U] 
                    = vlSelfRef.__PVT__memc__DOT__transfers
                    [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                            >> 1U))][2U];
                vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__2__t[3U] 
                    = vlSelfRef.__PVT__memc__DOT__transfers
                    [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                            >> 1U))][3U];
                vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__2__t[4U] 
                    = vlSelfRef.__PVT__memc__DOT__transfers
                    [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                            >> 1U))][4U];
                vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__2__t[5U] 
                    = vlSelfRef.__PVT__memc__DOT__transfers
                    [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                            >> 1U))][5U];
                vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__2__t[6U] 
                    = vlSelfRef.__PVT__memc__DOT__transfers
                    [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                            >> 1U))][6U];
                vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__2__t[7U] 
                    = vlSelfRef.__PVT__memc__DOT__transfers
                    [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                            >> 1U))][7U];
                vlSelfRef.__PVT__memc__DOT__buf_rready = 1U;
                __PVT__memc__DOT__DCW_valid = 1U;
                vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__2__Vfuncout 
                    = (0xfffU & (((1U == (0xfU & (vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__2__t[0U] 
                                                  >> 1U))) 
                                  || (3U == (0xfU & 
                                             (vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__2__t[0U] 
                                              >> 1U))))
                                  ? ((0xff0U & (vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__2__t[2U] 
                                                >> 0xbU)) 
                                     | (0xfU & (((vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__2__t[2U] 
                                                  << 0x15U) 
                                                 | (vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__2__t[2U] 
                                                    >> 0xbU)) 
                                                + (
                                                   (vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__2__t[2U] 
                                                    << 4U) 
                                                   | (vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__2__t[2U] 
                                                      >> 0x1cU)))))
                                  : ((vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__2__t[2U] 
                                      << 0x15U) | (
                                                   vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__2__t[2U] 
                                                   >> 0xbU))));
                __PVT__memc__DOT__DCW_data[0U] = ((
                                                   vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[1U] 
                                                   << 0x1fU) 
                                                  | (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[0U] 
                                                     >> 1U));
                __PVT__memc__DOT__DCW_data[1U] = ((
                                                   vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[2U] 
                                                   << 0x1fU) 
                                                  | (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[1U] 
                                                     >> 1U));
                __PVT__memc__DOT__DCW_data[2U] = ((
                                                   vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[3U] 
                                                   << 0x1fU) 
                                                  | (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[2U] 
                                                     >> 1U));
                __PVT__memc__DOT__DCW_data[3U] = ((
                                                   vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                   << 0x1fU) 
                                                  | (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[3U] 
                                                     >> 1U));
                __PVT__memc__DOT__DCW_id = (3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                  >> 1U));
                __PVT__memc__DOT__DCW_addr = vlSelfRef.__Vfunc_memc__DOT__GetCacheRdAddr__2__Vfuncout;
                if ((0U == (0x1fU & ((vlSelfRef.__PVT__memc__DOT__transfers
                                      [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                              >> 1U))][3U] 
                                      << 4U) | (vlSelfRef.__PVT__memc__DOT__transfers
                                                [(3U 
                                                  & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                     >> 1U))][2U] 
                                                >> 0x1cU))))) {
                    if ((0x800U & vlSelfRef.__PVT__memc__DOT__transfers
                         [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                 >> 1U))][3U])) {
                        __PVT__memc__DOT__DCW_data[0U] 
                            = ((0xffffff00U & __PVT__memc__DOT__DCW_data[0U]) 
                               | (0xffU & ((vlSelfRef.__PVT__memc__DOT__transfers
                                            [(3U & 
                                              (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                               >> 1U))][4U] 
                                            << 5U) 
                                           | (vlSelfRef.__PVT__memc__DOT__transfers
                                              [(3U 
                                                & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                   >> 1U))][3U] 
                                              >> 0x1bU))));
                    }
                    if ((0x1000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                 >> 1U))][3U])) {
                        __PVT__memc__DOT__DCW_data[0U] 
                            = ((0xffff00ffU & __PVT__memc__DOT__DCW_data[0U]) 
                               | (0xff00U & (vlSelfRef.__PVT__memc__DOT__transfers
                                             [(3U & 
                                               (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                >> 1U))][4U] 
                                             << 5U)));
                    }
                    if ((0x2000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                 >> 1U))][3U])) {
                        __PVT__memc__DOT__DCW_data[0U] 
                            = ((0xff00ffffU & __PVT__memc__DOT__DCW_data[0U]) 
                               | (0xff0000U & (vlSelfRef.__PVT__memc__DOT__transfers
                                               [(3U 
                                                 & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                    >> 1U))][4U] 
                                               << 5U)));
                    }
                    if ((0x4000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                 >> 1U))][3U])) {
                        __PVT__memc__DOT__DCW_data[0U] 
                            = ((0xffffffU & __PVT__memc__DOT__DCW_data[0U]) 
                               | (0xff000000U & (vlSelfRef.__PVT__memc__DOT__transfers
                                                 [(3U 
                                                   & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                      >> 1U))][4U] 
                                                 << 5U)));
                    }
                    if ((0x8000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                 >> 1U))][3U])) {
                        __PVT__memc__DOT__DCW_data[1U] 
                            = ((0xffffff00U & __PVT__memc__DOT__DCW_data[1U]) 
                               | (0xffU & ((vlSelfRef.__PVT__memc__DOT__transfers
                                            [(3U & 
                                              (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                               >> 1U))][5U] 
                                            << 5U) 
                                           | (vlSelfRef.__PVT__memc__DOT__transfers
                                              [(3U 
                                                & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                   >> 1U))][4U] 
                                              >> 0x1bU))));
                    }
                    if ((0x10000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                 >> 1U))][3U])) {
                        __PVT__memc__DOT__DCW_data[1U] 
                            = ((0xffff00ffU & __PVT__memc__DOT__DCW_data[1U]) 
                               | (0xff00U & (vlSelfRef.__PVT__memc__DOT__transfers
                                             [(3U & 
                                               (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                >> 1U))][5U] 
                                             << 5U)));
                    }
                    if ((0x20000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                 >> 1U))][3U])) {
                        __PVT__memc__DOT__DCW_data[1U] 
                            = ((0xff00ffffU & __PVT__memc__DOT__DCW_data[1U]) 
                               | (0xff0000U & (vlSelfRef.__PVT__memc__DOT__transfers
                                               [(3U 
                                                 & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                    >> 1U))][5U] 
                                               << 5U)));
                    }
                    if ((0x40000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                 >> 1U))][3U])) {
                        __PVT__memc__DOT__DCW_data[1U] 
                            = ((0xffffffU & __PVT__memc__DOT__DCW_data[1U]) 
                               | (0xff000000U & (vlSelfRef.__PVT__memc__DOT__transfers
                                                 [(3U 
                                                   & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                      >> 1U))][5U] 
                                                 << 5U)));
                    }
                    if ((0x80000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                 >> 1U))][3U])) {
                        __PVT__memc__DOT__DCW_data[2U] 
                            = ((0xffffff00U & __PVT__memc__DOT__DCW_data[2U]) 
                               | (0xffU & ((vlSelfRef.__PVT__memc__DOT__transfers
                                            [(3U & 
                                              (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                               >> 1U))][6U] 
                                            << 5U) 
                                           | (vlSelfRef.__PVT__memc__DOT__transfers
                                              [(3U 
                                                & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                   >> 1U))][5U] 
                                              >> 0x1bU))));
                    }
                    if ((0x100000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                 >> 1U))][3U])) {
                        __PVT__memc__DOT__DCW_data[2U] 
                            = ((0xffff00ffU & __PVT__memc__DOT__DCW_data[2U]) 
                               | (0xff00U & (vlSelfRef.__PVT__memc__DOT__transfers
                                             [(3U & 
                                               (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                >> 1U))][6U] 
                                             << 5U)));
                    }
                    if ((0x200000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                 >> 1U))][3U])) {
                        __PVT__memc__DOT__DCW_data[2U] 
                            = ((0xff00ffffU & __PVT__memc__DOT__DCW_data[2U]) 
                               | (0xff0000U & (vlSelfRef.__PVT__memc__DOT__transfers
                                               [(3U 
                                                 & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                    >> 1U))][6U] 
                                               << 5U)));
                    }
                    if ((0x400000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                 >> 1U))][3U])) {
                        __PVT__memc__DOT__DCW_data[2U] 
                            = ((0xffffffU & __PVT__memc__DOT__DCW_data[2U]) 
                               | (0xff000000U & (vlSelfRef.__PVT__memc__DOT__transfers
                                                 [(3U 
                                                   & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                      >> 1U))][6U] 
                                                 << 5U)));
                    }
                    if ((0x800000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                 >> 1U))][3U])) {
                        __PVT__memc__DOT__DCW_data[3U] 
                            = ((0xffffff00U & __PVT__memc__DOT__DCW_data[3U]) 
                               | (0xffU & ((vlSelfRef.__PVT__memc__DOT__transfers
                                            [(3U & 
                                              (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                               >> 1U))][7U] 
                                            << 5U) 
                                           | (vlSelfRef.__PVT__memc__DOT__transfers
                                              [(3U 
                                                & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                   >> 1U))][6U] 
                                              >> 0x1bU))));
                    }
                    if ((0x1000000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                 >> 1U))][3U])) {
                        __PVT__memc__DOT__DCW_data[3U] 
                            = ((0xffff00ffU & __PVT__memc__DOT__DCW_data[3U]) 
                               | (0xff00U & (vlSelfRef.__PVT__memc__DOT__transfers
                                             [(3U & 
                                               (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                >> 1U))][7U] 
                                             << 5U)));
                    }
                    if ((0x2000000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                 >> 1U))][3U])) {
                        __PVT__memc__DOT__DCW_data[3U] 
                            = ((0xff00ffffU & __PVT__memc__DOT__DCW_data[3U]) 
                               | (0xff0000U & (vlSelfRef.__PVT__memc__DOT__transfers
                                               [(3U 
                                                 & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                    >> 1U))][7U] 
                                               << 5U)));
                    }
                    if ((0x4000000U & vlSelfRef.__PVT__memc__DOT__transfers
                         [(3U & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                 >> 1U))][3U])) {
                        __PVT__memc__DOT__DCW_data[3U] 
                            = ((0xffffffU & __PVT__memc__DOT__DCW_data[3U]) 
                               | (0xff000000U & (vlSelfRef.__PVT__memc__DOT__transfers
                                                 [(3U 
                                                   & (vlSelfRef.memc__DOT____Vcellout__rFIFO__OUT_data[4U] 
                                                      >> 1U))][7U] 
                                                 << 5U)));
                    }
                }
            }
        }
    }
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
    vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outputReady 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outValidReg)) 
                 | (IData)(vlSelfRef.__PVT__memc__DOT__buf_rready)));
    vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__writeLast = 0U;
    vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__writeLastId = 0U;
    vlSelfRef.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_ce = 1U;
    vlSelfRef.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_we = 0U;
    vlSelfRef.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_addr = 0U;
    vlSelfRef.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[0U] = 0U;
    vlSelfRef.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[1U] = 0U;
    vlSelfRef.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[2U] = 0U;
    vlSelfRef.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[3U] = 0U;
    vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
        = vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_r[0U];
    vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[1U] 
        = vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_r[1U];
    vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[2U] 
        = vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_r[2U];
    vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[3U] 
        = vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_r[3U];
    vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[4U] 
        = vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_r[4U];
    if ((((~ vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U]) 
          & (~ vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_r[0U])) 
         & (IData)(__PVT__memc__DOT__ICW_valid))) {
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
            = (1U | vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U]);
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
            = ((3U & vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U]) 
               | ((__PVT__memc__DOT__ICW_data[0U] << 0x11U) 
                  | (((IData)(__PVT__memc__DOT__ICW_addr) 
                      << 5U) | ((IData)(__PVT__memc__DOT__ICW_id) 
                                << 2U))));
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[1U] 
            = (((3U & (__PVT__memc__DOT__ICW_data[0U] 
                       >> 0xfU)) | ((3U & ((IData)(__PVT__memc__DOT__ICW_addr) 
                                           >> 0x1bU)) 
                                    | ((IData)(__PVT__memc__DOT__ICW_id) 
                                       >> 0x1eU))) 
               | ((0x1fffcU & (__PVT__memc__DOT__ICW_data[0U] 
                               >> 0xfU)) | (__PVT__memc__DOT__ICW_data[1U] 
                                            << 0x11U)));
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[2U] 
            = ((3U & (__PVT__memc__DOT__ICW_data[1U] 
                      >> 0xfU)) | ((0x1fffcU & (__PVT__memc__DOT__ICW_data[1U] 
                                                >> 0xfU)) 
                                   | (__PVT__memc__DOT__ICW_data[2U] 
                                      << 0x11U)));
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[3U] 
            = ((3U & (__PVT__memc__DOT__ICW_data[2U] 
                      >> 0xfU)) | ((0x1fffcU & (__PVT__memc__DOT__ICW_data[2U] 
                                                >> 0xfU)) 
                                   | (__PVT__memc__DOT__ICW_data[3U] 
                                      << 0x11U)));
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[4U] 
            = (0x1ffffU & ((3U & (__PVT__memc__DOT__ICW_data[3U] 
                                  >> 0xfU)) | (0x1fffcU 
                                               & (__PVT__memc__DOT__ICW_data[3U] 
                                                  >> 0xfU))));
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
            = (2U | vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U]);
    } else if (((vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                 & (~ vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_r[0U])) 
                & (IData)(__PVT__memc__DOT__ICW_valid))) {
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
            = ((0x1fU & vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U]) 
               | ((__PVT__memc__DOT__ICW_data[0U] << 0x11U) 
                  | ((IData)(__PVT__memc__DOT__ICW_addr) 
                     << 5U)));
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[1U] 
            = (((0x1fU & (__PVT__memc__DOT__ICW_data[0U] 
                          >> 0xfU)) | ((IData)(__PVT__memc__DOT__ICW_addr) 
                                       >> 0x1bU)) | 
               ((0x1ffe0U & (__PVT__memc__DOT__ICW_data[0U] 
                             >> 0xfU)) | (__PVT__memc__DOT__ICW_data[1U] 
                                          << 0x11U)));
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[2U] 
            = ((0x1fU & (__PVT__memc__DOT__ICW_data[1U] 
                         >> 0xfU)) | ((0x1ffe0U & (
                                                   __PVT__memc__DOT__ICW_data[1U] 
                                                   >> 0xfU)) 
                                      | (__PVT__memc__DOT__ICW_data[2U] 
                                         << 0x11U)));
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[3U] 
            = ((0x1fU & (__PVT__memc__DOT__ICW_data[2U] 
                         >> 0xfU)) | ((0x1ffe0U & (
                                                   __PVT__memc__DOT__ICW_data[2U] 
                                                   >> 0xfU)) 
                                      | (__PVT__memc__DOT__ICW_data[3U] 
                                         << 0x11U)));
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[4U] 
            = (0x1ffffU & ((0x1fU & (__PVT__memc__DOT__ICW_data[3U] 
                                     >> 0xfU)) | (0x1ffe0U 
                                                  & (__PVT__memc__DOT__ICW_data[3U] 
                                                     >> 0xfU))));
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
            = (2U | vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U]);
    }
    if ((1U & vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U])) {
        vlSelfRef.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_ce = 0U;
        vlSelfRef.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_we = 0U;
        vlSelfRef.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_addr 
            = (0xfffU & (((vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                           << 0x1bU) | (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                        >> 5U)) + (1U 
                                                   & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                      >> 4U))));
        __Vtemp_17[0U] = (((0U == (0x1fU & ((IData)(0x11U) 
                                            + (0x7fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               (1U 
                                                                & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                   >> 4U)), 7U)))))
                            ? 0U : (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[
                                    ((IData)(1U) + 
                                     (((IData)(0x11U) 
                                       + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                                (1U 
                                                                 & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                    >> 4U)), 7U))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x11U) 
                                                       + 
                                                       (0x7fU 
                                                        & VL_SHIFTL_III(7,32,32, 
                                                                        (1U 
                                                                         & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                            >> 4U)), 7U))))))) 
                          | (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[
                             (((IData)(0x11U) + (0x7fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 (1U 
                                                                  & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                     >> 4U)), 7U))) 
                              >> 5U)] >> (0x1fU & ((IData)(0x11U) 
                                                   + 
                                                   (0x7fU 
                                                    & VL_SHIFTL_III(7,32,32, 
                                                                    (1U 
                                                                     & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                        >> 4U)), 7U))))));
        __Vtemp_17[1U] = (((0U == (0x1fU & ((IData)(0x11U) 
                                            + (0x7fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               (1U 
                                                                & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                   >> 4U)), 7U)))))
                            ? 0U : (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[
                                    ((IData)(2U) + 
                                     (((IData)(0x11U) 
                                       + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                                (1U 
                                                                 & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                    >> 4U)), 7U))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x11U) 
                                                       + 
                                                       (0x7fU 
                                                        & VL_SHIFTL_III(7,32,32, 
                                                                        (1U 
                                                                         & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                            >> 4U)), 7U))))))) 
                          | (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[
                             ((IData)(1U) + (((IData)(0x11U) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 (1U 
                                                                  & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                     >> 4U)), 7U))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x11U) 
                                          + (0x7fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             (1U 
                                                              & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                 >> 4U)), 7U))))));
        __Vtemp_17[2U] = (((0U == (0x1fU & ((IData)(0x11U) 
                                            + (0x7fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               (1U 
                                                                & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                   >> 4U)), 7U)))))
                            ? 0U : (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[
                                    ((IData)(3U) + 
                                     (((IData)(0x11U) 
                                       + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                                (1U 
                                                                 & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                    >> 4U)), 7U))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x11U) 
                                                       + 
                                                       (0x7fU 
                                                        & VL_SHIFTL_III(7,32,32, 
                                                                        (1U 
                                                                         & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                            >> 4U)), 7U))))))) 
                          | (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[
                             ((IData)(2U) + (((IData)(0x11U) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 (1U 
                                                                  & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                     >> 4U)), 7U))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x11U) 
                                          + (0x7fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             (1U 
                                                              & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                 >> 4U)), 7U))))));
        __Vtemp_17[3U] = (((0U == (0x1fU & ((IData)(0x11U) 
                                            + (0x7fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               (1U 
                                                                & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                   >> 4U)), 7U)))))
                            ? 0U : (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[
                                    ((IData)(4U) + 
                                     (((IData)(0x11U) 
                                       + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                                (1U 
                                                                 & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                    >> 4U)), 7U))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x11U) 
                                                       + 
                                                       (0x7fU 
                                                        & VL_SHIFTL_III(7,32,32, 
                                                                        (1U 
                                                                         & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                            >> 4U)), 7U))))))) 
                          | (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[
                             ((IData)(3U) + (((IData)(0x11U) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 (1U 
                                                                  & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                     >> 4U)), 7U))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x11U) 
                                          + (0x7fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             (1U 
                                                              & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                 >> 4U)), 7U))))));
        vlSelfRef.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[0U] 
            = ((0x90U >= ((IData)(0x11U) + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))
                ? __Vtemp_17[0U] : 0U);
        vlSelfRef.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[1U] 
            = ((0x90U >= ((IData)(0x11U) + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))
                ? __Vtemp_17[1U] : 0U);
        vlSelfRef.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[2U] 
            = ((0x90U >= ((IData)(0x11U) + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))
                ? __Vtemp_17[2U] : 0U);
        vlSelfRef.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[3U] 
            = ((0x90U >= ((IData)(0x11U) + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))
                ? __Vtemp_17[3U] : 0U);
        vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
            = ((0xffffffefU & vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U]) 
               | (0x10U & (((IData)(1U) + (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                           >> 4U)) 
                           << 4U)));
        if ((0x10U & vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U])) {
            vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__writeLast = 1U;
            vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__writeLastId 
                = (3U & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                         >> 2U));
            vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] = 0U;
            vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[1U] = 0U;
            vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[2U] = 0U;
            vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[3U] = 0U;
            vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[4U] = 0U;
            vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                = (0xfffffffeU & vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U]);
        }
    }
    vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__writeLast = 0U;
    vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__writeLastId = 0U;
    vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_ce = 1U;
    vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_we = 0U;
    vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_addr = 0U;
    vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_data[0U] = 0U;
    vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_data[1U] = 0U;
    vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_data[2U] = 0U;
    vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_data[3U] = 0U;
    vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
        = vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_r[0U];
    vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[1U] 
        = vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_r[1U];
    vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[2U] 
        = vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_r[2U];
    vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[3U] 
        = vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_r[3U];
    vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[4U] 
        = vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_r[4U];
    if ((((~ vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U]) 
          & (~ vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_r[0U])) 
         & (IData)(__PVT__memc__DOT__DCW_valid))) {
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
            = (1U | vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U]);
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
            = ((3U & vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U]) 
               | ((__PVT__memc__DOT__DCW_data[0U] << 0x11U) 
                  | (((IData)(__PVT__memc__DOT__DCW_addr) 
                      << 5U) | ((IData)(__PVT__memc__DOT__DCW_id) 
                                << 2U))));
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[1U] 
            = (((3U & (__PVT__memc__DOT__DCW_data[0U] 
                       >> 0xfU)) | ((3U & ((IData)(__PVT__memc__DOT__DCW_addr) 
                                           >> 0x1bU)) 
                                    | ((IData)(__PVT__memc__DOT__DCW_id) 
                                       >> 0x1eU))) 
               | ((0x1fffcU & (__PVT__memc__DOT__DCW_data[0U] 
                               >> 0xfU)) | (__PVT__memc__DOT__DCW_data[1U] 
                                            << 0x11U)));
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[2U] 
            = ((3U & (__PVT__memc__DOT__DCW_data[1U] 
                      >> 0xfU)) | ((0x1fffcU & (__PVT__memc__DOT__DCW_data[1U] 
                                                >> 0xfU)) 
                                   | (__PVT__memc__DOT__DCW_data[2U] 
                                      << 0x11U)));
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[3U] 
            = ((3U & (__PVT__memc__DOT__DCW_data[2U] 
                      >> 0xfU)) | ((0x1fffcU & (__PVT__memc__DOT__DCW_data[2U] 
                                                >> 0xfU)) 
                                   | (__PVT__memc__DOT__DCW_data[3U] 
                                      << 0x11U)));
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[4U] 
            = (0x1ffffU & ((3U & (__PVT__memc__DOT__DCW_data[3U] 
                                  >> 0xfU)) | (0x1fffcU 
                                               & (__PVT__memc__DOT__DCW_data[3U] 
                                                  >> 0xfU))));
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
            = (2U | vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U]);
    } else if (((vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                 & (~ vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_r[0U])) 
                & (IData)(__PVT__memc__DOT__DCW_valid))) {
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
            = ((0x1fU & vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U]) 
               | ((__PVT__memc__DOT__DCW_data[0U] << 0x11U) 
                  | ((IData)(__PVT__memc__DOT__DCW_addr) 
                     << 5U)));
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[1U] 
            = (((0x1fU & (__PVT__memc__DOT__DCW_data[0U] 
                          >> 0xfU)) | ((IData)(__PVT__memc__DOT__DCW_addr) 
                                       >> 0x1bU)) | 
               ((0x1ffe0U & (__PVT__memc__DOT__DCW_data[0U] 
                             >> 0xfU)) | (__PVT__memc__DOT__DCW_data[1U] 
                                          << 0x11U)));
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[2U] 
            = ((0x1fU & (__PVT__memc__DOT__DCW_data[1U] 
                         >> 0xfU)) | ((0x1ffe0U & (
                                                   __PVT__memc__DOT__DCW_data[1U] 
                                                   >> 0xfU)) 
                                      | (__PVT__memc__DOT__DCW_data[2U] 
                                         << 0x11U)));
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[3U] 
            = ((0x1fU & (__PVT__memc__DOT__DCW_data[2U] 
                         >> 0xfU)) | ((0x1ffe0U & (
                                                   __PVT__memc__DOT__DCW_data[2U] 
                                                   >> 0xfU)) 
                                      | (__PVT__memc__DOT__DCW_data[3U] 
                                         << 0x11U)));
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[4U] 
            = (0x1ffffU & ((0x1fU & (__PVT__memc__DOT__DCW_data[3U] 
                                     >> 0xfU)) | (0x1ffe0U 
                                                  & (__PVT__memc__DOT__DCW_data[3U] 
                                                     >> 0xfU))));
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
            = (2U | vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U]);
    }
    if ((1U & vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U])) {
        vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_ce = 0U;
        vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_we = 0U;
        vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_addr 
            = (0xfffU & (((vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                           << 0x1bU) | (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                        >> 5U)) + (1U 
                                                   & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                      >> 4U))));
        __Vtemp_23[0U] = (((0U == (0x1fU & ((IData)(0x11U) 
                                            + (0x7fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               (1U 
                                                                & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                   >> 4U)), 7U)))))
                            ? 0U : (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[
                                    ((IData)(1U) + 
                                     (((IData)(0x11U) 
                                       + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                                (1U 
                                                                 & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                    >> 4U)), 7U))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x11U) 
                                                       + 
                                                       (0x7fU 
                                                        & VL_SHIFTL_III(7,32,32, 
                                                                        (1U 
                                                                         & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                            >> 4U)), 7U))))))) 
                          | (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[
                             (((IData)(0x11U) + (0x7fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 (1U 
                                                                  & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                     >> 4U)), 7U))) 
                              >> 5U)] >> (0x1fU & ((IData)(0x11U) 
                                                   + 
                                                   (0x7fU 
                                                    & VL_SHIFTL_III(7,32,32, 
                                                                    (1U 
                                                                     & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                        >> 4U)), 7U))))));
        __Vtemp_23[1U] = (((0U == (0x1fU & ((IData)(0x11U) 
                                            + (0x7fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               (1U 
                                                                & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                   >> 4U)), 7U)))))
                            ? 0U : (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[
                                    ((IData)(2U) + 
                                     (((IData)(0x11U) 
                                       + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                                (1U 
                                                                 & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                    >> 4U)), 7U))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x11U) 
                                                       + 
                                                       (0x7fU 
                                                        & VL_SHIFTL_III(7,32,32, 
                                                                        (1U 
                                                                         & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                            >> 4U)), 7U))))))) 
                          | (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[
                             ((IData)(1U) + (((IData)(0x11U) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 (1U 
                                                                  & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                     >> 4U)), 7U))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x11U) 
                                          + (0x7fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             (1U 
                                                              & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                 >> 4U)), 7U))))));
        __Vtemp_23[2U] = (((0U == (0x1fU & ((IData)(0x11U) 
                                            + (0x7fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               (1U 
                                                                & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                   >> 4U)), 7U)))))
                            ? 0U : (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[
                                    ((IData)(3U) + 
                                     (((IData)(0x11U) 
                                       + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                                (1U 
                                                                 & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                    >> 4U)), 7U))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x11U) 
                                                       + 
                                                       (0x7fU 
                                                        & VL_SHIFTL_III(7,32,32, 
                                                                        (1U 
                                                                         & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                            >> 4U)), 7U))))))) 
                          | (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[
                             ((IData)(2U) + (((IData)(0x11U) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 (1U 
                                                                  & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                     >> 4U)), 7U))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x11U) 
                                          + (0x7fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             (1U 
                                                              & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                 >> 4U)), 7U))))));
        __Vtemp_23[3U] = (((0U == (0x1fU & ((IData)(0x11U) 
                                            + (0x7fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               (1U 
                                                                & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                   >> 4U)), 7U)))))
                            ? 0U : (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[
                                    ((IData)(4U) + 
                                     (((IData)(0x11U) 
                                       + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                                (1U 
                                                                 & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                    >> 4U)), 7U))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x11U) 
                                                       + 
                                                       (0x7fU 
                                                        & VL_SHIFTL_III(7,32,32, 
                                                                        (1U 
                                                                         & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                            >> 4U)), 7U))))))) 
                          | (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[
                             ((IData)(3U) + (((IData)(0x11U) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 (1U 
                                                                  & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                     >> 4U)), 7U))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x11U) 
                                          + (0x7fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             (1U 
                                                              & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                 >> 4U)), 7U))))));
        vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_data[0U] 
            = ((0x90U >= ((IData)(0x11U) + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))
                ? __Vtemp_23[0U] : 0U);
        vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_data[1U] 
            = ((0x90U >= ((IData)(0x11U) + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))
                ? __Vtemp_23[1U] : 0U);
        vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_data[2U] 
            = ((0x90U >= ((IData)(0x11U) + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))
                ? __Vtemp_23[2U] : 0U);
        vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_data[3U] 
            = ((0x90U >= ((IData)(0x11U) + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))
                ? __Vtemp_23[3U] : 0U);
        vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
            = ((0xffffffefU & vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U]) 
               | (0x10U & (((IData)(1U) + (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                           >> 4U)) 
                           << 4U)));
        if ((0x10U & vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U])) {
            vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__writeLast = 1U;
            vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__writeLastId 
                = (3U & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                         >> 2U));
            vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] = 0U;
            vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[1U] = 0U;
            vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[2U] = 0U;
            vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[3U] = 0U;
            vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[4U] = 0U;
            vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                = (0xfffffffeU & vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U]);
        }
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
    vlSelfRef.__PVT__DC_dataOut[0U] = (((0U == (0x1fU 
                                                & VL_SHIFTL_III(9,9,32, 
                                                                (3U 
                                                                 & (vlSelfRef.__PVT__MEMC_raddr
                                                                    [1U] 
                                                                    >> 0xaU)), 7U)))
                                         ? 0U : (vlSelfRef.__PVT__cacheRData
                                                 [0U][
                                                 ((IData)(1U) 
                                                  + 
                                                  (0xfU 
                                                   & (VL_SHIFTL_III(9,9,32, 
                                                                    (3U 
                                                                     & (vlSelfRef.__PVT__MEMC_raddr
                                                                        [1U] 
                                                                        >> 0xaU)), 7U) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (3U 
                                                                    & (vlSelfRef.__PVT__MEMC_raddr
                                                                       [1U] 
                                                                       >> 0xaU)), 7U))))) 
                                       | (vlSelfRef.__PVT__cacheRData
                                          [0U][(0xfU 
                                                & (VL_SHIFTL_III(9,9,32, 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__MEMC_raddr
                                                                     [1U] 
                                                                     >> 0xaU)), 7U) 
                                                   >> 5U))] 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(9,9,32, 
                                                              (3U 
                                                               & (vlSelfRef.__PVT__MEMC_raddr
                                                                  [1U] 
                                                                  >> 0xaU)), 7U))));
    vlSelfRef.__PVT__DC_dataOut[1U] = (((0U == (0x1fU 
                                                & VL_SHIFTL_III(9,9,32, 
                                                                (3U 
                                                                 & (vlSelfRef.__PVT__MEMC_raddr
                                                                    [1U] 
                                                                    >> 0xaU)), 7U)))
                                         ? 0U : (vlSelfRef.__PVT__cacheRData
                                                 [0U][
                                                 ((IData)(2U) 
                                                  + 
                                                  (0xfU 
                                                   & (VL_SHIFTL_III(9,9,32, 
                                                                    (3U 
                                                                     & (vlSelfRef.__PVT__MEMC_raddr
                                                                        [1U] 
                                                                        >> 0xaU)), 7U) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (3U 
                                                                    & (vlSelfRef.__PVT__MEMC_raddr
                                                                       [1U] 
                                                                       >> 0xaU)), 7U))))) 
                                       | (vlSelfRef.__PVT__cacheRData
                                          [0U][((IData)(1U) 
                                                + (0xfU 
                                                   & (VL_SHIFTL_III(9,9,32, 
                                                                    (3U 
                                                                     & (vlSelfRef.__PVT__MEMC_raddr
                                                                        [1U] 
                                                                        >> 0xaU)), 7U) 
                                                      >> 5U)))] 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(9,9,32, 
                                                              (3U 
                                                               & (vlSelfRef.__PVT__MEMC_raddr
                                                                  [1U] 
                                                                  >> 0xaU)), 7U))));
    vlSelfRef.__PVT__DC_dataOut[2U] = (((0U == (0x1fU 
                                                & VL_SHIFTL_III(9,9,32, 
                                                                (3U 
                                                                 & (vlSelfRef.__PVT__MEMC_raddr
                                                                    [1U] 
                                                                    >> 0xaU)), 7U)))
                                         ? 0U : (vlSelfRef.__PVT__cacheRData
                                                 [0U][
                                                 ((IData)(3U) 
                                                  + 
                                                  (0xfU 
                                                   & (VL_SHIFTL_III(9,9,32, 
                                                                    (3U 
                                                                     & (vlSelfRef.__PVT__MEMC_raddr
                                                                        [1U] 
                                                                        >> 0xaU)), 7U) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (3U 
                                                                    & (vlSelfRef.__PVT__MEMC_raddr
                                                                       [1U] 
                                                                       >> 0xaU)), 7U))))) 
                                       | (vlSelfRef.__PVT__cacheRData
                                          [0U][((IData)(2U) 
                                                + (0xfU 
                                                   & (VL_SHIFTL_III(9,9,32, 
                                                                    (3U 
                                                                     & (vlSelfRef.__PVT__MEMC_raddr
                                                                        [1U] 
                                                                        >> 0xaU)), 7U) 
                                                      >> 5U)))] 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(9,9,32, 
                                                              (3U 
                                                               & (vlSelfRef.__PVT__MEMC_raddr
                                                                  [1U] 
                                                                  >> 0xaU)), 7U))));
    vlSelfRef.__PVT__DC_dataOut[3U] = (((0U == (0x1fU 
                                                & VL_SHIFTL_III(9,9,32, 
                                                                (3U 
                                                                 & (vlSelfRef.__PVT__MEMC_raddr
                                                                    [1U] 
                                                                    >> 0xaU)), 7U)))
                                         ? 0U : (vlSelfRef.__PVT__cacheRData
                                                 [0U][
                                                 ((IData)(4U) 
                                                  + 
                                                  (0xfU 
                                                   & (VL_SHIFTL_III(9,9,32, 
                                                                    (3U 
                                                                     & (vlSelfRef.__PVT__MEMC_raddr
                                                                        [1U] 
                                                                        >> 0xaU)), 7U) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (3U 
                                                                    & (vlSelfRef.__PVT__MEMC_raddr
                                                                       [1U] 
                                                                       >> 0xaU)), 7U))))) 
                                       | (vlSelfRef.__PVT__cacheRData
                                          [0U][((IData)(3U) 
                                                + (0xfU 
                                                   & (VL_SHIFTL_III(9,9,32, 
                                                                    (3U 
                                                                     & (vlSelfRef.__PVT__MEMC_raddr
                                                                        [1U] 
                                                                        >> 0xaU)), 7U) 
                                                      >> 5U)))] 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(9,9,32, 
                                                              (3U 
                                                               & (vlSelfRef.__PVT__MEMC_raddr
                                                                  [1U] 
                                                                  >> 0xaU)), 7U))));
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
    vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__doExtract 
        = ((~ (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__empty)) 
           & (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outputReady));
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__accIdx_c 
        = vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__accIdx_r;
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__FIFO_valid = 0U;
    __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data[0U] = 0U;
    __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data[1U] = 0U;
    __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data[2U] = 0U;
    __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data[3U] = 0U;
    __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_id = 0U;
    __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_last = 0U;
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__doAcc = 0U;
    if ((0x20U & vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[1U])) {
        vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__accIdx_c 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__accIdx_c)));
        if ((0x80U & vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[1U])) {
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__FIFO_valid = 1U;
            __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data[0U] = 0U;
            __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data[1U] = 0U;
            __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data[2U] = 0U;
            __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data[3U] = 0U;
            __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_id 
                = (3U & (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[1U] 
                         >> 8U));
            __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_last 
                = (1U & (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[1U] 
                         >> 6U));
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__accIdx_c = 0U;
            __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data[0U] 
                = ((vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[2U] 
                    << 0x16U) | (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[1U] 
                                 >> 0xaU));
        } else if (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__accIdx_c) {
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__FIFO_valid = 1U;
            __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data[0U] 
                = vlSelfRef.__PVT__DC_dataOut[0U];
            __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data[1U] 
                = vlSelfRef.__PVT__DC_dataOut[1U];
            __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data[2U] 
                = vlSelfRef.__PVT__DC_dataOut[2U];
            __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data[3U] 
                = vlSelfRef.__PVT__DC_dataOut[3U];
            __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_id 
                = (3U & (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[1U] 
                         >> 8U));
            __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_last 
                = (1U & (vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR[1U] 
                         >> 6U));
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__accIdx_c = 0U;
        } else {
            vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__doAcc = 1U;
        }
    }
    __Vtemp_32[0U] = (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
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
                                << ((IData)(0x20U) 
                                    - (0x1fU & VL_SHIFTL_III(9,32,32, 
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
                                       >> 5U))] >> 
                         (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                (3U 
                                                 & vlSelfRef.__PVT__CORE_raddr
                                                 [0U]
                                                 [1U]), 7U))));
    __Vtemp_32[1U] = (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
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
                                << ((IData)(0x20U) 
                                    - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                             (3U 
                                                              & vlSelfRef.__PVT__CORE_raddr
                                                              [0U]
                                                              [1U]), 7U))))) 
                      | (vlSelfRef.__PVT__cacheRData_t
                         [1U][((IData)(1U) + (0xfU 
                                              & (VL_SHIFTL_III(9,32,32, 
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
    __Vtemp_32[2U] = (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
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
                                << ((IData)(0x20U) 
                                    - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                             (3U 
                                                              & vlSelfRef.__PVT__CORE_raddr
                                                              [0U]
                                                              [1U]), 7U))))) 
                      | (vlSelfRef.__PVT__cacheRData_t
                         [1U][((IData)(2U) + (0xfU 
                                              & (VL_SHIFTL_III(9,32,32, 
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
    __Vtemp_32[3U] = (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
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
                                << ((IData)(0x20U) 
                                    - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                             (3U 
                                                              & vlSelfRef.__PVT__CORE_raddr
                                                              [0U]
                                                              [1U]), 7U))))) 
                      | (vlSelfRef.__PVT__cacheRData_t
                         [1U][((IData)(3U) + (0xfU 
                                              & (VL_SHIFTL_III(9,32,32, 
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
        = __Vtemp_32[0U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[1U] 
        = __Vtemp_32[1U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[2U] 
        = __Vtemp_32[2U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[3U] 
        = __Vtemp_32[3U];
    __Vtemp_33[0U] = (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
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
                                << ((IData)(0x20U) 
                                    - (0x1fU & VL_SHIFTL_III(9,32,32, 
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
                                       >> 5U))] >> 
                         (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                (3U 
                                                 & vlSelfRef.__PVT__CORE_raddr
                                                 [1U]
                                                 [1U]), 7U))));
    __Vtemp_33[1U] = (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
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
                                << ((IData)(0x20U) 
                                    - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                             (3U 
                                                              & vlSelfRef.__PVT__CORE_raddr
                                                              [1U]
                                                              [1U]), 7U))))) 
                      | (vlSelfRef.__PVT__cacheRData_t
                         [2U][((IData)(1U) + (0xfU 
                                              & (VL_SHIFTL_III(9,32,32, 
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
    __Vtemp_33[2U] = (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
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
                                << ((IData)(0x20U) 
                                    - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                             (3U 
                                                              & vlSelfRef.__PVT__CORE_raddr
                                                              [1U]
                                                              [1U]), 7U))))) 
                      | (vlSelfRef.__PVT__cacheRData_t
                         [2U][((IData)(2U) + (0xfU 
                                              & (VL_SHIFTL_III(9,32,32, 
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
    __Vtemp_33[3U] = (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
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
                                << ((IData)(0x20U) 
                                    - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                             (3U 
                                                              & vlSelfRef.__PVT__CORE_raddr
                                                              [1U]
                                                              [1U]), 7U))))) 
                      | (vlSelfRef.__PVT__cacheRData_t
                         [2U][((IData)(3U) + (0xfU 
                                              & (VL_SHIFTL_III(9,32,32, 
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
        = __Vtemp_33[0U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[5U] 
        = __Vtemp_33[1U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[6U] 
        = __Vtemp_33[2U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[7U] 
        = __Vtemp_33[3U];
    vlSelfRef.__PVT__s_axi_rready = (1U & ((~ ((IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__fullCond) 
                                               & (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__equal))) 
                                           | (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__doExtract)));
    vlSelfRef.memc__DOT__dcacheReadIF__DOT____Vcellinp__fifo__IN_data[0U] 
        = __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data[0U];
    vlSelfRef.memc__DOT__dcacheReadIF__DOT____Vcellinp__fifo__IN_data[1U] 
        = __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data[1U];
    vlSelfRef.memc__DOT__dcacheReadIF__DOT____Vcellinp__fifo__IN_data[2U] 
        = __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data[2U];
    vlSelfRef.memc__DOT__dcacheReadIF__DOT____Vcellinp__fifo__IN_data[3U] 
        = __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data[3U];
    vlSelfRef.memc__DOT__dcacheReadIF__DOT____Vcellinp__fifo__IN_data[4U] 
        = (((IData)(__PVT__memc__DOT__dcacheReadIF__DOT__FIFO_last) 
            << 2U) | (IData)(__PVT__memc__DOT__dcacheReadIF__DOT__FIFO_id));
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__doInsert 
        = ((IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__FIFO_valid) 
           & ((~ ((IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__fullCond) 
                  & (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__equal))) 
              | (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__doExtract)));
    vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__doInsert 
        = ((IData)(vlSymsp->TOP__Top__extMem.__PVT__s_axi_rvalid) 
           & (IData)(vlSelfRef.__PVT__s_axi_rready));
}

VL_ATTR_COLD void VTop_SoC___stl_sequent__TOP__Top__soc__1(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___stl_sequent__TOP__Top__soc__1\n"); );
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
    vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__outputReady 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__outValidReg)) 
                 | (IData)(vlSymsp->TOP__Top__extMem.__PVT__s_axi_awready)));
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
    vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__doExtract 
        = ((~ (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__empty)) 
           & (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__outputReady));
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
    vlSelfRef.__PVT__memc__DOT__awFIFO_ready = (1U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__fullCond) 
                                                     & (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__equal))) 
                                                   | (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__doExtract)));
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
    vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__doInsert 
        = ((IData)(vlSelfRef.__PVT__memc__DOT__axiAW) 
           & (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO_ready));
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
