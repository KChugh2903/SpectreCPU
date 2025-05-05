// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_RegFile__NB5_A1.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_RegFile__NB5_A1___nba_sequent__TOP__Top__soc__core__rf__0(VTop_RegFile__NB5_A1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VTop_RegFile__NB5_A1___nba_sequent__TOP__Top__soc__core__rf__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__OUT_rdata[0U] = ((1U & (IData)(vlSymsp->TOP__Top__soc__core.__PVT__RF_readEnable))
                                       ? vlSelfRef.mem
                                      [(0x3fU & (IData)(vlSymsp->TOP__Top__soc__core.__Vcellout__rfMux__OUT_readAddress))]
                                       : 0U);
    vlSelfRef.__PVT__OUT_rdata[1U] = ((2U & (IData)(vlSymsp->TOP__Top__soc__core.__PVT__RF_readEnable))
                                       ? vlSelfRef.mem
                                      [(0x3fU & (IData)(
                                                        (vlSymsp->TOP__Top__soc__core.__Vcellout__rfMux__OUT_readAddress 
                                                         >> 6U)))]
                                       : 0U);
    vlSelfRef.__PVT__OUT_rdata[2U] = ((4U & (IData)(vlSymsp->TOP__Top__soc__core.__PVT__RF_readEnable))
                                       ? vlSelfRef.mem
                                      [(0x3fU & (IData)(
                                                        (vlSymsp->TOP__Top__soc__core.__Vcellout__rfMux__OUT_readAddress 
                                                         >> 0xcU)))]
                                       : 0U);
    vlSelfRef.__PVT__OUT_rdata[3U] = ((8U & (IData)(vlSymsp->TOP__Top__soc__core.__PVT__RF_readEnable))
                                       ? vlSelfRef.mem
                                      [(0x3fU & (IData)(
                                                        (vlSymsp->TOP__Top__soc__core.__Vcellout__rfMux__OUT_readAddress 
                                                         >> 0x12U)))]
                                       : 0U);
    vlSelfRef.__PVT__OUT_rdata[4U] = ((0x10U & (IData)(vlSymsp->TOP__Top__soc__core.__PVT__RF_readEnable))
                                       ? vlSelfRef.mem
                                      [(0x3fU & (IData)(
                                                        (vlSymsp->TOP__Top__soc__core.__Vcellout__rfMux__OUT_readAddress 
                                                         >> 0x18U)))]
                                       : 0U);
    vlSelfRef.__PVT__OUT_rdata[5U] = ((0x20U & (IData)(vlSymsp->TOP__Top__soc__core.__PVT__RF_readEnable))
                                       ? vlSelfRef.mem
                                      [(0x3fU & (IData)(
                                                        (vlSymsp->TOP__Top__soc__core.__Vcellout__rfMux__OUT_readAddress 
                                                         >> 0x1eU)))]
                                       : 0U);
    vlSelfRef.__PVT__OUT_rdata[6U] = ((0x40U & (IData)(vlSymsp->TOP__Top__soc__core.__PVT__RF_readEnable))
                                       ? vlSelfRef.mem
                                      [(0x3fU & (IData)(
                                                        (vlSymsp->TOP__Top__soc__core.__Vcellout__rfMux__OUT_readAddress 
                                                         >> 0x24U)))]
                                       : 0U);
    vlSelfRef.__PVT__OUT_rdata[7U] = ((0x80U & (IData)(vlSymsp->TOP__Top__soc__core.__PVT__RF_readEnable))
                                       ? vlSelfRef.mem
                                      [(0x3fU & (IData)(
                                                        (vlSymsp->TOP__Top__soc__core.__Vcellout__rfMux__OUT_readAddress 
                                                         >> 0x2aU)))]
                                       : 0U);
}

