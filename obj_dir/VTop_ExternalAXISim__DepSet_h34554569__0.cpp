// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_ExternalAXISim.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__0(VTop_ExternalAXISim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__wFIFO__DOT__indexIn;
    __Vdly__wFIFO__DOT__indexIn = 0;
    CData/*0:0*/ __Vdly__wFIFO__DOT__indexOut;
    __Vdly__wFIFO__DOT__indexOut = 0;
    VlWide<5>/*144:0*/ __VdlyVal__wFIFO__DOT__mem__v0;
    VL_ZERO_W(145, __VdlyVal__wFIFO__DOT__mem__v0);
    CData/*0:0*/ __VdlyDim0__wFIFO__DOT__mem__v0;
    __VdlyDim0__wFIFO__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__wFIFO__DOT__mem__v0;
    __VdlySet__wFIFO__DOT__mem__v0 = 0;
    // Body
    __VdlySet__wFIFO__DOT__mem__v0 = 0U;
    __Vdly__wFIFO__DOT__indexIn = vlSelfRef.__PVT__wFIFO__DOT__indexIn;
    __Vdly__wFIFO__DOT__indexOut = vlSelfRef.__PVT__wFIFO__DOT__indexOut;
    if (vlSymsp->TOP.rst) {
        __Vdly__wFIFO__DOT__indexIn = 0U;
        vlSelfRef.__PVT__wFIFO__DOT__outValidReg = 0U;
        vlSelfRef.__PVT__wFIFO__DOT__fullCond = 0U;
        __Vdly__wFIFO__DOT__indexOut = 0U;
        vlSelfRef.__PVT__wFIFO__DOT__outDataReg[0U] = 0U;
        vlSelfRef.__PVT__wFIFO__DOT__outDataReg[1U] = 0U;
        vlSelfRef.__PVT__wFIFO__DOT__outDataReg[2U] = 0U;
        vlSelfRef.__PVT__wFIFO__DOT__outDataReg[3U] = 0U;
        vlSelfRef.__PVT__wFIFO__DOT__outDataReg[4U] = 0U;
    } else {
        if (vlSelfRef.__PVT__writeIdxValid) {
            vlSelfRef.__PVT__wFIFO__DOT__outValidReg = 0U;
        }
        if (vlSelfRef.__PVT__wFIFO__DOT__outputReady) {
            vlSelfRef.__PVT__wFIFO__DOT__outDataReg[0U] = 0U;
            vlSelfRef.__PVT__wFIFO__DOT__outDataReg[1U] = 0U;
            vlSelfRef.__PVT__wFIFO__DOT__outDataReg[2U] = 0U;
            vlSelfRef.__PVT__wFIFO__DOT__outDataReg[3U] = 0U;
            vlSelfRef.__PVT__wFIFO__DOT__outDataReg[4U] = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__wFIFO__DOT__combPassthru) 
                      & (IData)(vlSelfRef.__PVT__writeIdxValid))))) {
            if ((1U & (~ (((IData)(vlSelfRef.__PVT__wFIFO__DOT__empty) 
                           & (IData)(vlSelfRef.__PVT__wFIFO__DOT__doInsert)) 
                          & (IData)(vlSelfRef.__PVT__wFIFO__DOT__outputReady))))) {
                if (vlSelfRef.__PVT__wFIFO__DOT__doInsert) {
                    __VdlyVal__wFIFO__DOT__mem__v0[0U] 
                        = vlSelfRef.__Vcellinp__wFIFO__IN_data[0U];
                    __VdlyVal__wFIFO__DOT__mem__v0[1U] 
                        = vlSelfRef.__Vcellinp__wFIFO__IN_data[1U];
                    __VdlyVal__wFIFO__DOT__mem__v0[2U] 
                        = vlSelfRef.__Vcellinp__wFIFO__IN_data[2U];
                    __VdlyVal__wFIFO__DOT__mem__v0[3U] 
                        = vlSelfRef.__Vcellinp__wFIFO__IN_data[3U];
                    __VdlyVal__wFIFO__DOT__mem__v0[4U] 
                        = vlSelfRef.__Vcellinp__wFIFO__IN_data[4U];
                    __VdlyDim0__wFIFO__DOT__mem__v0 
                        = vlSelfRef.__PVT__wFIFO__DOT__indexIn;
                    __VdlySet__wFIFO__DOT__mem__v0 = 1U;
                    __Vdly__wFIFO__DOT__indexIn = (1U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__wFIFO__DOT__indexIn)));
                }
                if (((IData)(vlSelfRef.__PVT__wFIFO__DOT__doInsert) 
                     != (IData)(vlSelfRef.__PVT__wFIFO__DOT__doExtract))) {
                    vlSelfRef.__PVT__wFIFO__DOT__fullCond 
                        = vlSelfRef.__PVT__wFIFO__DOT__doInsert;
                }
            }
            if ((((IData)(vlSelfRef.__PVT__wFIFO__DOT__empty) 
                  & (IData)(vlSelfRef.__PVT__wFIFO__DOT__doInsert)) 
                 & (IData)(vlSelfRef.__PVT__wFIFO__DOT__outputReady))) {
                vlSelfRef.__PVT__wFIFO__DOT__outValidReg = 1U;
                vlSelfRef.__PVT__wFIFO__DOT__outDataReg[0U] 
                    = vlSelfRef.__Vcellinp__wFIFO__IN_data[0U];
                vlSelfRef.__PVT__wFIFO__DOT__outDataReg[1U] 
                    = vlSelfRef.__Vcellinp__wFIFO__IN_data[1U];
                vlSelfRef.__PVT__wFIFO__DOT__outDataReg[2U] 
                    = vlSelfRef.__Vcellinp__wFIFO__IN_data[2U];
                vlSelfRef.__PVT__wFIFO__DOT__outDataReg[3U] 
                    = vlSelfRef.__Vcellinp__wFIFO__IN_data[3U];
                vlSelfRef.__PVT__wFIFO__DOT__outDataReg[4U] 
                    = vlSelfRef.__Vcellinp__wFIFO__IN_data[4U];
            } else if (vlSelfRef.__PVT__wFIFO__DOT__doExtract) {
                vlSelfRef.__PVT__wFIFO__DOT__outValidReg = 1U;
                __Vdly__wFIFO__DOT__indexOut = (1U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__wFIFO__DOT__indexOut)));
                vlSelfRef.__PVT__wFIFO__DOT__outDataReg[0U] 
                    = vlSelfRef.__PVT__wFIFO__DOT__mem
                    [vlSelfRef.__PVT__wFIFO__DOT__indexOut][0U];
                vlSelfRef.__PVT__wFIFO__DOT__outDataReg[1U] 
                    = vlSelfRef.__PVT__wFIFO__DOT__mem
                    [vlSelfRef.__PVT__wFIFO__DOT__indexOut][1U];
                vlSelfRef.__PVT__wFIFO__DOT__outDataReg[2U] 
                    = vlSelfRef.__PVT__wFIFO__DOT__mem
                    [vlSelfRef.__PVT__wFIFO__DOT__indexOut][2U];
                vlSelfRef.__PVT__wFIFO__DOT__outDataReg[3U] 
                    = vlSelfRef.__PVT__wFIFO__DOT__mem
                    [vlSelfRef.__PVT__wFIFO__DOT__indexOut][3U];
                vlSelfRef.__PVT__wFIFO__DOT__outDataReg[4U] 
                    = vlSelfRef.__PVT__wFIFO__DOT__mem
                    [vlSelfRef.__PVT__wFIFO__DOT__indexOut][4U];
            }
        }
    }
    vlSelfRef.__PVT__wFIFO__DOT__indexIn = __Vdly__wFIFO__DOT__indexIn;
    if (__VdlySet__wFIFO__DOT__mem__v0) {
        vlSelfRef.__PVT__wFIFO__DOT__mem[__VdlyDim0__wFIFO__DOT__mem__v0][0U] 
            = __VdlyVal__wFIFO__DOT__mem__v0[0U];
        vlSelfRef.__PVT__wFIFO__DOT__mem[__VdlyDim0__wFIFO__DOT__mem__v0][1U] 
            = __VdlyVal__wFIFO__DOT__mem__v0[1U];
        vlSelfRef.__PVT__wFIFO__DOT__mem[__VdlyDim0__wFIFO__DOT__mem__v0][2U] 
            = __VdlyVal__wFIFO__DOT__mem__v0[2U];
        vlSelfRef.__PVT__wFIFO__DOT__mem[__VdlyDim0__wFIFO__DOT__mem__v0][3U] 
            = __VdlyVal__wFIFO__DOT__mem__v0[3U];
        vlSelfRef.__PVT__wFIFO__DOT__mem[__VdlyDim0__wFIFO__DOT__mem__v0][4U] 
            = __VdlyVal__wFIFO__DOT__mem__v0[4U];
    }
    vlSelfRef.__PVT__wFIFO__DOT__indexOut = __Vdly__wFIFO__DOT__indexOut;
    vlSelfRef.__PVT__wFIFO__DOT__equal = ((IData)(vlSelfRef.__PVT__wFIFO__DOT__indexIn) 
                                          == (IData)(vlSelfRef.__PVT__wFIFO__DOT__indexOut));
    vlSelfRef.__PVT__wFIFO__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__wFIFO__DOT__fullCond)) 
                                          & (IData)(vlSelfRef.__PVT__wFIFO__DOT__equal));
}

VL_INLINE_OPT void VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__1(VTop_ExternalAXISim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__wFIFO__IN_data[0U] = ((vlSymsp->TOP__Top__soc.__PVT__s_axi_wdata[0U] 
                                                 << 0x11U) 
                                                | (((IData)(vlSymsp->TOP__Top__soc.__PVT__s_axi_wstrb) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__Top__soc.__PVT__s_axi_wlast)));
    vlSelfRef.__Vcellinp__wFIFO__IN_data[1U] = ((vlSymsp->TOP__Top__soc.__PVT__s_axi_wdata[0U] 
                                                 >> 0xfU) 
                                                | (vlSymsp->TOP__Top__soc.__PVT__s_axi_wdata[1U] 
                                                   << 0x11U));
    vlSelfRef.__Vcellinp__wFIFO__IN_data[2U] = ((vlSymsp->TOP__Top__soc.__PVT__s_axi_wdata[1U] 
                                                 >> 0xfU) 
                                                | (vlSymsp->TOP__Top__soc.__PVT__s_axi_wdata[2U] 
                                                   << 0x11U));
    vlSelfRef.__Vcellinp__wFIFO__IN_data[3U] = ((vlSymsp->TOP__Top__soc.__PVT__s_axi_wdata[2U] 
                                                 >> 0xfU) 
                                                | (vlSymsp->TOP__Top__soc.__PVT__s_axi_wdata[3U] 
                                                   << 0x11U));
    vlSelfRef.__Vcellinp__wFIFO__IN_data[4U] = (vlSymsp->TOP__Top__soc.__PVT__s_axi_wdata[3U] 
                                                >> 0xfU);
}

