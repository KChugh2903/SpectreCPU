// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_SoC.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_SoC___nba_sequent__TOP__Top__soc__9(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___nba_sequent__TOP__Top__soc__9\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data;
    VL_ZERO_W(128, __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_data);
    CData/*1:0*/ __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_id;
    __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_id = 0;
    CData/*0:0*/ __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_last;
    __PVT__memc__DOT__dcacheReadIF__DOT__FIFO_last = 0;
    // Body
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
    vlSelfRef.__PVT__OUT_powerOff = 0U;
    vlSelfRef.__PVT__OUT_reboot = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__we)))) {
            if ((0x11100000U == (0xfffffffcU & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__waddr))) {
                if ((1U & (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask))) {
                    if ((0x55U == (0xffU & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata))) {
                        vlSelfRef.__PVT__OUT_powerOff = 1U;
                    }
                    if ((0x77U == (0xffU & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata))) {
                        vlSelfRef.__PVT__OUT_reboot = 1U;
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtimecmp = 0ULL;
    } else if ((1U & (~ (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__we)))) {
        if ((0x1100bff8U != (0xfffffffcU & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__waddr))) {
            if ((0x1100bffcU != (0xfffffffcU & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__waddr))) {
                if ((0x11004000U == (0xfffffffcU & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__waddr))) {
                    if ((1U & (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask))) {
                        vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtimecmp 
                            = ((0xffffffffffffff00ULL 
                                & vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtimecmp) 
                               | (IData)((IData)((0xffU 
                                                  & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata))));
                    }
                    if ((2U & (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask))) {
                        vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtimecmp 
                            = ((0xffffffffffff00ffULL 
                                & vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtimecmp) 
                               | ((QData)((IData)((0xffU 
                                                   & (vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata 
                                                      >> 8U)))) 
                                  << 8U));
                    }
                    if ((4U & (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask))) {
                        vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtimecmp 
                            = ((0xffffffffff00ffffULL 
                                & vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtimecmp) 
                               | ((QData)((IData)((0xffU 
                                                   & (vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata 
                                                      >> 0x10U)))) 
                                  << 0x10U));
                    }
                    if ((8U & (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask))) {
                        vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtimecmp 
                            = ((0xffffffff00ffffffULL 
                                & vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtimecmp) 
                               | ((QData)((IData)((vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata 
                                                   >> 0x18U))) 
                                  << 0x18U));
                    }
                } else if ((0x11004004U == (0xfffffffcU 
                                            & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__waddr))) {
                    if ((1U & (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask))) {
                        vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtimecmp 
                            = ((0xffffff00ffffffffULL 
                                & vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtimecmp) 
                               | ((QData)((IData)((0xffU 
                                                   & vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata))) 
                                  << 0x20U));
                    }
                    if ((2U & (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask))) {
                        vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtimecmp 
                            = ((0xffff00ffffffffffULL 
                                & vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtimecmp) 
                               | ((QData)((IData)((0xffU 
                                                   & (vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata 
                                                      >> 8U)))) 
                                  << 0x28U));
                    }
                    if ((4U & (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask))) {
                        vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtimecmp 
                            = ((0xff00ffffffffffffULL 
                                & vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtimecmp) 
                               | ((QData)((IData)((0xffU 
                                                   & (vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata 
                                                      >> 0x10U)))) 
                                  << 0x30U));
                    }
                    if ((8U & (IData)(vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask))) {
                        vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtimecmp 
                            = ((0xffffffffffffffULL 
                                & vlSelfRef.__PVT__mmio__DOT__aclint__DOT__mtimecmp) 
                               | ((QData)((IData)((vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata 
                                                   >> 0x18U))) 
                                  << 0x38U));
                    }
                }
            }
        }
    }
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
}

VL_INLINE_OPT void VTop_SoC___nba_sequent__TOP__Top__soc__10(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___nba_sequent__TOP__Top__soc__10\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outputReady 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outValidReg)) 
                 | (IData)(vlSymsp->TOP__Top__extMem.__PVT__s_axi_wready)));
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__doExtract 
        = ((~ (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__empty)) 
           & (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outputReady));
    vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__doInsert 
        = ((IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__FIFO_valid) 
           & ((~ ((IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__fullCond) 
                  & (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__equal))) 
              | (IData)(vlSelfRef.__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__doExtract)));
}