VL_INLINE_OPT void VTop_RegFile__NB5_A1___nba_sequent__TOP__Top__soc__core__rf__1(VTop_RegFile__NB5_A1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VTop_RegFile__NB5_A1___nba_sequent__TOP__Top__soc__core__rf__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__mem__v0;
    __VdlyVal__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__mem__v0;
    __VdlyDim0__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__mem__v0;
    __VdlySet__mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__mem__v1;
    __VdlyVal__mem__v1 = 0;
    CData/*5:0*/ __VdlyDim0__mem__v1;
    __VdlyDim0__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__mem__v1;
    __VdlySet__mem__v1 = 0;
    IData/*31:0*/ __VdlyVal__mem__v2;
    __VdlyVal__mem__v2 = 0;
    CData/*5:0*/ __VdlyDim0__mem__v2;
    __VdlyDim0__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__mem__v2;
    __VdlySet__mem__v2 = 0;
    IData/*31:0*/ __VdlyVal__mem__v3;
    __VdlyVal__mem__v3 = 0;
    CData/*5:0*/ __VdlyDim0__mem__v3;
    __VdlyDim0__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__mem__v3;
    __VdlySet__mem__v3 = 0;
    IData/*31:0*/ __VdlyVal__mem__v4;
    __VdlyVal__mem__v4 = 0;
    CData/*5:0*/ __VdlyDim0__mem__v4;
    __VdlyDim0__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__mem__v4;
    __VdlySet__mem__v4 = 0;
    // Body
    __VdlySet__mem__v0 = 0U;
    __VdlySet__mem__v1 = 0U;
    __VdlySet__mem__v2 = 0U;
    __VdlySet__mem__v3 = 0U;
    __VdlySet__mem__v4 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__Top__soc__core.__PVT__RF_writeEnable))) {
        __VdlyVal__mem__v0 = vlSymsp->TOP__Top__soc__core.__PVT__RF_writeData[0U];
        __VdlyDim0__mem__v0 = (0x3fU & vlSymsp->TOP__Top__soc__core.__PVT__RF_writeAddress);
        __VdlySet__mem__v0 = 1U;
    }
    if ((2U & (IData)(vlSymsp->TOP__Top__soc__core.__PVT__RF_writeEnable))) {
        __VdlyVal__mem__v1 = vlSymsp->TOP__Top__soc__core.__PVT__RF_writeData[1U];
        __VdlyDim0__mem__v1 = (0x3fU & (vlSymsp->TOP__Top__soc__core.__PVT__RF_writeAddress 
                                        >> 6U));
        __VdlySet__mem__v1 = 1U;
    }
    if ((4U & (IData)(vlSymsp->TOP__Top__soc__core.__PVT__RF_writeEnable))) {
        __VdlyVal__mem__v2 = vlSymsp->TOP__Top__soc__core.__PVT__RF_writeData[2U];
        __VdlyDim0__mem__v2 = (0x3fU & (vlSymsp->TOP__Top__soc__core.__PVT__RF_writeAddress 
                                        >> 0xcU));
        __VdlySet__mem__v2 = 1U;
    }
    if ((8U & (IData)(vlSymsp->TOP__Top__soc__core.__PVT__RF_writeEnable))) {
        __VdlyVal__mem__v3 = vlSymsp->TOP__Top__soc__core.__PVT__RF_writeData[3U];
        __VdlyDim0__mem__v3 = (0x3fU & (vlSymsp->TOP__Top__soc__core.__PVT__RF_writeAddress 
                                        >> 0x12U));
        __VdlySet__mem__v3 = 1U;
    }
    if ((0x10U & (IData)(vlSymsp->TOP__Top__soc__core.__PVT__RF_writeEnable))) {
        __VdlyVal__mem__v4 = vlSymsp->TOP__Top__soc__core.__PVT__RF_writeData[4U];
        __VdlyDim0__mem__v4 = (0x3fU & (vlSymsp->TOP__Top__soc__core.__PVT__RF_writeAddress 
                                        >> 0x18U));
        __VdlySet__mem__v4 = 1U;
    }
    if (__VdlySet__mem__v0) {
        vlSelfRef.mem[__VdlyDim0__mem__v0] = __VdlyVal__mem__v0;
    }
    if (__VdlySet__mem__v1) {
        vlSelfRef.mem[__VdlyDim0__mem__v1] = __VdlyVal__mem__v1;
    }
    if (__VdlySet__mem__v2) {
        vlSelfRef.mem[__VdlyDim0__mem__v2] = __VdlyVal__mem__v2;
    }
    if (__VdlySet__mem__v3) {
        vlSelfRef.mem[__VdlyDim0__mem__v3] = __VdlyVal__mem__v3;
    }
    if (__VdlySet__mem__v4) {
        vlSelfRef.mem[__VdlyDim0__mem__v4] = __VdlyVal__mem__v4;
    }
}