VL_INLINE_OPT void VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__2(VTop_ExternalAXISim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __PVT__unnamedblk6__DOT__idx;
    __PVT__unnamedblk6__DOT__idx = 0;
    CData/*1:0*/ __PVT__unnamedblk9__DOT__idx;
    __PVT__unnamedblk9__DOT__idx = 0;
    IData/*31:0*/ __Vfunc_GetCurAddr__1__Vfuncout;
    __Vfunc_GetCurAddr__1__Vfuncout = 0;
    QData/*50:0*/ __Vfunc_GetCurAddr__1__t;
    __Vfunc_GetCurAddr__1__t = 0;
    CData/*0:0*/ __Vdly__awFIFO__DOT__indexIn;
    __Vdly__awFIFO__DOT__indexIn = 0;
    CData/*0:0*/ __Vdly__awFIFO__DOT__indexOut;
    __Vdly__awFIFO__DOT__indexOut = 0;
    CData/*0:0*/ __Vdly__arFIFO__DOT__indexIn;
    __Vdly__arFIFO__DOT__indexIn = 0;
    CData/*0:0*/ __Vdly__arFIFO__DOT__indexOut;
    __Vdly__arFIFO__DOT__indexOut = 0;
    QData/*51:0*/ __VdlyVal__awFIFO__DOT__mem__v0;
    __VdlyVal__awFIFO__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlyDim0__awFIFO__DOT__mem__v0;
    __VdlyDim0__awFIFO__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__awFIFO__DOT__mem__v0;
    __VdlySet__awFIFO__DOT__mem__v0 = 0;
    QData/*51:0*/ __VdlyVal__arFIFO__DOT__mem__v0;
    __VdlyVal__arFIFO__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlyDim0__arFIFO__DOT__mem__v0;
    __VdlyDim0__arFIFO__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__arFIFO__DOT__mem__v0;
    __VdlySet__arFIFO__DOT__mem__v0 = 0;
    // Body
    __VdlySet__arFIFO__DOT__mem__v0 = 0U;
    __VdlySet__awFIFO__DOT__mem__v0 = 0U;
    __Vdly__arFIFO__DOT__indexIn = vlSelfRef.__PVT__arFIFO__DOT__indexIn;
    __Vdly__awFIFO__DOT__indexIn = vlSelfRef.__PVT__awFIFO__DOT__indexIn;
    __Vdly__arFIFO__DOT__indexOut = vlSelfRef.__PVT__arFIFO__DOT__indexOut;
    __Vdly__awFIFO__DOT__indexOut = vlSelfRef.__PVT__awFIFO__DOT__indexOut;
    vlSelfRef.__VdlySet__mem__v0 = 0U;
    vlSelfRef.__VdlySet__mem__v1 = 0U;
    vlSelfRef.__VdlySet__mem__v2 = 0U;
    vlSelfRef.__VdlySet__mem__v3 = 0U;
    vlSelfRef.__VdlySet__mem__v4 = 0U;
    vlSelfRef.__VdlySet__mem__v5 = 0U;
    vlSelfRef.__VdlySet__mem__v6 = 0U;
    vlSelfRef.__VdlySet__mem__v7 = 0U;
    vlSelfRef.__VdlySet__mem__v8 = 0U;
    vlSelfRef.__VdlySet__mem__v9 = 0U;
    vlSelfRef.__VdlySet__mem__v10 = 0U;
    vlSelfRef.__VdlySet__mem__v11 = 0U;
    vlSelfRef.__VdlySet__mem__v12 = 0U;
    vlSelfRef.__VdlySet__mem__v13 = 0U;
    vlSelfRef.__VdlySet__mem__v14 = 0U;
    vlSelfRef.__VdlySet__mem__v15 = 0U;
    vlSelfRef.__VdlySet__tfs__v3 = 0U;
    vlSelfRef.__VdlySet__tfs__v4 = 0U;
    vlSelfRef.__VdlySet__tfs__v7 = 0U;
    vlSelfRef.__VdlySet__tfs__v8 = 0U;
    vlSelfRef.__VdlySet__tfs__v9 = 0U;
    vlSelfRef.__VdlySet__tfs__v10 = 0U;
    vlSelfRef.__VdlySet__tfs__v11 = 0U;
    vlSelfRef.__VdlySet__tfs__v12 = 0U;
    vlSelfRef.__VdlySet__tfs__v13 = 0U;
    vlSelfRef.__VdlySet__tfs__v14 = 0U;
    vlSelfRef.__VdlySet__tfs__v15 = 0U;
    vlSelfRef.__VdlySet__tfs__v16 = 0U;
    vlSelfRef.__VdlySet__fifoAW__v1 = 0U;
    vlSelfRef.__VdlySet__fifoAW__v2 = 0U;
    vlSelfRef.__VdlySet__fifoAW__v3 = 0U;
    vlSelfRef.__VdlySet__fifoAWValid__v0 = 0U;
    vlSelfRef.__VdlySet__fifoAWValid__v2 = 0U;
    vlSelfRef.__VdlySet__fifoAWValid__v3 = 0U;
    vlSelfRef.__VdlySet__fifoAWValid__v5 = 0U;
    vlSelfRef.__VdlySet__tfs__v5 = 0U;
    vlSelfRef.__VdlySet__tfs__v6 = 0U;
    if (vlSymsp->TOP.rst) {
        __Vdly__arFIFO__DOT__indexIn = 0U;
        __Vdly__awFIFO__DOT__indexIn = 0U;
        vlSelfRef.__PVT__arFIFO__DOT__outValidReg = 0U;
        vlSelfRef.__PVT__awFIFO__DOT__outValidReg = 0U;
        vlSelfRef.__PVT__arFIFO__DOT__fullCond = 0U;
        vlSelfRef.__PVT__awFIFO__DOT__fullCond = 0U;
        __Vdly__arFIFO__DOT__indexOut = 0U;
        vlSelfRef.__PVT__arFIFO__DOT__outDataReg = 0ULL;
        __Vdly__awFIFO__DOT__indexOut = 0U;
        vlSelfRef.__PVT__awFIFO__DOT__outDataReg = 0ULL;
    } else {
        if (vlSelfRef.__PVT__buf_arready) {
            vlSelfRef.__PVT__arFIFO__DOT__outValidReg = 0U;
        }
        if (vlSelfRef.__PVT__buf_awready) {
            vlSelfRef.__PVT__awFIFO__DOT__outValidReg = 0U;
        }
        if (vlSelfRef.__PVT__arFIFO__DOT__outputReady) {
            vlSelfRef.__PVT__arFIFO__DOT__outDataReg = 0ULL;
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__arFIFO__DOT__combPassthru) 
                      & (IData)(vlSelfRef.__PVT__buf_arready))))) {
            if ((1U & (~ (((IData)(vlSelfRef.__PVT__arFIFO__DOT__empty) 
                           & (IData)(vlSelfRef.__PVT__arFIFO__DOT__doInsert)) 
                          & (IData)(vlSelfRef.__PVT__arFIFO__DOT__outputReady))))) {
                if (vlSelfRef.__PVT__arFIFO__DOT__doInsert) {
                    __VdlyVal__arFIFO__DOT__mem__v0 
                        = vlSelfRef.__Vcellinp__arFIFO__IN_data;
                    __VdlyDim0__arFIFO__DOT__mem__v0 
                        = vlSelfRef.__PVT__arFIFO__DOT__indexIn;
                    __VdlySet__arFIFO__DOT__mem__v0 = 1U;
                    __Vdly__arFIFO__DOT__indexIn = 
                        (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__arFIFO__DOT__indexIn)));
                }
                if (((IData)(vlSelfRef.__PVT__arFIFO__DOT__doInsert) 
                     != (IData)(vlSelfRef.__PVT__arFIFO__DOT__doExtract))) {
                    vlSelfRef.__PVT__arFIFO__DOT__fullCond 
                        = vlSelfRef.__PVT__arFIFO__DOT__doInsert;
                }
            }
            if ((((IData)(vlSelfRef.__PVT__arFIFO__DOT__empty) 
                  & (IData)(vlSelfRef.__PVT__arFIFO__DOT__doInsert)) 
                 & (IData)(vlSelfRef.__PVT__arFIFO__DOT__outputReady))) {
                vlSelfRef.__PVT__arFIFO__DOT__outValidReg = 1U;
                vlSelfRef.__PVT__arFIFO__DOT__outDataReg 
                    = vlSelfRef.__Vcellinp__arFIFO__IN_data;
            } else if (vlSelfRef.__PVT__arFIFO__DOT__doExtract) {
                vlSelfRef.__PVT__arFIFO__DOT__outValidReg = 1U;
                __Vdly__arFIFO__DOT__indexOut = (1U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__arFIFO__DOT__indexOut)));
                vlSelfRef.__PVT__arFIFO__DOT__outDataReg 
                    = vlSelfRef.__PVT__arFIFO__DOT__mem
                    [vlSelfRef.__PVT__arFIFO__DOT__indexOut];
            }
        }
        if (vlSelfRef.__PVT__awFIFO__DOT__outputReady) {
            vlSelfRef.__PVT__awFIFO__DOT__outDataReg = 0ULL;
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__awFIFO__DOT__combPassthru) 
                      & (IData)(vlSelfRef.__PVT__buf_awready))))) {
            if ((1U & (~ (((IData)(vlSelfRef.__PVT__awFIFO__DOT__empty) 
                           & (IData)(vlSelfRef.__PVT__awFIFO__DOT__doInsert)) 
                          & (IData)(vlSelfRef.__PVT__awFIFO__DOT__outputReady))))) {
                if (vlSelfRef.__PVT__awFIFO__DOT__doInsert) {
                    __VdlyVal__awFIFO__DOT__mem__v0 
                        = vlSelfRef.__Vcellinp__awFIFO__IN_data;
                    __VdlyDim0__awFIFO__DOT__mem__v0 
                        = vlSelfRef.__PVT__awFIFO__DOT__indexIn;
                    __VdlySet__awFIFO__DOT__mem__v0 = 1U;
                    __Vdly__awFIFO__DOT__indexIn = 
                        (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__awFIFO__DOT__indexIn)));
                }
                if (((IData)(vlSelfRef.__PVT__awFIFO__DOT__doInsert) 
                     != (IData)(vlSelfRef.__PVT__awFIFO__DOT__doExtract))) {
                    vlSelfRef.__PVT__awFIFO__DOT__fullCond 
                        = vlSelfRef.__PVT__awFIFO__DOT__doInsert;
                }
            }
            if ((((IData)(vlSelfRef.__PVT__awFIFO__DOT__empty) 
                  & (IData)(vlSelfRef.__PVT__awFIFO__DOT__doInsert)) 
                 & (IData)(vlSelfRef.__PVT__awFIFO__DOT__outputReady))) {
                vlSelfRef.__PVT__awFIFO__DOT__outValidReg = 1U;
                vlSelfRef.__PVT__awFIFO__DOT__outDataReg 
                    = vlSelfRef.__Vcellinp__awFIFO__IN_data;
            } else if (vlSelfRef.__PVT__awFIFO__DOT__doExtract) {
                vlSelfRef.__PVT__awFIFO__DOT__outValidReg = 1U;
                __Vdly__awFIFO__DOT__indexOut = (1U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__awFIFO__DOT__indexOut)));
                vlSelfRef.__PVT__awFIFO__DOT__outDataReg 
                    = vlSelfRef.__PVT__awFIFO__DOT__mem
                    [vlSelfRef.__PVT__awFIFO__DOT__indexOut];
            }
        }
    }
    __PVT__unnamedblk9__DOT__idx = vlSelfRef.__PVT__fifoAW
        [0U];
    vlSelfRef.__PVT__arFIFO__DOT__indexIn = __Vdly__arFIFO__DOT__indexIn;
    vlSelfRef.__PVT__awFIFO__DOT__indexIn = __Vdly__awFIFO__DOT__indexIn;
    vlSelfRef.__Vcellinp__arFIFO__IN_data = (((QData)((IData)(
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__Top__soc.__PVT__memc__DOT__arFIFO__DOT__outDataReg 
                                                                          >> 0x32U))))) 
                                              << 0x32U) 
                                             | (((QData)((IData)(
                                                                 (vlSymsp->TOP__Top__soc.__PVT__memc__DOT__arFIFO__DOT__outDataReg 
                                                                  >> 0x12U))) 
                                                 << 0x12U) 
                                                | (QData)((IData)(
                                                                  ((0x38000U 
                                                                    & ((IData)(
                                                                               (vlSymsp->TOP__Top__soc.__PVT__memc__DOT__arFIFO__DOT__outDataReg 
                                                                                >> 7U)) 
                                                                       << 0xfU)) 
                                                                   | ((0x7f80U 
                                                                       & ((IData)(
                                                                                (vlSymsp->TOP__Top__soc.__PVT__memc__DOT__arFIFO__DOT__outDataReg 
                                                                                >> 0xaU)) 
                                                                          << 7U)) 
                                                                      | (0x7fU 
                                                                         & (IData)(vlSymsp->TOP__Top__soc.__PVT__memc__DOT__arFIFO__DOT__outDataReg))))))));
    if (__VdlySet__arFIFO__DOT__mem__v0) {
        vlSelfRef.__PVT__arFIFO__DOT__mem[__VdlyDim0__arFIFO__DOT__mem__v0] 
            = __VdlyVal__arFIFO__DOT__mem__v0;
    }
    vlSelfRef.__PVT__arFIFO__DOT__indexOut = __Vdly__arFIFO__DOT__indexOut;
    if (__VdlySet__awFIFO__DOT__mem__v0) {
        vlSelfRef.__PVT__awFIFO__DOT__mem[__VdlyDim0__awFIFO__DOT__mem__v0] 
            = __VdlyVal__awFIFO__DOT__mem__v0;
    }
    vlSelfRef.__PVT__awFIFO__DOT__indexOut = __Vdly__awFIFO__DOT__indexOut;
    vlSelfRef.__PVT__arFIFO__DOT__equal = ((IData)(vlSelfRef.__PVT__arFIFO__DOT__indexIn) 
                                           == (IData)(vlSelfRef.__PVT__arFIFO__DOT__indexOut));
    vlSelfRef.__PVT__awFIFO__DOT__equal = ((IData)(vlSelfRef.__PVT__awFIFO__DOT__indexIn) 
                                           == (IData)(vlSelfRef.__PVT__awFIFO__DOT__indexOut));
    __PVT__unnamedblk6__DOT__idx = vlSelfRef.__PVT__writeIdx;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelfRef.__PVT__buf_arready) {
            vlSelfRef.__Vlvbound_h027d800f__0 = 1U;
            if ((0xcbU >= (0xffU & ((IData)(0x33U) 
                                    * (3U & (IData)(
                                                    (vlSelfRef.__Vcellout__arFIFO__OUT_data 
                                                     >> 0x32U))))))) {
                vlSelfRef.__VdlyVal__tfs__v7 = vlSelfRef.__Vlvbound_h027d800f__0;
                vlSelfRef.__VdlyLsb__tfs__v7 = (0xffU 
                                                & ((IData)(0x33U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelfRef.__Vcellout__arFIFO__OUT_data 
                                                               >> 0x32U)))));
                vlSelfRef.__VdlySet__tfs__v7 = 1U;
            }
            vlSelfRef.__Vlvbound_h5eac4bcf__0 = (IData)(
                                                        (vlSelfRef.__Vcellout__arFIFO__OUT_data 
                                                         >> 0x12U));
            if ((0xcbU >= ((IData)(1U) + (0xffU & ((IData)(0x33U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelfRef.__Vcellout__arFIFO__OUT_data 
                                                               >> 0x32U)))))))) {
                vlSelfRef.__VdlyVal__tfs__v8 = vlSelfRef.__Vlvbound_h5eac4bcf__0;
                vlSelfRef.__VdlyLsb__tfs__v8 = ((IData)(1U) 
                                                + (0xffU 
                                                   & ((IData)(0x33U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelfRef.__Vcellout__arFIFO__OUT_data 
                                                                  >> 0x32U))))));
                vlSelfRef.__VdlySet__tfs__v8 = 1U;
            }
            vlSelfRef.__Vlvbound_hf688ff49__0 = (3U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vcellout__arFIFO__OUT_data 
                                                            >> 5U)));
            if ((0xcbU >= ((IData)(0x21U) + (0xffU 
                                             & ((IData)(0x33U) 
                                                * (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__Vcellout__arFIFO__OUT_data 
                                                              >> 0x32U)))))))) {
                vlSelfRef.__VdlyVal__tfs__v9 = vlSelfRef.__Vlvbound_hf688ff49__0;
                vlSelfRef.__VdlyLsb__tfs__v9 = ((IData)(0x21U) 
                                                + (0xffU 
                                                   & ((IData)(0x33U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelfRef.__Vcellout__arFIFO__OUT_data 
                                                                  >> 0x32U))))));
                vlSelfRef.__VdlySet__tfs__v9 = 1U;
            }
            vlSelfRef.__Vlvbound_h49134e48__0 = (0xffU 
                                                 & (IData)(
                                                           (vlSelfRef.__Vcellout__arFIFO__OUT_data 
                                                            >> 7U)));
            if ((0xcbU >= ((IData)(0x23U) + (0xffU 
                                             & ((IData)(0x33U) 
                                                * (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__Vcellout__arFIFO__OUT_data 
                                                              >> 0x32U)))))))) {
                vlSelfRef.__VdlyVal__tfs__v10 = vlSelfRef.__Vlvbound_h49134e48__0;
                vlSelfRef.__VdlyLsb__tfs__v10 = ((IData)(0x23U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x33U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelfRef.__Vcellout__arFIFO__OUT_data 
                                                                 >> 0x32U))))));
                vlSelfRef.__VdlySet__tfs__v10 = 1U;
            }
            vlSelfRef.__Vlvbound_hfacb3be2__0 = 0U;
            if ((0xcbU >= ((IData)(0x2bU) + (0xffU 
                                             & ((IData)(0x33U) 
                                                * (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__Vcellout__arFIFO__OUT_data 
                                                              >> 0x32U)))))))) {
                vlSelfRef.__VdlyVal__tfs__v11 = vlSelfRef.__Vlvbound_hfacb3be2__0;
                vlSelfRef.__VdlyLsb__tfs__v11 = ((IData)(0x2bU) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x33U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelfRef.__Vcellout__arFIFO__OUT_data 
                                                                 >> 0x32U))))));
                vlSelfRef.__VdlySet__tfs__v11 = 1U;
            }
        }
        if (((IData)(vlSelfRef.__PVT__buf_awready) 
             & (IData)(vlSelfRef.__PVT__buf_awvalid))) {
            vlSelfRef.__VdlyDim0__fifoAWValid__v0 = vlSelfRef.__PVT__fifoAWInsIdx;
            vlSelfRef.__VdlySet__fifoAWValid__v0 = 1U;
            vlSelfRef.__VdlyVal__fifoAW__v0 = (3U & (IData)(
                                                            (vlSelfRef.__Vcellout__awFIFO__OUT_data 
                                                             >> 0x32U)));
            vlSelfRef.__VdlyDim0__fifoAW__v0 = vlSelfRef.__PVT__fifoAWInsIdx;
        }
        vlSelfRef.__PVT__s_axi_bid = 0U;
        vlSelfRef.__PVT__s_axi_bvalid = 0U;
        if (((vlSelfRef.__PVT__fifoAWValid[0U] & ((0xcbU 
                                                   >= 
                                                   (0xffU 
                                                    & ((IData)(0x33U) 
                                                       * (IData)(__PVT__unnamedblk9__DOT__idx)))) 
                                                  && (1U 
                                                      & (vlSelfRef.__PVT__writes[
                                                         (7U 
                                                          & (((IData)(0x33U) 
                                                              * (IData)(__PVT__unnamedblk9__DOT__idx)) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x33U) 
                                                             * (IData)(__PVT__unnamedblk9__DOT__idx))))))) 
             & ((IData)(vlSelfRef.__PVT__writeDone) 
                >> (IData)(__PVT__unnamedblk9__DOT__idx)))) {
            vlSelfRef.__PVT__s_axi_bid = __PVT__unnamedblk9__DOT__idx;
            vlSelfRef.__PVT__s_axi_bvalid = 1U;
            vlSelfRef.__VdlyVal__fifoAW__v1 = vlSelfRef.__PVT__fifoAW
                [1U];
            vlSelfRef.__VdlySet__fifoAW__v1 = 1U;
            vlSelfRef.__VdlyVal__fifoAWValid__v1 = 
                vlSelfRef.__PVT__fifoAWValid[1U];
            vlSelfRef.__Vlvbound_h355f9656__0 = 0ULL;
            vlSelfRef.__VdlyVal__fifoAW__v2 = vlSelfRef.__PVT__fifoAW
                [2U];
            vlSelfRef.__VdlySet__fifoAW__v2 = 1U;
            vlSelfRef.__VdlyVal__fifoAWValid__v2 = 
                vlSelfRef.__PVT__fifoAWValid[2U];
            vlSelfRef.__VdlySet__fifoAWValid__v2 = 1U;
            vlSelfRef.__Vlvbound_he15ecf53__0 = 0U;
            if ((0xcbU >= (0xffU & ((IData)(0x33U) 
                                    * (IData)(__PVT__unnamedblk9__DOT__idx))))) {
                vlSelfRef.__VdlyVal__tfs__v5 = vlSelfRef.__Vlvbound_h355f9656__0;
                vlSelfRef.__VdlyLsb__tfs__v5 = (0xffU 
                                                & ((IData)(0x33U) 
                                                   * (IData)(__PVT__unnamedblk9__DOT__idx)));
                vlSelfRef.__VdlySet__tfs__v5 = 1U;
                vlSelfRef.__VdlyVal__tfs__v6 = vlSelfRef.__Vlvbound_he15ecf53__0;
                vlSelfRef.__VdlyLsb__tfs__v6 = (0xffU 
                                                & ((IData)(0x33U) 
                                                   * (IData)(__PVT__unnamedblk9__DOT__idx)));
                vlSelfRef.__VdlySet__tfs__v6 = 1U;
            }
            vlSelfRef.__VdlyVal__fifoAW__v3 = vlSelfRef.__PVT__fifoAW
                [3U];
            vlSelfRef.__VdlySet__fifoAW__v3 = 1U;
            vlSelfRef.__VdlyVal__fifoAWValid__v3 = 
                vlSelfRef.__PVT__fifoAWValid[3U];
            vlSelfRef.__VdlySet__fifoAWValid__v3 = 1U;
            if (((IData)(vlSelfRef.__PVT__buf_awready) 
                 & (IData)(vlSelfRef.__PVT__buf_awvalid))) {
                vlSelfRef.__VdlyDim0__fifoAWValid__v5 
                    = (3U & ((IData)(vlSelfRef.__PVT__fifoAWInsIdx) 
                             - (IData)(1U)));
                vlSelfRef.__VdlySet__fifoAWValid__v5 = 1U;
                vlSelfRef.__VdlyVal__fifoAW__v5 = (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__Vcellout__awFIFO__OUT_data 
                                                              >> 0x32U)));
                vlSelfRef.__VdlyDim0__fifoAW__v5 = 
                    (3U & ((IData)(vlSelfRef.__PVT__fifoAWInsIdx) 
                           - (IData)(1U)));
            }
        }
        if (vlSelfRef.__PVT__buf_awready) {
            vlSelfRef.__Vlvbound_ha918a1d3__0 = 1U;
            if ((0xcbU >= (0xffU & ((IData)(0x33U) 
                                    * (3U & (IData)(
                                                    (vlSelfRef.__Vcellout__awFIFO__OUT_data 
                                                     >> 0x32U))))))) {
                vlSelfRef.__VdlyVal__tfs__v12 = vlSelfRef.__Vlvbound_ha918a1d3__0;
                vlSelfRef.__VdlyLsb__tfs__v12 = (0xffU 
                                                 & ((IData)(0x33U) 
                                                    * 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__Vcellout__awFIFO__OUT_data 
                                                                >> 0x32U)))));
                vlSelfRef.__VdlySet__tfs__v12 = 1U;
            }
            vlSelfRef.__Vlvbound_h8aa2503f__0 = (IData)(
                                                        (vlSelfRef.__Vcellout__awFIFO__OUT_data 
                                                         >> 0x12U));
            if ((0xcbU >= ((IData)(1U) + (0xffU & ((IData)(0x33U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelfRef.__Vcellout__awFIFO__OUT_data 
                                                               >> 0x32U)))))))) {
                vlSelfRef.__VdlyVal__tfs__v13 = vlSelfRef.__Vlvbound_h8aa2503f__0;
                vlSelfRef.__VdlyLsb__tfs__v13 = ((IData)(1U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x33U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelfRef.__Vcellout__awFIFO__OUT_data 
                                                                 >> 0x32U))))));
                vlSelfRef.__VdlySet__tfs__v13 = 1U;
            }
            vlSelfRef.__Vlvbound_hb87e5c88__0 = (3U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vcellout__awFIFO__OUT_data 
                                                            >> 5U)));
            if ((0xcbU >= ((IData)(0x21U) + (0xffU 
                                             & ((IData)(0x33U) 
                                                * (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__Vcellout__awFIFO__OUT_data 
                                                              >> 0x32U)))))))) {
                vlSelfRef.__VdlyVal__tfs__v14 = vlSelfRef.__Vlvbound_hb87e5c88__0;
                vlSelfRef.__VdlyLsb__tfs__v14 = ((IData)(0x21U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x33U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelfRef.__Vcellout__awFIFO__OUT_data 
                                                                 >> 0x32U))))));
                vlSelfRef.__VdlySet__tfs__v14 = 1U;
            }
            vlSelfRef.__Vlvbound_hcaa89f34__0 = (0xffU 
                                                 & (IData)(
                                                           (vlSelfRef.__Vcellout__awFIFO__OUT_data 
                                                            >> 7U)));
            if ((0xcbU >= ((IData)(0x23U) + (0xffU 
                                             & ((IData)(0x33U) 
                                                * (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__Vcellout__awFIFO__OUT_data 
                                                              >> 0x32U)))))))) {
                vlSelfRef.__VdlyVal__tfs__v15 = vlSelfRef.__Vlvbound_hcaa89f34__0;
                vlSelfRef.__VdlyLsb__tfs__v15 = ((IData)(0x23U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x33U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelfRef.__Vcellout__awFIFO__OUT_data 
                                                                 >> 0x32U))))));
                vlSelfRef.__VdlySet__tfs__v15 = 1U;
            }
            vlSelfRef.__Vlvbound_hca0c47d2__0 = 0U;
            if ((0xcbU >= ((IData)(0x2bU) + (0xffU 
                                             & ((IData)(0x33U) 
                                                * (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__Vcellout__awFIFO__OUT_data 
                                                              >> 0x32U)))))))) {
                vlSelfRef.__VdlyVal__tfs__v16 = vlSelfRef.__Vlvbound_hca0c47d2__0;
                vlSelfRef.__VdlyLsb__tfs__v16 = ((IData)(0x2bU) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x33U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelfRef.__Vcellout__awFIFO__OUT_data 
                                                                 >> 0x32U))))));
                vlSelfRef.__VdlySet__tfs__v16 = 1U;
            }
            vlSelfRef.__PVT__writeDone = ((~ ((IData)(1U) 
                                              << (3U 
                                                  & (IData)(
                                                            (vlSelfRef.__Vcellout__awFIFO__OUT_data 
                                                             >> 0x32U))))) 
                                          & (IData)(vlSelfRef.__PVT__writeDone));
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (((IData)(vlSelfRef.__PVT__writeIdxValid) 
             & (IData)(vlSelfRef.__PVT__buf_wvalid))) {
            vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__w 
                = ((0xcbU >= (0xffU & ((IData)(0x33U) 
                                       * (IData)(__PVT__unnamedblk6__DOT__idx))))
                    ? (0x7ffffffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.__PVT__writes[
                                                              (((IData)(0x32U) 
                                                                + 
                                                                (0xffU 
                                                                 & ((IData)(0x33U) 
                                                                    * (IData)(__PVT__unnamedblk6__DOT__idx)))) 
                                                               >> 5U)])) 
                                              << ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x33U) 
                                                       * (IData)(__PVT__unnamedblk6__DOT__idx))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x33U) 
                                                       * (IData)(__PVT__unnamedblk6__DOT__idx)))))) 
                                             | (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x33U) 
                                                      * (IData)(__PVT__unnamedblk6__DOT__idx))))
                                                  ? 0ULL
                                                  : 
                                                 ((QData)((IData)(
                                                                  vlSelfRef.__PVT__writes[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x33U) 
                                                                        * (IData)(__PVT__unnamedblk6__DOT__idx)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x33U) 
                                                       * (IData)(__PVT__unnamedblk6__DOT__idx)))))) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__writes[
                                                                   (7U 
                                                                    & (((IData)(0x33U) 
                                                                        * (IData)(__PVT__unnamedblk6__DOT__idx)) 
                                                                       >> 5U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x33U) 
                                                       * (IData)(__PVT__unnamedblk6__DOT__idx)))))))
                    : 0ULL);
            vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__last 
                = ((0xffU & (IData)((vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__w 
                                     >> 0x2bU))) == 
                   (0xffU & (IData)((vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__w 
                                     >> 0x23U))));
            __Vfunc_GetCurAddr__1__t = vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__w;
            {
                if ((0U == (3U & (IData)((__Vfunc_GetCurAddr__1__t 
                                          >> 0x21U))))) {
                    __Vfunc_GetCurAddr__1__Vfuncout 
                        = (IData)((__Vfunc_GetCurAddr__1__t 
                                   >> 1U));
                    goto __Vlabel1;
                } else if ((1U == (3U & (IData)((__Vfunc_GetCurAddr__1__t 
                                                 >> 0x21U))))) {
                    __Vfunc_GetCurAddr__1__Vfuncout 
                        = ((IData)((__Vfunc_GetCurAddr__1__t 
                                    >> 1U)) + VL_SHIFTL_III(32,32,32, 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (__Vfunc_GetCurAddr__1__t 
                                                                        >> 0x2bU))), 4U));
                    goto __Vlabel1;
                } else if ((2U == (3U & (IData)((__Vfunc_GetCurAddr__1__t 
                                                 >> 0x21U))))) {
                    __Vfunc_GetCurAddr__1__Vfuncout 
                        = ((((IData)((__Vfunc_GetCurAddr__1__t 
                                      >> 1U)) + VL_SHIFTL_III(32,32,32, 
                                                              (0xffU 
                                                               & (IData)(
                                                                         (__Vfunc_GetCurAddr__1__t 
                                                                          >> 0x2bU))), 4U)) 
                            & VL_SHIFTL_III(32,32,32, 
                                            (0xffU 
                                             & (IData)(
                                                       (__Vfunc_GetCurAddr__1__t 
                                                        >> 0x23U))), 4U)) 
                           | ((IData)((__Vfunc_GetCurAddr__1__t 
                                       >> 1U)) & (~ 
                                                  VL_SHIFTL_III(32,32,32, 
                                                                (0xffU 
                                                                 & (IData)(
                                                                           (__Vfunc_GetCurAddr__1__t 
                                                                            >> 0x23U))), 4U))));
                    goto __Vlabel1;
                } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                    VL_WRITEF_NX("[%0t] %%Error: ExternalAXISim.sv:83: Assertion failed in %NTop.extMem.GetCurAddr: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/ExternalAXISim.sv", 83, "");
                }
                __Vfunc_GetCurAddr__1__Vfuncout = 0xffffffffU;
                __Vlabel1: ;
            }
            vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr 
                = __Vfunc_GetCurAddr__1__Vfuncout;
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__PVT__writeIdxValid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: ExternalAXISim.sv:228: Assertion failed in %NTop.extMem.unnamedblk6.unnamedblk7: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/ExternalAXISim.sv", 228, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__w)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: ExternalAXISim.sv:229: Assertion failed in %NTop.extMem.unnamedblk6.unnamedblk7: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/ExternalAXISim.sv", 229, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY((((1U & vlSelfRef.__Vcellout__wFIFO__OUT_data[0U]) 
                                  != (IData)(vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__last))))) {
                    VL_WRITEF_NX("[%0t] %%Error: ExternalAXISim.sv:230: Assertion failed in %NTop.extMem.unnamedblk6.unnamedblk7: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/ExternalAXISim.sv", 230, "");
                }
            }
            if ((vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr 
                 >> 0x1fU)) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((0U != (3U & vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr))))) {
                        VL_WRITEF_NX("[%0t] %%Error: ExternalAXISim.sv:234: Assertion failed in %NTop.extMem.unnamedblk6.unnamedblk7: 'assert' failed.\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("src/ExternalAXISim.sv", 234, "");
                    }
                }
                if ((2U & vlSelfRef.__Vcellout__wFIFO__OUT_data[0U])) {
                    vlSelfRef.__VdlyVal__mem__v0 = 
                        (0xffU & (vlSelfRef.__Vcellout__wFIFO__OUT_data[0U] 
                                  >> 0x11U));
                    vlSelfRef.__VdlyDim0__mem__v0 = 
                        (0xffffffU & (vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr 
                                      >> 4U));
                    vlSelfRef.__VdlySet__mem__v0 = 1U;
                }
                if ((4U & vlSelfRef.__Vcellout__wFIFO__OUT_data[0U])) {
                    vlSelfRef.__VdlyVal__mem__v1 = 
                        (0xffU & ((vlSelfRef.__Vcellout__wFIFO__OUT_data[1U] 
                                   << 7U) | (vlSelfRef.__Vcellout__wFIFO__OUT_data[0U] 
                                             >> 0x19U)));
                    vlSelfRef.__VdlyDim0__mem__v1 = 
                        (0xffffffU & (vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr 
                                      >> 4U));
                    vlSelfRef.__VdlySet__mem__v1 = 1U;
                }
                if ((8U & vlSelfRef.__Vcellout__wFIFO__OUT_data[0U])) {
                    vlSelfRef.__VdlyVal__mem__v2 = 
                        (0xffU & (vlSelfRef.__Vcellout__wFIFO__OUT_data[1U] 
                                  >> 1U));
                    vlSelfRef.__VdlyDim0__mem__v2 = 
                        (0xffffffU & (vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr 
                                      >> 4U));
                    vlSelfRef.__VdlySet__mem__v2 = 1U;
                }
                if ((0x10U & vlSelfRef.__Vcellout__wFIFO__OUT_data[0U])) {
                    vlSelfRef.__VdlyVal__mem__v3 = 
                        (0xffU & (vlSelfRef.__Vcellout__wFIFO__OUT_data[1U] 
                                  >> 9U));
                    vlSelfRef.__VdlyDim0__mem__v3 = 
                        (0xffffffU & (vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr 
                                      >> 4U));
                    vlSelfRef.__VdlySet__mem__v3 = 1U;
                }
                if ((0x20U & vlSelfRef.__Vcellout__wFIFO__OUT_data[0U])) {
                    vlSelfRef.__VdlyVal__mem__v4 = 
                        (0xffU & (vlSelfRef.__Vcellout__wFIFO__OUT_data[1U] 
                                  >> 0x11U));
                    vlSelfRef.__VdlyDim0__mem__v4 = 
                        (0xffffffU & (vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr 
                                      >> 4U));
                    vlSelfRef.__VdlySet__mem__v4 = 1U;
                }
                if ((0x40U & vlSelfRef.__Vcellout__wFIFO__OUT_data[0U])) {
                    vlSelfRef.__VdlyVal__mem__v5 = 
                        (0xffU & ((vlSelfRef.__Vcellout__wFIFO__OUT_data[2U] 
                                   << 7U) | (vlSelfRef.__Vcellout__wFIFO__OUT_data[1U] 
                                             >> 0x19U)));
                    vlSelfRef.__VdlyDim0__mem__v5 = 
                        (0xffffffU & (vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr 
                                      >> 4U));
                    vlSelfRef.__VdlySet__mem__v5 = 1U;
                }
                if ((0x80U & vlSelfRef.__Vcellout__wFIFO__OUT_data[0U])) {
                    vlSelfRef.__VdlyVal__mem__v6 = 
                        (0xffU & (vlSelfRef.__Vcellout__wFIFO__OUT_data[2U] 
                                  >> 1U));
                    vlSelfRef.__VdlyDim0__mem__v6 = 
                        (0xffffffU & (vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr 
                                      >> 4U));
                    vlSelfRef.__VdlySet__mem__v6 = 1U;
                }
                if ((0x100U & vlSelfRef.__Vcellout__wFIFO__OUT_data[0U])) {
                    vlSelfRef.__VdlyVal__mem__v7 = 
                        (0xffU & (vlSelfRef.__Vcellout__wFIFO__OUT_data[2U] 
                                  >> 9U));
                    vlSelfRef.__VdlyDim0__mem__v7 = 
                        (0xffffffU & (vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr 
                                      >> 4U));
                    vlSelfRef.__VdlySet__mem__v7 = 1U;
                }
                if ((0x200U & vlSelfRef.__Vcellout__wFIFO__OUT_data[0U])) {
                    vlSelfRef.__VdlyVal__mem__v8 = 
                        (0xffU & (vlSelfRef.__Vcellout__wFIFO__OUT_data[2U] 
                                  >> 0x11U));
                    vlSelfRef.__VdlyDim0__mem__v8 = 
                        (0xffffffU & (vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr 
                                      >> 4U));
                    vlSelfRef.__VdlySet__mem__v8 = 1U;
                }
                if ((0x400U & vlSelfRef.__Vcellout__wFIFO__OUT_data[0U])) {
                    vlSelfRef.__VdlyVal__mem__v9 = 
                        (0xffU & ((vlSelfRef.__Vcellout__wFIFO__OUT_data[3U] 
                                   << 7U) | (vlSelfRef.__Vcellout__wFIFO__OUT_data[2U] 
                                             >> 0x19U)));
                    vlSelfRef.__VdlyDim0__mem__v9 = 
                        (0xffffffU & (vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr 
                                      >> 4U));
                    vlSelfRef.__VdlySet__mem__v9 = 1U;
                }
                if ((0x800U & vlSelfRef.__Vcellout__wFIFO__OUT_data[0U])) {
                    vlSelfRef.__VdlyVal__mem__v10 = 
                        (0xffU & (vlSelfRef.__Vcellout__wFIFO__OUT_data[3U] 
                                  >> 1U));
                    vlSelfRef.__VdlyDim0__mem__v10 
                        = (0xffffffU & (vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr 
                                        >> 4U));
                    vlSelfRef.__VdlySet__mem__v10 = 1U;
                }
                if ((0x1000U & vlSelfRef.__Vcellout__wFIFO__OUT_data[0U])) {
                    vlSelfRef.__VdlyVal__mem__v11 = 
                        (0xffU & (vlSelfRef.__Vcellout__wFIFO__OUT_data[3U] 
                                  >> 9U));
                    vlSelfRef.__VdlyDim0__mem__v11 
                        = (0xffffffU & (vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr 
                                        >> 4U));
                    vlSelfRef.__VdlySet__mem__v11 = 1U;
                }
                if ((0x2000U & vlSelfRef.__Vcellout__wFIFO__OUT_data[0U])) {
                    vlSelfRef.__VdlyVal__mem__v12 = 
                        (0xffU & (vlSelfRef.__Vcellout__wFIFO__OUT_data[3U] 
                                  >> 0x11U));
                    vlSelfRef.__VdlyDim0__mem__v12 
                        = (0xffffffU & (vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr 
                                        >> 4U));
                    vlSelfRef.__VdlySet__mem__v12 = 1U;
                }
                if ((0x4000U & vlSelfRef.__Vcellout__wFIFO__OUT_data[0U])) {
                    vlSelfRef.__VdlyVal__mem__v13 = 
                        (0xffU & ((vlSelfRef.__Vcellout__wFIFO__OUT_data[4U] 
                                   << 7U) | (vlSelfRef.__Vcellout__wFIFO__OUT_data[3U] 
                                             >> 0x19U)));
                    vlSelfRef.__VdlyDim0__mem__v13 
                        = (0xffffffU & (vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr 
                                        >> 4U));
                    vlSelfRef.__VdlySet__mem__v13 = 1U;
                }
                if ((0x8000U & vlSelfRef.__Vcellout__wFIFO__OUT_data[0U])) {
                    vlSelfRef.__VdlyVal__mem__v14 = 
                        (0xffU & (vlSelfRef.__Vcellout__wFIFO__OUT_data[4U] 
                                  >> 1U));
                    vlSelfRef.__VdlyDim0__mem__v14 
                        = (0xffffffU & (vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr 
                                        >> 4U));
                    vlSelfRef.__VdlySet__mem__v14 = 1U;
                }
                if ((0x10000U & vlSelfRef.__Vcellout__wFIFO__OUT_data[0U])) {
                    vlSelfRef.__VdlyVal__mem__v15 = 
                        (0xffU & (vlSelfRef.__Vcellout__wFIFO__OUT_data[4U] 
                                  >> 9U));
                    vlSelfRef.__VdlyDim0__mem__v15 
                        = (0xffffffU & (vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr 
                                        >> 4U));
                    vlSelfRef.__VdlySet__mem__v15 = 1U;
                }
            } else if ((0x10000000U == vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr)) {
                if (VL_UNLIKELY(((2U & vlSelfRef.__Vcellout__wFIFO__OUT_data[0U])))) {
                    VL_WRITEF_NX("%c",0,8,(0xffU & 
                                           (vlSelfRef.__Vcellout__wFIFO__OUT_data[0U] 
                                            >> 0x11U)));
                    if (0x80000001U) { VL_FFLUSH_I(0x80000001U); }
                }
            }
            vlSelfRef.__Vlvbound_hf5f86567__0 = (0xffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(
                                                              (vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__w 
                                                               >> 0x2bU))));
            if (VL_LIKELY(((0xcbU >= ((IData)(0x2bU) 
                                      + (0xffU & ((IData)(0x33U) 
                                                  * (IData)(__PVT__unnamedblk6__DOT__idx)))))))) {
                vlSelfRef.__VdlyVal__tfs__v3 = vlSelfRef.__Vlvbound_hf5f86567__0;
                vlSelfRef.__VdlyLsb__tfs__v3 = ((IData)(0x2bU) 
                                                + (0xffU 
                                                   & ((IData)(0x33U) 
                                                      * (IData)(__PVT__unnamedblk6__DOT__idx))));
                vlSelfRef.__VdlySet__tfs__v3 = 1U;
            }
            if (vlSelfRef.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__last) {
                vlSelfRef.__PVT__writeDone = ((IData)(vlSelfRef.__PVT__writeDone) 
                                              | (0xfU 
                                                 & ((IData)(1U) 
                                                    << (IData)(__PVT__unnamedblk6__DOT__idx))));
                vlSelfRef.__Vlvbound_hf5f86567__1 = 0U;
                if (VL_LIKELY(((0xcbU >= ((IData)(0x2bU) 
                                          + (0xffU 
                                             & ((IData)(0x33U) 
                                                * (IData)(__PVT__unnamedblk6__DOT__idx)))))))) {
                    vlSelfRef.__VdlyVal__tfs__v4 = vlSelfRef.__Vlvbound_hf5f86567__1;
                    vlSelfRef.__VdlyLsb__tfs__v4 = 
                        ((IData)(0x2bU) + (0xffU & 
                                           ((IData)(0x33U) 
                                            * (IData)(__PVT__unnamedblk6__DOT__idx))));
                    vlSelfRef.__VdlySet__tfs__v4 = 1U;
                }
            }
        }
    }
    vlSelfRef.__PVT__arFIFO__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__arFIFO__DOT__fullCond)) 
                                           & (IData)(vlSelfRef.__PVT__arFIFO__DOT__equal));
    vlSelfRef.__PVT__awFIFO__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__awFIFO__DOT__fullCond)) 
                                           & (IData)(vlSelfRef.__PVT__awFIFO__DOT__equal));
    vlSelfRef.__PVT__buf_arvalid = vlSelfRef.__PVT__arFIFO__DOT__outValidReg;
    vlSelfRef.__Vcellout__arFIFO__OUT_data = vlSelfRef.__PVT__arFIFO__DOT__outDataReg;
    vlSelfRef.__PVT__arFIFO__DOT__combPassthru = 0U;
    if (((~ (IData)(vlSelfRef.__PVT__buf_arvalid)) 
         & (IData)(vlSelfRef.__PVT__arFIFO__DOT__empty))) {
        vlSelfRef.__PVT__buf_arvalid = vlSymsp->TOP__Top__soc.__PVT__memc__DOT__arFIFO__DOT__outValidReg;
        vlSelfRef.__Vcellout__arFIFO__OUT_data = vlSelfRef.__Vcellinp__arFIFO__IN_data;
        vlSelfRef.__PVT__arFIFO__DOT__combPassthru = 1U;
    }
}