VL_INLINE_OPT void VTop_SoC___nba_sequent__TOP__Top__soc__12(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___nba_sequent__TOP__Top__soc__12\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*157:0*/ __Vlvbound_hab9b7766__0;
    VL_ZERO_W(158, __Vlvbound_hab9b7766__0);
    CData/*0:0*/ dcacheArb__DOT____Vlvbound_h55455065__0;
    dcacheArb__DOT____Vlvbound_h55455065__0 = 0;
    CData/*1:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*5:0*/ __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__unnamedblk3__DOT__packedIdcs = 0;
    // Body
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
}

VL_INLINE_OPT void VTop_SoC___nba_sequent__TOP__Top__soc__13(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___nba_sequent__TOP__Top__soc__13\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_hc8e55215__0;
    __Vlvbound_hc8e55215__0 = 0;
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
    CData/*0:0*/ __PVT__memc__DOT__unnamedblk11__DOT__isExclusive;
    __PVT__memc__DOT__unnamedblk11__DOT__isExclusive = 0;
    IData/*31:0*/ __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx;
    __PVT__dcacheArb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__idx = 0;
    CData/*0:0*/ dcacheArb__DOT____Vlvbound_h516ee325__0;
    dcacheArb__DOT____Vlvbound_h516ee325__0 = 0;
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
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_9;
    // Body
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
        __Vtemp_3[0U] = (((0U == (0x1fU & ((IData)(0x11U) 
                                           + (0x7fU 
                                              & VL_SHIFTL_III(7,32,32, 
                                                              (1U 
                                                               & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                  >> 4U)), 7U)))))
                           ? 0U : (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[
                                   ((IData)(1U) + (
                                                   ((IData)(0x11U) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     (1U 
                                                                      & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                         >> 4U)), 7U))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x11U) 
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
        __Vtemp_3[1U] = (((0U == (0x1fU & ((IData)(0x11U) 
                                           + (0x7fU 
                                              & VL_SHIFTL_III(7,32,32, 
                                                              (1U 
                                                               & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                  >> 4U)), 7U)))))
                           ? 0U : (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[
                                   ((IData)(2U) + (
                                                   ((IData)(0x11U) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     (1U 
                                                                      & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                         >> 4U)), 7U))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x11U) 
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
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))));
        __Vtemp_3[2U] = (((0U == (0x1fU & ((IData)(0x11U) 
                                           + (0x7fU 
                                              & VL_SHIFTL_III(7,32,32, 
                                                              (1U 
                                                               & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                  >> 4U)), 7U)))))
                           ? 0U : (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[
                                   ((IData)(3U) + (
                                                   ((IData)(0x11U) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     (1U 
                                                                      & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                         >> 4U)), 7U))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x11U) 
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
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))));
        __Vtemp_3[3U] = (((0U == (0x1fU & ((IData)(0x11U) 
                                           + (0x7fU 
                                              & VL_SHIFTL_III(7,32,32, 
                                                              (1U 
                                                               & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                  >> 4U)), 7U)))))
                           ? 0U : (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[
                                   ((IData)(4U) + (
                                                   ((IData)(0x11U) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     (1U 
                                                                      & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                                         >> 4U)), 7U))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x11U) 
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
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))));
        vlSelfRef.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[0U] 
            = ((0x90U >= ((IData)(0x11U) + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))
                ? __Vtemp_3[0U] : 0U);
        vlSelfRef.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[1U] 
            = ((0x90U >= ((IData)(0x11U) + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))
                ? __Vtemp_3[1U] : 0U);
        vlSelfRef.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[2U] 
            = ((0x90U >= ((IData)(0x11U) + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))
                ? __Vtemp_3[2U] : 0U);
        vlSelfRef.memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data[3U] 
            = ((0x90U >= ((IData)(0x11U) + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__icacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))
                ? __Vtemp_3[3U] : 0U);
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
        __Vtemp_9[0U] = (((0U == (0x1fU & ((IData)(0x11U) 
                                           + (0x7fU 
                                              & VL_SHIFTL_III(7,32,32, 
                                                              (1U 
                                                               & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                  >> 4U)), 7U)))))
                           ? 0U : (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[
                                   ((IData)(1U) + (
                                                   ((IData)(0x11U) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     (1U 
                                                                      & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                         >> 4U)), 7U))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x11U) 
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
        __Vtemp_9[1U] = (((0U == (0x1fU & ((IData)(0x11U) 
                                           + (0x7fU 
                                              & VL_SHIFTL_III(7,32,32, 
                                                              (1U 
                                                               & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                  >> 4U)), 7U)))))
                           ? 0U : (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[
                                   ((IData)(2U) + (
                                                   ((IData)(0x11U) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     (1U 
                                                                      & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                         >> 4U)), 7U))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x11U) 
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
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))));
        __Vtemp_9[2U] = (((0U == (0x1fU & ((IData)(0x11U) 
                                           + (0x7fU 
                                              & VL_SHIFTL_III(7,32,32, 
                                                              (1U 
                                                               & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                  >> 4U)), 7U)))))
                           ? 0U : (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[
                                   ((IData)(3U) + (
                                                   ((IData)(0x11U) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     (1U 
                                                                      & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                         >> 4U)), 7U))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x11U) 
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
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))));
        __Vtemp_9[3U] = (((0U == (0x1fU & ((IData)(0x11U) 
                                           + (0x7fU 
                                              & VL_SHIFTL_III(7,32,32, 
                                                              (1U 
                                                               & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                  >> 4U)), 7U)))))
                           ? 0U : (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[
                                   ((IData)(4U) + (
                                                   ((IData)(0x11U) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     (1U 
                                                                      & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                                         >> 4U)), 7U))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x11U) 
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
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))));
        vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_data[0U] 
            = ((0x90U >= ((IData)(0x11U) + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))
                ? __Vtemp_9[0U] : 0U);
        vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_data[1U] 
            = ((0x90U >= ((IData)(0x11U) + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))
                ? __Vtemp_9[1U] : 0U);
        vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_data[2U] 
            = ((0x90U >= ((IData)(0x11U) + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))
                ? __Vtemp_9[2U] : 0U);
        vlSelfRef.memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_data[3U] 
            = ((0x90U >= ((IData)(0x11U) + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           & (vlSelfRef.__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c[0U] 
                                                              >> 4U)), 7U))))
                ? __Vtemp_9[3U] : 0U);
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
    vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__doExtract 
        = ((~ (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__empty)) 
           & (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__outputReady));
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
    vlSelfRef.__PVT__s_axi_rready = (1U & ((~ ((IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__fullCond) 
                                               & (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__equal))) 
                                           | (IData)(vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__doExtract)));
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
    vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__doInsert 
        = ((IData)(vlSymsp->TOP__Top__extMem.__PVT__s_axi_rvalid) 
           & (IData)(vlSelfRef.__PVT__s_axi_rready));
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

