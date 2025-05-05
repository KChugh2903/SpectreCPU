// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IFetchPipeline.h"
#include "VTop__Syms.h"

VL_ATTR_COLD void VTop_IFetchPipeline___stl_sequent__TOP__Top__soc__core__ifetch__ifp__0(VTop_IFetchPipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IFetchPipeline___stl_sequent__TOP__Top__soc__core__ifetch__ifp__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vcellout__assocEnc____pinNumber3;
    __Vcellout__assocEnc____pinNumber3 = 0;
    VlWide<7>/*204:0*/ __PVT__FIFO_out;
    VL_ZERO_W(205, __PVT__FIFO_out);
    SData/*8:0*/ __PVT__branchHandler__DOT__is16bit;
    __PVT__branchHandler__DOT__is16bit = 0;
    CData/*0:0*/ __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart;
    __PVT__branchHandler__DOT__unnamedblk1__DOT__validInstrStart = 0;
    SData/*15:0*/ __PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16;
    __PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16 = 0;
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
    IData/*31:0*/ branchHandler__DOT____Vlvbound_ha2f56b24__0;
    branchHandler__DOT____Vlvbound_ha2f56b24__0 = 0;
    IData/*31:0*/ branchHandler__DOT____Vlvbound_h4016cc4a__0;
    branchHandler__DOT____Vlvbound_h4016cc4a__0 = 0;
    IData/*31:0*/ branchHandler__DOT____Vlvbound_hb098b6eb__0;
    branchHandler__DOT____Vlvbound_hb098b6eb__0 = 0;
    CData/*0:0*/ __PVT__instrAligner__DOT__validInstrStart_c;
    __PVT__instrAligner__DOT__validInstrStart_c = 0;
    CData/*0:0*/ __PVT__instrAligner__DOT__is32bit;
    __PVT__instrAligner__DOT__is32bit = 0;
    SData/*15:0*/ instrAligner__DOT____Vlvbound_hd81ee699__0;
    instrAligner__DOT____Vlvbound_hd81ee699__0 = 0;
    CData/*0:0*/ instrAligner__DOT____Vlvbound_hededc4e5__0;
    instrAligner__DOT____Vlvbound_hededc4e5__0 = 0;
    CData/*0:0*/ instrAligner__DOT____Vlvbound_hdfada5ae__0;
    instrAligner__DOT____Vlvbound_hdfada5ae__0 = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*0:0*/ __PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx;
    __PVT__itlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx = 0;
    // Body
    vlSelfRef.__Vcellinp__itlb__clear = ((IData)(vlSymsp->TOP__Top__soc__core.__PVT__TH_clearICache) 
                                         | (IData)(vlSymsp->TOP__Top__soc__core.__PVT__TH_flushTLB));
    vlSelfRef.__Vcellinp__itlb__IN_rqs[0U] = ((0x1ffffeU 
                                               & (vlSelfRef.fetch0[3U] 
                                                  >> 3U)) 
                                              | (1U 
                                                 & vlSelfRef.fetch0[0U]));
    vlSelfRef.__PVT__outFIFO__DOT__equal = ((IData)(vlSelfRef.__PVT__outFIFO__DOT__indexIn) 
                                            == (IData)(vlSelfRef.__PVT__outFIFO__DOT__indexOut));
    vlSelfRef.__PVT__pageFault = 0U;
    vlSelfRef.__PVT__tlbMiss = 0U;
    vlSelfRef.__PVT__branchHandler__DOT__firstValid 
        = ((IData)(vlSelfRef.__PVT__branchHandler__DOT__lastInstrValid)
            ? 0U : (7U & (vlSelfRef.fetch1[2U] >> 0x19U)));
    vlSelfRef.__PVT__branchHandler__DOT__pc[0U] = vlSelfRef.__PVT__branchHandler__DOT__lastInstrPC;
    branchHandler__DOT____Vlvbound_ha2f56b24__0 = (0xfffffff0U 
                                                   & ((vlSelfRef.fetch1[3U] 
                                                       << 8U) 
                                                      | (0xf0U 
                                                         & (vlSelfRef.fetch1[2U] 
                                                            >> 0x18U))));
    vlSelfRef.__PVT__branchHandler__DOT__pc[1U] = branchHandler__DOT____Vlvbound_ha2f56b24__0;
    branchHandler__DOT____Vlvbound_ha2f56b24__0 = ((IData)(2U) 
                                                   + 
                                                   (0xfffffff0U 
                                                    & ((vlSelfRef.fetch1[3U] 
                                                        << 8U) 
                                                       | (0xf0U 
                                                          & (vlSelfRef.fetch1[2U] 
                                                             >> 0x18U)))));
    vlSelfRef.__PVT__branchHandler__DOT__pc[2U] = branchHandler__DOT____Vlvbound_ha2f56b24__0;
    branchHandler__DOT____Vlvbound_ha2f56b24__0 = ((IData)(4U) 
                                                   + 
                                                   (0xfffffff0U 
                                                    & ((vlSelfRef.fetch1[3U] 
                                                        << 8U) 
                                                       | (0xf0U 
                                                          & (vlSelfRef.fetch1[2U] 
                                                             >> 0x18U)))));
    vlSelfRef.__PVT__branchHandler__DOT__pc[3U] = branchHandler__DOT____Vlvbound_ha2f56b24__0;
    branchHandler__DOT____Vlvbound_ha2f56b24__0 = ((IData)(6U) 
                                                   + 
                                                   (0xfffffff0U 
                                                    & ((vlSelfRef.fetch1[3U] 
                                                        << 8U) 
                                                       | (0xf0U 
                                                          & (vlSelfRef.fetch1[2U] 
                                                             >> 0x18U)))));
    vlSelfRef.__PVT__branchHandler__DOT__pc[4U] = branchHandler__DOT____Vlvbound_ha2f56b24__0;
    branchHandler__DOT____Vlvbound_ha2f56b24__0 = ((IData)(8U) 
                                                   + 
                                                   (0xfffffff0U 
                                                    & ((vlSelfRef.fetch1[3U] 
                                                        << 8U) 
                                                       | (0xf0U 
                                                          & (vlSelfRef.fetch1[2U] 
                                                             >> 0x18U)))));
    vlSelfRef.__PVT__branchHandler__DOT__pc[5U] = branchHandler__DOT____Vlvbound_ha2f56b24__0;
    branchHandler__DOT____Vlvbound_ha2f56b24__0 = ((IData)(0xaU) 
                                                   + 
                                                   (0xfffffff0U 
                                                    & ((vlSelfRef.fetch1[3U] 
                                                        << 8U) 
                                                       | (0xf0U 
                                                          & (vlSelfRef.fetch1[2U] 
                                                             >> 0x18U)))));
    vlSelfRef.__PVT__branchHandler__DOT__pc[6U] = branchHandler__DOT____Vlvbound_ha2f56b24__0;
    branchHandler__DOT____Vlvbound_ha2f56b24__0 = ((IData)(0xcU) 
                                                   + 
                                                   (0xfffffff0U 
                                                    & ((vlSelfRef.fetch1[3U] 
                                                        << 8U) 
                                                       | (0xf0U 
                                                          & (vlSelfRef.fetch1[2U] 
                                                             >> 0x18U)))));
    vlSelfRef.__PVT__branchHandler__DOT__pc[7U] = branchHandler__DOT____Vlvbound_ha2f56b24__0;
    branchHandler__DOT____Vlvbound_ha2f56b24__0 = ((IData)(0xeU) 
                                                   + 
                                                   (0xfffffff0U 
                                                    & ((vlSelfRef.fetch1[3U] 
                                                        << 8U) 
                                                       | (0xf0U 
                                                          & (vlSelfRef.fetch1[2U] 
                                                             >> 0x18U)))));
    vlSelfRef.__PVT__branchHandler__DOT__pc[8U] = branchHandler__DOT____Vlvbound_ha2f56b24__0;
    vlSelfRef.__PVT__phyPC = 0U;
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
            if ((1U & (~ (((IData)((8U != (0x88U & vlSelfRef.__PVT__TLB_res))) 
                           | ((0U == (3U & vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem)) 
                              & (~ (vlSelfRef.__PVT__TLB_res 
                                    >> 1U)))) | (IData)(
                                                        ((1U 
                                                          == 
                                                          (0x23U 
                                                           & vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem)) 
                                                         & (vlSelfRef.__PVT__TLB_res 
                                                            >> 1U))))))) {
                vlSelfRef.__PVT__phyPC = ((((4U & vlSelfRef.__PVT__TLB_res)
                                             ? ((0xffc00U 
                                                 & (vlSelfRef.__PVT__TLB_res 
                                                    >> 8U)) 
                                                | (0x3ffU 
                                                   & (vlSelfRef.fetch1[3U] 
                                                      >> 4U)))
                                             : (vlSelfRef.__PVT__TLB_res 
                                                >> 8U)) 
                                           << 0xcU) 
                                          | (0xfffU 
                                             & ((vlSelfRef.fetch1[3U] 
                                                 << 8U) 
                                                | (vlSelfRef.fetch1[2U] 
                                                   >> 0x18U))));
            }
        }
        if ((1U & (~ vlSelfRef.__PVT__TLB_res))) {
            vlSelfRef.__PVT__tlbMiss = 1U;
        }
    } else {
        vlSelfRef.__PVT__phyPC = ((vlSelfRef.fetch1[3U] 
                                   << 8U) | (vlSelfRef.fetch1[2U] 
                                             >> 0x18U));
    }
    vlSelfRef.__PVT__instrAligner__DOT__middleIsSplit32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__outFIFO__DOT__outValidReg)) 
                 & (vlSelfRef.__PVT__instrAligner__DOT__prev_r[7U] 
                    >> 4U)));
    __PVT__FIFO_out[0U] = ((vlSelfRef.__PVT__outFIFO__DOT__outDataReg[0U] 
                            << 1U) | (IData)(vlSelfRef.__PVT__outFIFO__DOT__outValidReg));
    __PVT__FIFO_out[1U] = ((vlSelfRef.__PVT__outFIFO__DOT__outDataReg[0U] 
                            >> 0x1fU) | (vlSelfRef.__PVT__outFIFO__DOT__outDataReg[1U] 
                                         << 1U));
    __PVT__FIFO_out[2U] = ((vlSelfRef.__PVT__outFIFO__DOT__outDataReg[1U] 
                            >> 0x1fU) | (vlSelfRef.__PVT__outFIFO__DOT__outDataReg[2U] 
                                         << 1U));
    __PVT__FIFO_out[3U] = ((vlSelfRef.__PVT__outFIFO__DOT__outDataReg[2U] 
                            >> 0x1fU) | (vlSelfRef.__PVT__outFIFO__DOT__outDataReg[3U] 
                                         << 1U));
    __PVT__FIFO_out[4U] = ((vlSelfRef.__PVT__outFIFO__DOT__outDataReg[3U] 
                            >> 0x1fU) | (vlSelfRef.__PVT__outFIFO__DOT__outDataReg[4U] 
                                         << 1U));
    __PVT__FIFO_out[5U] = ((vlSelfRef.__PVT__outFIFO__DOT__outDataReg[4U] 
                            >> 0x1fU) | (vlSelfRef.__PVT__outFIFO__DOT__outDataReg[5U] 
                                         << 1U));
    __PVT__FIFO_out[6U] = ((vlSelfRef.__PVT__outFIFO__DOT__outDataReg[5U] 
                            >> 0x1fU) | (vlSelfRef.__PVT__outFIFO__DOT__outDataReg[6U] 
                                         << 1U));
    vlSelfRef.__Vcellinp__outFIFO__rst = ((IData)(vlSymsp->TOP__Top__soc__core__ifetch.__Vcellinp__ifp__IN_mispr) 
                                          | (IData)(vlSymsp->TOP.rst));
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
    vlSelfRef.__PVT__outFIFO__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__outFIFO__DOT__fullCond)) 
                                            & (IData)(vlSelfRef.__PVT__outFIFO__DOT__equal));
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
    vlSelfRef.__PVT__assocHitUnary_c = ((0xeU & (IData)(vlSelfRef.__PVT__assocHitUnary_c)) 
                                        | (vlSymsp->TOP__Top__soc__ictable.__PVT__OUT_data[0U] 
                                           & ((0xfffffU 
                                               & (vlSymsp->TOP__Top__soc__ictable.__PVT__OUT_data[0U] 
                                                  >> 1U)) 
                                              == (vlSelfRef.__PVT__phyPC 
                                                  >> 0xcU))));
    vlSelfRef.__PVT__assocHitUnary_c = ((0xdU & (IData)(vlSelfRef.__PVT__assocHitUnary_c)) 
                                        | (0xffeU & 
                                           ((vlSymsp->TOP__Top__soc__ictable.__PVT__OUT_data[0U] 
                                             >> 0x14U) 
                                            & (((0xfffffU 
                                                 & ((vlSymsp->TOP__Top__soc__ictable.__PVT__OUT_data[1U] 
                                                     << 0xaU) 
                                                    | (vlSymsp->TOP__Top__soc__ictable.__PVT__OUT_data[0U] 
                                                       >> 0x16U))) 
                                                == 
                                                (vlSelfRef.__PVT__phyPC 
                                                 >> 0xcU)) 
                                               << 1U))));
    vlSelfRef.__PVT__assocHitUnary_c = ((0xbU & (IData)(vlSelfRef.__PVT__assocHitUnary_c)) 
                                        | (0xfffffcU 
                                           & ((vlSymsp->TOP__Top__soc__ictable.__PVT__OUT_data[1U] 
                                               >> 8U) 
                                              & (((0xfffffU 
                                                   & (vlSymsp->TOP__Top__soc__ictable.__PVT__OUT_data[1U] 
                                                      >> 0xbU)) 
                                                  == 
                                                  (vlSelfRef.__PVT__phyPC 
                                                   >> 0xcU)) 
                                                 << 2U))));
    vlSelfRef.__PVT__assocHitUnary_c = ((7U & (IData)(vlSelfRef.__PVT__assocHitUnary_c)) 
                                        | (8U & ((vlSymsp->TOP__Top__soc__ictable.__PVT__OUT_data[1U] 
                                                  >> 0x1cU) 
                                                 & (((0xfffffU 
                                                      & vlSymsp->TOP__Top__soc__ictable.__PVT__OUT_data[2U]) 
                                                     == 
                                                     (vlSelfRef.__PVT__phyPC 
                                                      >> 0xcU)) 
                                                    << 3U))));
    __PVT__instrAligner__DOT__is32bit = 0U;
    __PVT__instrAligner__DOT__validInstrStart_c = (1U 
                                                   & (~ (IData)(
                                                                (0x1010U 
                                                                 == 
                                                                 (0x1010U 
                                                                  & vlSelfRef.__PVT__instrAligner__DOT__prev_r[7U])))));
    if ((1U & ((0U < (7U & (__PVT__FIFO_out[5U] >> 7U))) 
               | (~ __PVT__FIFO_out[0U])))) {
        __PVT__instrAligner__DOT__validInstrStart_c = 0U;
    }
    if (__PVT__instrAligner__DOT__validInstrStart_c) {
        __PVT__instrAligner__DOT__is32bit = (3U == 
                                             (3U & 
                                              (__PVT__FIFO_out[0U] 
                                               >> 1U)));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c 
            = (1U | (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c 
            = ((0xfeU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c)) 
               | (IData)(__PVT__instrAligner__DOT__is32bit));
        __PVT__instrAligner__DOT__validInstrStart_c 
            = (1U & (~ (IData)(__PVT__instrAligner__DOT__is32bit)));
    } else {
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c 
            = (0xfeU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c 
            = (0xfeU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c));
        __PVT__instrAligner__DOT__validInstrStart_c = 1U;
    }
    if ((1U & ((1U < (7U & (__PVT__FIFO_out[5U] >> 7U))) 
               | (~ __PVT__FIFO_out[0U])))) {
        __PVT__instrAligner__DOT__validInstrStart_c = 0U;
    }
    if ((1U > (7U & (__PVT__FIFO_out[5U] >> 4U)))) {
        __PVT__instrAligner__DOT__validInstrStart_c = 0U;
    }
    if (__PVT__instrAligner__DOT__validInstrStart_c) {
        __PVT__instrAligner__DOT__is32bit = (3U == 
                                             (3U & 
                                              (__PVT__FIFO_out[0U] 
                                               >> 0x11U)));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c 
            = (2U | (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c 
            = ((0xfdU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c)) 
               | ((IData)(__PVT__instrAligner__DOT__is32bit) 
                  << 1U));
        __PVT__instrAligner__DOT__validInstrStart_c 
            = (1U & (~ (IData)(__PVT__instrAligner__DOT__is32bit)));
    } else {
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c 
            = (0xfdU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c 
            = (0xfdU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c));
        __PVT__instrAligner__DOT__validInstrStart_c = 1U;
    }
    if ((1U & ((2U < (7U & (__PVT__FIFO_out[5U] >> 7U))) 
               | (~ __PVT__FIFO_out[0U])))) {
        __PVT__instrAligner__DOT__validInstrStart_c = 0U;
    }
    if ((2U > (7U & (__PVT__FIFO_out[5U] >> 4U)))) {
        __PVT__instrAligner__DOT__validInstrStart_c = 0U;
    }
    if (__PVT__instrAligner__DOT__validInstrStart_c) {
        __PVT__instrAligner__DOT__is32bit = (3U == 
                                             (3U & 
                                              (__PVT__FIFO_out[1U] 
                                               >> 1U)));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c 
            = (4U | (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c 
            = ((0xfbU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c)) 
               | ((IData)(__PVT__instrAligner__DOT__is32bit) 
                  << 2U));
        __PVT__instrAligner__DOT__validInstrStart_c 
            = (1U & (~ (IData)(__PVT__instrAligner__DOT__is32bit)));
    } else {
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c 
            = (0xfbU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c 
            = (0xfbU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c));
        __PVT__instrAligner__DOT__validInstrStart_c = 1U;
    }
    if ((1U & ((3U < (7U & (__PVT__FIFO_out[5U] >> 7U))) 
               | (~ __PVT__FIFO_out[0U])))) {
        __PVT__instrAligner__DOT__validInstrStart_c = 0U;
    }
    if ((3U > (7U & (__PVT__FIFO_out[5U] >> 4U)))) {
        __PVT__instrAligner__DOT__validInstrStart_c = 0U;
    }
    if (__PVT__instrAligner__DOT__validInstrStart_c) {
        __PVT__instrAligner__DOT__is32bit = (3U == 
                                             (3U & 
                                              (__PVT__FIFO_out[1U] 
                                               >> 0x11U)));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c 
            = (8U | (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c 
            = ((0xf7U & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c)) 
               | ((IData)(__PVT__instrAligner__DOT__is32bit) 
                  << 3U));
        __PVT__instrAligner__DOT__validInstrStart_c 
            = (1U & (~ (IData)(__PVT__instrAligner__DOT__is32bit)));
    } else {
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c 
            = (0xf7U & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c 
            = (0xf7U & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c));
        __PVT__instrAligner__DOT__validInstrStart_c = 1U;
    }
    if ((1U & ((4U < (7U & (__PVT__FIFO_out[5U] >> 7U))) 
               | (~ __PVT__FIFO_out[0U])))) {
        __PVT__instrAligner__DOT__validInstrStart_c = 0U;
    }
    if ((4U > (7U & (__PVT__FIFO_out[5U] >> 4U)))) {
        __PVT__instrAligner__DOT__validInstrStart_c = 0U;
    }
    if (__PVT__instrAligner__DOT__validInstrStart_c) {
        __PVT__instrAligner__DOT__is32bit = (3U == 
                                             (3U & 
                                              (__PVT__FIFO_out[2U] 
                                               >> 1U)));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c 
            = (0x10U | (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c 
            = ((0xefU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c)) 
               | ((IData)(__PVT__instrAligner__DOT__is32bit) 
                  << 4U));
        __PVT__instrAligner__DOT__validInstrStart_c 
            = (1U & (~ (IData)(__PVT__instrAligner__DOT__is32bit)));
    } else {
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c 
            = (0xefU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c 
            = (0xefU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c));
        __PVT__instrAligner__DOT__validInstrStart_c = 1U;
    }
    if ((1U & ((5U < (7U & (__PVT__FIFO_out[5U] >> 7U))) 
               | (~ __PVT__FIFO_out[0U])))) {
        __PVT__instrAligner__DOT__validInstrStart_c = 0U;
    }
    if ((5U > (7U & (__PVT__FIFO_out[5U] >> 4U)))) {
        __PVT__instrAligner__DOT__validInstrStart_c = 0U;
    }
    if (__PVT__instrAligner__DOT__validInstrStart_c) {
        __PVT__instrAligner__DOT__is32bit = (3U == 
                                             (3U & 
                                              (__PVT__FIFO_out[2U] 
                                               >> 0x11U)));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c 
            = (0x20U | (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c 
            = ((0xdfU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c)) 
               | ((IData)(__PVT__instrAligner__DOT__is32bit) 
                  << 5U));
        __PVT__instrAligner__DOT__validInstrStart_c 
            = (1U & (~ (IData)(__PVT__instrAligner__DOT__is32bit)));
    } else {
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c 
            = (0xdfU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c 
            = (0xdfU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c));
        __PVT__instrAligner__DOT__validInstrStart_c = 1U;
    }
    if ((1U & ((6U < (7U & (__PVT__FIFO_out[5U] >> 7U))) 
               | (~ __PVT__FIFO_out[0U])))) {
        __PVT__instrAligner__DOT__validInstrStart_c = 0U;
    }
    if ((6U > (7U & (__PVT__FIFO_out[5U] >> 4U)))) {
        __PVT__instrAligner__DOT__validInstrStart_c = 0U;
    }
    if (__PVT__instrAligner__DOT__validInstrStart_c) {
        __PVT__instrAligner__DOT__is32bit = (3U == 
                                             (3U & 
                                              (__PVT__FIFO_out[3U] 
                                               >> 1U)));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c 
            = (0x40U | (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c 
            = ((0xbfU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c)) 
               | ((IData)(__PVT__instrAligner__DOT__is32bit) 
                  << 6U));
        __PVT__instrAligner__DOT__validInstrStart_c 
            = (1U & (~ (IData)(__PVT__instrAligner__DOT__is32bit)));
    } else {
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c 
            = (0xbfU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c 
            = (0xbfU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c));
        __PVT__instrAligner__DOT__validInstrStart_c = 1U;
    }
    if ((1U & (~ __PVT__FIFO_out[0U]))) {
        __PVT__instrAligner__DOT__validInstrStart_c = 0U;
    }
    if ((7U > (7U & (__PVT__FIFO_out[5U] >> 4U)))) {
        __PVT__instrAligner__DOT__validInstrStart_c = 0U;
    }
    if (__PVT__instrAligner__DOT__validInstrStart_c) {
        __PVT__instrAligner__DOT__is32bit = (3U == 
                                             (3U & 
                                              (__PVT__FIFO_out[3U] 
                                               >> 0x11U)));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c 
            = (0x80U | (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c 
            = ((0x7fU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c)) 
               | ((IData)(__PVT__instrAligner__DOT__is32bit) 
                  << 7U));
        __PVT__instrAligner__DOT__validInstrStart_c 
            = (1U & (~ (IData)(__PVT__instrAligner__DOT__is32bit)));
    } else {
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c 
            = (0x7fU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c));
        vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c 
            = (0x7fU & (IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c));
        __PVT__instrAligner__DOT__validInstrStart_c = 1U;
    }
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
    __Vcellout__assocEnc____pinNumber3 = 0U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT__assocHitUnary_c) 
                          & (IData)(__Vcellout__assocEnc____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ifetch.ifp.assocEnc.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    __Vcellout__assocEnc____pinNumber3 = (1U & ((IData)(__Vcellout__assocEnc____pinNumber3) 
                                                | (IData)(vlSelfRef.__PVT__assocHitUnary_c)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__assocHitUnary_c) 
                           >> 1U) & (IData)(__Vcellout__assocEnc____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ifetch.ifp.assocEnc.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    __Vcellout__assocEnc____pinNumber3 = (1U & ((IData)(__Vcellout__assocEnc____pinNumber3) 
                                                | ((IData)(vlSelfRef.__PVT__assocHitUnary_c) 
                                                   >> 1U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__assocHitUnary_c) 
                           >> 2U) & (IData)(__Vcellout__assocEnc____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ifetch.ifp.assocEnc.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    __Vcellout__assocEnc____pinNumber3 = (1U & ((IData)(__Vcellout__assocEnc____pinNumber3) 
                                                | ((IData)(vlSelfRef.__PVT__assocHitUnary_c) 
                                                   >> 2U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__assocHitUnary_c) 
                           >> 3U) & (IData)(__Vcellout__assocEnc____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ifetch.ifp.assocEnc.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    __Vcellout__assocEnc____pinNumber3 = ((IData)(__Vcellout__assocEnc____pinNumber3) 
                                          | ((IData)(vlSelfRef.__PVT__assocHitUnary_c) 
                                             >> 3U));
    vlSelfRef.__Vcellout__assocEnc____pinNumber2 = 
        (2U & (IData)(vlSelfRef.__Vcellout__assocEnc____pinNumber2));
    vlSelfRef.__Vcellout__assocEnc____pinNumber2 = 
        ((2U & (IData)(vlSelfRef.__Vcellout__assocEnc____pinNumber2)) 
         | (1U & ((IData)(vlSelfRef.__Vcellout__assocEnc____pinNumber2) 
                  | ((IData)(vlSelfRef.__PVT__assocHitUnary_c) 
                     >> 1U))));
    vlSelfRef.__Vcellout__assocEnc____pinNumber2 = 
        ((2U & (IData)(vlSelfRef.__Vcellout__assocEnc____pinNumber2)) 
         | (1U & ((IData)(vlSelfRef.__Vcellout__assocEnc____pinNumber2) 
                  | ((IData)(vlSelfRef.__PVT__assocHitUnary_c) 
                     >> 3U))));
    vlSelfRef.__Vcellout__assocEnc____pinNumber2 = 
        (1U & (IData)(vlSelfRef.__Vcellout__assocEnc____pinNumber2));
    vlSelfRef.__Vcellout__assocEnc____pinNumber2 = 
        ((1U & (IData)(vlSelfRef.__Vcellout__assocEnc____pinNumber2)) 
         | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vcellout__assocEnc____pinNumber2)) 
                  | (0x7ffffffeU & ((IData)(vlSelfRef.__PVT__assocHitUnary_c) 
                                    >> 1U)))));
    vlSelfRef.__Vcellout__assocEnc____pinNumber2 = 
        ((1U & (IData)(vlSelfRef.__Vcellout__assocEnc____pinNumber2)) 
         | ((IData)((((IData)(vlSelfRef.__Vcellout__assocEnc____pinNumber2) 
                      >> 1U) | ((IData)(vlSelfRef.__PVT__assocHitUnary_c) 
                                >> 3U))) << 1U));
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0U] 
        = vlSelfRef.__PVT__instrAligner__DOT__prev_r[0U];
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[1U] 
        = vlSelfRef.__PVT__instrAligner__DOT__prev_r[1U];
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[2U] 
        = vlSelfRef.__PVT__instrAligner__DOT__prev_r[2U];
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[3U] 
        = vlSelfRef.__PVT__instrAligner__DOT__prev_r[3U];
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[4U] 
        = vlSelfRef.__PVT__instrAligner__DOT__prev_r[4U];
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[5U] 
        = vlSelfRef.__PVT__instrAligner__DOT__prev_r[5U];
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[6U] 
        = vlSelfRef.__PVT__instrAligner__DOT__prev_r[6U];
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U] 
        = vlSelfRef.__PVT__instrAligner__DOT__prev_r[7U];
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[8U] 
        = vlSelfRef.__PVT__instrAligner__DOT__prev_r[8U];
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[9U] 
        = vlSelfRef.__PVT__instrAligner__DOT__prev_r[9U];
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xaU] 
        = vlSelfRef.__PVT__instrAligner__DOT__prev_r[0xaU];
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xbU] 
        = vlSelfRef.__PVT__instrAligner__DOT__prev_r[0xbU];
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xcU] 
        = vlSelfRef.__PVT__instrAligner__DOT__prev_r[0xcU];
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xdU] 
        = (((IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c) 
            << 0x1aU) | vlSelfRef.__PVT__instrAligner__DOT__prev_r[0xdU]);
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xeU] 
        = ((__PVT__FIFO_out[0U] << 0xaU) | (((IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart_c) 
                                             << 2U) 
                                            | ((IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c) 
                                               >> 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xfU] 
        = ((__PVT__FIFO_out[0U] >> 0x16U) | (__PVT__FIFO_out[1U] 
                                             << 0xaU));
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x10U] 
        = ((__PVT__FIFO_out[1U] >> 0x16U) | (__PVT__FIFO_out[2U] 
                                             << 0xaU));
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x11U] 
        = ((__PVT__FIFO_out[2U] >> 0x16U) | (__PVT__FIFO_out[3U] 
                                             << 0xaU));
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x12U] 
        = ((__PVT__FIFO_out[3U] >> 0x16U) | (__PVT__FIFO_out[4U] 
                                             << 0xaU));
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x13U] 
        = ((__PVT__FIFO_out[4U] >> 0x16U) | (__PVT__FIFO_out[5U] 
                                             << 0xaU));
    vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x14U] 
        = ((__PVT__FIFO_out[5U] >> 0x16U) | (__PVT__FIFO_out[6U] 
                                             << 0xaU));
    vlSelfRef.__PVT__assocHit = (((IData)(vlSelfRef.__Vcellout__assocEnc____pinNumber2) 
                                  << 1U) | (IData)(__Vcellout__assocEnc____pinNumber3));
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
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0U] 
                                                     >> 8U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xfffffeU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | (IData)(instrAligner__DOT____Vlvbound_hededc4e5__0));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0U] 
                                                     >> 9U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xfffffdU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 1U));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0U] 
                                                     >> 0xaU));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xfffffbU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 2U));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0U] 
                                                     >> 0xbU));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xfffff7U & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 3U));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0U] 
                                                     >> 0xcU));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xffffefU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 4U));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0U] 
                                                     >> 0xdU));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xffffdfU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 5U));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0U] 
                                                     >> 0xeU));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xffffbfU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 6U));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0U] 
                                                     >> 0xfU));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xffff7fU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 7U));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U] 
                                                     >> 5U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xfffeffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 8U));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U] 
                                                     >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xfffdffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 9U));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U] 
                                                     >> 7U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xfffbffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 0xaU));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U] 
                                                     >> 8U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xfff7ffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 0xbU));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U] 
                                                     >> 9U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xffefffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 0xcU));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U] 
                                                     >> 0xaU));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xffdfffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 0xdU));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U] 
                                                     >> 0xbU));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xffbfffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 0xeU));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U] 
                                                     >> 0xcU));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xff7fffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 0xfU));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xeU] 
                                                     >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xfeffffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 0x10U));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xeU] 
                                                     >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xfdffffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 0x11U));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xeU] 
                                                     >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xfbffffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 0x12U));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xeU] 
                                                     >> 5U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xf7ffffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 0x13U));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xeU] 
                                                     >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xefffffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 0x14U));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xeU] 
                                                     >> 7U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xdfffffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 0x15U));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xeU] 
                                                     >> 8U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xbfffffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 0x16U));
    instrAligner__DOT____Vlvbound_hededc4e5__0 = (1U 
                                                  & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xeU] 
                                                     >> 9U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0x7fffffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hededc4e5__0) 
              << 0x17U));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0xff7fffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | (0x8000U & (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                         & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__middleIsSplit32)) 
                            << 0xfU))));
    vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
        = ((0x7fffffU & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c) 
           | ((IData)(((vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                        >> 0x17U) & (~ ((IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c) 
                                        >> 7U)))) << 0x17U));
    vlSelfRef.__PVT__assocHitInstrs[0U] = (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(9,32,32, 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                  >> 1U)), 7U)))
                                             ? 0U : 
                                            (vlSymsp->TOP__Top__soc__icache.__PVT__OUT_data1[
                                             ((IData)(1U) 
                                              + (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  (3U 
                                                                   & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                      >> 1U)), 7U) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(9,32,32, 
                                                                  (3U 
                                                                   & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                      >> 1U)), 7U))))) 
                                           | (vlSymsp->TOP__Top__soc__icache.__PVT__OUT_data1[
                                              (0xfU 
                                               & (VL_SHIFTL_III(9,32,32, 
                                                                (3U 
                                                                 & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                    >> 1U)), 7U) 
                                                  >> 5U))] 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(9,32,32, 
                                                                  (3U 
                                                                   & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                      >> 1U)), 7U))));
    vlSelfRef.__PVT__assocHitInstrs[1U] = (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(9,32,32, 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                  >> 1U)), 7U)))
                                             ? 0U : 
                                            (vlSymsp->TOP__Top__soc__icache.__PVT__OUT_data1[
                                             ((IData)(2U) 
                                              + (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  (3U 
                                                                   & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                      >> 1U)), 7U) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(9,32,32, 
                                                                  (3U 
                                                                   & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                      >> 1U)), 7U))))) 
                                           | (vlSymsp->TOP__Top__soc__icache.__PVT__OUT_data1[
                                              ((IData)(1U) 
                                               + (0xfU 
                                                  & (VL_SHIFTL_III(9,32,32, 
                                                                   (3U 
                                                                    & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                       >> 1U)), 7U) 
                                                     >> 5U)))] 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(9,32,32, 
                                                                  (3U 
                                                                   & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                      >> 1U)), 7U))));
    vlSelfRef.__PVT__assocHitInstrs[2U] = (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(9,32,32, 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                  >> 1U)), 7U)))
                                             ? 0U : 
                                            (vlSymsp->TOP__Top__soc__icache.__PVT__OUT_data1[
                                             ((IData)(3U) 
                                              + (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  (3U 
                                                                   & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                      >> 1U)), 7U) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(9,32,32, 
                                                                  (3U 
                                                                   & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                      >> 1U)), 7U))))) 
                                           | (vlSymsp->TOP__Top__soc__icache.__PVT__OUT_data1[
                                              ((IData)(2U) 
                                               + (0xfU 
                                                  & (VL_SHIFTL_III(9,32,32, 
                                                                   (3U 
                                                                    & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                       >> 1U)), 7U) 
                                                     >> 5U)))] 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(9,32,32, 
                                                                  (3U 
                                                                   & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                      >> 1U)), 7U))));
    vlSelfRef.__PVT__assocHitInstrs[3U] = (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(9,32,32, 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                  >> 1U)), 7U)))
                                             ? 0U : 
                                            (vlSymsp->TOP__Top__soc__icache.__PVT__OUT_data1[
                                             ((IData)(4U) 
                                              + (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  (3U 
                                                                   & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                      >> 1U)), 7U) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(9,32,32, 
                                                                  (3U 
                                                                   & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                      >> 1U)), 7U))))) 
                                           | (vlSymsp->TOP__Top__soc__icache.__PVT__OUT_data1[
                                              ((IData)(3U) 
                                               + (0xfU 
                                                  & (VL_SHIFTL_III(9,32,32, 
                                                                   (3U 
                                                                    & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                       >> 1U)), 7U) 
                                                     >> 5U)))] 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(9,32,32, 
                                                                  (3U 
                                                                   & ((IData)(vlSelfRef.__PVT__assocHit) 
                                                                      >> 1U)), 7U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U]) | (1U & (~ vlSelfRef.__PVT__instrAligner__DOT__windowStart_c)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [1U]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                              >> 1U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                              >> 2U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [3U]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                              >> 3U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [4U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [4U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [4U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [4U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [4U]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                              >> 4U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [5U]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                              >> 5U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [6U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [6U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [6U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [6U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [6U]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                              >> 6U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [7U]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                              >> 7U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[8U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [8U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[8U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [8U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[8U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [8U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[8U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [8U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[8U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [8U]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                              >> 8U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[9U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [9U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[9U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [9U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[9U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [9U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[9U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [9U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[9U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [9U]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                              >> 9U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xaU] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xaU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xaU] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xaU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xaU] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xaU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xaU] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xaU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xaU] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0xaU]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                >> 0xaU))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xbU] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xbU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xbU] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xbU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xbU] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xbU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xbU] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xbU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xbU] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0xbU]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                >> 0xbU))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xcU] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xcU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xcU] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xcU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xcU] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xcU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xcU] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xcU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xcU] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0xcU]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                >> 0xcU))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xdU] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xdU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xdU] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xdU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xdU] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xdU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xdU] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xdU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xdU] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0xdU]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                >> 0xdU))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xeU] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xeU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xeU] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xeU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xeU] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xeU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xeU] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xeU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xeU] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0xeU]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                >> 0xeU))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xfU] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xfU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xfU] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xfU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xfU] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xfU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xfU] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xfU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xfU] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0xfU]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                >> 0xfU))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x10U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x10U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x10U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x10U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x10U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x10U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x10U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x10U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x10U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0x10U]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                 >> 0x10U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x11U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x11U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x11U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x11U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x11U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x11U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x11U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x11U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x11U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0x11U]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                 >> 0x11U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x12U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x12U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x12U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x12U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x12U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x12U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x12U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x12U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x12U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0x12U]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                 >> 0x12U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x13U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x13U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x13U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x13U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x13U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x13U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x13U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x13U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x13U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0x13U]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                 >> 0x13U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x14U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x14U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x14U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x14U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x14U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x14U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x14U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x14U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x14U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0x14U]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                 >> 0x14U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x15U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x15U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x15U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x15U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x15U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x15U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x15U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x15U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x15U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0x15U]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                 >> 0x15U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x16U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x16U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x16U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x16U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x16U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x16U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x16U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x16U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x16U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0x16U]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                 >> 0x16U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x17U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x17U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x17U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x17U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x17U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x17U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x17U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x17U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x17U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0x17U]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                 >> 0x17U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x18U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x18U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x18U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x18U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x18U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x18U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x18U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x18U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x18U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0x18U]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                 >> 0x18U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x19U] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x19U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x19U] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x19U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x19U] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x19U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x19U] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x19U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x19U] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0x19U]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                 >> 0x19U))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1aU] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1aU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1aU] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1aU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1aU] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1aU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1aU] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1aU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1aU] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0x1aU]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                 >> 0x1aU))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1bU] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1bU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1bU] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1bU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1bU] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1bU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1bU] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1bU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1bU] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0x1bU]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                 >> 0x1bU))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1cU] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1cU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1cU] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1cU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1cU] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1cU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1cU] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1cU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1cU] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0x1cU]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                 >> 0x1cU))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1dU] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1dU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1dU] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1dU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1dU] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1dU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1dU] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1dU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1dU] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0x1dU]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                 >> 0x1dU))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1eU] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1eU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1eU] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1eU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1eU] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1eU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1eU] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1eU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1eU] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0x1eU]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                 >> 0x1eU))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1fU] 
        = (1U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1fU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1fU] 
        = (2U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1fU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1fU] 
        = (4U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1fU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1fU] 
        = (8U | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1fU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1fU] 
        = ((0xeU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0x1fU]) | (1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__windowStart_c 
                                 >> 0x1fU))));
    vlSelfRef.__PVT__branchHandler__DOT__instrsView[0U] 
        = ((vlSelfRef.__PVT__assocHitInstrs[0U] << 0x10U) 
           | (IData)(vlSelfRef.__PVT__branchHandler__DOT__lastInstr));
    vlSelfRef.__PVT__branchHandler__DOT__instrsView[1U] 
        = ((vlSelfRef.__PVT__assocHitInstrs[0U] >> 0x10U) 
           | (vlSelfRef.__PVT__assocHitInstrs[1U] << 0x10U));
    vlSelfRef.__PVT__branchHandler__DOT__instrsView[2U] 
        = ((vlSelfRef.__PVT__assocHitInstrs[1U] >> 0x10U) 
           | (vlSelfRef.__PVT__assocHitInstrs[2U] << 0x10U));
    vlSelfRef.__PVT__branchHandler__DOT__instrsView[3U] 
        = ((vlSelfRef.__PVT__assocHitInstrs[2U] >> 0x10U) 
           | (vlSelfRef.__PVT__assocHitInstrs[3U] << 0x10U));
    vlSelfRef.__PVT__branchHandler__DOT__instrsView[4U] 
        = (vlSelfRef.__PVT__assocHitInstrs[3U] >> 0x10U);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [4U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [6U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [9U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [8U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xbU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xaU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xdU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xcU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xfU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xeU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x11U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x10U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x13U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x12U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x15U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x14U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x17U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x16U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x19U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x18U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1bU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1aU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1dU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1cU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1fU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1eU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [1U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [3U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [2U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [5U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [4U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [7U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [6U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [9U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [9U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [8U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xbU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xbU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xaU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xdU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xdU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xcU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xfU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xfU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xeU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x11U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x11U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x10U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x13U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x13U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x12U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x15U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x15U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x14U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x17U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x17U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x16U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x19U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x19U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x18U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1bU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1bU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1aU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1dU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1dU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1cU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1fU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1fU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1eU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [1U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [1U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [3U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [3U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [2U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [5U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [5U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [4U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [7U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [7U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [6U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [9U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [9U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [9U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [8U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xbU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xbU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xbU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xaU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xdU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xdU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xdU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xcU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xfU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xfU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xfU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xeU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x11U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x11U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x11U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x10U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x13U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x13U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x13U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x12U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x15U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x15U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x15U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x14U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x17U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x17U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x17U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x16U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x19U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x19U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x19U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x18U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1bU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1bU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1bU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1aU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1dU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1dU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1dU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1cU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1fU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1fU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1fU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1eU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [1U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [1U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [1U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [3U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [3U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [3U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [2U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [5U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [5U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [5U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [4U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [7U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [7U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [7U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [6U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [9U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [9U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [9U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [9U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [8U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xbU] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xbU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xbU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xbU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xaU] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xdU] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xdU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xdU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xdU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xcU] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xfU] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xfU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xfU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0xfU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0xeU] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x11U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x11U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x11U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x11U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x10U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x13U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x13U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x13U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x13U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x12U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x15U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x15U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x15U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x15U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x14U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x17U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x17U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x17U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x17U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x16U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x19U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x19U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x19U] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x19U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x18U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1bU] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1bU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1bU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1bU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1aU] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1dU] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1dU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1dU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1dU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1cU] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1fU] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1fU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1fU] >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (1U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0x1fU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (1U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0x1eU] >> 3U));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [0U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [2U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [2U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [4U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [4U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [6U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [6U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [8U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [8U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0xaU] >> 1U))) + (1U & 
                                              (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                               [0xaU]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0xcU] >> 1U))) + (1U & 
                                              (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                               [0xcU]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0xeU] >> 1U))) + (1U & 
                                              (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                               [0xeU]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x10U] >> 1U))) + (1U & 
                                               (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                [0x10U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x12U] >> 1U))) + (1U & 
                                               (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                [0x12U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x14U] >> 1U))) + (1U & 
                                               (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                [0x14U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x16U] >> 1U))) + (1U & 
                                               (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                [0x16U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x18U] >> 1U))) + (1U & 
                                               (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                [0x18U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x1aU] >> 1U))) + (1U & 
                                               (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                [0x1aU]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x1cU] >> 1U))) + (1U & 
                                               (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                [0x1cU]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x1eU] >> 1U))) + (1U & 
                                               (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                [0x1eU]))));
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
    __PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16 
        = (0xffffU & vlSelfRef.__PVT__branchHandler__DOT__instrsView[0U]);
    branchHandler__DOT____Vlvbound_h4016cc4a__0 = (
                                                   vlSelfRef.__PVT__branchHandler__DOT__pc
                                                   [0U] 
                                                   + 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 0xcU)))) 
                                                     << 0xcU) 
                                                    | ((((0x800U 
                                                          & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                             >> 1U)) 
                                                         | (0x400U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 2U))) 
                                                        | ((0x300U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               >> 1U)) 
                                                           | ((0x80U 
                                                               & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                  << 1U)) 
                                                              | (0x40U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 1U))))) 
                                                       | (((0x20U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 3U)) 
                                                           | (0x10U 
                                                              & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                 >> 7U))) 
                                                          | (0xeU 
                                                             & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                >> 2U))))));
    vlSelfRef.__PVT__branchHandler__DOT__CJ_target[0U] 
        = branchHandler__DOT____Vlvbound_h4016cc4a__0;
    branchHandler__DOT____Vlvbound_hb098b6eb__0 = (
                                                   vlSelfRef.__PVT__branchHandler__DOT__pc
                                                   [0U] 
                                                   + 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 0xcU)))) 
                                                     << 9U) 
                                                    | (((0x100U 
                                                         & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                            >> 4U)) 
                                                        | ((0xc0U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 1U)) 
                                                           | (0x20U 
                                                              & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                 << 3U)))) 
                                                       | ((0x18U 
                                                           & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                              >> 7U)) 
                                                          | (6U 
                                                             & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                >> 2U))))));
    vlSelfRef.__PVT__branchHandler__DOT__CB_target[0U] 
        = branchHandler__DOT____Vlvbound_hb098b6eb__0;
    __PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16 
        = (vlSelfRef.__PVT__branchHandler__DOT__instrsView[0U] 
           >> 0x10U);
    branchHandler__DOT____Vlvbound_h4016cc4a__0 = (
                                                   vlSelfRef.__PVT__branchHandler__DOT__pc
                                                   [1U] 
                                                   + 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 0xcU)))) 
                                                     << 0xcU) 
                                                    | ((((0x800U 
                                                          & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                             >> 1U)) 
                                                         | (0x400U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 2U))) 
                                                        | ((0x300U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               >> 1U)) 
                                                           | ((0x80U 
                                                               & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                  << 1U)) 
                                                              | (0x40U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 1U))))) 
                                                       | (((0x20U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 3U)) 
                                                           | (0x10U 
                                                              & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                 >> 7U))) 
                                                          | (0xeU 
                                                             & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                >> 2U))))));
    vlSelfRef.__PVT__branchHandler__DOT__CJ_target[1U] 
        = branchHandler__DOT____Vlvbound_h4016cc4a__0;
    branchHandler__DOT____Vlvbound_hb098b6eb__0 = (
                                                   vlSelfRef.__PVT__branchHandler__DOT__pc
                                                   [1U] 
                                                   + 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 0xcU)))) 
                                                     << 9U) 
                                                    | (((0x100U 
                                                         & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                            >> 4U)) 
                                                        | ((0xc0U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 1U)) 
                                                           | (0x20U 
                                                              & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                 << 3U)))) 
                                                       | ((0x18U 
                                                           & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                              >> 7U)) 
                                                          | (6U 
                                                             & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                >> 2U))))));
    vlSelfRef.__PVT__branchHandler__DOT__CB_target[1U] 
        = branchHandler__DOT____Vlvbound_hb098b6eb__0;
    __PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16 
        = (0xffffU & vlSelfRef.__PVT__branchHandler__DOT__instrsView[1U]);
    branchHandler__DOT____Vlvbound_h4016cc4a__0 = (
                                                   vlSelfRef.__PVT__branchHandler__DOT__pc
                                                   [2U] 
                                                   + 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 0xcU)))) 
                                                     << 0xcU) 
                                                    | ((((0x800U 
                                                          & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                             >> 1U)) 
                                                         | (0x400U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 2U))) 
                                                        | ((0x300U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               >> 1U)) 
                                                           | ((0x80U 
                                                               & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                  << 1U)) 
                                                              | (0x40U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 1U))))) 
                                                       | (((0x20U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 3U)) 
                                                           | (0x10U 
                                                              & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                 >> 7U))) 
                                                          | (0xeU 
                                                             & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                >> 2U))))));
    vlSelfRef.__PVT__branchHandler__DOT__CJ_target[2U] 
        = branchHandler__DOT____Vlvbound_h4016cc4a__0;
    branchHandler__DOT____Vlvbound_hb098b6eb__0 = (
                                                   vlSelfRef.__PVT__branchHandler__DOT__pc
                                                   [2U] 
                                                   + 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 0xcU)))) 
                                                     << 9U) 
                                                    | (((0x100U 
                                                         & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                            >> 4U)) 
                                                        | ((0xc0U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 1U)) 
                                                           | (0x20U 
                                                              & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                 << 3U)))) 
                                                       | ((0x18U 
                                                           & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                              >> 7U)) 
                                                          | (6U 
                                                             & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                >> 2U))))));
    vlSelfRef.__PVT__branchHandler__DOT__CB_target[2U] 
        = branchHandler__DOT____Vlvbound_hb098b6eb__0;
    __PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16 
        = (vlSelfRef.__PVT__branchHandler__DOT__instrsView[1U] 
           >> 0x10U);
    branchHandler__DOT____Vlvbound_h4016cc4a__0 = (
                                                   vlSelfRef.__PVT__branchHandler__DOT__pc
                                                   [3U] 
                                                   + 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 0xcU)))) 
                                                     << 0xcU) 
                                                    | ((((0x800U 
                                                          & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                             >> 1U)) 
                                                         | (0x400U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 2U))) 
                                                        | ((0x300U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               >> 1U)) 
                                                           | ((0x80U 
                                                               & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                  << 1U)) 
                                                              | (0x40U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 1U))))) 
                                                       | (((0x20U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 3U)) 
                                                           | (0x10U 
                                                              & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                 >> 7U))) 
                                                          | (0xeU 
                                                             & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                >> 2U))))));
    vlSelfRef.__PVT__branchHandler__DOT__CJ_target[3U] 
        = branchHandler__DOT____Vlvbound_h4016cc4a__0;
    branchHandler__DOT____Vlvbound_hb098b6eb__0 = (
                                                   vlSelfRef.__PVT__branchHandler__DOT__pc
                                                   [3U] 
                                                   + 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 0xcU)))) 
                                                     << 9U) 
                                                    | (((0x100U 
                                                         & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                            >> 4U)) 
                                                        | ((0xc0U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 1U)) 
                                                           | (0x20U 
                                                              & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                 << 3U)))) 
                                                       | ((0x18U 
                                                           & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                              >> 7U)) 
                                                          | (6U 
                                                             & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                >> 2U))))));
    vlSelfRef.__PVT__branchHandler__DOT__CB_target[3U] 
        = branchHandler__DOT____Vlvbound_hb098b6eb__0;
    __PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16 
        = (0xffffU & vlSelfRef.__PVT__branchHandler__DOT__instrsView[2U]);
    branchHandler__DOT____Vlvbound_h4016cc4a__0 = (
                                                   vlSelfRef.__PVT__branchHandler__DOT__pc
                                                   [4U] 
                                                   + 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 0xcU)))) 
                                                     << 0xcU) 
                                                    | ((((0x800U 
                                                          & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                             >> 1U)) 
                                                         | (0x400U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 2U))) 
                                                        | ((0x300U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               >> 1U)) 
                                                           | ((0x80U 
                                                               & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                  << 1U)) 
                                                              | (0x40U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 1U))))) 
                                                       | (((0x20U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 3U)) 
                                                           | (0x10U 
                                                              & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                 >> 7U))) 
                                                          | (0xeU 
                                                             & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                >> 2U))))));
    vlSelfRef.__PVT__branchHandler__DOT__CJ_target[4U] 
        = branchHandler__DOT____Vlvbound_h4016cc4a__0;
    branchHandler__DOT____Vlvbound_hb098b6eb__0 = (
                                                   vlSelfRef.__PVT__branchHandler__DOT__pc
                                                   [4U] 
                                                   + 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 0xcU)))) 
                                                     << 9U) 
                                                    | (((0x100U 
                                                         & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                            >> 4U)) 
                                                        | ((0xc0U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 1U)) 
                                                           | (0x20U 
                                                              & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                 << 3U)))) 
                                                       | ((0x18U 
                                                           & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                              >> 7U)) 
                                                          | (6U 
                                                             & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                >> 2U))))));
    vlSelfRef.__PVT__branchHandler__DOT__CB_target[4U] 
        = branchHandler__DOT____Vlvbound_hb098b6eb__0;
    __PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16 
        = (vlSelfRef.__PVT__branchHandler__DOT__instrsView[2U] 
           >> 0x10U);
    branchHandler__DOT____Vlvbound_h4016cc4a__0 = (
                                                   vlSelfRef.__PVT__branchHandler__DOT__pc
                                                   [5U] 
                                                   + 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 0xcU)))) 
                                                     << 0xcU) 
                                                    | ((((0x800U 
                                                          & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                             >> 1U)) 
                                                         | (0x400U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 2U))) 
                                                        | ((0x300U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               >> 1U)) 
                                                           | ((0x80U 
                                                               & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                  << 1U)) 
                                                              | (0x40U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 1U))))) 
                                                       | (((0x20U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 3U)) 
                                                           | (0x10U 
                                                              & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                 >> 7U))) 
                                                          | (0xeU 
                                                             & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                >> 2U))))));
    vlSelfRef.__PVT__branchHandler__DOT__CJ_target[5U] 
        = branchHandler__DOT____Vlvbound_h4016cc4a__0;
    branchHandler__DOT____Vlvbound_hb098b6eb__0 = (
                                                   vlSelfRef.__PVT__branchHandler__DOT__pc
                                                   [5U] 
                                                   + 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 0xcU)))) 
                                                     << 9U) 
                                                    | (((0x100U 
                                                         & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                            >> 4U)) 
                                                        | ((0xc0U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 1U)) 
                                                           | (0x20U 
                                                              & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                 << 3U)))) 
                                                       | ((0x18U 
                                                           & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                              >> 7U)) 
                                                          | (6U 
                                                             & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                >> 2U))))));
    vlSelfRef.__PVT__branchHandler__DOT__CB_target[5U] 
        = branchHandler__DOT____Vlvbound_hb098b6eb__0;
    __PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16 
        = (0xffffU & vlSelfRef.__PVT__branchHandler__DOT__instrsView[3U]);
    branchHandler__DOT____Vlvbound_h4016cc4a__0 = (
                                                   vlSelfRef.__PVT__branchHandler__DOT__pc
                                                   [6U] 
                                                   + 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 0xcU)))) 
                                                     << 0xcU) 
                                                    | ((((0x800U 
                                                          & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                             >> 1U)) 
                                                         | (0x400U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 2U))) 
                                                        | ((0x300U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               >> 1U)) 
                                                           | ((0x80U 
                                                               & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                  << 1U)) 
                                                              | (0x40U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 1U))))) 
                                                       | (((0x20U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 3U)) 
                                                           | (0x10U 
                                                              & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                 >> 7U))) 
                                                          | (0xeU 
                                                             & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                >> 2U))))));
    vlSelfRef.__PVT__branchHandler__DOT__CJ_target[6U] 
        = branchHandler__DOT____Vlvbound_h4016cc4a__0;
    branchHandler__DOT____Vlvbound_hb098b6eb__0 = (
                                                   vlSelfRef.__PVT__branchHandler__DOT__pc
                                                   [6U] 
                                                   + 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 0xcU)))) 
                                                     << 9U) 
                                                    | (((0x100U 
                                                         & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                            >> 4U)) 
                                                        | ((0xc0U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 1U)) 
                                                           | (0x20U 
                                                              & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                 << 3U)))) 
                                                       | ((0x18U 
                                                           & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                              >> 7U)) 
                                                          | (6U 
                                                             & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                >> 2U))))));
    vlSelfRef.__PVT__branchHandler__DOT__CB_target[6U] 
        = branchHandler__DOT____Vlvbound_hb098b6eb__0;
    __PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16 
        = (vlSelfRef.__PVT__branchHandler__DOT__instrsView[3U] 
           >> 0x10U);
    branchHandler__DOT____Vlvbound_h4016cc4a__0 = (
                                                   vlSelfRef.__PVT__branchHandler__DOT__pc
                                                   [7U] 
                                                   + 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 0xcU)))) 
                                                     << 0xcU) 
                                                    | ((((0x800U 
                                                          & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                             >> 1U)) 
                                                         | (0x400U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 2U))) 
                                                        | ((0x300U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               >> 1U)) 
                                                           | ((0x80U 
                                                               & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                  << 1U)) 
                                                              | (0x40U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 1U))))) 
                                                       | (((0x20U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 3U)) 
                                                           | (0x10U 
                                                              & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                 >> 7U))) 
                                                          | (0xeU 
                                                             & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                >> 2U))))));
    vlSelfRef.__PVT__branchHandler__DOT__CJ_target[7U] 
        = branchHandler__DOT____Vlvbound_h4016cc4a__0;
    branchHandler__DOT____Vlvbound_hb098b6eb__0 = (
                                                   vlSelfRef.__PVT__branchHandler__DOT__pc
                                                   [7U] 
                                                   + 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 0xcU)))) 
                                                     << 9U) 
                                                    | (((0x100U 
                                                         & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                            >> 4U)) 
                                                        | ((0xc0U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 1U)) 
                                                           | (0x20U 
                                                              & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                 << 3U)))) 
                                                       | ((0x18U 
                                                           & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                              >> 7U)) 
                                                          | (6U 
                                                             & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                >> 2U))))));
    vlSelfRef.__PVT__branchHandler__DOT__CB_target[7U] 
        = branchHandler__DOT____Vlvbound_hb098b6eb__0;
    __PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16 
        = (0xffffU & vlSelfRef.__PVT__branchHandler__DOT__instrsView[4U]);
    branchHandler__DOT____Vlvbound_h4016cc4a__0 = (
                                                   vlSelfRef.__PVT__branchHandler__DOT__pc
                                                   [8U] 
                                                   + 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 0xcU)))) 
                                                     << 0xcU) 
                                                    | ((((0x800U 
                                                          & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                             >> 1U)) 
                                                         | (0x400U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 2U))) 
                                                        | ((0x300U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               >> 1U)) 
                                                           | ((0x80U 
                                                               & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                  << 1U)) 
                                                              | (0x40U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 1U))))) 
                                                       | (((0x20U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 3U)) 
                                                           | (0x10U 
                                                              & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                 >> 7U))) 
                                                          | (0xeU 
                                                             & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                >> 2U))))));
    vlSelfRef.__PVT__branchHandler__DOT__CJ_target[8U] 
        = branchHandler__DOT____Vlvbound_h4016cc4a__0;
    branchHandler__DOT____Vlvbound_hb098b6eb__0 = (
                                                   vlSelfRef.__PVT__branchHandler__DOT__pc
                                                   [8U] 
                                                   + 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                    >> 0xcU)))) 
                                                     << 9U) 
                                                    | (((0x100U 
                                                         & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                            >> 4U)) 
                                                        | ((0xc0U 
                                                            & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                               << 1U)) 
                                                           | (0x20U 
                                                              & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                 << 3U)))) 
                                                       | ((0x18U 
                                                           & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                              >> 7U)) 
                                                          | (6U 
                                                             & ((IData)(__PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16) 
                                                                >> 2U))))));
    vlSelfRef.__PVT__branchHandler__DOT__CB_target[8U] 
        = branchHandler__DOT____Vlvbound_hb098b6eb__0;
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
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((0xfcU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((2U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 1U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((0xfcU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((2U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 1U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [2U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((0xfcU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [2U]) | ((2U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [4U] << 1U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [4U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((0xfcU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [3U]) | ((2U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [6U] << 1U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [6U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[4U] 
        = ((0xfcU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [4U]) | ((2U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [8U] << 1U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [8U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[5U] 
        = ((0xfcU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [5U]) | ((2U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0xaU] << 1U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [0xaU]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[6U] 
        = ((0xfcU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [6U]) | ((2U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0xcU] << 1U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [0xcU]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[7U] 
        = ((0xfcU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [7U]) | ((2U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0xeU] << 1U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [0xeU]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[8U] 
        = ((0xfcU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [8U]) | ((2U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0x10U] << 1U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [0x10U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[9U] 
        = ((0xfcU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [9U]) | ((2U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0x12U] << 1U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [0x12U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xaU] 
        = ((0xfcU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xaU]) | ((2U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                              [0x14U] << 1U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__0__KET____DOT__mux
                       [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0x14U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xbU] 
        = ((0xfcU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xbU]) | ((2U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                              [0x16U] << 1U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__0__KET____DOT__mux
                       [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0x16U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xcU] 
        = ((0xfcU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xcU]) | ((2U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                              [0x18U] << 1U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__0__KET____DOT__mux
                       [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0x18U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xdU] 
        = ((0xfcU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xdU]) | ((2U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                              [0x1aU] << 1U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__0__KET____DOT__mux
                       [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0x1aU]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xeU] 
        = ((0xfcU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xeU]) | ((2U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                              [0x1cU] << 1U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__0__KET____DOT__mux
                       [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0x1cU]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xfU] 
        = ((0xfcU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xfU]) | ((2U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                              [0x1eU] << 1U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__0__KET____DOT__mux
                       [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0x1eU]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((0xf3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 2U)) | (((2U >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0U] >> 2U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((0xf3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 2U)) | (((2U >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [2U] >> 2U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((0xf3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [2U]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [4U] << 2U)) | (((2U >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [4U] >> 2U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((0xf3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [3U]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [6U] << 2U)) | (((2U >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [6U] >> 2U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[4U] 
        = ((0xf3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [4U]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [8U] << 2U)) | (((2U >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [8U] >> 2U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[5U] 
        = ((0xf3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [5U]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0xaU] << 2U)) | (((2U 
                                                >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                               && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                               [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                              << 2U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0xaU] >> 2U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[6U] 
        = ((0xf3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [6U]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0xcU] << 2U)) | (((2U 
                                                >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                               && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                               [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                              << 2U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0xcU] >> 2U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[7U] 
        = ((0xf3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [7U]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0xeU] << 2U)) | (((2U 
                                                >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                               && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                               [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                              << 2U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0xeU] >> 2U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[8U] 
        = ((0xf3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [8U]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0x10U] << 2U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                                && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                               << 2U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x10U] >> 2U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[9U] 
        = ((0xf3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [9U]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0x12U] << 2U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                                && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                               << 2U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x12U] >> 2U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xaU] 
        = ((0xf3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xaU]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                              [0x14U] << 2U)) | (((2U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                                  && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                                 << 2U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x14U] >> 2U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xbU] 
        = ((0xf3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xbU]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                              [0x16U] << 2U)) | (((2U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                                  && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                                 << 2U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x16U] >> 2U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xcU] 
        = ((0xf3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xcU]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                              [0x18U] << 2U)) | (((2U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                                  && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                                 << 2U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x18U] >> 2U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xdU] 
        = ((0xf3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xdU]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                              [0x1aU] << 2U)) | (((2U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                                  && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                                 << 2U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x1aU] >> 2U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xeU] 
        = ((0xf3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xeU]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                              [0x1cU] << 2U)) | (((2U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                                  && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                                 << 2U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x1cU] >> 2U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xfU] 
        = ((0xf3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xfU]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                              [0x1eU] << 2U)) | (((2U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                                  && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                                 << 2U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x1eU] >> 2U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
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
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((0xcfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0U] << 3U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                               [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                               << 4U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0U] >> 3U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((0xcfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [2U] << 3U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                               [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                               << 4U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [2U] >> 3U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((0xcfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [2U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [4U] << 3U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                               [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                               << 4U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [4U] >> 3U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((0xcfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [3U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [6U] << 3U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                               [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                               << 4U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [6U] >> 3U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[4U] 
        = ((0xcfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [4U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [8U] << 3U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                               [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                               << 4U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [8U] >> 3U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[5U] 
        = ((0xcfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [5U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0xaU] << 3U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                 << 4U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0xaU] >> 3U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[6U] 
        = ((0xcfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [6U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0xcU] << 3U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                 << 4U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0xcU] >> 3U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[7U] 
        = ((0xcfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [7U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0xeU] << 3U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                 << 4U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0xeU] >> 3U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[8U] 
        = ((0xcfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [8U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0x10U] << 3U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                  << 4U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x10U] >> 3U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[9U] 
        = ((0xcfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [9U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0x12U] << 3U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                  << 4U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x12U] >> 3U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xaU] 
        = ((0xcfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xaU]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                 [0x14U] << 3U)) | 
                       (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__2__KET____DOT__mux
                        [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                        << 4U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x14U] >> 3U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xbU] 
        = ((0xcfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xbU]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                 [0x16U] << 3U)) | 
                       (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__2__KET____DOT__mux
                        [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                        << 4U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x16U] >> 3U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xcU] 
        = ((0xcfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xcU]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                 [0x18U] << 3U)) | 
                       (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__2__KET____DOT__mux
                        [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                        << 4U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x18U] >> 3U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xdU] 
        = ((0xcfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xdU]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                 [0x1aU] << 3U)) | 
                       (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__2__KET____DOT__mux
                        [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                        << 4U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x1aU] >> 3U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xeU] 
        = ((0xcfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xeU]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                 [0x1cU] << 3U)) | 
                       (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__2__KET____DOT__mux
                        [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                        << 4U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x1cU] >> 3U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xfU] 
        = ((0xcfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xfU]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                 [0x1eU] << 3U)) | 
                       (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__2__KET____DOT__mux
                        [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                        << 4U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0x1eU] >> 3U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
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
}