VL_INLINE_OPT void VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__3(VTop_ExternalAXISim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__3\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_GetCurAddr__0__Vfuncout;
    __Vfunc_GetCurAddr__0__Vfuncout = 0;
    QData/*50:0*/ __Vfunc_GetCurAddr__0__t;
    __Vfunc_GetCurAddr__0__t = 0;
    // Body
    vlSelfRef.__Vdly__inputAvail = vlSelfRef.inputAvail;
    vlSelfRef.__VdlySet__tfs__v0 = 0U;
    vlSelfRef.__VdlySet__tfs__v1 = 0U;
    vlSelfRef.__VdlySet__tfs__v2 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__s_axi_rvalid) 
                      & (~ (IData)(vlSymsp->TOP__Top__soc.__PVT__s_axi_rready)))))) {
            vlSelfRef.__PVT__s_axi_rid = 0U;
            vlSelfRef.__PVT__s_axi_rlast = 0U;
            vlSelfRef.__PVT__s_axi_rvalid = 0U;
            if (vlSelfRef.__PVT__readDataIdxValid) {
                vlSelfRef.__PVT__unnamedblk2__DOT__last 
                    = (((0xcbU >= ((IData)(0x2bU) + 
                                   (0xffU & ((IData)(0x33U) 
                                             * (IData)(vlSelfRef.__PVT__readDataIdx)))))
                         ? (0xffU & (((0U == (0x1fU 
                                              & ((IData)(0x2bU) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x33U) 
                                                     * (IData)(vlSelfRef.__PVT__readDataIdx))))))
                                       ? 0U : (vlSelfRef.__PVT__reads[
                                               (((IData)(0x32U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x33U) 
                                                     * (IData)(vlSelfRef.__PVT__readDataIdx)))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x2bU) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x33U) 
                                                           * (IData)(vlSelfRef.__PVT__readDataIdx)))))))) 
                                     | (vlSelfRef.__PVT__reads[
                                        (((IData)(0x2bU) 
                                          + (0xffU 
                                             & ((IData)(0x33U) 
                                                * (IData)(vlSelfRef.__PVT__readDataIdx)))) 
                                         >> 5U)] >> 
                                        (0x1fU & ((IData)(0x2bU) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x33U) 
                                                      * (IData)(vlSelfRef.__PVT__readDataIdx))))))))
                         : 0U) == ((0xcbU >= ((IData)(0x23U) 
                                              + (0xffU 
                                                 & ((IData)(0x33U) 
                                                    * (IData)(vlSelfRef.__PVT__readDataIdx)))))
                                    ? (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x33U) 
                                                          * (IData)(vlSelfRef.__PVT__readDataIdx))))))
                                                  ? 0U
                                                  : 
                                                 (vlSelfRef.__PVT__reads[
                                                  (((IData)(0x2aU) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x33U) 
                                                        * (IData)(vlSelfRef.__PVT__readDataIdx)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x23U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x33U) 
                                                           * (IData)(vlSelfRef.__PVT__readDataIdx)))))))) 
                                                | (vlSelfRef.__PVT__reads[
                                                   (((IData)(0x23U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x33U) 
                                                         * (IData)(vlSelfRef.__PVT__readDataIdx)))) 
                                                    >> 5U)] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x23U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x33U) 
                                                           * (IData)(vlSelfRef.__PVT__readDataIdx))))))))
                                    : 0U));
                __Vfunc_GetCurAddr__0__t = ((0xcbU 
                                             >= (0xffU 
                                                 & ((IData)(0x33U) 
                                                    * (IData)(vlSelfRef.__PVT__readDataIdx))))
                                             ? (0x7ffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__PVT__reads[
                                                                    (((IData)(0x32U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x33U) 
                                                                          * (IData)(vlSelfRef.__PVT__readDataIdx)))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x33U) 
                                                          * (IData)(vlSelfRef.__PVT__readDataIdx))))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x40U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x33U) 
                                                          * (IData)(vlSelfRef.__PVT__readDataIdx)))))) 
                                                   | (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x33U) 
                                                            * (IData)(vlSelfRef.__PVT__readDataIdx))))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        vlSelfRef.__PVT__reads[
                                                                        (((IData)(0x1fU) 
                                                                          + 
                                                                          (0xffU 
                                                                           & ((IData)(0x33U) 
                                                                              * (IData)(vlSelfRef.__PVT__readDataIdx)))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x33U) 
                                                             * (IData)(vlSelfRef.__PVT__readDataIdx)))))) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__PVT__reads[
                                                                         (7U 
                                                                          & (((IData)(0x33U) 
                                                                              * (IData)(vlSelfRef.__PVT__readDataIdx)) 
                                                                             >> 5U))])) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x33U) 
                                                             * (IData)(vlSelfRef.__PVT__readDataIdx)))))))
                                             : 0ULL);
                {
                    if ((0U == (3U & (IData)((__Vfunc_GetCurAddr__0__t 
                                              >> 0x21U))))) {
                        __Vfunc_GetCurAddr__0__Vfuncout 
                            = (IData)((__Vfunc_GetCurAddr__0__t 
                                       >> 1U));
                        goto __Vlabel2;
                    } else if ((1U == (3U & (IData)(
                                                    (__Vfunc_GetCurAddr__0__t 
                                                     >> 0x21U))))) {
                        __Vfunc_GetCurAddr__0__Vfuncout 
                            = ((IData)((__Vfunc_GetCurAddr__0__t 
                                        >> 1U)) + VL_SHIFTL_III(32,32,32, 
                                                                (0xffU 
                                                                 & (IData)(
                                                                           (__Vfunc_GetCurAddr__0__t 
                                                                            >> 0x2bU))), 4U));
                        goto __Vlabel2;
                    } else if ((2U == (3U & (IData)(
                                                    (__Vfunc_GetCurAddr__0__t 
                                                     >> 0x21U))))) {
                        __Vfunc_GetCurAddr__0__Vfuncout 
                            = ((((IData)((__Vfunc_GetCurAddr__0__t 
                                          >> 1U)) + 
                                 VL_SHIFTL_III(32,32,32, 
                                               (0xffU 
                                                & (IData)(
                                                          (__Vfunc_GetCurAddr__0__t 
                                                           >> 0x2bU))), 4U)) 
                                & VL_SHIFTL_III(32,32,32, 
                                                (0xffU 
                                                 & (IData)(
                                                           (__Vfunc_GetCurAddr__0__t 
                                                            >> 0x23U))), 4U)) 
                               | ((IData)((__Vfunc_GetCurAddr__0__t 
                                           >> 1U)) 
                                  & (~ VL_SHIFTL_III(32,32,32, 
                                                     (0xffU 
                                                      & (IData)(
                                                                (__Vfunc_GetCurAddr__0__t 
                                                                 >> 0x23U))), 4U))));
                        goto __Vlabel2;
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                        VL_WRITEF_NX("[%0t] %%Error: ExternalAXISim.sv:83: Assertion failed in %NTop.extMem.GetCurAddr: 'assert' failed.\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("src/ExternalAXISim.sv", 83, "");
                    }
                    __Vfunc_GetCurAddr__0__Vfuncout = 0xffffffffU;
                    __Vlabel2: ;
                }
                vlSelfRef.__PVT__unnamedblk2__DOT__addr 
                    = __Vfunc_GetCurAddr__0__Vfuncout;
                vlSelfRef.__PVT__s_axi_rid = vlSelfRef.__PVT__readDataIdx;
                vlSelfRef.__PVT__s_axi_rlast = vlSelfRef.__PVT__unnamedblk2__DOT__last;
                vlSelfRef.__PVT__s_axi_rvalid = 1U;
                if ((vlSelfRef.__PVT__unnamedblk2__DOT__addr 
                     >> 0x1fU)) {
                    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                        if (VL_UNLIKELY(((0U != (3U 
                                                 & vlSelfRef.__PVT__unnamedblk2__DOT__addr))))) {
                            VL_WRITEF_NX("[%0t] %%Error: ExternalAXISim.sv:133: Assertion failed in %NTop.extMem.unnamedblk2: 'assert' failed.\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("src/ExternalAXISim.sv", 133, "");
                        }
                    }
                    vlSelfRef.__PVT__s_axi_rdata[0U] 
                        = vlSelfRef.mem[(0xffffffU 
                                         & (vlSelfRef.__PVT__unnamedblk2__DOT__addr 
                                            >> 4U))][0U];
                    vlSelfRef.__PVT__s_axi_rdata[1U] 
                        = vlSelfRef.mem[(0xffffffU 
                                         & (vlSelfRef.__PVT__unnamedblk2__DOT__addr 
                                            >> 4U))][1U];
                    vlSelfRef.__PVT__s_axi_rdata[2U] 
                        = vlSelfRef.mem[(0xffffffU 
                                         & (vlSelfRef.__PVT__unnamedblk2__DOT__addr 
                                            >> 4U))][2U];
                    vlSelfRef.__PVT__s_axi_rdata[3U] 
                        = vlSelfRef.mem[(0xffffffU 
                                         & (vlSelfRef.__PVT__unnamedblk2__DOT__addr 
                                            >> 4U))][3U];
                } else if ((0x10000000U == vlSelfRef.__PVT__unnamedblk2__DOT__addr)) {
                    vlSelfRef.__PVT__s_axi_rdata[0U] = 0U;
                    vlSelfRef.__PVT__s_axi_rdata[1U] = 0U;
                    vlSelfRef.__PVT__s_axi_rdata[2U] = 0U;
                    vlSelfRef.__PVT__s_axi_rdata[3U] = 0U;
                    vlSelfRef.__PVT__s_axi_rdata[0U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__s_axi_rdata[0U]) 
                           | (IData)(vlSelfRef.inputByte));
                    vlSelfRef.__Vdly__inputAvail = 0U;
                } else if ((0x10000005U == vlSelfRef.__PVT__unnamedblk2__DOT__addr)) {
                    vlSelfRef.__PVT__s_axi_rdata[0U] = 0U;
                    vlSelfRef.__PVT__s_axi_rdata[1U] = 0U;
                    vlSelfRef.__PVT__s_axi_rdata[2U] = 0U;
                    vlSelfRef.__PVT__s_axi_rdata[3U] = 0U;
                    vlSelfRef.__PVT__s_axi_rdata[0U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__s_axi_rdata[0U]) 
                           | (0xffU & (0x60U | ((IData)(vlSelfRef.inputAvail)
                                                 ? 1U
                                                 : 0U))));
                }
                vlSelfRef.__Vlvbound_ha4e0d76b__0 = 
                    (0xffU & ((IData)(1U) + ((0xcbU 
                                              >= ((IData)(0x2bU) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x33U) 
                                                      * (IData)(vlSelfRef.__PVT__readDataIdx)))))
                                              ? (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x2bU) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x33U) 
                                                           * (IData)(vlSelfRef.__PVT__readDataIdx))))))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.__PVT__reads[
                                                   (((IData)(0x32U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x33U) 
                                                         * (IData)(vlSelfRef.__PVT__readDataIdx)))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x2bU) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x33U) 
                                                            * (IData)(vlSelfRef.__PVT__readDataIdx)))))))) 
                                                 | (vlSelfRef.__PVT__reads[
                                                    (((IData)(0x2bU) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x33U) 
                                                          * (IData)(vlSelfRef.__PVT__readDataIdx)))) 
                                                     >> 5U)] 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(0x2bU) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x33U) 
                                                            * (IData)(vlSelfRef.__PVT__readDataIdx)))))))
                                              : 0U)));
                if (VL_LIKELY(((0xcbU >= ((IData)(0x2bU) 
                                          + (0xffU 
                                             & ((IData)(0x33U) 
                                                * (IData)(vlSelfRef.__PVT__readDataIdx)))))))) {
                    vlSelfRef.__VdlyVal__tfs__v0 = vlSelfRef.__Vlvbound_ha4e0d76b__0;
                    vlSelfRef.__VdlyLsb__tfs__v0 = 
                        ((IData)(0x2bU) + (0xffU & 
                                           ((IData)(0x33U) 
                                            * (IData)(vlSelfRef.__PVT__readDataIdx))));
                    vlSelfRef.__VdlySet__tfs__v0 = 1U;
                }
                if (vlSelfRef.__PVT__unnamedblk2__DOT__last) {
                    vlSelfRef.__Vlvbound_hcd8e2c99__0 = 0ULL;
                    vlSelfRef.__Vlvbound_ha2e9d5ac__0 = 0U;
                    if ((0xcbU >= (0xffU & ((IData)(0x33U) 
                                            * (IData)(vlSelfRef.__PVT__readDataIdx))))) {
                        vlSelfRef.__VdlyVal__tfs__v1 
                            = vlSelfRef.__Vlvbound_hcd8e2c99__0;
                        vlSelfRef.__VdlyLsb__tfs__v1 
                            = (0xffU & ((IData)(0x33U) 
                                        * (IData)(vlSelfRef.__PVT__readDataIdx)));
                        vlSelfRef.__VdlySet__tfs__v1 = 1U;
                        vlSelfRef.__VdlyVal__tfs__v2 
                            = vlSelfRef.__Vlvbound_ha2e9d5ac__0;
                        vlSelfRef.__VdlyLsb__tfs__v2 
                            = (0xffU & ((IData)(0x33U) 
                                        * (IData)(vlSelfRef.__PVT__readDataIdx)));
                        vlSelfRef.__VdlySet__tfs__v2 = 1U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__4(VTop_ExternalAXISim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__4\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__fifoAWInsIdxValid;
    __PVT__fifoAWInsIdxValid = 0;
    // Body
    if (vlSelfRef.__VdlySet__fifoAW__v1) {
        vlSelfRef.__PVT__fifoAW[0U] = vlSelfRef.__VdlyVal__fifoAW__v1;
        vlSelfRef.__PVT__fifoAWValid[0U] = vlSelfRef.__VdlyVal__fifoAWValid__v1;
    }
    if (vlSelfRef.__VdlySet__fifoAW__v2) {
        vlSelfRef.__PVT__fifoAW[1U] = vlSelfRef.__VdlyVal__fifoAW__v2;
    }
    if (vlSelfRef.__VdlySet__fifoAW__v3) {
        vlSelfRef.__PVT__fifoAW[2U] = vlSelfRef.__VdlyVal__fifoAW__v3;
    }
    if (vlSelfRef.__VdlySet__fifoAWValid__v0) {
        vlSelfRef.__PVT__fifoAWValid[vlSelfRef.__VdlyDim0__fifoAWValid__v0] = 1U;
        vlSelfRef.__PVT__fifoAW[vlSelfRef.__VdlyDim0__fifoAW__v0] 
            = vlSelfRef.__VdlyVal__fifoAW__v0;
    }
    if (vlSelfRef.__VdlySet__fifoAWValid__v2) {
        vlSelfRef.__PVT__fifoAWValid[1U] = vlSelfRef.__VdlyVal__fifoAWValid__v2;
    }
    if (vlSelfRef.__VdlySet__fifoAWValid__v3) {
        vlSelfRef.__PVT__fifoAWValid[2U] = vlSelfRef.__VdlyVal__fifoAWValid__v3;
        vlSelfRef.__PVT__fifoAW[3U] = 0U;
        vlSelfRef.__PVT__fifoAWValid[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__fifoAWValid__v5) {
        vlSelfRef.__PVT__fifoAWValid[vlSelfRef.__VdlyDim0__fifoAWValid__v5] = 1U;
        vlSelfRef.__PVT__fifoAW[vlSelfRef.__VdlyDim0__fifoAW__v5] 
            = vlSelfRef.__VdlyVal__fifoAW__v5;
    }
    vlSelfRef.__PVT__buf_wvalid = vlSelfRef.__PVT__wFIFO__DOT__outValidReg;
    vlSelfRef.__Vcellout__wFIFO__OUT_data[0U] = vlSelfRef.__PVT__wFIFO__DOT__outDataReg[0U];
    vlSelfRef.__Vcellout__wFIFO__OUT_data[1U] = vlSelfRef.__PVT__wFIFO__DOT__outDataReg[1U];
    vlSelfRef.__Vcellout__wFIFO__OUT_data[2U] = vlSelfRef.__PVT__wFIFO__DOT__outDataReg[2U];
    vlSelfRef.__Vcellout__wFIFO__OUT_data[3U] = vlSelfRef.__PVT__wFIFO__DOT__outDataReg[3U];
    vlSelfRef.__Vcellout__wFIFO__OUT_data[4U] = vlSelfRef.__PVT__wFIFO__DOT__outDataReg[4U];
    vlSelfRef.__PVT__wFIFO__DOT__combPassthru = 0U;
    if (((~ (IData)(vlSelfRef.__PVT__buf_wvalid)) & (IData)(vlSelfRef.__PVT__wFIFO__DOT__empty))) {
        vlSelfRef.__PVT__buf_wvalid = vlSymsp->TOP__Top__soc.__PVT__s_axi_wvalid;
        vlSelfRef.__Vcellout__wFIFO__OUT_data[0U] = 
            vlSelfRef.__Vcellinp__wFIFO__IN_data[0U];
        vlSelfRef.__Vcellout__wFIFO__OUT_data[1U] = 
            vlSelfRef.__Vcellinp__wFIFO__IN_data[1U];
        vlSelfRef.__Vcellout__wFIFO__OUT_data[2U] = 
            vlSelfRef.__Vcellinp__wFIFO__IN_data[2U];
        vlSelfRef.__Vcellout__wFIFO__OUT_data[3U] = 
            vlSelfRef.__Vcellinp__wFIFO__IN_data[3U];
        vlSelfRef.__Vcellout__wFIFO__OUT_data[4U] = 
            vlSelfRef.__Vcellinp__wFIFO__IN_data[4U];
        vlSelfRef.__PVT__wFIFO__DOT__combPassthru = 1U;
    }
    __PVT__fifoAWInsIdxValid = 0U;
    vlSelfRef.__PVT__fifoAWInsIdx = 0U;
    if ((1U & (~ vlSelfRef.__PVT__fifoAWValid[0U]))) {
        vlSelfRef.__PVT__fifoAWInsIdx = 0U;
        __PVT__fifoAWInsIdxValid = 1U;
    }
    if ((1U & ((~ (IData)(__PVT__fifoAWInsIdxValid)) 
               & (~ vlSelfRef.__PVT__fifoAWValid[1U])))) {
        vlSelfRef.__PVT__fifoAWInsIdx = 1U;
        __PVT__fifoAWInsIdxValid = 1U;
    }
    if ((1U & ((~ (IData)(__PVT__fifoAWInsIdxValid)) 
               & (~ vlSelfRef.__PVT__fifoAWValid[2U])))) {
        vlSelfRef.__PVT__fifoAWInsIdx = 2U;
        __PVT__fifoAWInsIdxValid = 1U;
    }
    if ((1U & ((~ (IData)(__PVT__fifoAWInsIdxValid)) 
               & (~ vlSelfRef.__PVT__fifoAWValid[3U])))) {
        vlSelfRef.__PVT__fifoAWInsIdx = 3U;
        __PVT__fifoAWInsIdxValid = 1U;
    }
    vlSelfRef.__PVT__writeIdx = 0U;
    if ((vlSelfRef.__PVT__fifoAWValid[3U] & (~ ((IData)(vlSelfRef.__PVT__writeDone) 
                                                >> 
                                                vlSelfRef.__PVT__fifoAW
                                                [3U])))) {
        vlSelfRef.__PVT__writeIdx = vlSelfRef.__PVT__fifoAW
            [3U];
    }
    if ((vlSelfRef.__PVT__fifoAWValid[2U] & (~ ((IData)(vlSelfRef.__PVT__writeDone) 
                                                >> 
                                                vlSelfRef.__PVT__fifoAW
                                                [2U])))) {
        vlSelfRef.__PVT__writeIdx = vlSelfRef.__PVT__fifoAW
            [2U];
    }
    if ((vlSelfRef.__PVT__fifoAWValid[1U] & (~ ((IData)(vlSelfRef.__PVT__writeDone) 
                                                >> 
                                                vlSelfRef.__PVT__fifoAW
                                                [1U])))) {
        vlSelfRef.__PVT__writeIdx = vlSelfRef.__PVT__fifoAW
            [1U];
    }
    vlSelfRef.__PVT__writeIdxValid = 0U;
    if ((vlSelfRef.__PVT__fifoAWValid[3U] & (~ ((IData)(vlSelfRef.__PVT__writeDone) 
                                                >> 
                                                vlSelfRef.__PVT__fifoAW
                                                [3U])))) {
        vlSelfRef.__PVT__writeIdxValid = 1U;
    }
    if ((vlSelfRef.__PVT__fifoAWValid[2U] & (~ ((IData)(vlSelfRef.__PVT__writeDone) 
                                                >> 
                                                vlSelfRef.__PVT__fifoAW
                                                [2U])))) {
        vlSelfRef.__PVT__writeIdxValid = 1U;
    }
    if ((vlSelfRef.__PVT__fifoAWValid[1U] & (~ ((IData)(vlSelfRef.__PVT__writeDone) 
                                                >> 
                                                vlSelfRef.__PVT__fifoAW
                                                [1U])))) {
        vlSelfRef.__PVT__writeIdxValid = 1U;
    }
    if ((vlSelfRef.__PVT__fifoAWValid[0U] & (~ ((IData)(vlSelfRef.__PVT__writeDone) 
                                                >> 
                                                vlSelfRef.__PVT__fifoAW
                                                [0U])))) {
        vlSelfRef.__PVT__writeIdx = vlSelfRef.__PVT__fifoAW
            [0U];
        vlSelfRef.__PVT__writeIdxValid = 1U;
    }
    vlSelfRef.__PVT__wFIFO__DOT__outputReady = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__wFIFO__DOT__outValidReg)) 
                                                   | (IData)(vlSelfRef.__PVT__writeIdxValid)));
    vlSelfRef.__PVT__wFIFO__DOT__doExtract = ((~ (IData)(vlSelfRef.__PVT__wFIFO__DOT__empty)) 
                                              & (IData)(vlSelfRef.__PVT__wFIFO__DOT__outputReady));
    vlSelfRef.__PVT__s_axi_wready = (1U & ((~ ((IData)(vlSelfRef.__PVT__wFIFO__DOT__fullCond) 
                                               & (IData)(vlSelfRef.__PVT__wFIFO__DOT__equal))) 
                                           | (IData)(vlSelfRef.__PVT__wFIFO__DOT__doExtract)));
    vlSelfRef.__PVT__wFIFO__DOT__doInsert = ((IData)(vlSymsp->TOP__Top__soc.__PVT__s_axi_wvalid) 
                                             & (IData)(vlSelfRef.__PVT__s_axi_wready));
}