VL_INLINE_OPT void VTop_SoC___nba_sequent__TOP__Top__soc__14(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___nba_sequent__TOP__Top__soc__14\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__outputReady 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__outValidReg)) 
                 | (IData)(vlSymsp->TOP__Top__extMem.__PVT__s_axi_arready)));
    vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__outputReady 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__outValidReg)) 
                 | (IData)(vlSymsp->TOP__Top__extMem.__PVT__s_axi_awready)));
    vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__doExtract 
        = ((~ (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__empty)) 
           & (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__outputReady));
    vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__doExtract 
        = ((~ (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__empty)) 
           & (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__outputReady));
    vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__doInsert 
        = (1U & ((IData)(vlSelfRef.__PVT__memc__DOT__axiAR) 
                 & ((~ ((IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__fullCond) 
                        & (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__equal))) 
                    | (IData)(vlSelfRef.__PVT__memc__DOT__arFIFO__DOT__doExtract))));
    vlSelfRef.__PVT__memc__DOT__awFIFO_ready = (1U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__fullCond) 
                                                     & (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__equal))) 
                                                   | (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__doExtract)));
    vlSelfRef.__PVT__memc__DOT__awFIFO__DOT__doInsert 
        = ((IData)(vlSelfRef.__PVT__memc__DOT__axiAW) 
           & (IData)(vlSelfRef.__PVT__memc__DOT__awFIFO_ready));
}

VL_INLINE_OPT void VTop_SoC___nba_sequent__TOP__Top__soc__15(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___nba_sequent__TOP__Top__soc__15\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}
