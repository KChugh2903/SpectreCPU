// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_ExternalAXISim.h"
#include "VTop__Syms.h"

VL_ATTR_COLD void VTop_ExternalAXISim___stl_sequent__TOP__Top__extMem__0(VTop_ExternalAXISim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_ExternalAXISim___stl_sequent__TOP__Top__extMem__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__fifoAWInsIdxValid;
    __PVT__fifoAWInsIdxValid = 0;
    // Body
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
    vlSelfRef.__PVT__wFIFO__DOT__equal = ((IData)(vlSelfRef.__PVT__wFIFO__DOT__indexIn) 
                                          == (IData)(vlSelfRef.__PVT__wFIFO__DOT__indexOut));
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
    vlSelfRef.__PVT__arFIFO__DOT__equal = ((IData)(vlSelfRef.__PVT__arFIFO__DOT__indexIn) 
                                           == (IData)(vlSelfRef.__PVT__arFIFO__DOT__indexOut));
    vlSelfRef.__PVT__awFIFO__DOT__equal = ((IData)(vlSelfRef.__PVT__awFIFO__DOT__indexIn) 
                                           == (IData)(vlSelfRef.__PVT__awFIFO__DOT__indexOut));
    vlSelfRef.__PVT__wFIFO__DOT__outputReady = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__wFIFO__DOT__outValidReg)) 
                                                   | (IData)(vlSelfRef.__PVT__writeIdxValid)));
    vlSelfRef.__PVT__wFIFO__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__wFIFO__DOT__fullCond)) 
                                          & (IData)(vlSelfRef.__PVT__wFIFO__DOT__equal));
    vlSelfRef.__PVT__arFIFO__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__arFIFO__DOT__fullCond)) 
                                           & (IData)(vlSelfRef.__PVT__arFIFO__DOT__equal));
    vlSelfRef.__PVT__awFIFO__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__awFIFO__DOT__fullCond)) 
                                           & (IData)(vlSelfRef.__PVT__awFIFO__DOT__equal));
    vlSelfRef.__PVT__wFIFO__DOT__doExtract = ((~ (IData)(vlSelfRef.__PVT__wFIFO__DOT__empty)) 
                                              & (IData)(vlSelfRef.__PVT__wFIFO__DOT__outputReady));
    vlSelfRef.__PVT__buf_arvalid = vlSelfRef.__PVT__arFIFO__DOT__outValidReg;
    vlSelfRef.__Vcellout__arFIFO__OUT_data = vlSelfRef.__PVT__arFIFO__DOT__outDataReg;
    vlSelfRef.__PVT__arFIFO__DOT__combPassthru = 0U;
    if (((~ (IData)(vlSelfRef.__PVT__buf_arvalid)) 
         & (IData)(vlSelfRef.__PVT__arFIFO__DOT__empty))) {
        vlSelfRef.__PVT__buf_arvalid = vlSymsp->TOP__Top__soc.__PVT__memc__DOT__arFIFO__DOT__outValidReg;
        vlSelfRef.__Vcellout__arFIFO__OUT_data = vlSelfRef.__Vcellinp__arFIFO__IN_data;
        vlSelfRef.__PVT__arFIFO__DOT__combPassthru = 1U;
    }
    vlSelfRef.__PVT__s_axi_wready = (1U & ((~ ((IData)(vlSelfRef.__PVT__wFIFO__DOT__fullCond) 
                                               & (IData)(vlSelfRef.__PVT__wFIFO__DOT__equal))) 
                                           | (IData)(vlSelfRef.__PVT__wFIFO__DOT__doExtract)));
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
    vlSelfRef.__PVT__arFIFO__DOT__outputReady = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__arFIFO__DOT__outValidReg)) 
                                                    | (IData)(vlSelfRef.__PVT__buf_arready)));
    vlSelfRef.__PVT__arFIFO__DOT__doExtract = ((~ (IData)(vlSelfRef.__PVT__arFIFO__DOT__empty)) 
                                               & (IData)(vlSelfRef.__PVT__arFIFO__DOT__outputReady));
    vlSelfRef.__PVT__s_axi_arready = (1U & ((~ ((IData)(vlSelfRef.__PVT__arFIFO__DOT__fullCond) 
                                                & (IData)(vlSelfRef.__PVT__arFIFO__DOT__equal))) 
                                            | (IData)(vlSelfRef.__PVT__arFIFO__DOT__doExtract)));
    vlSelfRef.__PVT__arFIFO__DOT__doInsert = ((IData)(vlSymsp->TOP__Top__soc.__PVT__memc__DOT__arFIFO__DOT__outValidReg) 
                                              & (IData)(vlSelfRef.__PVT__s_axi_arready));
}

VL_ATTR_COLD void VTop_ExternalAXISim___stl_sequent__TOP__Top__extMem__1(VTop_ExternalAXISim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_ExternalAXISim___stl_sequent__TOP__Top__extMem__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wFIFO__DOT__doInsert = ((IData)(vlSymsp->TOP__Top__soc.__PVT__s_axi_wvalid) 
                                             & (IData)(vlSelfRef.__PVT__s_axi_wready));
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
    vlSelfRef.__PVT__buf_awvalid = vlSelfRef.__PVT__awFIFO__DOT__outValidReg;
    vlSelfRef.__Vcellout__awFIFO__OUT_data = vlSelfRef.__PVT__awFIFO__DOT__outDataReg;
    vlSelfRef.__PVT__awFIFO__DOT__combPassthru = 0U;
    if (((~ (IData)(vlSelfRef.__PVT__buf_awvalid)) 
         & (IData)(vlSelfRef.__PVT__awFIFO__DOT__empty))) {
        vlSelfRef.__PVT__buf_awvalid = vlSymsp->TOP__Top__soc.__PVT__memc__DOT__awFIFO_outValid;
        vlSelfRef.__Vcellout__awFIFO__OUT_data = vlSelfRef.__Vcellinp__awFIFO__IN_data;
        vlSelfRef.__PVT__awFIFO__DOT__combPassthru = 1U;
    }
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
    vlSelfRef.__PVT__awFIFO__DOT__outputReady = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__awFIFO__DOT__outValidReg)) 
                                                    | (IData)(vlSelfRef.__PVT__buf_awready)));
    vlSelfRef.__PVT__awFIFO__DOT__doExtract = ((~ (IData)(vlSelfRef.__PVT__awFIFO__DOT__empty)) 
                                               & (IData)(vlSelfRef.__PVT__awFIFO__DOT__outputReady));
    vlSelfRef.__PVT__s_axi_awready = (1U & ((~ ((IData)(vlSelfRef.__PVT__awFIFO__DOT__fullCond) 
                                                & (IData)(vlSelfRef.__PVT__awFIFO__DOT__equal))) 
                                            | (IData)(vlSelfRef.__PVT__awFIFO__DOT__doExtract)));
    vlSelfRef.__PVT__awFIFO__DOT__doInsert = ((IData)(vlSymsp->TOP__Top__soc.__PVT__memc__DOT__awFIFO_outValid) 
                                              & (IData)(vlSelfRef.__PVT__s_axi_awready));
}