VL_INLINE_OPT void VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__6(VTop_ExternalAXISim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__6\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__mem__v0) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0][0U] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0][0U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v0));
    }
    if (vlSelfRef.__VdlySet__mem__v1) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][0U] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v1) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v2) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v2][0U] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v2][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v2) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v3) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v3][0U] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v3][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v3) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem__v4) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v4][1U] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v4][1U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v4));
    }
    if (vlSelfRef.__VdlySet__mem__v5) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v5][1U] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v5][1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v5) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v6) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v6][1U] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v6][1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v6) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v7) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v7][1U] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v7][1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v7) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem__v8) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v8][2U] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v8][2U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v8));
    }
    if (vlSelfRef.__VdlySet__mem__v9) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v9][2U] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v9][2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v9) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v10) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v10][2U] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v10][2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v10) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v11) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v11][2U] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v11][2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v11) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem__v12) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v12][3U] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v12][3U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v12));
    }
    if (vlSelfRef.__VdlySet__mem__v13) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v13][3U] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v13][3U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v13) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v14) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v14][3U] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v14][3U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v14) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v15) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v15][3U] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v15][3U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v15) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__tfs__v0) {
        VL_ASSIGNSEL_WI(204,8,vlSelfRef.__VdlyLsb__tfs__v0, 
                        vlSelfRef.__PVT__tfs[0U], vlSelfRef.__VdlyVal__tfs__v0);
    }
    if (vlSelfRef.__VdlySet__tfs__v1) {
        VL_ASSIGNSEL_WQ(204,51,(IData)(vlSelfRef.__VdlyLsb__tfs__v1), 
                        vlSelfRef.__PVT__tfs[0U], vlSelfRef.__VdlyVal__tfs__v1);
    }
    if (vlSelfRef.__VdlySet__tfs__v2) {
        vlSelfRef.__PVT__tfs[0U][(vlSelfRef.__VdlyLsb__tfs__v2 
                                  >> 5U)] = (((~ ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelfRef.__VdlyLsb__tfs__v2))) 
                                              & vlSelfRef.__PVT__tfs
                                              [0U][
                                              (vlSelfRef.__VdlyLsb__tfs__v2 
                                               >> 5U)]) 
                                             | ((IData)(vlSelfRef.__VdlyVal__tfs__v2) 
                                                << 
                                                (0x1fU 
                                                 & vlSelfRef.__VdlyLsb__tfs__v2)));
    }
    if (vlSelfRef.__VdlySet__tfs__v3) {
        VL_ASSIGNSEL_WI(204,8,vlSelfRef.__VdlyLsb__tfs__v3, 
                        vlSelfRef.__PVT__tfs[1U], vlSelfRef.__VdlyVal__tfs__v3);
    }
    if (vlSelfRef.__VdlySet__tfs__v4) {
        VL_ASSIGNSEL_WI(204,8,vlSelfRef.__VdlyLsb__tfs__v4, 
                        vlSelfRef.__PVT__tfs[1U], vlSelfRef.__VdlyVal__tfs__v4);
    }
    if (vlSelfRef.__VdlySet__tfs__v5) {
        VL_ASSIGNSEL_WQ(204,51,(IData)(vlSelfRef.__VdlyLsb__tfs__v5), 
                        vlSelfRef.__PVT__tfs[1U], vlSelfRef.__VdlyVal__tfs__v5);
    }
    if (vlSelfRef.__VdlySet__tfs__v6) {
        vlSelfRef.__PVT__tfs[1U][(vlSelfRef.__VdlyLsb__tfs__v6 
                                  >> 5U)] = (((~ ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelfRef.__VdlyLsb__tfs__v6))) 
                                              & vlSelfRef.__PVT__tfs
                                              [1U][
                                              (vlSelfRef.__VdlyLsb__tfs__v6 
                                               >> 5U)]) 
                                             | ((IData)(vlSelfRef.__VdlyVal__tfs__v6) 
                                                << 
                                                (0x1fU 
                                                 & vlSelfRef.__VdlyLsb__tfs__v6)));
    }
    if (vlSelfRef.__VdlySet__tfs__v7) {
        vlSelfRef.__PVT__tfs[0U][(vlSelfRef.__VdlyLsb__tfs__v7 
                                  >> 5U)] = (((~ ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelfRef.__VdlyLsb__tfs__v7))) 
                                              & vlSelfRef.__PVT__tfs
                                              [0U][
                                              (vlSelfRef.__VdlyLsb__tfs__v7 
                                               >> 5U)]) 
                                             | ((IData)(vlSelfRef.__VdlyVal__tfs__v7) 
                                                << 
                                                (0x1fU 
                                                 & vlSelfRef.__VdlyLsb__tfs__v7)));
    }
    if (vlSelfRef.__VdlySet__tfs__v8) {
        VL_ASSIGNSEL_WI(204,32,vlSelfRef.__VdlyLsb__tfs__v8, 
                        vlSelfRef.__PVT__tfs[0U], vlSelfRef.__VdlyVal__tfs__v8);
    }
    if (vlSelfRef.__VdlySet__tfs__v9) {
        VL_ASSIGNSEL_WI(204,2,vlSelfRef.__VdlyLsb__tfs__v9, 
                        vlSelfRef.__PVT__tfs[0U], vlSelfRef.__VdlyVal__tfs__v9);
    }
    if (vlSelfRef.__VdlySet__tfs__v10) {
        VL_ASSIGNSEL_WI(204,8,vlSelfRef.__VdlyLsb__tfs__v10, 
                        vlSelfRef.__PVT__tfs[0U], vlSelfRef.__VdlyVal__tfs__v10);
    }
    if (vlSelfRef.__VdlySet__tfs__v11) {
        VL_ASSIGNSEL_WI(204,8,vlSelfRef.__VdlyLsb__tfs__v11, 
                        vlSelfRef.__PVT__tfs[0U], vlSelfRef.__VdlyVal__tfs__v11);
    }
    if (vlSelfRef.__VdlySet__tfs__v12) {
        vlSelfRef.__PVT__tfs[1U][(vlSelfRef.__VdlyLsb__tfs__v12 
                                  >> 5U)] = (((~ ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelfRef.__VdlyLsb__tfs__v12))) 
                                              & vlSelfRef.__PVT__tfs
                                              [1U][
                                              (vlSelfRef.__VdlyLsb__tfs__v12 
                                               >> 5U)]) 
                                             | ((IData)(vlSelfRef.__VdlyVal__tfs__v12) 
                                                << 
                                                (0x1fU 
                                                 & vlSelfRef.__VdlyLsb__tfs__v12)));
    }
    if (vlSelfRef.__VdlySet__tfs__v13) {
        VL_ASSIGNSEL_WI(204,32,vlSelfRef.__VdlyLsb__tfs__v13, 
                        vlSelfRef.__PVT__tfs[1U], vlSelfRef.__VdlyVal__tfs__v13);
    }
    if (vlSelfRef.__VdlySet__tfs__v14) {
        VL_ASSIGNSEL_WI(204,2,vlSelfRef.__VdlyLsb__tfs__v14, 
                        vlSelfRef.__PVT__tfs[1U], vlSelfRef.__VdlyVal__tfs__v14);
    }
    if (vlSelfRef.__VdlySet__tfs__v15) {
        VL_ASSIGNSEL_WI(204,8,vlSelfRef.__VdlyLsb__tfs__v15, 
                        vlSelfRef.__PVT__tfs[1U], vlSelfRef.__VdlyVal__tfs__v15);
    }
    if (vlSelfRef.__VdlySet__tfs__v16) {
        VL_ASSIGNSEL_WI(204,8,vlSelfRef.__VdlyLsb__tfs__v16, 
                        vlSelfRef.__PVT__tfs[1U], vlSelfRef.__VdlyVal__tfs__v16);
    }
    vlSelfRef.__Vcellinp__awFIFO__IN_data = (((QData)((IData)(
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__awFIFO__OUT_data 
                                                                          >> 0x32U))))) 
                                              << 0x32U) 
                                             | (((QData)((IData)(
                                                                 (vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__awFIFO__OUT_data 
                                                                  >> 0x12U))) 
                                                 << 0x12U) 
                                                | (QData)((IData)(
                                                                  ((0x38000U 
                                                                    & ((IData)(
                                                                               (vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__awFIFO__OUT_data 
                                                                                >> 7U)) 
                                                                       << 0xfU)) 
                                                                   | ((0x7f80U 
                                                                       & ((IData)(
                                                                                (vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__awFIFO__OUT_data 
                                                                                >> 0xaU)) 
                                                                          << 7U)) 
                                                                      | (0x7fU 
                                                                         & (IData)(vlSymsp->TOP__Top__soc.memc__DOT____Vcellout__awFIFO__OUT_data))))))));
    vlSelfRef.__PVT__readDataIdxValid = 0U;
    if ((0x2000000U & vlSelfRef.__PVT__tfs[0U][4U])) {
        vlSelfRef.__PVT__readDataIdxValid = 1U;
    }
    if ((0x40U & vlSelfRef.__PVT__tfs[0U][3U])) {
        vlSelfRef.__PVT__readDataIdxValid = 1U;
    }
    if ((0x80000U & vlSelfRef.__PVT__tfs[0U][1U])) {
        vlSelfRef.__PVT__readDataIdxValid = 1U;
    }
    vlSelfRef.__PVT__readDataIdx = 0U;
    if ((0x2000000U & vlSelfRef.__PVT__tfs[0U][4U])) {
        vlSelfRef.__PVT__readDataIdx = 3U;
    }
    if ((0x40U & vlSelfRef.__PVT__tfs[0U][3U])) {
        vlSelfRef.__PVT__readDataIdx = 2U;
    }
    if ((0x80000U & vlSelfRef.__PVT__tfs[0U][1U])) {
        vlSelfRef.__PVT__readDataIdx = 1U;
    }
    if ((1U & vlSelfRef.__PVT__tfs[0U][0U])) {
        vlSelfRef.__PVT__readDataIdxValid = 1U;
        vlSelfRef.__PVT__readDataIdx = 0U;
    }
    vlSelfRef.__PVT__reads[0U] = vlSelfRef.__PVT__tfs
        [0U][0U];
    vlSelfRef.__PVT__reads[1U] = vlSelfRef.__PVT__tfs
        [0U][1U];
    vlSelfRef.__PVT__reads[2U] = vlSelfRef.__PVT__tfs
        [0U][2U];
    vlSelfRef.__PVT__reads[3U] = vlSelfRef.__PVT__tfs
        [0U][3U];
    vlSelfRef.__PVT__reads[4U] = vlSelfRef.__PVT__tfs
        [0U][4U];
    vlSelfRef.__PVT__reads[5U] = vlSelfRef.__PVT__tfs
        [0U][5U];
    vlSelfRef.__PVT__reads[6U] = vlSelfRef.__PVT__tfs
        [0U][6U];
    vlSelfRef.__PVT__writes[0U] = vlSelfRef.__PVT__tfs
        [1U][0U];
    vlSelfRef.__PVT__writes[1U] = vlSelfRef.__PVT__tfs
        [1U][1U];
    vlSelfRef.__PVT__writes[2U] = vlSelfRef.__PVT__tfs
        [1U][2U];
    vlSelfRef.__PVT__writes[3U] = vlSelfRef.__PVT__tfs
        [1U][3U];
    vlSelfRef.__PVT__writes[4U] = vlSelfRef.__PVT__tfs
        [1U][4U];
    vlSelfRef.__PVT__writes[5U] = vlSelfRef.__PVT__tfs
        [1U][5U];
    vlSelfRef.__PVT__writes[6U] = vlSelfRef.__PVT__tfs
        [1U][6U];
    vlSelfRef.__PVT__buf_arready = ((~ ((0xcbU >= (0xffU 
                                                   & ((IData)(0x33U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelfRef.__Vcellout__arFIFO__OUT_data 
                                                                  >> 0x32U)))))) 
                                        && (1U & (vlSelfRef.__PVT__tfs
                                                  [0U][
                                                  (7U 
                                                   & (((IData)(0x33U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelfRef.__Vcellout__arFIFO__OUT_data 
                                                                   >> 0x32U)))) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x33U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelfRef.__Vcellout__arFIFO__OUT_data 
                                                                  >> 0x32U))))))))) 
                                    & (IData)(vlSelfRef.__PVT__buf_arvalid));
    vlSelfRef.__PVT__buf_awvalid = vlSelfRef.__PVT__awFIFO__DOT__outValidReg;
    vlSelfRef.__Vcellout__awFIFO__OUT_data = vlSelfRef.__PVT__awFIFO__DOT__outDataReg;
    vlSelfRef.__PVT__awFIFO__DOT__combPassthru = 0U;
    if (((~ (IData)(vlSelfRef.__PVT__buf_awvalid)) 
         & (IData)(vlSelfRef.__PVT__awFIFO__DOT__empty))) {
        vlSelfRef.__PVT__buf_awvalid = vlSymsp->TOP__Top__soc.__PVT__memc__DOT__awFIFO_outValid;
        vlSelfRef.__Vcellout__awFIFO__OUT_data = vlSelfRef.__Vcellinp__awFIFO__IN_data;
        vlSelfRef.__PVT__awFIFO__DOT__combPassthru = 1U;
    }
    vlSelfRef.__PVT__arFIFO__DOT__outputReady = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__arFIFO__DOT__outValidReg)) 
                                                    | (IData)(vlSelfRef.__PVT__buf_arready)));
    vlSelfRef.__PVT__buf_awready = ((~ ((0xcbU >= (0xffU 
                                                   & ((IData)(0x33U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelfRef.__Vcellout__awFIFO__OUT_data 
                                                                  >> 0x32U)))))) 
                                        && (1U & (vlSelfRef.__PVT__tfs
                                                  [1U][
                                                  (7U 
                                                   & (((IData)(0x33U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelfRef.__Vcellout__awFIFO__OUT_data 
                                                                   >> 0x32U)))) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x33U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelfRef.__Vcellout__awFIFO__OUT_data 
                                                                  >> 0x32U))))))))) 
                                    & (IData)(vlSelfRef.__PVT__buf_awvalid));
    vlSelfRef.__PVT__arFIFO__DOT__doExtract = ((~ (IData)(vlSelfRef.__PVT__arFIFO__DOT__empty)) 
                                               & (IData)(vlSelfRef.__PVT__arFIFO__DOT__outputReady));
    vlSelfRef.__PVT__awFIFO__DOT__outputReady = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__awFIFO__DOT__outValidReg)) 
                                                    | (IData)(vlSelfRef.__PVT__buf_awready)));
    vlSelfRef.__PVT__s_axi_arready = (1U & ((~ ((IData)(vlSelfRef.__PVT__arFIFO__DOT__fullCond) 
                                                & (IData)(vlSelfRef.__PVT__arFIFO__DOT__equal))) 
                                            | (IData)(vlSelfRef.__PVT__arFIFO__DOT__doExtract)));
    vlSelfRef.__PVT__awFIFO__DOT__doExtract = ((~ (IData)(vlSelfRef.__PVT__awFIFO__DOT__empty)) 
                                               & (IData)(vlSelfRef.__PVT__awFIFO__DOT__outputReady));
    vlSelfRef.__PVT__arFIFO__DOT__doInsert = ((IData)(vlSymsp->TOP__Top__soc.__PVT__memc__DOT__arFIFO__DOT__outValidReg) 
                                              & (IData)(vlSelfRef.__PVT__s_axi_arready));
    vlSelfRef.__PVT__s_axi_awready = (1U & ((~ ((IData)(vlSelfRef.__PVT__awFIFO__DOT__fullCond) 
                                                & (IData)(vlSelfRef.__PVT__awFIFO__DOT__equal))) 
                                            | (IData)(vlSelfRef.__PVT__awFIFO__DOT__doExtract)));
    vlSelfRef.__PVT__awFIFO__DOT__doInsert = ((IData)(vlSymsp->TOP__Top__soc.__PVT__memc__DOT__awFIFO_outValid) 
                                              & (IData)(vlSelfRef.__PVT__s_axi_awready));
}
