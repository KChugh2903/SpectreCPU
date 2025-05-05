// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Core.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__24(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__24\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*19:0*/ lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_flagsUOp;
    lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_flagsUOp = 0;
    IData/*19:0*/ lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_flagsUOp;
    lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_flagsUOp = 0;
    VlWide<4>/*100:0*/ __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld;
    VL_ZERO_W(101, __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld);
    VlWide<6>/*183:0*/ __PVT__lsu__DOT__unnamedblk28__DOT__st;
    VL_ZERO_W(184, __PVT__lsu__DOT__unnamedblk28__DOT__st);
    VlWide<3>/*88:0*/ __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c;
    VL_ZERO_W(89, __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c);
    VlWide<3>/*88:0*/ __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c;
    VL_ZERO_W(89, __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c);
    CData/*0:0*/ __PVT__cacheLineManager__DOT__missEvictConflict;
    __PVT__cacheLineManager__DOT__missEvictConflict = 0;
    // Body
    vlSelfRef.__PVT__lsu__DOT__blsuLoadHandled = 0U;
    vlSelfRef.__PVT__LSU_setDirty = 0U;
    vlSelfRef.__PVT__lsu__DOT__storeWriteToCache = 0U;
    vlSelfRef.__PVT__lsu__DOT__storeWriteAssoc = 0U;
    vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][2U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][2U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[0U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[0U][2U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] = (0xfffffffeU 
                                               & vlSelfRef.__PVT__lsu__DOT__miss
                                               [0U][0U]);
    vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[1U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[1U][2U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] = (0xfffffffeU 
                                               & vlSelfRef.__PVT__lsu__DOT__miss
                                               [1U][0U]);
    vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[2U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[2U][2U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] = (0xfffffffeU 
                                               & vlSelfRef.__PVT__lsu__DOT__miss
                                               [2U][0U]);
    __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps[0U][1U][0U];
    __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps[0U][1U][1U];
    __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps[0U][1U][2U];
    __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[3U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps[0U][1U][3U];
    if ((1U & (~ __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U]))) {
        __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
            = vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[0U];
        __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
            = vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[1U];
        __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
            = vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[2U];
        __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[3U] 
            = vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[3U];
    }
    vlSelfRef.__PVT__lsu__DOT__curLd[0U][0U] = __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U];
    vlSelfRef.__PVT__lsu__DOT__curLd[0U][1U] = __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U];
    vlSelfRef.__PVT__lsu__DOT__curLd[0U][2U] = __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U];
    vlSelfRef.__PVT__lsu__DOT__curLd[0U][3U] = __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[3U];
    if ((1U & __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U])) {
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO 
            = (1U & (~ vlSelfRef.__PVT__lsu__DOT__ldOps
                     [0U][1U][0U]));
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isIntMMIO 
            = (IData)((3U == (3U & __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U])));
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO 
            = ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO) 
               | (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isIntMMIO));
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__noEvict 
            = (1U & (~ ((0x55U >= (0x7fU & ((IData)(0x15U) 
                                            * (3U & 
                                               (vlSelfRef.__PVT__CLM_ctResult
                                                [0U][2U] 
                                                >> 0x14U))))) 
                        && (1U & (vlSelfRef.__PVT__CLM_ctResult
                                  [0U][(3U & (((IData)(0x15U) 
                                               * (3U 
                                                  & (vlSelfRef.__PVT__CLM_ctResult
                                                     [0U][2U] 
                                                     >> 0x14U))) 
                                              >> 5U))] 
                                  >> (0x1fU & ((IData)(0x15U) 
                                               * (3U 
                                                  & (vlSelfRef.__PVT__CLM_ctResult
                                                     [0U][2U] 
                                                     >> 0x14U)))))))));
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 1U;
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit = 0U;
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData = 0U;
        if ((0x10U & __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U])) {
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                = ((__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[3U] 
                    << 0x1bU) | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                 >> 5U));
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
        } else if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO) {
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                = vlSelfRef.__PVT__lsu__DOT__BLSU_ldResult;
            vlSelfRef.__PVT__lsu__DOT__blsuLoadHandled = 1U;
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
        } else if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isIntMMIO) {
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                = vlSymsp->TOP__Top__soc__IF_mmio.__PVT__rdata;
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
        } else {
            if ((1U & vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                 [0U])) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit = 1U;
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                      (3U 
                                                       & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                          [0U] 
                                                          >> 1U)), 5U)))
                         ? 0U : (vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[
                                 (((IData)(0x1fU) + 
                                   (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                              [0U] 
                                                              >> 1U)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                                     [0U] 
                                                                     >> 1U)), 5U))))) 
                       | (vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[
                          (3U & (VL_SHIFTL_III(7,32,32, 
                                               (3U 
                                                & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                   [0U] 
                                                   >> 1U)), 5U) 
                                 >> 5U))] >> (0x1fU 
                                              & VL_SHIFTL_III(7,32,32, 
                                                              (3U 
                                                               & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                                  [0U] 
                                                                  >> 1U)), 5U))));
            }
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__allowPassThru 
                = (1U & (([&]() {
                            vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                = ((__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                    << 0x1cU) | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                                 >> 4U));
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[1U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[1U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[2U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[3U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[3U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[4U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[4U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[5U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[5U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[6U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[6U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[7U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[7U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[8U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[8U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[9U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[9U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xaU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xaU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xbU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xbU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xcU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xcU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xdU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xdU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xeU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xeU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xfU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xfU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0x10U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0x10U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0x11U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0x11U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[0U] 
                                = vlSelfRef.__PVT__LSU_MC_if[0U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[1U] 
                                = vlSelfRef.__PVT__LSU_MC_if[1U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[2U] 
                                = vlSelfRef.__PVT__LSU_MC_if[2U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[3U] 
                                = vlSelfRef.__PVT__LSU_MC_if[3U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[4U] 
                                = vlSelfRef.__PVT__LSU_MC_if[4U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[5U] 
                                = vlSelfRef.__PVT__LSU_MC_if[5U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[6U] 
                                = vlSelfRef.__PVT__LSU_MC_if[6U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[7U] 
                                = vlSelfRef.__PVT__LSU_MC_if[7U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__rv = 0U;
                            if ((((vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[1U] 
                                   >> 0x1eU) & (~ vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U])) 
                                 & ((0x3ffffffU & (
                                                   (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[3U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U] 
                                                      >> 0x18U))) 
                                    == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv));
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv)) 
                                       | (((0x1fU & 
                                            (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U] 
                                             >> 1U)) 
                                           > (0x1fU 
                                              & ((0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                                     >> 2U)) 
                                                 - 
                                                 (0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U] 
                                                     >> 0x14U))))) 
                                          << 1U));
                            }
                            if (((IData)((0x40000U 
                                          == (0x140000U 
                                              & vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[4U]))) 
                                 & ((0x3ffffffU & (
                                                   (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[6U] 
                                                    << 0x14U) 
                                                   | (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[5U] 
                                                      >> 0xcU))) 
                                    == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv));
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv)) 
                                       | (((0x1fU & 
                                            (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[4U] 
                                             >> 0x15U)) 
                                           > (0x1fU 
                                              & ((0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                                     >> 2U)) 
                                                 - 
                                                 (0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[5U] 
                                                     >> 8U))))) 
                                          << 1U));
                            }
                            if (((IData)((0x40U == 
                                          (0x140U & 
                                           vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[7U]))) 
                                 & ((0x3ffffffU & vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[8U]) 
                                    == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv));
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv)) 
                                       | (((0x1fU & 
                                            (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[7U] 
                                             >> 9U)) 
                                           > (0x1fU 
                                              & ((0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                                     >> 2U)) 
                                                 - 
                                                 (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[7U] 
                                                  >> 0x1cU)))) 
                                          << 1U));
                            }
                            if (((IData)((0x4000000U 
                                          == (0x14000000U 
                                              & vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[9U]))) 
                                 & ((0x3ffffffU & (
                                                   (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xbU] 
                                                    << 0xcU) 
                                                   | (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xaU] 
                                                      >> 0x14U))) 
                                    == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv));
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv)) 
                                       | (((0x1fU & 
                                            ((vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xaU] 
                                              << 3U) 
                                             | (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[9U] 
                                                >> 0x1dU))) 
                                           > (0x1fU 
                                              & ((0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                                     >> 2U)) 
                                                 - 
                                                 (0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xaU] 
                                                     >> 0x10U))))) 
                                          << 1U));
                            }
                            if (((((1U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[0U])) 
                                   | (3U == (0xfU & 
                                             vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[0U]))) 
                                  & ((0x3ffffffU & 
                                      ((vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[2U] 
                                        << 0x15U) | 
                                       (vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[1U] 
                                        >> 0xbU))) 
                                     == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                         >> 6U))) & 
                                 (~ (vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[0U] 
                                     >> 4U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv = 1U;
                            }
                            vlSelfRef.__Vfunc_CheckTransfers__7__Vfuncout 
                                = vlSelfRef.__Vfunc_CheckTransfers__7__rv;
                        }(), (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__Vfuncout)) 
                         >> 1U));
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__transferExists 
                = (1U & ([&]() {
                        vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                            = ((__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                << 0x1cU) | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                             >> 4U));
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[1U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[1U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[2U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[3U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[3U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[4U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[4U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[5U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[5U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[6U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[6U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[7U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[7U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[8U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[8U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[9U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[9U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xaU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xaU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xbU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xbU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xcU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xcU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xdU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xdU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xeU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xeU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xfU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xfU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0x10U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0x10U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0x11U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0x11U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[0U] 
                            = vlSelfRef.__PVT__LSU_MC_if[0U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[1U] 
                            = vlSelfRef.__PVT__LSU_MC_if[1U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[2U] 
                            = vlSelfRef.__PVT__LSU_MC_if[2U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[3U] 
                            = vlSelfRef.__PVT__LSU_MC_if[3U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[4U] 
                            = vlSelfRef.__PVT__LSU_MC_if[4U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[5U] 
                            = vlSelfRef.__PVT__LSU_MC_if[5U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[6U] 
                            = vlSelfRef.__PVT__LSU_MC_if[6U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[7U] 
                            = vlSelfRef.__PVT__LSU_MC_if[7U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__rv = 0U;
                        if ((((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[1U] 
                               >> 0x1eU) & (~ vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U])) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U] 
                                                  >> 0x18U))) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv)) 
                                   | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U] 
                                                 >> 1U)) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U] 
                                                       >> 0x14U))))) 
                                      << 1U));
                        }
                        if (((IData)((0x40000U == (0x140000U 
                                                   & vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[4U]))) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[6U] 
                                                << 0x14U) 
                                               | (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[5U] 
                                                  >> 0xcU))) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv)) 
                                   | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[4U] 
                                                 >> 0x15U)) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[5U] 
                                                       >> 8U))))) 
                                      << 1U));
                        }
                        if (((IData)((0x40U == (0x140U 
                                                & vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[7U]))) 
                             & ((0x3ffffffU & vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[8U]) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv)) 
                                   | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[7U] 
                                                 >> 9U)) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[7U] 
                                                    >> 0x1cU)))) 
                                      << 1U));
                        }
                        if (((IData)((0x4000000U == 
                                      (0x14000000U 
                                       & vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[9U]))) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xbU] 
                                                << 0xcU) 
                                               | (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xaU] 
                                                  >> 0x14U))) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv)) 
                                   | (((0x1fU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xaU] 
                                                  << 3U) 
                                                 | (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[9U] 
                                                    >> 0x1dU))) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xaU] 
                                                       >> 0x10U))))) 
                                      << 1U));
                        }
                        if (((((1U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[0U])) 
                               | (3U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[0U]))) 
                              & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[2U] 
                                                 << 0x15U) 
                                                | (vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[1U] 
                                                   >> 0xbU))) 
                                 == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                     >> 6U))) & (~ 
                                                 (vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[0U] 
                                                  >> 4U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv = 1U;
                        }
                        vlSelfRef.__Vfunc_CheckTransfers__8__Vfuncout 
                            = vlSelfRef.__Vfunc_CheckTransfers__8__rv;
                    }(), (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__Vfuncout)));
            if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__transferExists) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit 
                    = ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit) 
                       & (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__allowPassThru));
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
            }
            if (((~ ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO) 
                     | (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isIntMMIO))) 
                 & (0xfU == (0xfU & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                             [0U] >> 2U)))))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit = 1U;
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
            }
        }
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
            = ((0xfffffffdU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [0U][0U]) | (2U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
                                   >> 2U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
            = ((0xfffffffbU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [0U][0U]) | (4U & __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U]));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
            = ((0xfffffc07U & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [0U][0U]) | (0x3f8U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
                                       >> 2U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
            = ((0xfffe03ffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [0U][0U]) | (0x1fc00U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
                                         >> 2U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
            = ((0xfffbffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [0U][0U]) | (0x40000U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                         << 0xfU)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
            = ((0xffe7ffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [0U][0U]) | (0x180000U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                          << 0x12U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
            = ((0x1fffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [0U][0U]) | (0xffe00000U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                            << 0x11U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] 
            = ((0xffe00000U & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [0U][1U]) | (0x1fffffU & ((0x1e0000U 
                                           & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                              << 0x11U)) 
                                          | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                             >> 0xfU))));
        vlSelfRef.lsu__DOT____Vlvbound_hab0dc2f1__0 
            = ((((0x55U >= ((IData)(1U) + (0x7fU & 
                                           ((IData)(0x15U) 
                                            * (3U & 
                                               (vlSelfRef.__PVT__CLM_ctResult
                                                [0U][2U] 
                                                >> 0x14U))))))
                  ? (0xfffffU & (((0U == (0x1fU & ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x15U) 
                                                       * 
                                                       (3U 
                                                        & (vlSelfRef.__PVT__CLM_ctResult
                                                           [0U][2U] 
                                                           >> 0x14U)))))))
                                   ? 0U : (vlSelfRef.__PVT__CLM_ctResult
                                           [0U][(((IData)(0x14U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x15U) 
                                                      * 
                                                      (3U 
                                                       & (vlSelfRef.__PVT__CLM_ctResult
                                                          [0U][2U] 
                                                          >> 0x14U))))) 
                                                 >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x15U) 
                                                         * 
                                                         (3U 
                                                          & (vlSelfRef.__PVT__CLM_ctResult
                                                             [0U][2U] 
                                                             >> 0x14U))))))))) 
                                 | (vlSelfRef.__PVT__CLM_ctResult
                                    [0U][(((IData)(1U) 
                                           + (0x7fU 
                                              & ((IData)(0x15U) 
                                                 * 
                                                 (3U 
                                                  & (vlSelfRef.__PVT__CLM_ctResult
                                                     [0U][2U] 
                                                     >> 0x14U))))) 
                                          >> 5U)] >> 
                                    (0x1fU & ((IData)(1U) 
                                              + (0x7fU 
                                                 & ((IData)(0x15U) 
                                                    * 
                                                    (3U 
                                                     & (vlSelfRef.__PVT__CLM_ctResult
                                                        [0U][2U] 
                                                        >> 0x14U)))))))))
                  : 0U) << 0xcU) | (0xfffU & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                              >> 4U)));
        vlSelfRef.__PVT__lsu__DOT__miss[0U][1U] = (
                                                   (0x7fU 
                                                    & vlSelfRef.__PVT__lsu__DOT__miss
                                                    [0U][1U]) 
                                                   | (vlSelfRef.lsu__DOT____Vlvbound_hab0dc2f1__0 
                                                      << 7U));
        vlSelfRef.__PVT__lsu__DOT__miss[0U][2U] = (vlSelfRef.lsu__DOT____Vlvbound_hab0dc2f1__0 
                                                   >> 0x19U);
        vlSelfRef.lsu__DOT____Vlvbound_hab1f5717__0 
            = ((__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                << 0x1cU) | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                             >> 4U));
        vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] = (
                                                   (0x7fU 
                                                    & vlSelfRef.__PVT__lsu__DOT__miss
                                                    [0U][0U]) 
                                                   | (vlSelfRef.lsu__DOT____Vlvbound_hab1f5717__0 
                                                      << 7U));
        vlSelfRef.__PVT__lsu__DOT__miss[0U][1U] = (
                                                   (0xffffff80U 
                                                    & vlSelfRef.__PVT__lsu__DOT__miss
                                                    [0U][1U]) 
                                                   | (vlSelfRef.lsu__DOT____Vlvbound_hab1f5717__0 
                                                      >> 0x19U));
        vlSelfRef.lsu__DOT____Vlvbound_h7c9bfc74__0 
            = (3U & (vlSelfRef.__PVT__CLM_ctResult[0U][2U] 
                     >> 0x14U));
        vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] = (
                                                   (0xffffff9fU 
                                                    & vlSelfRef.__PVT__lsu__DOT__miss
                                                    [0U][0U]) 
                                                   | ((IData)(vlSelfRef.lsu__DOT____Vlvbound_h7c9bfc74__0) 
                                                      << 5U));
        if (((~ (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO)) 
             & vlSelfRef.__PVT__lsu__DOT__loadWasExtIOBusy
             [0U])) {
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = (0xcU | (0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                           [0U][0U]));
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [0U][0U]);
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO)) 
                          & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                     [0U] >> 1U))))) {
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = (0xcU | (0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                           [0U][0U]));
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [0U][0U]);
        } else if ((1U & (((~ (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO)) 
                           & (~ (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                 >> 4U))) & (vlSelfRef.__PVT__lsu__DOT__loadCacheAccessFailed
                                             [0U] >> 1U)))) {
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = (0xcU | (0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                           [0U][0U]));
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [0U][0U]);
        } else if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad) {
            vlSelfRef.lsu__DOT____Vlvbound_h45f08287__3 
                = ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__noEvict)
                    ? 1U : 0U);
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = ((0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                    [0U][0U]) | ((IData)(vlSelfRef.lsu__DOT____Vlvbound_h45f08287__3) 
                                 << 1U));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
                = (0xfffdffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] 
                = ((0xfe1fffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [0U][1U]) | (0x1e00000U & ((IData)(
                                                       (vlSelfRef.__PVT__lsu__DOT__stFwd
                                                        [0U] 
                                                        >> 2U)) 
                                               << 0x15U)));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] 
                = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [0U][1U]) | ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                          [0U] >> 6U)) 
                                 << 0x19U));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][2U] 
                = ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                            [0U] >> 6U)) >> 7U);
        } else if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO) {
            if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO) {
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
                    = (1U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                       [0U][0U]);
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
                    = (0x20000U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                       [0U][0U]);
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] 
                    = (0x1e00000U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                       [0U][1U]);
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] 
                    = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                        [0U][1U]) | (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                                     << 0x19U));
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][2U] 
                    = (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                       >> 7U);
            }
        } else if ((1U & ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit) 
                          | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                             >> 4U)))) {
            if ((1U & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                               [0U] >> 2U)))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = ((0xffffff00U & vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData) 
                       | (0xffU & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                           [0U] >> 6U))));
            }
            if ((1U & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                               [0U] >> 3U)))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = ((0xffff00ffU & vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData) 
                       | (0xff00U & ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                              [0U] 
                                              >> 0xeU)) 
                                     << 8U)));
            }
            if ((1U & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                               [0U] >> 4U)))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = ((0xff00ffffU & vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData) 
                       | (0xff0000U & ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                                [0U] 
                                                >> 0x16U)) 
                                       << 0x10U)));
            }
            if ((1U & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                               [0U] >> 5U)))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = ((0xffffffU & vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData) 
                       | ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                   [0U] >> 0x1eU)) 
                          << 0x18U));
            }
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
                = (0x20000U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] 
                = (0x1e00000U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [0U][1U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] 
                = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [0U][1U]) | (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                                 << 0x19U));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][2U] 
                = (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                   >> 7U);
        } else {
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = (4U | (0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                         [0U][0U]));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
                = (0xfffdffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] 
                = ((0xfe1fffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [0U][1U]) | (0x1e00000U & ((IData)(
                                                       (vlSelfRef.__PVT__lsu__DOT__stFwd
                                                        [0U] 
                                                        >> 2U)) 
                                               << 0x15U)));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] 
                = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [0U][1U]) | ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                          [0U] >> 6U)) 
                                 << 0x19U));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][2U] 
                = ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                            [0U] >> 6U)) >> 7U);
        }
    }
    __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps[1U][1U][0U];
    __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps[1U][1U][1U];
    __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps[1U][1U][2U];
    __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[3U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps[1U][1U][3U];
    if ((1U & ((~ __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U]) 
               & (~ (IData)(vlSelfRef.__PVT__lsu__DOT__blsuLoadHandled))))) {
        __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
            = vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[0U];
        __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
            = vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[1U];
        __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
            = vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[2U];
        __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[3U] 
            = vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[3U];
    }
    vlSelfRef.__PVT__lsu__DOT__curLd[1U][0U] = __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U];
    vlSelfRef.__PVT__lsu__DOT__curLd[1U][1U] = __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U];
    vlSelfRef.__PVT__lsu__DOT__curLd[1U][2U] = __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U];
    vlSelfRef.__PVT__lsu__DOT__curLd[1U][3U] = __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[3U];
    if ((1U & __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U])) {
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO 
            = (1U & (~ vlSelfRef.__PVT__lsu__DOT__ldOps
                     [1U][1U][0U]));
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isIntMMIO 
            = (IData)((3U == (3U & __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U])));
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO 
            = ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO) 
               | (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isIntMMIO));
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__noEvict 
            = (1U & (~ ((0x55U >= (0x7fU & ((IData)(0x15U) 
                                            * (3U & 
                                               (vlSelfRef.__PVT__CLM_ctResult
                                                [1U][2U] 
                                                >> 0x14U))))) 
                        && (1U & (vlSelfRef.__PVT__CLM_ctResult
                                  [1U][(3U & (((IData)(0x15U) 
                                               * (3U 
                                                  & (vlSelfRef.__PVT__CLM_ctResult
                                                     [1U][2U] 
                                                     >> 0x14U))) 
                                              >> 5U))] 
                                  >> (0x1fU & ((IData)(0x15U) 
                                               * (3U 
                                                  & (vlSelfRef.__PVT__CLM_ctResult
                                                     [1U][2U] 
                                                     >> 0x14U)))))))));
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 1U;
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit = 0U;
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData = 0U;
        if ((0x10U & __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U])) {
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                = ((__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[3U] 
                    << 0x1bU) | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                 >> 5U));
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
        } else if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO) {
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                = vlSelfRef.__PVT__lsu__DOT__BLSU_ldResult;
            vlSelfRef.__PVT__lsu__DOT__blsuLoadHandled = 1U;
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
        } else if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isIntMMIO) {
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                = vlSymsp->TOP__Top__soc__IF_mmio.__PVT__rdata;
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
        } else {
            if ((1U & vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                 [1U])) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit = 1U;
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = (((0U == (0x1fU & ((IData)(0x80U) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                              [1U] 
                                                              >> 1U)), 5U)))))
                         ? 0U : (vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[
                                 (((IData)(0x1fU) + 
                                   (0xffU & ((IData)(0x80U) 
                                             + (0x7fU 
                                                & VL_SHIFTL_III(7,32,32, 
                                                                (3U 
                                                                 & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                                    [1U] 
                                                                    >> 1U)), 5U))))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x80U) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     (3U 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                                         [1U] 
                                                                         >> 1U)), 5U))))))) 
                       | (vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[
                          (7U & (((IData)(0x80U) + 
                                  (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                         (3U 
                                                          & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                             [1U] 
                                                             >> 1U)), 5U))) 
                                 >> 5U))] >> (0x1fU 
                                              & ((IData)(0x80U) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (3U 
                                                                   & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                                      [1U] 
                                                                      >> 1U)), 5U))))));
            }
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__allowPassThru 
                = (1U & (([&]() {
                            vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                = ((__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                    << 0x1cU) | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                                 >> 4U));
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[1U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[1U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[2U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[3U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[3U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[4U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[4U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[5U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[5U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[6U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[6U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[7U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[7U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[8U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[8U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[9U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[9U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xaU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xaU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xbU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xbU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xcU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xcU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xdU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xdU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xeU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xeU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xfU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xfU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0x10U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0x10U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0x11U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0x11U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[0U] 
                                = vlSelfRef.__PVT__LSU_MC_if[0U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[1U] 
                                = vlSelfRef.__PVT__LSU_MC_if[1U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[2U] 
                                = vlSelfRef.__PVT__LSU_MC_if[2U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[3U] 
                                = vlSelfRef.__PVT__LSU_MC_if[3U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[4U] 
                                = vlSelfRef.__PVT__LSU_MC_if[4U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[5U] 
                                = vlSelfRef.__PVT__LSU_MC_if[5U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[6U] 
                                = vlSelfRef.__PVT__LSU_MC_if[6U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[7U] 
                                = vlSelfRef.__PVT__LSU_MC_if[7U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__rv = 0U;
                            if ((((vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[1U] 
                                   >> 0x1eU) & (~ vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U])) 
                                 & ((0x3ffffffU & (
                                                   (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[3U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U] 
                                                      >> 0x18U))) 
                                    == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv));
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv)) 
                                       | (((0x1fU & 
                                            (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U] 
                                             >> 1U)) 
                                           > (0x1fU 
                                              & ((0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                                     >> 2U)) 
                                                 - 
                                                 (0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U] 
                                                     >> 0x14U))))) 
                                          << 1U));
                            }
                            if (((IData)((0x40000U 
                                          == (0x140000U 
                                              & vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[4U]))) 
                                 & ((0x3ffffffU & (
                                                   (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[6U] 
                                                    << 0x14U) 
                                                   | (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[5U] 
                                                      >> 0xcU))) 
                                    == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv));
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv)) 
                                       | (((0x1fU & 
                                            (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[4U] 
                                             >> 0x15U)) 
                                           > (0x1fU 
                                              & ((0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                                     >> 2U)) 
                                                 - 
                                                 (0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[5U] 
                                                     >> 8U))))) 
                                          << 1U));
                            }
                            if (((IData)((0x40U == 
                                          (0x140U & 
                                           vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[7U]))) 
                                 & ((0x3ffffffU & vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[8U]) 
                                    == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv));
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv)) 
                                       | (((0x1fU & 
                                            (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[7U] 
                                             >> 9U)) 
                                           > (0x1fU 
                                              & ((0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                                     >> 2U)) 
                                                 - 
                                                 (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[7U] 
                                                  >> 0x1cU)))) 
                                          << 1U));
                            }
                            if (((IData)((0x4000000U 
                                          == (0x14000000U 
                                              & vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[9U]))) 
                                 & ((0x3ffffffU & (
                                                   (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xbU] 
                                                    << 0xcU) 
                                                   | (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xaU] 
                                                      >> 0x14U))) 
                                    == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv));
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv)) 
                                       | (((0x1fU & 
                                            ((vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xaU] 
                                              << 3U) 
                                             | (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[9U] 
                                                >> 0x1dU))) 
                                           > (0x1fU 
                                              & ((0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                                     >> 2U)) 
                                                 - 
                                                 (0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xaU] 
                                                     >> 0x10U))))) 
                                          << 1U));
                            }
                            if (((((1U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[0U])) 
                                   | (3U == (0xfU & 
                                             vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[0U]))) 
                                  & ((0x3ffffffU & 
                                      ((vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[2U] 
                                        << 0x15U) | 
                                       (vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[1U] 
                                        >> 0xbU))) 
                                     == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                         >> 6U))) & 
                                 (~ (vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[0U] 
                                     >> 4U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv = 1U;
                            }
                            vlSelfRef.__Vfunc_CheckTransfers__7__Vfuncout 
                                = vlSelfRef.__Vfunc_CheckTransfers__7__rv;
                        }(), (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__Vfuncout)) 
                         >> 1U));
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__transferExists 
                = (1U & ([&]() {
                        vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                            = ((__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                << 0x1cU) | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                             >> 4U));
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[1U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[1U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[2U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[3U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[3U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[4U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[4U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[5U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[5U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[6U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[6U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[7U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[7U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[8U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[8U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[9U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[9U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xaU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xaU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xbU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xbU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xcU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xcU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xdU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xdU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xeU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xeU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xfU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xfU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0x10U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0x10U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0x11U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0x11U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[0U] 
                            = vlSelfRef.__PVT__LSU_MC_if[0U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[1U] 
                            = vlSelfRef.__PVT__LSU_MC_if[1U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[2U] 
                            = vlSelfRef.__PVT__LSU_MC_if[2U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[3U] 
                            = vlSelfRef.__PVT__LSU_MC_if[3U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[4U] 
                            = vlSelfRef.__PVT__LSU_MC_if[4U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[5U] 
                            = vlSelfRef.__PVT__LSU_MC_if[5U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[6U] 
                            = vlSelfRef.__PVT__LSU_MC_if[6U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[7U] 
                            = vlSelfRef.__PVT__LSU_MC_if[7U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__rv = 0U;
                        if ((((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[1U] 
                               >> 0x1eU) & (~ vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U])) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U] 
                                                  >> 0x18U))) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv)) 
                                   | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U] 
                                                 >> 1U)) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U] 
                                                       >> 0x14U))))) 
                                      << 1U));
                        }
                        if (((IData)((0x40000U == (0x140000U 
                                                   & vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[4U]))) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[6U] 
                                                << 0x14U) 
                                               | (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[5U] 
                                                  >> 0xcU))) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv)) 
                                   | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[4U] 
                                                 >> 0x15U)) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[5U] 
                                                       >> 8U))))) 
                                      << 1U));
                        }
                        if (((IData)((0x40U == (0x140U 
                                                & vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[7U]))) 
                             & ((0x3ffffffU & vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[8U]) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv)) 
                                   | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[7U] 
                                                 >> 9U)) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[7U] 
                                                    >> 0x1cU)))) 
                                      << 1U));
                        }
                        if (((IData)((0x4000000U == 
                                      (0x14000000U 
                                       & vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[9U]))) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xbU] 
                                                << 0xcU) 
                                               | (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xaU] 
                                                  >> 0x14U))) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv)) 
                                   | (((0x1fU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xaU] 
                                                  << 3U) 
                                                 | (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[9U] 
                                                    >> 0x1dU))) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xaU] 
                                                       >> 0x10U))))) 
                                      << 1U));
                        }
                        if (((((1U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[0U])) 
                               | (3U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[0U]))) 
                              & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[2U] 
                                                 << 0x15U) 
                                                | (vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[1U] 
                                                   >> 0xbU))) 
                                 == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                     >> 6U))) & (~ 
                                                 (vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[0U] 
                                                  >> 4U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv = 1U;
                        }
                        vlSelfRef.__Vfunc_CheckTransfers__8__Vfuncout 
                            = vlSelfRef.__Vfunc_CheckTransfers__8__rv;
                    }(), (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__Vfuncout)));
            if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__transferExists) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit 
                    = ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit) 
                       & (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__allowPassThru));
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
            }
            if (((~ ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO) 
                     | (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isIntMMIO))) 
                 & (0xfU == (0xfU & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                             [1U] >> 2U)))))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit = 1U;
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
            }
        }
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
            = ((0xfffffffdU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [1U][0U]) | (2U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
                                   >> 2U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
            = ((0xfffffffbU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [1U][0U]) | (4U & __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U]));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
            = ((0xfffffc07U & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [1U][0U]) | (0x3f8U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
                                       >> 2U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
            = ((0xfffe03ffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [1U][0U]) | (0x1fc00U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
                                         >> 2U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
            = ((0xfffbffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [1U][0U]) | (0x40000U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                         << 0xfU)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
            = ((0xffe7ffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [1U][0U]) | (0x180000U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                          << 0x12U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
            = ((0x1fffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [1U][0U]) | (0xffe00000U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                            << 0x11U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] 
            = ((0xffe00000U & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [1U][1U]) | (0x1fffffU & ((0x1e0000U 
                                           & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                              << 0x11U)) 
                                          | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                             >> 0xfU))));
        vlSelfRef.lsu__DOT____Vlvbound_hab0dc2f1__0 
            = ((((0x55U >= ((IData)(1U) + (0x7fU & 
                                           ((IData)(0x15U) 
                                            * (3U & 
                                               (vlSelfRef.__PVT__CLM_ctResult
                                                [1U][2U] 
                                                >> 0x14U))))))
                  ? (0xfffffU & (((0U == (0x1fU & ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x15U) 
                                                       * 
                                                       (3U 
                                                        & (vlSelfRef.__PVT__CLM_ctResult
                                                           [1U][2U] 
                                                           >> 0x14U)))))))
                                   ? 0U : (vlSelfRef.__PVT__CLM_ctResult
                                           [1U][(((IData)(0x14U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x15U) 
                                                      * 
                                                      (3U 
                                                       & (vlSelfRef.__PVT__CLM_ctResult
                                                          [1U][2U] 
                                                          >> 0x14U))))) 
                                                 >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x15U) 
                                                         * 
                                                         (3U 
                                                          & (vlSelfRef.__PVT__CLM_ctResult
                                                             [1U][2U] 
                                                             >> 0x14U))))))))) 
                                 | (vlSelfRef.__PVT__CLM_ctResult
                                    [1U][(((IData)(1U) 
                                           + (0x7fU 
                                              & ((IData)(0x15U) 
                                                 * 
                                                 (3U 
                                                  & (vlSelfRef.__PVT__CLM_ctResult
                                                     [1U][2U] 
                                                     >> 0x14U))))) 
                                          >> 5U)] >> 
                                    (0x1fU & ((IData)(1U) 
                                              + (0x7fU 
                                                 & ((IData)(0x15U) 
                                                    * 
                                                    (3U 
                                                     & (vlSelfRef.__PVT__CLM_ctResult
                                                        [1U][2U] 
                                                        >> 0x14U)))))))))
                  : 0U) << 0xcU) | (0xfffU & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                              >> 4U)));
        vlSelfRef.__PVT__lsu__DOT__miss[1U][1U] = (
                                                   (0x7fU 
                                                    & vlSelfRef.__PVT__lsu__DOT__miss
                                                    [1U][1U]) 
                                                   | (vlSelfRef.lsu__DOT____Vlvbound_hab0dc2f1__0 
                                                      << 7U));
        vlSelfRef.__PVT__lsu__DOT__miss[1U][2U] = (vlSelfRef.lsu__DOT____Vlvbound_hab0dc2f1__0 
                                                   >> 0x19U);
        vlSelfRef.lsu__DOT____Vlvbound_hab1f5717__0 
            = ((__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                << 0x1cU) | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                             >> 4U));
        vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] = (
                                                   (0x7fU 
                                                    & vlSelfRef.__PVT__lsu__DOT__miss
                                                    [1U][0U]) 
                                                   | (vlSelfRef.lsu__DOT____Vlvbound_hab1f5717__0 
                                                      << 7U));
        vlSelfRef.__PVT__lsu__DOT__miss[1U][1U] = (
                                                   (0xffffff80U 
                                                    & vlSelfRef.__PVT__lsu__DOT__miss
                                                    [1U][1U]) 
                                                   | (vlSelfRef.lsu__DOT____Vlvbound_hab1f5717__0 
                                                      >> 0x19U));
        vlSelfRef.lsu__DOT____Vlvbound_h7c9bfc74__0 
            = (3U & (vlSelfRef.__PVT__CLM_ctResult[1U][2U] 
                     >> 0x14U));
        vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] = (
                                                   (0xffffff9fU 
                                                    & vlSelfRef.__PVT__lsu__DOT__miss
                                                    [1U][0U]) 
                                                   | ((IData)(vlSelfRef.lsu__DOT____Vlvbound_h7c9bfc74__0) 
                                                      << 5U));
        if (((~ (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO)) 
             & vlSelfRef.__PVT__lsu__DOT__loadWasExtIOBusy
             [1U])) {
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = (0xcU | (0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                           [1U][0U]));
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [1U][0U]);
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO)) 
                          & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                     [1U] >> 1U))))) {
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = (0xcU | (0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                           [1U][0U]));
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [1U][0U]);
        } else if ((1U & (((~ (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO)) 
                           & (~ (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                 >> 4U))) & (vlSelfRef.__PVT__lsu__DOT__loadCacheAccessFailed
                                             [1U] >> 1U)))) {
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = (0xcU | (0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                           [1U][0U]));
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [1U][0U]);
        } else if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad) {
            vlSelfRef.lsu__DOT____Vlvbound_h45f08287__3 
                = ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__noEvict)
                    ? 1U : 0U);
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = ((0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                    [1U][0U]) | ((IData)(vlSelfRef.lsu__DOT____Vlvbound_h45f08287__3) 
                                 << 1U));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
                = (0xfffdffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] 
                = ((0xfe1fffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [1U][1U]) | (0x1e00000U & ((IData)(
                                                       (vlSelfRef.__PVT__lsu__DOT__stFwd
                                                        [1U] 
                                                        >> 2U)) 
                                               << 0x15U)));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] 
                = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [1U][1U]) | ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                          [1U] >> 6U)) 
                                 << 0x19U));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][2U] 
                = ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                            [1U] >> 6U)) >> 7U);
        } else if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO) {
            if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO) {
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
                    = (1U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                       [1U][0U]);
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
                    = (0x20000U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                       [1U][0U]);
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] 
                    = (0x1e00000U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                       [1U][1U]);
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] 
                    = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                        [1U][1U]) | (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                                     << 0x19U));
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][2U] 
                    = (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                       >> 7U);
            }
        } else if ((1U & ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit) 
                          | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                             >> 4U)))) {
            if ((1U & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                               [1U] >> 2U)))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = ((0xffffff00U & vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData) 
                       | (0xffU & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                           [1U] >> 6U))));
            }
            if ((1U & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                               [1U] >> 3U)))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = ((0xffff00ffU & vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData) 
                       | (0xff00U & ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                              [1U] 
                                              >> 0xeU)) 
                                     << 8U)));
            }
            if ((1U & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                               [1U] >> 4U)))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = ((0xff00ffffU & vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData) 
                       | (0xff0000U & ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                                [1U] 
                                                >> 0x16U)) 
                                       << 0x10U)));
            }
            if ((1U & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                               [1U] >> 5U)))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = ((0xffffffU & vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData) 
                       | ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                   [1U] >> 0x1eU)) 
                          << 0x18U));
            }
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
                = (0x20000U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] 
                = (0x1e00000U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [1U][1U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] 
                = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [1U][1U]) | (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                                 << 0x19U));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][2U] 
                = (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                   >> 7U);
        } else {
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = (4U | (0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                         [1U][0U]));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
                = (0xfffdffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] 
                = ((0xfe1fffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [1U][1U]) | (0x1e00000U & ((IData)(
                                                       (vlSelfRef.__PVT__lsu__DOT__stFwd
                                                        [1U] 
                                                        >> 2U)) 
                                               << 0x15U)));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] 
                = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [1U][1U]) | ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                          [1U] >> 6U)) 
                                 << 0x19U));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][2U] 
                = ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                            [1U] >> 6U)) >> 7U);
        }
    }
    __PVT__lsu__DOT__unnamedblk28__DOT__st[0U] = vlSelfRef.__PVT__lsu__DOT__stOps
        [1U][0U];
    __PVT__lsu__DOT__unnamedblk28__DOT__st[1U] = vlSelfRef.__PVT__lsu__DOT__stOps
        [1U][1U];
    __PVT__lsu__DOT__unnamedblk28__DOT__st[2U] = vlSelfRef.__PVT__lsu__DOT__stOps
        [1U][2U];
    __PVT__lsu__DOT__unnamedblk28__DOT__st[3U] = vlSelfRef.__PVT__lsu__DOT__stOps
        [1U][3U];
    __PVT__lsu__DOT__unnamedblk28__DOT__st[4U] = vlSelfRef.__PVT__lsu__DOT__stOps
        [1U][4U];
    __PVT__lsu__DOT__unnamedblk28__DOT__st[5U] = vlSelfRef.__PVT__lsu__DOT__stOps
        [1U][5U];
    if ((1U & __PVT__lsu__DOT__unnamedblk28__DOT__st[0U])) {
        vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHit = 0U;
        vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheTableHit = 1U;
        vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__doCacheLoad = 1U;
        vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHitAssoc = 0U;
        vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__noEvict 
            = (1U & (~ ((0x55U >= (0x7fU & ((IData)(0x15U) 
                                            * (3U & 
                                               (vlSelfRef.__PVT__CLM_ctResult
                                                [2U][2U] 
                                                >> 0x14U))))) 
                        && (1U & (vlSelfRef.__PVT__CLM_ctResult
                                  [2U][(3U & (((IData)(0x15U) 
                                               * (3U 
                                                  & (vlSelfRef.__PVT__CLM_ctResult
                                                     [2U][2U] 
                                                     >> 0x14U))) 
                                              >> 5U))] 
                                  >> (0x1fU & ((IData)(0x15U) 
                                               * (3U 
                                                  & (vlSelfRef.__PVT__CLM_ctResult
                                                     [2U][2U] 
                                                     >> 0x14U)))))))));
        if ((1U & (IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHit_c))) {
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__doCacheLoad = 0U;
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHit = 1U;
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHitAssoc 
                = (3U & ((IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHit_c) 
                         >> 1U));
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheTableHit = 1U;
        }
        vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__allowPassThru 
            = (1U & (([&]() {
                        vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                            = ((__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                << 8U) | (__PVT__lsu__DOT__unnamedblk28__DOT__st[4U] 
                                          >> 0x18U));
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[1U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[1U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[2U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[2U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[3U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[3U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[4U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[4U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[5U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[5U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[6U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[6U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[7U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[7U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[8U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[8U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[9U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[9U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xaU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xaU];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xbU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xbU];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xcU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xcU];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xdU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xdU];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xeU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xeU];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xfU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xfU];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0x10U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0x10U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0x11U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0x11U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[0U] 
                            = vlSelfRef.__PVT__LSU_MC_if[0U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[1U] 
                            = vlSelfRef.__PVT__LSU_MC_if[1U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[2U] 
                            = vlSelfRef.__PVT__LSU_MC_if[2U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[3U] 
                            = vlSelfRef.__PVT__LSU_MC_if[3U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[4U] 
                            = vlSelfRef.__PVT__LSU_MC_if[4U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[5U] 
                            = vlSelfRef.__PVT__LSU_MC_if[5U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[6U] 
                            = vlSelfRef.__PVT__LSU_MC_if[6U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[7U] 
                            = vlSelfRef.__PVT__LSU_MC_if[7U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__rv = 0U;
                        if ((((vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[1U] 
                               >> 0x1eU) & (~ vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[2U])) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[2U] 
                                                  >> 0x18U))) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__9__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__9__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__9__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__9__rv)) 
                                   | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[2U] 
                                                 >> 1U)) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[2U] 
                                                       >> 0x14U))))) 
                                      << 1U));
                        }
                        if (((IData)((0x40000U == (0x140000U 
                                                   & vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[4U]))) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[6U] 
                                                << 0x14U) 
                                               | (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[5U] 
                                                  >> 0xcU))) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__9__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__9__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__9__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__9__rv)) 
                                   | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[4U] 
                                                 >> 0x15U)) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[5U] 
                                                       >> 8U))))) 
                                      << 1U));
                        }
                        if (((IData)((0x40U == (0x140U 
                                                & vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[7U]))) 
                             & ((0x3ffffffU & vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[8U]) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__9__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__9__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__9__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__9__rv)) 
                                   | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[7U] 
                                                 >> 9U)) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[7U] 
                                                    >> 0x1cU)))) 
                                      << 1U));
                        }
                        if (((IData)((0x4000000U == 
                                      (0x14000000U 
                                       & vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[9U]))) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xbU] 
                                                << 0xcU) 
                                               | (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xaU] 
                                                  >> 0x14U))) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__9__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__9__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__9__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__9__rv)) 
                                   | (((0x1fU & ((vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xaU] 
                                                  << 3U) 
                                                 | (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[9U] 
                                                    >> 0x1dU))) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xaU] 
                                                       >> 0x10U))))) 
                                      << 1U));
                        }
                        if (((((1U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[0U])) 
                               | (3U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[0U]))) 
                              & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[2U] 
                                                 << 0x15U) 
                                                | (vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[1U] 
                                                   >> 0xbU))) 
                                 == (vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                                     >> 6U))) & (~ 
                                                 (vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[0U] 
                                                  >> 4U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__9__rv = 1U;
                        }
                        vlSelfRef.__Vfunc_CheckTransfers__9__Vfuncout 
                            = vlSelfRef.__Vfunc_CheckTransfers__9__rv;
                    }(), (IData)(vlSelfRef.__Vfunc_CheckTransfers__9__Vfuncout)) 
                     >> 1U));
        vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__transferExists 
            = (1U & ([&]() {
                    vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                        = ((__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                            << 8U) | (__PVT__lsu__DOT__unnamedblk28__DOT__st[4U] 
                                      >> 0x18U));
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[0U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[1U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[1U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[2U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[2U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[3U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[3U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[4U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[4U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[5U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[5U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[6U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[6U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[7U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[7U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[8U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[8U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[9U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[9U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xaU] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[0xaU];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xbU] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[0xbU];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xcU] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[0xcU];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xdU] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[0xdU];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xeU] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[0xeU];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xfU] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[0xfU];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0x10U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[0x10U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0x11U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[0x11U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[0U] 
                        = vlSelfRef.__PVT__LSU_MC_if[0U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[1U] 
                        = vlSelfRef.__PVT__LSU_MC_if[1U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[2U] 
                        = vlSelfRef.__PVT__LSU_MC_if[2U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[3U] 
                        = vlSelfRef.__PVT__LSU_MC_if[3U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[4U] 
                        = vlSelfRef.__PVT__LSU_MC_if[4U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[5U] 
                        = vlSelfRef.__PVT__LSU_MC_if[5U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[6U] 
                        = vlSelfRef.__PVT__LSU_MC_if[6U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[7U] 
                        = vlSelfRef.__PVT__LSU_MC_if[7U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__rv = 0U;
                    if ((((vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[1U] 
                           >> 0x1eU) & (~ vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[2U])) 
                         & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[3U] 
                                            << 8U) 
                                           | (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[2U] 
                                              >> 0x18U))) 
                            == (vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                                >> 6U)))) {
                        vlSelfRef.__Vfunc_CheckTransfers__10__rv 
                            = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__10__rv));
                        vlSelfRef.__Vfunc_CheckTransfers__10__rv 
                            = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__10__rv)) 
                               | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[2U] 
                                             >> 1U)) 
                                   > (0x1fU & ((0xfU 
                                                & (vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                                                   >> 2U)) 
                                               - (0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[2U] 
                                                     >> 0x14U))))) 
                                  << 1U));
                    }
                    if (((IData)((0x40000U == (0x140000U 
                                               & vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[4U]))) 
                         & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[6U] 
                                            << 0x14U) 
                                           | (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[5U] 
                                              >> 0xcU))) 
                            == (vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                                >> 6U)))) {
                        vlSelfRef.__Vfunc_CheckTransfers__10__rv 
                            = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__10__rv));
                        vlSelfRef.__Vfunc_CheckTransfers__10__rv 
                            = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__10__rv)) 
                               | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[4U] 
                                             >> 0x15U)) 
                                   > (0x1fU & ((0xfU 
                                                & (vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                                                   >> 2U)) 
                                               - (0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[5U] 
                                                     >> 8U))))) 
                                  << 1U));
                    }
                    if (((IData)((0x40U == (0x140U 
                                            & vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[7U]))) 
                         & ((0x3ffffffU & vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[8U]) 
                            == (vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                                >> 6U)))) {
                        vlSelfRef.__Vfunc_CheckTransfers__10__rv 
                            = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__10__rv));
                        vlSelfRef.__Vfunc_CheckTransfers__10__rv 
                            = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__10__rv)) 
                               | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[7U] 
                                             >> 9U)) 
                                   > (0x1fU & ((0xfU 
                                                & (vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                                                   >> 2U)) 
                                               - (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[7U] 
                                                  >> 0x1cU)))) 
                                  << 1U));
                    }
                    if (((IData)((0x4000000U == (0x14000000U 
                                                 & vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[9U]))) 
                         & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xbU] 
                                            << 0xcU) 
                                           | (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xaU] 
                                              >> 0x14U))) 
                            == (vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                                >> 6U)))) {
                        vlSelfRef.__Vfunc_CheckTransfers__10__rv 
                            = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__10__rv));
                        vlSelfRef.__Vfunc_CheckTransfers__10__rv 
                            = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__10__rv)) 
                               | (((0x1fU & ((vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xaU] 
                                              << 3U) 
                                             | (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[9U] 
                                                >> 0x1dU))) 
                                   > (0x1fU & ((0xfU 
                                                & (vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                                                   >> 2U)) 
                                               - (0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xaU] 
                                                     >> 0x10U))))) 
                                  << 1U));
                    }
                    if (((((1U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[0U])) 
                           | (3U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[0U]))) 
                          & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[2U] 
                                             << 0x15U) 
                                            | (vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[1U] 
                                               >> 0xbU))) 
                             == (vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                                 >> 6U))) & (~ (vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[0U] 
                                                >> 4U)))) {
                        vlSelfRef.__Vfunc_CheckTransfers__10__rv = 1U;
                    }
                    vlSelfRef.__Vfunc_CheckTransfers__10__Vfuncout 
                        = vlSelfRef.__Vfunc_CheckTransfers__10__rv;
                }(), (IData)(vlSelfRef.__Vfunc_CheckTransfers__10__Vfuncout)));
        if (vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__transferExists) {
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHit 
                = ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHit) 
                   & (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__allowPassThru));
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__doCacheLoad = 0U;
        }
        if ((((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHit) 
              & (0U != (0xfU & vlSelfRef.__PVT__LSU_MC_if[0U]))) 
             & ((0xffU & (vlSelfRef.__PVT__LSU_MC_if[2U] 
                          >> 9U)) == (((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHitAssoc) 
                                       << 6U) | (0x3fU 
                                                 & ((__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                                     << 2U) 
                                                    | (__PVT__lsu__DOT__unnamedblk28__DOT__st[4U] 
                                                       >> 0x1eU))))))) {
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHit = 0U;
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHitAssoc = 0U;
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheTableHit = 1U;
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__doCacheLoad = 0U;
        }
        if ((1U & (~ (__PVT__lsu__DOT__unnamedblk28__DOT__st[0U] 
                      >> 7U)))) {
            if ((0x40U & __PVT__lsu__DOT__unnamedblk28__DOT__st[0U])) {
                if (vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheTableHit) {
                    vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                        = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                           [2U][0U]);
                    vlSelfRef.__PVT__lsu__DOT__miss[2U][1U] 
                        = ((0x7fU & vlSelfRef.__PVT__lsu__DOT__miss
                            [2U][1U]) | (0xffffff80U 
                                         & ((__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                             << 0xfU) 
                                            | (0x7f80U 
                                               & (__PVT__lsu__DOT__unnamedblk28__DOT__st[4U] 
                                                  >> 0x11U)))));
                    vlSelfRef.__PVT__lsu__DOT__miss[2U][2U] 
                        = (0x7fU & (__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                    >> 0x11U));
                    vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                        = ((0x7fU & vlSelfRef.__PVT__lsu__DOT__miss
                            [2U][0U]) | (0xffffff80U 
                                         & ((__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                             << 0xfU) 
                                            | (0x7f80U 
                                               & (__PVT__lsu__DOT__unnamedblk28__DOT__st[4U] 
                                                  >> 0x11U)))));
                    vlSelfRef.__PVT__lsu__DOT__miss[2U][1U] 
                        = ((0xffffff80U & vlSelfRef.__PVT__lsu__DOT__miss
                            [2U][1U]) | (0x7fU & (__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                                  >> 0x11U)));
                    vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                        = ((0xffffff9fU & vlSelfRef.__PVT__lsu__DOT__miss
                            [2U][0U]) | ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHitAssoc) 
                                         << 5U));
                    if ((0U == (3U & (__PVT__lsu__DOT__unnamedblk28__DOT__st[0U] 
                                      >> 0x18U)))) {
                        vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                            = (6U | (0xffffffe1U & 
                                     vlSelfRef.__PVT__lsu__DOT__miss
                                     [2U][0U]));
                    } else if ((1U == (3U & (__PVT__lsu__DOT__unnamedblk28__DOT__st[0U] 
                                             >> 0x18U)))) {
                        vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                            = (8U | (0xffffffe1U & 
                                     vlSelfRef.__PVT__lsu__DOT__miss
                                     [2U][0U]));
                    } else if ((2U == (3U & (__PVT__lsu__DOT__unnamedblk28__DOT__st[0U] 
                                             >> 0x18U)))) {
                        vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                            = (0xaU | (0xffffffe1U 
                                       & vlSelfRef.__PVT__lsu__DOT__miss
                                       [2U][0U]));
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                        VL_WRITEF_NX("[%0t] %%Error: LoadStoreUnit.sv:604: Assertion failed in %NTop.soc.core.lsu.unnamedblk28.unnamedblk29: 'assert' failed.\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("src/LoadStoreUnit.sv", 604, "");
                    }
                }
            } else if (vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHit) {
                vlSelfRef.__PVT__lsu__DOT__storeWriteToCache = 1U;
                vlSelfRef.__PVT__lsu__DOT__storeWriteAssoc 
                    = vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHitAssoc;
                vlSelfRef.__PVT__LSU_setDirty = (1U 
                                                 | (((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHitAssoc) 
                                                     << 7U) 
                                                    | (0x7eU 
                                                       & ((__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                                           << 3U) 
                                                          | (6U 
                                                             & (__PVT__lsu__DOT__unnamedblk28__DOT__st[4U] 
                                                                >> 0x1dU))))));
            } else {
                vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                    = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                       [2U][0U]);
                vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                    = ((0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                        [2U][0U]) | (((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__doCacheLoad)
                                       ? ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__noEvict)
                                           ? 1U : 0U)
                                       : 2U) << 1U));
                vlSelfRef.__PVT__lsu__DOT__miss[2U][1U] 
                    = ((0xfff8007fU & vlSelfRef.__PVT__lsu__DOT__miss
                        [2U][1U]) | (0x7ff80U & ((__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                                  << 0xfU) 
                                                 | (0x7f80U 
                                                    & (__PVT__lsu__DOT__unnamedblk28__DOT__st[4U] 
                                                       >> 0x11U)))));
                vlSelfRef.__PVT__lsu__DOT__miss[2U][1U] 
                    = ((0x7ffffU & vlSelfRef.__PVT__lsu__DOT__miss
                        [2U][1U]) | (((0x55U >= ((IData)(1U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x15U) 
                                                     * 
                                                     (3U 
                                                      & (vlSelfRef.__PVT__CLM_ctResult
                                                         [2U][2U] 
                                                         >> 0x14U))))))
                                       ? (0xfffffU 
                                          & (((0U == 
                                               (0x1fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x15U) 
                                                       * 
                                                       (3U 
                                                        & (vlSelfRef.__PVT__CLM_ctResult
                                                           [2U][2U] 
                                                           >> 0x14U)))))))
                                               ? 0U
                                               : (vlSelfRef.__PVT__CLM_ctResult
                                                  [2U][
                                                  (((IData)(0x14U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x15U) 
                                                        * 
                                                        (3U 
                                                         & (vlSelfRef.__PVT__CLM_ctResult
                                                            [2U][2U] 
                                                            >> 0x14U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x15U) 
                                                           * 
                                                           (3U 
                                                            & (vlSelfRef.__PVT__CLM_ctResult
                                                               [2U][2U] 
                                                               >> 0x14U))))))))) 
                                             | (vlSelfRef.__PVT__CLM_ctResult
                                                [2U][
                                                (((IData)(1U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x15U) 
                                                      * 
                                                      (3U 
                                                       & (vlSelfRef.__PVT__CLM_ctResult
                                                          [2U][2U] 
                                                          >> 0x14U))))) 
                                                 >> 5U)] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x15U) 
                                                        * 
                                                        (3U 
                                                         & (vlSelfRef.__PVT__CLM_ctResult
                                                            [2U][2U] 
                                                            >> 0x14U)))))))))
                                       : 0U) << 0x13U));
                vlSelfRef.__PVT__lsu__DOT__miss[2U][2U] 
                    = (0x7fU & (((0x55U >= ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x15U) 
                                                  * 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__CLM_ctResult
                                                      [2U][2U] 
                                                      >> 0x14U))))))
                                  ? (0xfffffU & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x15U) 
                                                           * 
                                                           (3U 
                                                            & (vlSelfRef.__PVT__CLM_ctResult
                                                               [2U][2U] 
                                                               >> 0x14U)))))))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.__PVT__CLM_ctResult
                                                   [2U][
                                                   (((IData)(0x14U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x15U) 
                                                         * 
                                                         (3U 
                                                          & (vlSelfRef.__PVT__CLM_ctResult
                                                             [2U][2U] 
                                                             >> 0x14U))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x15U) 
                                                            * 
                                                            (3U 
                                                             & (vlSelfRef.__PVT__CLM_ctResult
                                                                [2U][2U] 
                                                                >> 0x14U))))))))) 
                                                 | (vlSelfRef.__PVT__CLM_ctResult
                                                    [2U][
                                                    (((IData)(1U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x15U) 
                                                          * 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__CLM_ctResult
                                                              [2U][2U] 
                                                              >> 0x14U))))) 
                                                     >> 5U)] 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x15U) 
                                                            * 
                                                            (3U 
                                                             & (vlSelfRef.__PVT__CLM_ctResult
                                                                [2U][2U] 
                                                                >> 0x14U)))))))))
                                  : 0U) >> 0xdU));
                vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                    = ((0x7fU & vlSelfRef.__PVT__lsu__DOT__miss
                        [2U][0U]) | (0xffffff80U & 
                                     ((__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                       << 0xfU) | (0x7f80U 
                                                   & (__PVT__lsu__DOT__unnamedblk28__DOT__st[4U] 
                                                      >> 0x11U)))));
                vlSelfRef.__PVT__lsu__DOT__miss[2U][1U] 
                    = ((0xffffff80U & vlSelfRef.__PVT__lsu__DOT__miss
                        [2U][1U]) | (0x7fU & (__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                              >> 0x11U)));
                vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                    = ((0xffffff9fU & vlSelfRef.__PVT__lsu__DOT__miss
                        [2U][0U]) | (0x60U & (vlSelfRef.__PVT__CLM_ctResult
                                              [2U][2U] 
                                              >> 0xfU)));
            }
        }
    }
    vlSelfRef.__PVT__lsu__DOT__forwardMiss = 0U;
    vlSelfRef.__PVT__LSU_cacheMiss[0U] = 0U;
    vlSelfRef.__PVT__LSU_cacheMiss[1U] = 0U;
    vlSelfRef.__PVT__LSU_cacheMiss[2U] = 0U;
    if (((vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] & 
          (6U != (0xfU & (vlSelfRef.__PVT__lsu__DOT__miss
                          [0U][0U] >> 1U)))) & (2U 
                                                != 
                                                (0xfU 
                                                 & (vlSelfRef.__PVT__lsu__DOT__miss
                                                    [0U][0U] 
                                                    >> 1U))))) {
        vlSelfRef.__PVT__lsu__DOT__forwardMiss = (1U 
                                                  | (IData)(vlSelfRef.__PVT__lsu__DOT__forwardMiss));
        vlSelfRef.__PVT__LSU_cacheMiss[0U] = vlSelfRef.__PVT__lsu__DOT__miss
            [0U][0U];
        vlSelfRef.__PVT__LSU_cacheMiss[1U] = vlSelfRef.__PVT__lsu__DOT__miss
            [0U][1U];
        vlSelfRef.__PVT__LSU_cacheMiss[2U] = vlSelfRef.__PVT__lsu__DOT__miss
            [0U][2U];
    }
    if ((1U & (~ vlSelfRef.__PVT__LSU_cacheMiss[0U]))) {
        if (((vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
              & (6U != (0xfU & (vlSelfRef.__PVT__lsu__DOT__miss
                                [1U][0U] >> 1U)))) 
             & (2U != (0xfU & (vlSelfRef.__PVT__lsu__DOT__miss
                               [1U][0U] >> 1U))))) {
            vlSelfRef.__PVT__lsu__DOT__forwardMiss 
                = (2U | (IData)(vlSelfRef.__PVT__lsu__DOT__forwardMiss));
            vlSelfRef.__PVT__LSU_cacheMiss[0U] = vlSelfRef.__PVT__lsu__DOT__miss
                [1U][0U];
            vlSelfRef.__PVT__LSU_cacheMiss[1U] = vlSelfRef.__PVT__lsu__DOT__miss
                [1U][1U];
            vlSelfRef.__PVT__LSU_cacheMiss[2U] = vlSelfRef.__PVT__lsu__DOT__miss
                [1U][2U];
        }
    }
    if ((1U & (~ vlSelfRef.__PVT__LSU_cacheMiss[0U]))) {
        if (((vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
              & (6U != (0xfU & (vlSelfRef.__PVT__lsu__DOT__miss
                                [2U][0U] >> 1U)))) 
             & (2U != (0xfU & (vlSelfRef.__PVT__lsu__DOT__miss
                               [2U][0U] >> 1U))))) {
            vlSelfRef.__PVT__lsu__DOT__forwardMiss 
                = (4U | (IData)(vlSelfRef.__PVT__lsu__DOT__forwardMiss));
            vlSelfRef.__PVT__LSU_cacheMiss[0U] = vlSelfRef.__PVT__lsu__DOT__miss
                [2U][0U];
            vlSelfRef.__PVT__LSU_cacheMiss[1U] = vlSelfRef.__PVT__lsu__DOT__miss
                [2U][1U];
            vlSelfRef.__PVT__LSU_cacheMiss[2U] = vlSelfRef.__PVT__lsu__DOT__miss
                [2U][2U];
        }
    }
    if ((1U & vlSelfRef.__PVT__LSU_cacheMiss[0U])) {
        vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
            = vlSelfRef.__PVT__LSU_cacheMiss[0U];
        vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
            = vlSelfRef.__PVT__LSU_cacheMiss[1U];
        vlSelfRef.__PVT__cacheLineManager__DOT__miss[2U] 
            = vlSelfRef.__PVT__LSU_cacheMiss[2U];
    } else {
        vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
            = vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__miss[0U];
        vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
            = vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__miss[1U];
        vlSelfRef.__PVT__cacheLineManager__DOT__miss[2U] 
            = vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__miss[2U];
    }
    __PVT__cacheLineManager__DOT__missEvictConflict = 0U;
    if (((vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
          & (vlSymsp->TOP__Top__soc.MemC_stat[1U] >> 0x1eU)) 
         & ((0x3ffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[4U] 
                            << 8U) | (vlSymsp->TOP__Top__soc.MemC_stat[3U] 
                                      >> 0x18U))) == 
            (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                            << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                         >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
    if (((vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
          & (vlSymsp->TOP__Top__soc.MemC_stat[4U] >> 0x12U)) 
         & ((0x3ffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[7U] 
                            << 0x14U) | (vlSymsp->TOP__Top__soc.MemC_stat[6U] 
                                         >> 0xcU))) 
            == (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                               << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                            >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
    if (((vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
          & (vlSymsp->TOP__Top__soc.MemC_stat[7U] >> 6U)) 
         & ((0x3ffffffU & vlSymsp->TOP__Top__soc.MemC_stat[9U]) 
            == (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                               << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                            >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
    if (((vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
          & (vlSymsp->TOP__Top__soc.MemC_stat[9U] >> 0x1aU)) 
         & ((0x3ffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[0xcU] 
                            << 0xcU) | (vlSymsp->TOP__Top__soc.MemC_stat[0xbU] 
                                        >> 0x14U))) 
            == (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                               << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                            >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
    if (((((1U == (0xfU & vlSelfRef.__PVT__LSU_MC_if[0U])) 
           | (2U == (0xfU & vlSelfRef.__PVT__LSU_MC_if[0U]))) 
          & vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U]) 
         & ((0x3ffffffU & ((vlSelfRef.__PVT__LSU_MC_if[1U] 
                            << 0x15U) | (vlSelfRef.__PVT__LSU_MC_if[0U] 
                                         >> 0xbU))) 
            == (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                               << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                            >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
    if (((vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
          & (vlSymsp->TOP__Top__soc.MemC_stat[1U] >> 0x1eU)) 
         & ((0x3ffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[3U] 
                            << 8U) | (vlSymsp->TOP__Top__soc.MemC_stat[2U] 
                                      >> 0x18U))) == 
            (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[2U] 
                            << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                                         >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
    if (((vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
          & (vlSymsp->TOP__Top__soc.MemC_stat[4U] >> 0x12U)) 
         & ((0x3ffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[6U] 
                            << 0x14U) | (vlSymsp->TOP__Top__soc.MemC_stat[5U] 
                                         >> 0xcU))) 
            == (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[2U] 
                               << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                                            >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
    if (((vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
          & (vlSymsp->TOP__Top__soc.MemC_stat[7U] >> 6U)) 
         & ((0x3ffffffU & vlSymsp->TOP__Top__soc.MemC_stat[8U]) 
            == (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[2U] 
                               << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                                            >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
    if (((vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
          & (vlSymsp->TOP__Top__soc.MemC_stat[9U] >> 0x1aU)) 
         & ((0x3ffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[0xbU] 
                            << 0xcU) | (vlSymsp->TOP__Top__soc.MemC_stat[0xaU] 
                                        >> 0x14U))) 
            == (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[2U] 
                               << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                                            >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
    if (((((1U == (0xfU & vlSelfRef.__PVT__LSU_MC_if[0U])) 
           | (3U == (0xfU & vlSelfRef.__PVT__LSU_MC_if[0U]))) 
          & vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U]) 
         & ((0x3ffffffU & ((vlSelfRef.__PVT__LSU_MC_if[2U] 
                            << 0x15U) | (vlSelfRef.__PVT__LSU_MC_if[1U] 
                                         >> 0xbU))) 
            == (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[2U] 
                               << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                                            >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
    vlSelfRef.__PVT__CLM_missReady = ((~ (IData)(__PVT__cacheLineManager__DOT__missEvictConflict)) 
                                      & (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__canOutputMiss));
    vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][2U] = 0U;
    if (((vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
          & vlSelfRef.__PVT__lsu__DOT__LRB_ready[0U]) 
         & ((~ vlSelfRef.__PVT__lsu__DOT__miss[0U][0U]) 
            | ((IData)(vlSelfRef.__PVT__lsu__DOT__forwardMiss) 
               & (IData)(vlSelfRef.__PVT__CLM_missReady))))) {
        vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][0U] 
            = vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U];
        vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][1U] 
            = vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U];
        vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][2U] 
            = vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][2U];
    }
    vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][2U] = 0U;
    if (((vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
          & vlSelfRef.__PVT__lsu__DOT__LRB_ready[1U]) 
         & ((~ vlSelfRef.__PVT__lsu__DOT__miss[1U][0U]) 
            | (((IData)(vlSelfRef.__PVT__lsu__DOT__forwardMiss) 
                >> 1U) & (IData)(vlSelfRef.__PVT__CLM_missReady))))) {
        vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][0U] 
            = vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U];
        vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][1U] 
            = vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U];
        vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][2U] 
            = vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][2U];
    }
    __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] = 0U;
    __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[1U] = 0U;
    __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[2U] = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deq_c))) {
        __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
            = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
            [(3U & ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deq_c) 
                    >> 1U))][0U];
        __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[1U] 
            = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
            [(3U & ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deq_c) 
                    >> 1U))][1U];
        __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[2U] 
            = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
            [(3U & ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deq_c) 
                    >> 1U))][2U];
    } else if ((1U & (vlSelfRef.__PVT__lsu__DOT__LRB_uop
                      [1U][0U] & (vlSelfRef.__PVT__lsu__DOT__LRB_uop
                                  [1U][0U] >> 0x11U)))) {
        __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
            = vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][0U];
        __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[1U] 
            = vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][1U];
        __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[2U] 
            = vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][2U];
    }
    __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] = 0U;
    __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[1U] = 0U;
    __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[2U] = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deq_c))) {
        __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
            = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
            [(3U & ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deq_c) 
                    >> 1U))][0U];
        __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[1U] 
            = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
            [(3U & ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deq_c) 
                    >> 1U))][1U];
        __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[2U] 
            = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
            [(3U & ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deq_c) 
                    >> 1U))][2U];
    } else if ((1U & (vlSelfRef.__PVT__lsu__DOT__LRB_uop
                      [0U][0U] & (vlSelfRef.__PVT__lsu__DOT__LRB_uop
                                  [0U][0U] >> 0x11U)))) {
        __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
            = vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][0U];
        __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[1U] 
            = vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][1U];
        __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[2U] 
            = vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][2U];
    }
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c = 0ULL;
    lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_flagsUOp = 0U;
    if ((1U & __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U])) {
        lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_flagsUOp 
            = ((0xfffc0U & lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_flagsUOp) 
               | (1U | (2U & __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U])));
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c 
            = ((0x1fffffffe00ULL & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c) 
               | (IData)((IData)((1U | ((0x1fcU & (
                                                   __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                   >> 8U)) 
                                        | (2U & __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U]))))));
        lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_flagsUOp 
            = ((0x3fU & lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_flagsUOp) 
               | (0xfffc0U & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                              << 3U)));
        if ((0U == (3U & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                          >> 0x13U)))) {
            vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c 
                = ((0x1ffULL & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c) 
                   | ((QData)((IData)((((- (IData)(
                                                   ((__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                     >> 0x12U) 
                                                    & ((0x58U 
                                                        >= 
                                                        ((IData)(0x39U) 
                                                         + 
                                                         (0x1fU 
                                                          & ((IData)(7U) 
                                                             + 
                                                             VL_SHIFTL_III(5,32,32, 
                                                                           (3U 
                                                                            & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                               >> 0x15U)), 3U))))) 
                                                       && (1U 
                                                           & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[
                                                              (((IData)(0x39U) 
                                                                + 
                                                                (0x1fU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    VL_SHIFTL_III(5,32,32, 
                                                                                (3U 
                                                                                & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U)))) 
                                                               >> 5U)] 
                                                              >> 
                                                              (0x1fU 
                                                               & ((IData)(0x39U) 
                                                                  + 
                                                                  (0x1fU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      VL_SHIFTL_III(5,32,32, 
                                                                                (3U 
                                                                                & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U))))))))))) 
                                        << 8U) | ((0x58U 
                                                   >= 
                                                   ((IData)(0x39U) 
                                                    + 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(5,32,32, 
                                                                     (3U 
                                                                      & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                         >> 0x15U)), 3U))))
                                                   ? 
                                                  (0xffU 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x39U) 
                                                            + 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(5,32,32, 
                                                                             (3U 
                                                                              & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U)))))
                                                        ? 0U
                                                        : 
                                                       (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[
                                                        (((IData)(0x40U) 
                                                          + 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(5,32,32, 
                                                                           (3U 
                                                                            & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                               >> 0x15U)), 3U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x39U) 
                                                             + 
                                                             (0x1fU 
                                                              & VL_SHIFTL_III(5,32,32, 
                                                                              (3U 
                                                                               & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U))))))) 
                                                      | (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[
                                                         (((IData)(0x39U) 
                                                           + 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(5,32,32, 
                                                                            (3U 
                                                                             & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x39U) 
                                                             + 
                                                             (0x1fU 
                                                              & VL_SHIFTL_III(5,32,32, 
                                                                              (3U 
                                                                               & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U)))))))
                                                   : 0U)))) 
                      << 9U));
        } else if ((1U == (3U & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                 >> 0x13U)))) {
            vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c 
                = ((0x1ffULL & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c) 
                   | ((QData)((IData)((((- (IData)(
                                                   ((__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                     >> 0x12U) 
                                                    & ((0x58U 
                                                        >= 
                                                        ((IData)(0x39U) 
                                                         + 
                                                         (0x1fU 
                                                          & ((IData)(0xfU) 
                                                             + 
                                                             VL_SHIFTL_III(5,32,32, 
                                                                           (1U 
                                                                            & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                               >> 0x16U)), 4U))))) 
                                                       && (1U 
                                                           & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[
                                                              (((IData)(0x39U) 
                                                                + 
                                                                (0x1fU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    VL_SHIFTL_III(5,32,32, 
                                                                                (1U 
                                                                                & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x16U)), 4U)))) 
                                                               >> 5U)] 
                                                              >> 
                                                              (0x1fU 
                                                               & ((IData)(0x39U) 
                                                                  + 
                                                                  (0x1fU 
                                                                   & ((IData)(0xfU) 
                                                                      + 
                                                                      VL_SHIFTL_III(5,32,32, 
                                                                                (1U 
                                                                                & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x16U)), 4U))))))))))) 
                                        << 0x10U) | 
                                       ((0x58U >= ((IData)(0x39U) 
                                                   + 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(5,32,32, 
                                                                    (1U 
                                                                     & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                        >> 0x16U)), 4U))))
                                         ? (0xffffU 
                                            & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x39U) 
                                                     + 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(5,32,32, 
                                                                      (1U 
                                                                       & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                          >> 0x16U)), 4U)))))
                                                 ? 0U
                                                 : 
                                                (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[
                                                 (((IData)(0x48U) 
                                                   + 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(5,32,32, 
                                                                    (1U 
                                                                     & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                        >> 0x16U)), 4U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x39U) 
                                                      + 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,32,32, 
                                                                       (1U 
                                                                        & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                           >> 0x16U)), 4U))))))) 
                                               | (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[
                                                  (((IData)(0x39U) 
                                                    + 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(5,32,32, 
                                                                     (1U 
                                                                      & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                         >> 0x16U)), 4U))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x39U) 
                                                      + 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,32,32, 
                                                                       (1U 
                                                                        & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                           >> 0x16U)), 4U)))))))
                                         : 0U)))) << 9U));
        } else if ((2U == (3U & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                 >> 0x13U)))) {
            vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c 
                = ((0x1ffULL & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c) 
                   | ((QData)((IData)(((__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[2U] 
                                        << 7U) | (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[1U] 
                                                  >> 0x19U)))) 
                      << 9U));
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: LoadResultBuffer.sv:133: Assertion failed in %NTop.soc.core.lsu.loadResBuf[1]: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/LoadResultBuffer.sv", 133, "");
        }
    }
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c = 0ULL;
    lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_flagsUOp = 0U;
    if ((1U & __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U])) {
        lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_flagsUOp 
            = ((0xfffc0U & lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_flagsUOp) 
               | (1U | (2U & __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U])));
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c 
            = ((0x1fffffffe00ULL & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c) 
               | (IData)((IData)((1U | ((0x1fcU & (
                                                   __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                   >> 8U)) 
                                        | (2U & __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U]))))));
        lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_flagsUOp 
            = ((0x3fU & lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_flagsUOp) 
               | (0xfffc0U & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                              << 3U)));
        if ((0U == (3U & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                          >> 0x13U)))) {
            vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c 
                = ((0x1ffULL & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c) 
                   | ((QData)((IData)((((- (IData)(
                                                   ((__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                     >> 0x12U) 
                                                    & ((0x58U 
                                                        >= 
                                                        ((IData)(0x39U) 
                                                         + 
                                                         (0x1fU 
                                                          & ((IData)(7U) 
                                                             + 
                                                             VL_SHIFTL_III(5,32,32, 
                                                                           (3U 
                                                                            & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                               >> 0x15U)), 3U))))) 
                                                       && (1U 
                                                           & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[
                                                              (((IData)(0x39U) 
                                                                + 
                                                                (0x1fU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    VL_SHIFTL_III(5,32,32, 
                                                                                (3U 
                                                                                & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U)))) 
                                                               >> 5U)] 
                                                              >> 
                                                              (0x1fU 
                                                               & ((IData)(0x39U) 
                                                                  + 
                                                                  (0x1fU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      VL_SHIFTL_III(5,32,32, 
                                                                                (3U 
                                                                                & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U))))))))))) 
                                        << 8U) | ((0x58U 
                                                   >= 
                                                   ((IData)(0x39U) 
                                                    + 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(5,32,32, 
                                                                     (3U 
                                                                      & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                         >> 0x15U)), 3U))))
                                                   ? 
                                                  (0xffU 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x39U) 
                                                            + 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(5,32,32, 
                                                                             (3U 
                                                                              & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U)))))
                                                        ? 0U
                                                        : 
                                                       (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[
                                                        (((IData)(0x40U) 
                                                          + 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(5,32,32, 
                                                                           (3U 
                                                                            & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                               >> 0x15U)), 3U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x39U) 
                                                             + 
                                                             (0x1fU 
                                                              & VL_SHIFTL_III(5,32,32, 
                                                                              (3U 
                                                                               & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U))))))) 
                                                      | (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[
                                                         (((IData)(0x39U) 
                                                           + 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(5,32,32, 
                                                                            (3U 
                                                                             & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x39U) 
                                                             + 
                                                             (0x1fU 
                                                              & VL_SHIFTL_III(5,32,32, 
                                                                              (3U 
                                                                               & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U)))))))
                                                   : 0U)))) 
                      << 9U));
        } else if ((1U == (3U & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                 >> 0x13U)))) {
            vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c 
                = ((0x1ffULL & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c) 
                   | ((QData)((IData)((((- (IData)(
                                                   ((__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                     >> 0x12U) 
                                                    & ((0x58U 
                                                        >= 
                                                        ((IData)(0x39U) 
                                                         + 
                                                         (0x1fU 
                                                          & ((IData)(0xfU) 
                                                             + 
                                                             VL_SHIFTL_III(5,32,32, 
                                                                           (1U 
                                                                            & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                               >> 0x16U)), 4U))))) 
                                                       && (1U 
                                                           & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[
                                                              (((IData)(0x39U) 
                                                                + 
                                                                (0x1fU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    VL_SHIFTL_III(5,32,32, 
                                                                                (1U 
                                                                                & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x16U)), 4U)))) 
                                                               >> 5U)] 
                                                              >> 
                                                              (0x1fU 
                                                               & ((IData)(0x39U) 
                                                                  + 
                                                                  (0x1fU 
                                                                   & ((IData)(0xfU) 
                                                                      + 
                                                                      VL_SHIFTL_III(5,32,32, 
                                                                                (1U 
                                                                                & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x16U)), 4U))))))))))) 
                                        << 0x10U) | 
                                       ((0x58U >= ((IData)(0x39U) 
                                                   + 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(5,32,32, 
                                                                    (1U 
                                                                     & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                        >> 0x16U)), 4U))))
                                         ? (0xffffU 
                                            & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x39U) 
                                                     + 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(5,32,32, 
                                                                      (1U 
                                                                       & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                          >> 0x16U)), 4U)))))
                                                 ? 0U
                                                 : 
                                                (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[
                                                 (((IData)(0x48U) 
                                                   + 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(5,32,32, 
                                                                    (1U 
                                                                     & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                        >> 0x16U)), 4U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x39U) 
                                                      + 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,32,32, 
                                                                       (1U 
                                                                        & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                           >> 0x16U)), 4U))))))) 
                                               | (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[
                                                  (((IData)(0x39U) 
                                                    + 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(5,32,32, 
                                                                     (1U 
                                                                      & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                         >> 0x16U)), 4U))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x39U) 
                                                      + 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,32,32, 
                                                                       (1U 
                                                                        & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                           >> 0x16U)), 4U)))))))
                                         : 0U)))) << 9U));
        } else if ((2U == (3U & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                 >> 0x13U)))) {
            vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c 
                = ((0x1ffULL & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c) 
                   | ((QData)((IData)(((__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[2U] 
                                        << 7U) | (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[1U] 
                                                  >> 0x19U)))) 
                      << 9U));
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: LoadResultBuffer.sv:133: Assertion failed in %NTop.soc.core.lsu.loadResBuf[0]: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/LoadResultBuffer.sv", 133, "");
        }
    }
    vlSelfRef.__Vcellout__lsu__OUT_flagsUOp[1U] = lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_flagsUOp;
    vlSelfRef.__Vcellout__lsu__OUT_flagsUOp[0U] = lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_flagsUOp;
    vlSelfRef.flagUOps[4U] = vlSelfRef.__Vcellout__lsu__OUT_flagsUOp
        [1U];
    vlSelfRef.flagUOps[3U] = vlSelfRef.__Vcellout__lsu__OUT_flagsUOp
        [0U];
    vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp[4U] 
        = vlSelfRef.flagUOps[4U];
    vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp[3U] 
        = vlSelfRef.flagUOps[3U];
    vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp[2U] 
        = vlSelfRef.flagUOps[2U];
    vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp[1U] 
        = vlSelfRef.flagUOps[1U];
    vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp[0U] 
        = vlSelfRef.flagUOps[0U];
    vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp[4U] 
        = vlSelfRef.flagUOps[4U];
    vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp[3U] 
        = vlSelfRef.flagUOps[3U];
    vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp[2U] 
        = vlSelfRef.flagUOps[2U];
    vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp[1U] 
        = vlSelfRef.flagUOps[1U];
    vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp[0U] 
        = vlSelfRef.flagUOps[0U];
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__26(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__26\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.frontendEn = (VL_GTES_III(32, 0xfffffffcU, 
                                        VL_EXTENDS_II(32,7, 
                                                      (0x7fU 
                                                       & ((IData)(vlSymsp->TOP__Top__soc__core__rn.__PVT__counterSqN) 
                                                          - 
                                                          ((IData)(0x3fU) 
                                                           + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__baseIndex)))))) 
                            & ((~ vlSelfRef.branch[0U]) 
                               & (~ (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__flushing))));
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__27(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__27\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vlvbound_h6c6e4181__0;
    __Vlvbound_h6c6e4181__0 = 0;
    IData/*31:0*/ __Vlvbound_he342138a__0;
    __Vlvbound_he342138a__0 = 0;
    CData/*0:0*/ __Vlvbound_hc2f0efdf__0;
    __Vlvbound_hc2f0efdf__0 = 0;
    CData/*5:0*/ rfMux__DOT____Vlvbound_h0683f5a1__0;
    rfMux__DOT____Vlvbound_h0683f5a1__0 = 0;
    CData/*1:0*/ __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*7:0*/ __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*5:0*/ ld__DOT____Vlvbound_h3256ea86__0;
    ld__DOT____Vlvbound_h3256ea86__0 = 0;
    CData/*0:0*/ ld__DOT____Vlvbound_hd7824600__0;
    ld__DOT____Vlvbound_hd7824600__0 = 0;
    CData/*5:0*/ ld__DOT____Vlvbound_h4106c72c__0;
    ld__DOT____Vlvbound_h4106c72c__0 = 0;
    CData/*0:0*/ ld__DOT____Vlvbound_hf441be8f__0;
    ld__DOT____Vlvbound_hf441be8f__0 = 0;
    QData/*39:0*/ __PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__outUOp;
    __PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__outUOp = 0;
    QData/*39:0*/ __PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__outUOp;
    __PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__outUOp = 0;
    CData/*5:0*/ stDataLd__DOT____Vlvbound_h0bf8c5ab__0;
    stDataLd__DOT____Vlvbound_h0bf8c5ab__0 = 0;
    CData/*0:0*/ stDataLd__DOT____Vlvbound_h989db67a__0;
    stDataLd__DOT____Vlvbound_h989db67a__0 = 0;
    IData/*31:0*/ __PVT__pageWalker__DOT__unnamedblk2__DOT__pte;
    __PVT__pageWalker__DOT__unnamedblk2__DOT__pte = 0;
    CData/*0:0*/ lsu__DOT__ohEnc__DOT____Vlvbound_hd3d84657__1;
    lsu__DOT__ohEnc__DOT____Vlvbound_hd3d84657__1 = 0;
    SData/*9:0*/ __PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums;
    __PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums = 0;
    SData/*9:0*/ __PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums;
    __PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums = 0;
    IData/*31:0*/ __Vfunc_stDataLd__DOT__ShiftData__0__Vfuncout;
    __Vfunc_stDataLd__DOT__ShiftData__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_stDataLd__DOT__ShiftData__0__raw;
    __Vfunc_stDataLd__DOT__ShiftData__0__raw = 0;
    CData/*1:0*/ __Vfunc_stDataLd__DOT__ShiftData__0__offs;
    __Vfunc_stDataLd__DOT__ShiftData__0__offs = 0;
    IData/*31:0*/ __Vfunc_stDataLd__DOT__ShiftData__0__shifted;
    __Vfunc_stDataLd__DOT__ShiftData__0__shifted = 0;
    IData/*31:0*/ __Vfunc_stDataLd__DOT__ShiftData__2__Vfuncout;
    __Vfunc_stDataLd__DOT__ShiftData__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_stDataLd__DOT__ShiftData__2__raw;
    __Vfunc_stDataLd__DOT__ShiftData__2__raw = 0;
    CData/*1:0*/ __Vfunc_stDataLd__DOT__ShiftData__2__offs;
    __Vfunc_stDataLd__DOT__ShiftData__2__offs = 0;
    IData/*31:0*/ __Vfunc_stDataLd__DOT__ShiftData__2__shifted;
    __Vfunc_stDataLd__DOT__ShiftData__2__shifted = 0;
    // Body
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready 
        = vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready 
        = vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready;
    vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_uop 
        = vlSelfRef.__Vdly____Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_uop;
    vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_uop 
        = vlSelfRef.__Vdly____Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_uop;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAccepted 
        = vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAccepted;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAddr 
        = vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAddr;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAccepted 
        = vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAccepted;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAddr 
        = vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAddr;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive 
        = vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive 
        = vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive;
    vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__regFileLookup 
        = vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__0__KET____DOT__regFileLookup;
    vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__regFileLookup 
        = vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__1__KET____DOT__regFileLookup;
    vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopIQ 
        = vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopIQ;
    vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopIQ 
        = vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopIQ;
    vlSelfRef.__PVT__SQB_uop[0U] = vlSelfRef.__Vdly__SQB_uop[0U];
    vlSelfRef.__PVT__SQB_uop[1U] = vlSelfRef.__Vdly__SQB_uop[1U];
    vlSelfRef.__PVT__SQB_uop[2U] = vlSelfRef.__Vdly__SQB_uop[2U];
    vlSelfRef.__PVT__SQB_uop[3U] = vlSelfRef.__Vdly__SQB_uop[3U];
    vlSelfRef.__PVT__SQB_uop[4U] = vlSelfRef.__Vdly__SQB_uop[4U];
    vlSelfRef.__PVT__SQB_uop[5U] = vlSelfRef.__Vdly__SQB_uop[5U];
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 0U;
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [0U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 1U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [1U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 1U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [2U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 1U;
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxIn = 0U;
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [0U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxIn = 0U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [1U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxIn = 1U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [2U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxIn = 2U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [3U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 1U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxIn = 3U;
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 0U;
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [0U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 1U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [1U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 1U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [2U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 1U;
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxIn = 0U;
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [0U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxIn = 0U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [1U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxIn = 1U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [2U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxIn = 2U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [3U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 1U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxIn = 3U;
    }
    vlSelfRef.__PVT__pageWalker__DOT__state = vlSelfRef.__Vdly__pageWalker__DOT__state;
    vlSelfRef.__PVT__pageWalker__DOT__pageWalkAddr 
        = vlSelfRef.__Vdly__pageWalker__DOT__pageWalkAddr;
    vlSelfRef.__PVT__pageWalker__DOT__pageWalkIter 
        = vlSelfRef.__Vdly__pageWalker__DOT__pageWalkIter;
    vlSelfRef.__PVT__PC_readReq[0U] = ((0x3eU & vlSelfRef.__PVT__PC_readReq
                                        [0U]) | (1U 
                                                 & vlSelfRef.IS_uop
                                                 [0U][0U]));
    vlSelfRef.__PVT__PC_readReq[0U] = ((1U & vlSelfRef.__PVT__PC_readReq
                                        [0U]) | (0x3eU 
                                                 & (vlSelfRef.IS_uop
                                                    [0U][0U] 
                                                    >> 0x16U)));
    vlSelfRef.__PVT__PC_readReq[1U] = ((0x3eU & vlSelfRef.__PVT__PC_readReq
                                        [1U]) | (1U 
                                                 & vlSelfRef.IS_uop
                                                 [1U][0U]));
    vlSelfRef.__PVT__PC_readReq[1U] = ((1U & vlSelfRef.__PVT__PC_readReq
                                        [1U]) | (0x3eU 
                                                 & (vlSelfRef.IS_uop
                                                    [1U][0U] 
                                                    >> 0x16U)));
    ld__DOT____Vlvbound_h3256ea86__0 = (0x3fU & (vlSelfRef.IS_uop
                                                 [0U][1U] 
                                                 >> 0x19U));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xffffffffffff81ULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_h3256ea86__0)) 
                                                  << 1U));
    ld__DOT____Vlvbound_hd7824600__0 = (1U & (vlSelfRef.IS_uop
                                              [0U][0U] 
                                              & (~ 
                                                 (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 0x1fU))));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xfffffffffffffeULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | (IData)((IData)(ld__DOT____Vlvbound_hd7824600__0)));
    ld__DOT____Vlvbound_h4106c72c__0 = (0x3fU & (vlSelfRef.IS_uop
                                                 [0U][1U] 
                                                 >> 0x11U));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xfffc0fffffffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_h4106c72c__0)) 
                                                  << 0x24U));
    ld__DOT____Vlvbound_hf441be8f__0 = (1U & (vlSelfRef.IS_uop
                                              [0U][0U] 
                                              & (~ 
                                                 (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 0x17U))));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xfffff7ffffffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_hf441be8f__0)) 
                                                  << 0x23U));
    ld__DOT____Vlvbound_h3256ea86__0 = (0x3fU & (vlSelfRef.IS_uop
                                                 [1U][1U] 
                                                 >> 0x19U));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xffffffffffc0ffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_h3256ea86__0)) 
                                                  << 8U));
    ld__DOT____Vlvbound_hd7824600__0 = (1U & (vlSelfRef.IS_uop
                                              [1U][0U] 
                                              & (~ 
                                                 (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 0x1fU))));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xffffffffffff7fULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_hd7824600__0)) 
                                                  << 7U));
    ld__DOT____Vlvbound_h4106c72c__0 = (0x3fU & (vlSelfRef.IS_uop
                                                 [1U][1U] 
                                                 >> 0x11U));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xfe07ffffffffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_h4106c72c__0)) 
                                                  << 0x2bU));
    ld__DOT____Vlvbound_hf441be8f__0 = (1U & (vlSelfRef.IS_uop
                                              [1U][0U] 
                                              & (~ 
                                                 (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 0x17U))));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xfffbffffffffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_hf441be8f__0)) 
                                                  << 0x2aU));
    ld__DOT____Vlvbound_h3256ea86__0 = (0x3fU & (vlSelfRef.IS_uop
                                                 [2U][1U] 
                                                 >> 0x19U));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xffffffffe07fffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_h3256ea86__0)) 
                                                  << 0xfU));
    ld__DOT____Vlvbound_hd7824600__0 = (1U & (vlSelfRef.IS_uop
                                              [2U][0U] 
                                              & (~ 
                                                 (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 0x1fU))));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xffffffffffbfffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_hd7824600__0)) 
                                                  << 0xeU));
    ld__DOT____Vlvbound_h4106c72c__0 = (0x3fU & (vlSelfRef.IS_uop
                                                 [2U][1U] 
                                                 >> 0x11U));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0x3ffffffffffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_h4106c72c__0)) 
                                                  << 0x32U));
    ld__DOT____Vlvbound_hf441be8f__0 = (1U & (vlSelfRef.IS_uop
                                              [2U][0U] 
                                              & (~ 
                                                 (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 0x17U))));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xfdffffffffffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_hf441be8f__0)) 
                                                  << 0x31U));
    ld__DOT____Vlvbound_h3256ea86__0 = (0x3fU & (vlSelfRef.IS_uop
                                                 [3U][1U] 
                                                 >> 0x19U));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xfffffff03fffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_h3256ea86__0)) 
                                                  << 0x16U));
    ld__DOT____Vlvbound_hd7824600__0 = (1U & (vlSelfRef.IS_uop
                                              [3U][0U] 
                                              & (~ 
                                                 (vlSelfRef.IS_uop
                                                  [3U][1U] 
                                                  >> 0x1fU))));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xffffffffdfffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_hd7824600__0)) 
                                                  << 0x15U));
    ld__DOT____Vlvbound_h3256ea86__0 = (0x3fU & (vlSelfRef.IS_uop
                                                 [4U][1U] 
                                                 >> 0x19U));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xfffff81fffffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_h3256ea86__0)) 
                                                  << 0x1dU));
    ld__DOT____Vlvbound_hd7824600__0 = (1U & (vlSelfRef.IS_uop
                                              [4U][0U] 
                                              & (~ 
                                                 (vlSelfRef.IS_uop
                                                  [4U][1U] 
                                                  >> 0x1fU))));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xffffffefffffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_hd7824600__0)) 
                                                  << 0x1cU));
    vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp = 
        ((2U & (IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp)) 
         | (((vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][0U] 
              & (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                 [0U][0U] >> 1U)) & (0x10000000U <= 
                                     ((vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                       [0U][2U] << 0x1cU) 
                                      | (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                         [0U][1U] >> 4U)))) 
            & (0x11000000U > ((vlSelfRef.__PVT__lsu__DOT__ldOps_0
                               [0U][2U] << 0x1cU) | 
                              (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                               [0U][1U] >> 4U)))));
    vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp = 
        ((1U & (IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp)) 
         | (0xfffffffeU & ((((vlSelfRef.__PVT__lsu__DOT__ldOps_0
                              [1U][0U] << 1U) & vlSelfRef.__PVT__lsu__DOT__ldOps_0
                             [1U][0U]) & ((0x10000000U 
                                           <= ((vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                                [1U][2U] 
                                                << 0x1cU) 
                                               | (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                                  [1U][1U] 
                                                  >> 4U))) 
                                          << 1U)) & 
                           ((0x11000000U > ((vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                             [1U][2U] 
                                             << 0x1cU) 
                                            | (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                               [1U][1U] 
                                               >> 4U))) 
                            << 1U))));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffffffcU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (3U & ((1U & (vlSelfRef.LD_uop[0U][4U] 
                           >> 0x17U)) + (1U & (vlSelfRef.LD_uop
                                               [0U][4U] 
                                               >> 0x18U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffffff3U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xcU & (((1U & (vlSelfRef.LD_uop[0U][4U] 
                              >> 0x19U)) + (1U & (vlSelfRef.LD_uop
                                                  [0U][4U] 
                                                  >> 0x1aU))) 
                      << 2U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffffffcfU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x30U & (((1U & (vlSelfRef.LD_uop[0U][4U] 
                               >> 0x1bU)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x1cU))) 
                       << 4U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffffff3fU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc0U & (((1U & (vlSelfRef.LD_uop[0U][4U] 
                               >> 0x1dU)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x1eU))) 
                       << 6U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffffcffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x300U & (((vlSelfRef.LD_uop[0U][4U] 
                          >> 0x1fU) + (1U & vlSelfRef.LD_uop
                                       [0U][5U])) << 8U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffff3ffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc00U & (((1U & (vlSelfRef.LD_uop[0U][5U] 
                                >> 1U)) + (1U & (vlSelfRef.LD_uop
                                                 [0U][5U] 
                                                 >> 2U))) 
                        << 0xaU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffffcfffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x3000U & (((1U & (vlSelfRef.LD_uop[0U][5U] 
                                 >> 3U)) + (1U & (vlSelfRef.LD_uop
                                                  [0U][5U] 
                                                  >> 4U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffff3fffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc000U & (((1U & (vlSelfRef.LD_uop[0U][5U] 
                                 >> 5U)) + (1U & (vlSelfRef.LD_uop
                                                  [0U][5U] 
                                                  >> 6U))) 
                         << 0xeU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffcffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x30000U & (((1U & (vlSelfRef.LD_uop[0U][5U] 
                                  >> 7U)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [0U][5U] 
                                                   >> 8U))) 
                          << 0x10U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfff3ffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc0000U & (((1U & (vlSelfRef.LD_uop[0U][5U] 
                                  >> 9U)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [0U][5U] 
                                                   >> 0xaU))) 
                          << 0x12U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffcfffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x300000U & (((1U & (vlSelfRef.LD_uop
                                   [0U][5U] >> 0xbU)) 
                            + (1U & (vlSelfRef.LD_uop
                                     [0U][5U] >> 0xcU))) 
                           << 0x14U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xff3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc00000U & (((1U & (vlSelfRef.LD_uop
                                   [0U][5U] >> 0xdU)) 
                            + (1U & (vlSelfRef.LD_uop
                                     [0U][5U] >> 0xeU))) 
                           << 0x16U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfcffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x3000000U & (((1U & (vlSelfRef.LD_uop
                                    [0U][5U] >> 0xfU)) 
                             + (1U & (vlSelfRef.LD_uop
                                      [0U][5U] >> 0x10U))) 
                            << 0x18U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xf3ffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc000000U & (((1U & (vlSelfRef.LD_uop
                                    [0U][5U] >> 0x11U)) 
                             + (1U & (vlSelfRef.LD_uop
                                      [0U][5U] >> 0x12U))) 
                            << 0x1aU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xcfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x30000000U & (((1U & (vlSelfRef.LD_uop
                                     [0U][5U] >> 0x13U)) 
                              + (1U & (vlSelfRef.LD_uop
                                       [0U][5U] >> 0x14U))) 
                             << 0x1cU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0x3fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (((1U & (vlSelfRef.LD_uop[0U][5U] >> 0x15U)) 
               + (1U & (vlSelfRef.LD_uop[0U][5U] >> 0x16U))) 
              << 0x1eU));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffffffcU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (3U & ((1U & (vlSelfRef.LD_uop[1U][4U] 
                           >> 0x17U)) + (1U & (vlSelfRef.LD_uop
                                               [1U][4U] 
                                               >> 0x18U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffffff3U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xcU & (((1U & (vlSelfRef.LD_uop[1U][4U] 
                              >> 0x19U)) + (1U & (vlSelfRef.LD_uop
                                                  [1U][4U] 
                                                  >> 0x1aU))) 
                      << 2U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffffffcfU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x30U & (((1U & (vlSelfRef.LD_uop[1U][4U] 
                               >> 0x1bU)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [1U][4U] 
                                                   >> 0x1cU))) 
                       << 4U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffffff3fU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc0U & (((1U & (vlSelfRef.LD_uop[1U][4U] 
                               >> 0x1dU)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [1U][4U] 
                                                   >> 0x1eU))) 
                       << 6U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffffcffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x300U & (((vlSelfRef.LD_uop[1U][4U] 
                          >> 0x1fU) + (1U & vlSelfRef.LD_uop
                                       [1U][5U])) << 8U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffff3ffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc00U & (((1U & (vlSelfRef.LD_uop[1U][5U] 
                                >> 1U)) + (1U & (vlSelfRef.LD_uop
                                                 [1U][5U] 
                                                 >> 2U))) 
                        << 0xaU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffffcfffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x3000U & (((1U & (vlSelfRef.LD_uop[1U][5U] 
                                 >> 3U)) + (1U & (vlSelfRef.LD_uop
                                                  [1U][5U] 
                                                  >> 4U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffff3fffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc000U & (((1U & (vlSelfRef.LD_uop[1U][5U] 
                                 >> 5U)) + (1U & (vlSelfRef.LD_uop
                                                  [1U][5U] 
                                                  >> 6U))) 
                         << 0xeU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffcffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x30000U & (((1U & (vlSelfRef.LD_uop[1U][5U] 
                                  >> 7U)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [1U][5U] 
                                                   >> 8U))) 
                          << 0x10U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfff3ffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc0000U & (((1U & (vlSelfRef.LD_uop[1U][5U] 
                                  >> 9U)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [1U][5U] 
                                                   >> 0xaU))) 
                          << 0x12U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffcfffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x300000U & (((1U & (vlSelfRef.LD_uop
                                   [1U][5U] >> 0xbU)) 
                            + (1U & (vlSelfRef.LD_uop
                                     [1U][5U] >> 0xcU))) 
                           << 0x14U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xff3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc00000U & (((1U & (vlSelfRef.LD_uop
                                   [1U][5U] >> 0xdU)) 
                            + (1U & (vlSelfRef.LD_uop
                                     [1U][5U] >> 0xeU))) 
                           << 0x16U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfcffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x3000000U & (((1U & (vlSelfRef.LD_uop
                                    [1U][5U] >> 0xfU)) 
                             + (1U & (vlSelfRef.LD_uop
                                      [1U][5U] >> 0x10U))) 
                            << 0x18U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xf3ffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc000000U & (((1U & (vlSelfRef.LD_uop
                                    [1U][5U] >> 0x11U)) 
                             + (1U & (vlSelfRef.LD_uop
                                      [1U][5U] >> 0x12U))) 
                            << 0x1aU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xcfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x30000000U & (((1U & (vlSelfRef.LD_uop
                                     [1U][5U] >> 0x13U)) 
                              + (1U & (vlSelfRef.LD_uop
                                       [1U][5U] >> 0x14U))) 
                             << 0x1cU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0x3fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (((1U & (vlSelfRef.LD_uop[1U][5U] >> 0x15U)) 
               + (1U & (vlSelfRef.LD_uop[1U][5U] >> 0x16U))) 
              << 0x1eU));
    __Vlvbound_h6c6e4181__0 = (0x3fU & (IData)((vlSelfRef.resultUOps
                                                [0U] 
                                                >> 2U)));
    vlSelfRef.__PVT__RF_writeAddress = ((0x3fffffc0U 
                                         & vlSelfRef.__PVT__RF_writeAddress) 
                                        | (IData)(__Vlvbound_h6c6e4181__0));
    __Vlvbound_h6c6e4181__0 = (0x3fU & (IData)((vlSelfRef.resultUOps
                                                [1U] 
                                                >> 2U)));
    vlSelfRef.__PVT__RF_writeAddress = ((0x3ffff03fU 
                                         & vlSelfRef.__PVT__RF_writeAddress) 
                                        | ((IData)(__Vlvbound_h6c6e4181__0) 
                                           << 6U));
    __Vlvbound_h6c6e4181__0 = (0x3fU & (IData)((vlSelfRef.resultUOps
                                                [2U] 
                                                >> 2U)));
    vlSelfRef.__PVT__RF_writeAddress = ((0x3ffc0fffU 
                                         & vlSelfRef.__PVT__RF_writeAddress) 
                                        | ((IData)(__Vlvbound_h6c6e4181__0) 
                                           << 0xcU));
    __Vlvbound_h6c6e4181__0 = (0x3fU & (IData)((vlSelfRef.resultUOps
                                                [3U] 
                                                >> 2U)));
    vlSelfRef.__PVT__RF_writeAddress = ((0x3f03ffffU 
                                         & vlSelfRef.__PVT__RF_writeAddress) 
                                        | ((IData)(__Vlvbound_h6c6e4181__0) 
                                           << 0x12U));
    __Vlvbound_h6c6e4181__0 = (0x3fU & (IData)((vlSelfRef.resultUOps
                                                [4U] 
                                                >> 2U)));
    vlSelfRef.__PVT__RF_writeAddress = ((0xffffffU 
                                         & vlSelfRef.__PVT__RF_writeAddress) 
                                        | ((IData)(__Vlvbound_h6c6e4181__0) 
                                           << 0x18U));
    __Vlvbound_he342138a__0 = (IData)((vlSelfRef.resultUOps
                                       [0U] >> 9U));
    vlSelfRef.__PVT__RF_writeData[0U] = __Vlvbound_he342138a__0;
    __Vlvbound_he342138a__0 = (IData)((vlSelfRef.resultUOps
                                       [1U] >> 9U));
    vlSelfRef.__PVT__RF_writeData[1U] = __Vlvbound_he342138a__0;
    __Vlvbound_he342138a__0 = (IData)((vlSelfRef.resultUOps
                                       [2U] >> 9U));
    vlSelfRef.__PVT__RF_writeData[2U] = __Vlvbound_he342138a__0;
    __Vlvbound_he342138a__0 = (IData)((vlSelfRef.resultUOps
                                       [3U] >> 9U));
    vlSelfRef.__PVT__RF_writeData[3U] = __Vlvbound_he342138a__0;
    __Vlvbound_he342138a__0 = (IData)((vlSelfRef.resultUOps
                                       [4U] >> 9U));
    vlSelfRef.__PVT__RF_writeData[4U] = __Vlvbound_he342138a__0;
    __Vlvbound_hc2f0efdf__0 = (1U & ((IData)(vlSelfRef.resultUOps
                                             [0U]) 
                                     & (~ (IData)((
                                                   vlSelfRef.resultUOps
                                                   [0U] 
                                                   >> 8U)))));
    vlSelfRef.__PVT__RF_writeEnable = ((0x1eU & (IData)(vlSelfRef.__PVT__RF_writeEnable)) 
                                       | (IData)(__Vlvbound_hc2f0efdf__0));
    __Vlvbound_hc2f0efdf__0 = (1U & ((IData)(vlSelfRef.resultUOps
                                             [1U]) 
                                     & (~ (IData)((
                                                   vlSelfRef.resultUOps
                                                   [1U] 
                                                   >> 8U)))));
    vlSelfRef.__PVT__RF_writeEnable = ((0x1dU & (IData)(vlSelfRef.__PVT__RF_writeEnable)) 
                                       | ((IData)(__Vlvbound_hc2f0efdf__0) 
                                          << 1U));
    __Vlvbound_hc2f0efdf__0 = (1U & ((IData)(vlSelfRef.resultUOps
                                             [2U]) 
                                     & (~ (IData)((
                                                   vlSelfRef.resultUOps
                                                   [2U] 
                                                   >> 8U)))));
    vlSelfRef.__PVT__RF_writeEnable = ((0x1bU & (IData)(vlSelfRef.__PVT__RF_writeEnable)) 
                                       | ((IData)(__Vlvbound_hc2f0efdf__0) 
                                          << 2U));
    __Vlvbound_hc2f0efdf__0 = (1U & ((IData)(vlSelfRef.resultUOps
                                             [3U]) 
                                     & (~ (IData)((
                                                   vlSelfRef.resultUOps
                                                   [3U] 
                                                   >> 8U)))));
    vlSelfRef.__PVT__RF_writeEnable = ((0x17U & (IData)(vlSelfRef.__PVT__RF_writeEnable)) 
                                       | ((IData)(__Vlvbound_hc2f0efdf__0) 
                                          << 3U));
    __Vlvbound_hc2f0efdf__0 = (1U & ((IData)(vlSelfRef.resultUOps
                                             [4U]) 
                                     & (~ (IData)((
                                                   vlSelfRef.resultUOps
                                                   [4U] 
                                                   >> 8U)))));
    vlSelfRef.__PVT__RF_writeEnable = ((0xfU & (IData)(vlSelfRef.__PVT__RF_writeEnable)) 
                                       | ((IData)(__Vlvbound_hc2f0efdf__0) 
                                          << 4U));
    vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp[1U] 
        = vlSelfRef.resultUOps[4U];
    vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp[0U] 
        = vlSelfRef.resultUOps[3U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
        = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
        = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (((vlSelfRef.LD_uop[0U][0U] & (1U == (0xfU 
                                                 & (vlSelfRef.LD_uop
                                                    [0U][0U] 
                                                    >> 2U)))) 
             & ((~ vlSelfRef.branch[0U]) | VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (((vlSelfRef.LD_uop
                                                                           [0U][1U] 
                                                                           << 6U) 
                                                                          | (vlSelfRef.LD_uop
                                                                             [0U][0U] 
                                                                             >> 0x1aU)) 
                                                                         - 
                                                                         ((vlSelfRef.branch[0U] 
                                                                           << 0xbU) 
                                                                          | (vlSelfRef.branch[0U] 
                                                                             >> 0x15U))))))))) {
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                = ((0xf000007fU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                   | (0xffffff80U & ((0xfe00000U & 
                                      ((vlSelfRef.LD_uop
                                        [0U][1U] << 0x1bU) 
                                       | (0x7e00000U 
                                          & (vlSelfRef.LD_uop
                                             [0U][0U] 
                                             >> 5U)))) 
                                     | (0x1fff80U & 
                                        (vlSelfRef.LD_uop
                                         [0U][0U] << 1U)))));
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                = ((0xffffff80U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                   | (0x3eU & (vlSelfRef.LD_uop[0U][0U] 
                               >> 0x14U)));
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                = (0xfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]);
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                = ((0x380U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]) 
                   | (0xeU & (vlSelfRef.LD_uop[0U][2U] 
                              >> 0x13U)));
            if (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__isBranch) {
                if ((((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken) 
                      != (1U & (vlSelfRef.LD_uop[0U][0U] 
                                >> 0x14U))) & (1U != 
                                               (0x3fU 
                                                & (vlSelfRef.LD_uop
                                                   [0U][1U] 
                                                   >> 8U))))) {
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = ((0xfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                           | (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                ? vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0
                                : ((IData)(2U) + ((
                                                   vlSelfRef.LD_uop
                                                   [0U][3U] 
                                                   << 9U) 
                                                  | (vlSelfRef.LD_uop
                                                     [0U][2U] 
                                                     >> 0x17U)))) 
                              << 0x1cU));
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                        = ((0xf0000000U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]) 
                           | (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                ? vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0
                                : ((IData)(2U) + ((
                                                   vlSelfRef.LD_uop
                                                   [0U][3U] 
                                                   << 9U) 
                                                  | (vlSelfRef.LD_uop
                                                     [0U][2U] 
                                                     >> 0x17U)))) 
                              >> 4U));
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = (1U | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]);
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                        = ((0x7fU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]) 
                           | (0x3ffU & (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                          ? 1U : 2U) 
                                        << 7U)));
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                        = ((0x8fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]) 
                           | (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                ? 4U : 3U) << 0x1cU));
                }
            } else if ((((8U == (0x3fU & (vlSelfRef.LD_uop
                                          [0U][1U] 
                                          >> 8U))) 
                         | (9U == (0x3fU & (vlSelfRef.LD_uop
                                            [0U][1U] 
                                            >> 8U)))) 
                        | (0xaU == (0x3fU & (vlSelfRef.LD_uop
                                             [0U][1U] 
                                             >> 8U))))) {
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchCorrect)) 
                           | (~ (vlSelfRef.LD_uop[0U][0U] 
                                 >> 0x14U))))) {
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = ((0xfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                           | (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                              << 0x1cU));
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                        = ((0xf0000000U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]) 
                           | (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                              >> 4U));
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                        = ((0x7fU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]) 
                           | (0x3ffU & (((8U == (0x3fU 
                                                 & (vlSelfRef.LD_uop
                                                    [0U][1U] 
                                                    >> 8U)))
                                          ? 3U : 4U) 
                                        << 7U)));
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = (1U | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]);
                    if ((8U == (0x3fU & (vlSelfRef.LD_uop
                                         [0U][1U] >> 8U)))) {
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                            = (0x7fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]);
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                            = (1U | (0x3feU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]));
                    }
                    if ((9U == (0x3fU & (vlSelfRef.LD_uop
                                         [0U][1U] >> 8U)))) {
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                            = (0x80000000U | (0x7fffffffU 
                                              & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]));
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                            = (0x3feU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]);
                    }
                }
            }
        }
        if (((vlSelfRef.LD_uop[1U][0U] & (1U == (0xfU 
                                                 & (vlSelfRef.LD_uop
                                                    [1U][0U] 
                                                    >> 2U)))) 
             & ((~ vlSelfRef.branch[0U]) | VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (((vlSelfRef.LD_uop
                                                                           [1U][1U] 
                                                                           << 6U) 
                                                                          | (vlSelfRef.LD_uop
                                                                             [1U][0U] 
                                                                             >> 0x1aU)) 
                                                                         - 
                                                                         ((vlSelfRef.branch[0U] 
                                                                           << 0xbU) 
                                                                          | (vlSelfRef.branch[0U] 
                                                                             >> 0x15U))))))))) {
            vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                = ((0xf000007fU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                   | (0xffffff80U & ((0xfe00000U & 
                                      ((vlSelfRef.LD_uop
                                        [1U][1U] << 0x1bU) 
                                       | (0x7e00000U 
                                          & (vlSelfRef.LD_uop
                                             [1U][0U] 
                                             >> 5U)))) 
                                     | (0x1fff80U & 
                                        (vlSelfRef.LD_uop
                                         [1U][0U] << 1U)))));
            vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                = ((0xffffff80U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                   | (0x3eU & (vlSelfRef.LD_uop[1U][0U] 
                               >> 0x14U)));
            vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                = (0xfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]);
            vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                = ((0x380U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]) 
                   | (0xeU & (vlSelfRef.LD_uop[1U][2U] 
                              >> 0x13U)));
            if (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__isBranch) {
                if ((((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken) 
                      != (1U & (vlSelfRef.LD_uop[1U][0U] 
                                >> 0x14U))) & (1U != 
                                               (0x3fU 
                                                & (vlSelfRef.LD_uop
                                                   [1U][1U] 
                                                   >> 8U))))) {
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = ((0xfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                           | (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                ? vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0
                                : ((IData)(2U) + ((
                                                   vlSelfRef.LD_uop
                                                   [1U][3U] 
                                                   << 9U) 
                                                  | (vlSelfRef.LD_uop
                                                     [1U][2U] 
                                                     >> 0x17U)))) 
                              << 0x1cU));
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                        = ((0xf0000000U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]) 
                           | (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                ? vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0
                                : ((IData)(2U) + ((
                                                   vlSelfRef.LD_uop
                                                   [1U][3U] 
                                                   << 9U) 
                                                  | (vlSelfRef.LD_uop
                                                     [1U][2U] 
                                                     >> 0x17U)))) 
                              >> 4U));
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = (1U | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]);
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                        = ((0x7fU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]) 
                           | (0x3ffU & (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                          ? 1U : 2U) 
                                        << 7U)));
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                        = ((0x8fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]) 
                           | (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                ? 4U : 3U) << 0x1cU));
                }
            } else if ((((8U == (0x3fU & (vlSelfRef.LD_uop
                                          [1U][1U] 
                                          >> 8U))) 
                         | (9U == (0x3fU & (vlSelfRef.LD_uop
                                            [1U][1U] 
                                            >> 8U)))) 
                        | (0xaU == (0x3fU & (vlSelfRef.LD_uop
                                             [1U][1U] 
                                             >> 8U))))) {
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchCorrect)) 
                           | (~ (vlSelfRef.LD_uop[1U][0U] 
                                 >> 0x14U))))) {
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = ((0xfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                           | (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                              << 0x1cU));
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                        = ((0xf0000000U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]) 
                           | (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                              >> 4U));
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                        = ((0x7fU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]) 
                           | (0x3ffU & (((8U == (0x3fU 
                                                 & (vlSelfRef.LD_uop
                                                    [1U][1U] 
                                                    >> 8U)))
                                          ? 3U : 4U) 
                                        << 7U)));
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = (1U | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]);
                    if ((8U == (0x3fU & (vlSelfRef.LD_uop
                                         [1U][1U] >> 8U)))) {
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                            = (0x7fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]);
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                            = (1U | (0x3feU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]));
                    }
                    if ((9U == (0x3fU & (vlSelfRef.LD_uop
                                         [1U][1U] >> 8U)))) {
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                            = (0x80000000U | (0x7fffffffU 
                                              & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]));
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                            = (0x3feU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]);
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__PW_reqs[0U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_pw;
    vlSelfRef.__PVT__bsel__DOT__priorityPort = VL_LTS_III(32, 0U, 
                                                          VL_EXTENDS_II(32,7, 
                                                                        (0x7fU 
                                                                         & (((vlSelfRef.__Vcellinp__bsel__IN_isUOps
                                                                              [1U][1U] 
                                                                              << 0x17U) 
                                                                             | (vlSelfRef.__Vcellinp__bsel__IN_isUOps
                                                                                [1U][1U] 
                                                                                >> 9U)) 
                                                                            - 
                                                                            ((vlSelfRef.__Vcellinp__bsel__IN_isUOps
                                                                              [0U][1U] 
                                                                              << 0x17U) 
                                                                             | (vlSelfRef.__Vcellinp__bsel__IN_isUOps
                                                                                [0U][1U] 
                                                                                >> 9U))))));
    vlSelfRef.__PVT__stLookupUOp[0U] = vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_uop;
    vlSelfRef.__PVT__stLookupUOp[1U] = vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_uop;
    vlSelfRef.__PVT__PW_reqs[1U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_pw;
    vlSelfRef.__PVT__PW_reqs[2U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_pw;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 0U;
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [0U][0U] & ((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready) 
                           | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 1U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [1U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 1U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 1U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [2U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 2U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 1U;
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut = 0U;
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [0U][0U] & ((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready) 
                           | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut = 0U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [1U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 1U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut = 1U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [2U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 2U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut = 2U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [3U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 3U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 1U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut = 3U;
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 0U;
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [0U][0U] & ((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready) 
                           | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 1U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [1U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 1U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 1U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [2U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 2U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 1U;
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut = 0U;
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [0U][0U] & ((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready) 
                           | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut = 0U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [1U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 1U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut = 1U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [2U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 2U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut = 2U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [3U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 3U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 1U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut = 3U;
    }
    vlSelfRef.__PVT__stCommitLimit[0U] = vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_comLimit;
    vlSelfRef.__PVT__stCommitLimit[1U] = vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_comLimit;
    __Vfunc_stDataLd__DOT__ShiftData__0__offs = vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__offs;
    __Vfunc_stDataLd__DOT__ShiftData__0__raw = vlSelfRef.__Vcellout__rfMux__OUT_readData[8U];
    __Vfunc_stDataLd__DOT__ShiftData__0__shifted = 0U;
    if ((0U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__0__offs))) {
        __Vfunc_stDataLd__DOT__ShiftData__0__shifted 
            = __Vfunc_stDataLd__DOT__ShiftData__0__raw;
    } else if ((1U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__0__offs))) {
        __Vfunc_stDataLd__DOT__ShiftData__0__shifted 
            = ((0xffff00ffU & __Vfunc_stDataLd__DOT__ShiftData__0__shifted) 
               | (0xff00U & (__Vfunc_stDataLd__DOT__ShiftData__0__raw 
                             << 8U)));
    } else if ((2U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__0__offs))) {
        __Vfunc_stDataLd__DOT__ShiftData__0__shifted 
            = ((0xffffU & __Vfunc_stDataLd__DOT__ShiftData__0__shifted) 
               | (__Vfunc_stDataLd__DOT__ShiftData__0__raw 
                  << 0x10U));
    } else if ((3U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__0__offs))) {
        __Vfunc_stDataLd__DOT__ShiftData__0__shifted 
            = ((0xffffffU & __Vfunc_stDataLd__DOT__ShiftData__0__shifted) 
               | (__Vfunc_stDataLd__DOT__ShiftData__0__raw 
                  << 0x18U));
    }
    __Vfunc_stDataLd__DOT__ShiftData__0__Vfuncout = __Vfunc_stDataLd__DOT__ShiftData__0__shifted;
    vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__readDataShifted 
        = __Vfunc_stDataLd__DOT__ShiftData__0__Vfuncout;
    __Vfunc_stDataLd__DOT__ShiftData__2__offs = vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__offs;
    __Vfunc_stDataLd__DOT__ShiftData__2__raw = vlSelfRef.__Vcellout__rfMux__OUT_readData[9U];
    __Vfunc_stDataLd__DOT__ShiftData__2__shifted = 0U;
    if ((0U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__2__offs))) {
        __Vfunc_stDataLd__DOT__ShiftData__2__shifted 
            = __Vfunc_stDataLd__DOT__ShiftData__2__raw;
    } else if ((1U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__2__offs))) {
        __Vfunc_stDataLd__DOT__ShiftData__2__shifted 
            = ((0xffff00ffU & __Vfunc_stDataLd__DOT__ShiftData__2__shifted) 
               | (0xff00U & (__Vfunc_stDataLd__DOT__ShiftData__2__raw 
                             << 8U)));
    } else if ((2U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__2__offs))) {
        __Vfunc_stDataLd__DOT__ShiftData__2__shifted 
            = ((0xffffU & __Vfunc_stDataLd__DOT__ShiftData__2__shifted) 
               | (__Vfunc_stDataLd__DOT__ShiftData__2__raw 
                  << 0x10U));
    } else if ((3U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__2__offs))) {
        __Vfunc_stDataLd__DOT__ShiftData__2__shifted 
            = ((0xffffffU & __Vfunc_stDataLd__DOT__ShiftData__2__shifted) 
               | (__Vfunc_stDataLd__DOT__ShiftData__2__raw 
                  << 0x18U));
    }
    __Vfunc_stDataLd__DOT__ShiftData__2__Vfuncout = __Vfunc_stDataLd__DOT__ShiftData__2__shifted;
    vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__readDataShifted 
        = __Vfunc_stDataLd__DOT__ShiftData__2__Vfuncout;
    vlSelfRef.__PVT__SDL_amoData[0U] = vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_amoData;
    vlSelfRef.__PVT__SDL_amoData[1U] = vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_amoData;
    vlSelfRef.__PVT__SDL_amoData[2U] = vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_amoData;
    vlSelfRef.__PVT__lsu__DOT__BLSU_stStall = (0U != (IData)(vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__state));
    vlSelfRef.__PVT__lsu__DOT__BLSU_ldStall = (1U & 
                                               ((0U 
                                                 != (IData)(vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__state)) 
                                                | (vlSelfRef.__PVT__SQB_uop[0U] 
                                                   & (~ (IData)(vlSelfRef.__PVT__lsu__DOT__BLSU_stStall)))));
    vlSelfRef.lsu__DOT____VdfgExtracted_ha53847fe__0 
        = (IData)((0x81U == (0x81U & vlSelfRef.__PVT__SQB_uop[0U])));
    vlSymsp->TOP__Top__soc__core__ifetch.__PVT__IN_pcRead[1U] 
        = vlSelfRef.__PVT__PC_readReq[1U];
    vlSymsp->TOP__Top__soc__core__ifetch.__PVT__IN_pcRead[0U] 
        = vlSelfRef.__PVT__PC_readReq[0U];
    vlSelfRef.__PVT__lsu__DOT__blsuLdIdxValid = 0U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp) 
                          & (IData)(vlSelfRef.__PVT__lsu__DOT__blsuLdIdxValid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.lsu.ohEnc.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.__PVT__lsu__DOT__blsuLdIdxValid = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__lsu__DOT__blsuLdIdxValid) 
                                                    | (IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp) 
                           >> 1U) & (IData)(vlSelfRef.__PVT__lsu__DOT__blsuLdIdxValid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.lsu.ohEnc.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.__PVT__lsu__DOT__blsuLdIdxValid = ((IData)(vlSelfRef.__PVT__lsu__DOT__blsuLdIdxValid) 
                                                 | ((IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp) 
                                                    >> 1U));
    vlSymsp->TOP__Top__soc__IF_mmio.__PVT__re = 1U;
    if ((1U & ((vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][0U] 
                & (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                   [0U][0U] >> 1U)) & (~ (IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp))))) {
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__re = 0U;
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__raddr = 0U;
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__raddr 
            = ((vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][2U] 
                << 0x1cU) | (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                             [0U][1U] >> 4U));
    } else {
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__raddr = 0U;
    }
    if ((1U & ((vlSelfRef.__PVT__lsu__DOT__ldOps_0[1U][0U] 
                & (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                   [1U][0U] >> 1U)) & (~ ((IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp) 
                                          >> 1U))))) {
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__re = 0U;
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__raddr 
            = ((vlSelfRef.__PVT__lsu__DOT__ldOps_0[1U][2U] 
                << 0x1cU) | (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                             [1U][1U] >> 4U));
    }
    lsu__DOT__ohEnc__DOT____Vlvbound_hd3d84657__1 = 
        (1U & ((IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp) 
               >> 1U));
    vlSelfRef.__PVT__lsu__DOT__blsuLdIdx = lsu__DOT__ohEnc__DOT____Vlvbound_hd3d84657__1;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfffff8U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (7U & ((3U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
                    + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                             >> 2U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xffffc7U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x38U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                               >> 4U)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                >> 6U))) 
                       << 3U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfffe3fU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x1c0U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                >> 8U)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                 >> 0xaU))) 
                        << 6U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfff1ffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0xe00U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                >> 0xcU)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                   >> 0xeU))) 
                        << 9U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xff8fffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x7000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                 >> 0x10U)) + (3U & 
                                               (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                >> 0x12U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfc7fffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x38000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                  >> 0x14U)) + (3U 
                                                & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                   >> 0x16U))) 
                          << 0xfU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xe3ffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x1c0000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                   >> 0x18U)) + (3U 
                                                 & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                    >> 0x1aU))) 
                           << 0x12U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0x1fffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0xe00000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                   >> 0x1cU)) + (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                 >> 0x1eU)) 
                           << 0x15U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfffff8U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (7U & ((3U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
                    + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                             >> 2U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xffffc7U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x38U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                               >> 4U)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                >> 6U))) 
                       << 3U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfffe3fU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x1c0U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                >> 8U)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                 >> 0xaU))) 
                        << 6U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfff1ffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0xe00U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                >> 0xcU)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                   >> 0xeU))) 
                        << 9U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xff8fffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x7000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                 >> 0x10U)) + (3U & 
                                               (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                >> 0x12U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfc7fffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x38000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                  >> 0x14U)) + (3U 
                                                & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                   >> 0x16U))) 
                          << 0xfU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xe3ffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x1c0000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                   >> 0x18U)) + (3U 
                                                 & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                    >> 0x1aU))) 
                           << 0x12U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0x1fffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0xe00000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                   >> 0x1cU)) + (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                 >> 0x1eU)) 
                           << 0x15U)));
    vlSelfRef.__PVT__pageWalker__DOT__pwLdRes = 0ULL;
    if ((((IData)(vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp
                  [0U]) & (IData)((vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp
                                   [0U] >> 1U))) & 
         (0x40U == (0x7fU & (IData)((vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp
                                     [0U] >> 2U)))))) {
        vlSelfRef.__PVT__pageWalker__DOT__pwLdRes = 
            vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp
            [0U];
    }
    if ((((IData)(vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp
                  [1U]) & (IData)((vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp
                                   [1U] >> 1U))) & 
         (0x40U == (0x7fU & (IData)((vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp
                                     [1U] >> 2U)))))) {
        vlSelfRef.__PVT__pageWalker__DOT__pwLdRes = 
            vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp
            [1U];
    }
    vlSelfRef.__Vcellinp__bsel__IN_isUOps[1U][0U] = 
        vlSelfRef.IS_uop[1U][0U];
    vlSelfRef.__Vcellinp__bsel__IN_isUOps[1U][1U] = 
        vlSelfRef.IS_uop[1U][1U];
    vlSelfRef.__Vcellinp__bsel__IN_isUOps[1U][2U] = 
        vlSelfRef.IS_uop[1U][2U];
    vlSelfRef.__Vcellinp__bsel__IN_isUOps[1U][3U] = 
        vlSelfRef.IS_uop[1U][3U];
    vlSelfRef.__Vcellinp__bsel__IN_isUOps[0U][0U] = 
        vlSelfRef.IS_uop[0U][0U];
    vlSelfRef.__Vcellinp__bsel__IN_isUOps[0U][1U] = 
        vlSelfRef.IS_uop[0U][1U];
    vlSelfRef.__Vcellinp__bsel__IN_isUOps[0U][2U] = 
        vlSelfRef.IS_uop[0U][2U];
    vlSelfRef.__Vcellinp__bsel__IN_isUOps[0U][3U] = 
        vlSelfRef.IS_uop[0U][3U];
    stDataLd__DOT____Vlvbound_h0bf8c5ab__0 = (0x3fU 
                                              & (vlSelfRef.__PVT__stLookupUOp
                                                 [0U] 
                                                 >> 8U));
    vlSelfRef.__Vcellout__stDataLd__OUT_readReq = (
                                                   (0x3f81U 
                                                    & (IData)(vlSelfRef.__Vcellout__stDataLd__OUT_readReq)) 
                                                   | ((IData)(stDataLd__DOT____Vlvbound_h0bf8c5ab__0) 
                                                      << 1U));
    stDataLd__DOT____Vlvbound_h989db67a__0 = (1U & 
                                              (vlSelfRef.__PVT__stLookupUOp
                                               [0U] 
                                               & (~ 
                                                  (vlSelfRef.__PVT__stLookupUOp
                                                   [0U] 
                                                   >> 0xeU))));
    vlSelfRef.__Vcellout__stDataLd__OUT_readReq = (
                                                   (0x3ffeU 
                                                    & (IData)(vlSelfRef.__Vcellout__stDataLd__OUT_readReq)) 
                                                   | (IData)(stDataLd__DOT____Vlvbound_h989db67a__0));
    stDataLd__DOT____Vlvbound_h0bf8c5ab__0 = (0x3fU 
                                              & (vlSelfRef.__PVT__stLookupUOp
                                                 [1U] 
                                                 >> 8U));
    vlSelfRef.__Vcellout__stDataLd__OUT_readReq = (
                                                   (0xffU 
                                                    & (IData)(vlSelfRef.__Vcellout__stDataLd__OUT_readReq)) 
                                                   | ((IData)(stDataLd__DOT____Vlvbound_h0bf8c5ab__0) 
                                                      << 8U));
    stDataLd__DOT____Vlvbound_h989db67a__0 = (1U & 
                                              (vlSelfRef.__PVT__stLookupUOp
                                               [1U] 
                                               & (~ 
                                                  (vlSelfRef.__PVT__stLookupUOp
                                                   [1U] 
                                                   >> 0xeU))));
    vlSelfRef.__Vcellout__stDataLd__OUT_readReq = (
                                                   (0x3f7fU 
                                                    & (IData)(vlSelfRef.__Vcellout__stDataLd__OUT_readReq)) 
                                                   | ((IData)(stDataLd__DOT____Vlvbound_h989db67a__0) 
                                                      << 7U));
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_stComLimit[1U] 
        = vlSelfRef.__PVT__stCommitLimit[1U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_stComLimit[0U] 
        = vlSelfRef.__PVT__stCommitLimit[0U];
    vlSelfRef.__Vcellinp__stDataLd__IN_atomicUOp[1U] 
        = vlSelfRef.__PVT__SDL_amoData[1U];
    vlSelfRef.__Vcellinp__stDataLd__IN_atomicUOp[0U] 
        = vlSelfRef.__PVT__SDL_amoData[0U];
    vlSelfRef.__PVT__lsu__DOT__isCacheBypassStUOp = 
        ((IData)(vlSelfRef.lsu__DOT____VdfgExtracted_ha53847fe__0) 
         & ((0x10000000U <= ((vlSelfRef.__PVT__SQB_uop[5U] 
                              << 8U) | (vlSelfRef.__PVT__SQB_uop[4U] 
                                        >> 0x18U))) 
            & (0x11000000U > ((vlSelfRef.__PVT__SQB_uop[5U] 
                               << 8U) | (vlSelfRef.__PVT__SQB_uop[4U] 
                                         >> 0x18U)))));
    vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[0U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps_0[vlSelfRef.__PVT__lsu__DOT__blsuLdIdx][0U];
    vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[1U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps_0[vlSelfRef.__PVT__lsu__DOT__blsuLdIdx][1U];
    vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[2U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps_0[vlSelfRef.__PVT__lsu__DOT__blsuLdIdx][2U];
    vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[3U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps_0[vlSelfRef.__PVT__lsu__DOT__blsuLdIdx][3U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xfff0U & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xfU & ((7U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
                      + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                               >> 3U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xff0fU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf0U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                               >> 6U)) + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                >> 9U))) 
                       << 4U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xf0ffU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf00U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                >> 0xcU)) + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                   >> 0xfU))) 
                        << 8U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xfffU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf000U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                 >> 0x12U)) + (7U & 
                                               (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                >> 0x15U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xfff0U & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xfU & ((7U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
                      + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                               >> 3U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xff0fU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf0U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                               >> 6U)) + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                >> 9U))) 
                       << 4U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xf0ffU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf00U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                >> 0xcU)) + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                   >> 0xfU))) 
                        << 8U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xfffU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf000U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                 >> 0x12U)) + (7U & 
                                               (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                >> 0x15U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__pageWalker__DOT__nextLookup = 
        (((IData)((vlSelfRef.__PVT__pageWalker__DOT__pwLdRes 
                   >> 0x13U)) << 0xcU) | (0xffcU & 
                                          (vlSelfRef.__PVT__pageWalker__DOT__pageWalkAddr 
                                           >> 0xaU)));
    __PVT__pageWalker__DOT__unnamedblk2__DOT__pte = (IData)(
                                                            (vlSelfRef.__PVT__pageWalker__DOT__pwLdRes 
                                                             >> 9U));
    vlSelfRef.__PVT__pageWalker__DOT__isSuperPage_c 
        = vlSelfRef.__PVT__pageWalker__DOT__pageWalkIter;
    vlSelfRef.__PVT__pageWalker__DOT__pageFault_c = 0U;
    vlSelfRef.__PVT__pageWalker__DOT__ppn_c = (__PVT__pageWalker__DOT__unnamedblk2__DOT__pte 
                                               >> 0xaU);
    vlSelfRef.__PVT__pageWalker__DOT__rwx_c = 0U;
    vlSelfRef.__PVT__pageWalker__DOT__dagu_c = 0U;
    if ((IData)((0x41U != (0x41U & __PVT__pageWalker__DOT__unnamedblk2__DOT__pte)))) {
        vlSelfRef.__PVT__pageWalker__DOT__pageFault_c = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__pageWalker__DOT__isSuperPage_c) 
         & (0U != (0x3ffU & (__PVT__pageWalker__DOT__unnamedblk2__DOT__pte 
                             >> 0xaU))))) {
        vlSelfRef.__PVT__pageWalker__DOT__pageFault_c = 1U;
    }
    if ((((0U == (7U & (__PVT__pageWalker__DOT__unnamedblk2__DOT__pte 
                        >> 1U))) || (2U == (7U & (__PVT__pageWalker__DOT__unnamedblk2__DOT__pte 
                                                  >> 1U)))) 
         || (6U == (7U & (__PVT__pageWalker__DOT__unnamedblk2__DOT__pte 
                          >> 1U))))) {
        vlSelfRef.__PVT__pageWalker__DOT__pageFault_c = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.__PVT__pageWalker__DOT__pageFault_c)))) {
        vlSelfRef.__PVT__pageWalker__DOT__rwx_c = (
                                                   (4U 
                                                    & (__PVT__pageWalker__DOT__unnamedblk2__DOT__pte 
                                                       << 1U)) 
                                                   | (((IData)(
                                                               (0x84U 
                                                                == 
                                                                (0x84U 
                                                                 & __PVT__pageWalker__DOT__unnamedblk2__DOT__pte))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (__PVT__pageWalker__DOT__unnamedblk2__DOT__pte 
                                                            >> 3U))));
        vlSelfRef.__PVT__pageWalker__DOT__dagu_c = 
            (0xfU & (__PVT__pageWalker__DOT__unnamedblk2__DOT__pte 
                     >> 4U));
    }
    if ((1U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
               & ((~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                  | (IData)(vlSelfRef.__PVT__bsel__DOT__priorityPort))))) {
        vlSelfRef.bsel__DOT____VdfgExtracted_hfc16791f__0[0U] 
            = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U];
        vlSelfRef.bsel__DOT____VdfgExtracted_hfc16791f__0[1U] 
            = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U];
        vlSelfRef.bsel__DOT____VdfgExtracted_hfc16791f__0[2U] 
            = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U];
    } else {
        vlSelfRef.bsel__DOT____VdfgExtracted_hfc16791f__0[0U] 
            = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U];
        vlSelfRef.bsel__DOT____VdfgExtracted_hfc16791f__0[1U] 
            = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U];
        vlSelfRef.bsel__DOT____VdfgExtracted_hfc16791f__0[2U] 
            = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U];
    }
    vlSelfRef.__Vcellinp__rfMux__IN_read[0U] = (IData)(vlSelfRef.__Vcellout__ld__OUT_rfReadReq);
    vlSelfRef.__Vcellinp__rfMux__IN_read[1U] = (((IData)(vlSelfRef.__Vcellout__stDataLd__OUT_readReq) 
                                                 << 0x18U) 
                                                | (IData)(
                                                          (vlSelfRef.__Vcellout__ld__OUT_rfReadReq 
                                                           >> 0x20U)));
    vlSelfRef.__Vcellinp__rfMux__IN_read[2U] = ((IData)(vlSelfRef.__Vcellout__stDataLd__OUT_readReq) 
                                                >> 8U);
    vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopATO 
        = ((0xffffffff00ULL & vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopATO) 
           | (IData)((IData)(((0xfeU & ((IData)((vlSelfRef.__Vcellinp__stDataLd__IN_atomicUOp
                                                 [0U] 
                                                 >> 8U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             vlSelfRef.__Vcellinp__stDataLd__IN_atomicUOp
                                                             [0U]))))));
    vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopATO 
        = ((0xffULL & vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopATO) 
           | ((QData)((IData)((IData)((vlSelfRef.__Vcellinp__stDataLd__IN_atomicUOp
                                       [0U] >> 0xfU)))) 
              << 8U));
    vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopATO 
        = ((0xffffffff00ULL & vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopATO) 
           | (IData)((IData)(((0xfeU & ((IData)((vlSelfRef.__Vcellinp__stDataLd__IN_atomicUOp
                                                 [1U] 
                                                 >> 8U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             vlSelfRef.__Vcellinp__stDataLd__IN_atomicUOp
                                                             [1U]))))));
    vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopATO 
        = ((0xffULL & vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopATO) 
           | ((QData)((IData)((IData)((vlSelfRef.__Vcellinp__stDataLd__IN_atomicUOp
                                       [1U] >> 0xfU)))) 
              << 8U));
    __PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums 
        = ((0x3e0U & (IData)(__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums)) 
           | (0x1fU & ((0xfU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
                       + (0xfU & ((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums) 
                                  >> 4U)))));
    __PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums 
        = ((0x1fU & (IData)(__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums)) 
           | (0x3e0U & (((0xfU & ((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums) 
                                  >> 8U)) + (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums) 
                                              >> 0xcU))) 
                        << 5U)));
    __PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums 
        = ((0x3e0U & (IData)(__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums)) 
           | (0x1fU & ((0xfU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
                       + (0xfU & ((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums) 
                                  >> 4U)))));
    __PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums 
        = ((0x1fU & (IData)(__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums)) 
           | (0x3e0U & (((0xfU & ((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums) 
                                  >> 8U)) + (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums) 
                                              >> 0xcU))) 
                        << 5U)));
    vlSelfRef.__PVT__rfMux__DOT__staticReadEnable = 
        ((0xf8U & (IData)(vlSelfRef.__PVT__rfMux__DOT__staticReadEnable)) 
         | ((4U & (vlSelfRef.__Vcellinp__rfMux__IN_read[0U] 
                   >> 0xcU)) | ((2U & (vlSelfRef.__Vcellinp__rfMux__IN_read[0U] 
                                       >> 6U)) | (1U 
                                                  & vlSelfRef.__Vcellinp__rfMux__IN_read[0U]))));
    vlSelfRef.__PVT__rfMux__DOT__staticReadEnable = 
        ((0xc7U & (IData)(vlSelfRef.__PVT__rfMux__DOT__staticReadEnable)) 
         | ((0x20U & (vlSelfRef.__Vcellinp__rfMux__IN_read[1U] 
                      << 2U)) | ((0x10U & (vlSelfRef.__Vcellinp__rfMux__IN_read[0U] 
                                           >> 0x18U)) 
                                 | (8U & (vlSelfRef.__Vcellinp__rfMux__IN_read[0U] 
                                          >> 0x12U)))));
    vlSelfRef.__PVT__rfMux__DOT__staticReadEnable = 
        ((0x3fU & (IData)(vlSelfRef.__PVT__rfMux__DOT__staticReadEnable)) 
         | ((0x80U & (vlSelfRef.__Vcellinp__rfMux__IN_read[1U] 
                      >> 0xaU)) | (0x40U & (vlSelfRef.__Vcellinp__rfMux__IN_read[1U] 
                                            >> 4U))));
    __PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__outUOp = 0ULL;
    if ((1U & (IData)(vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopATO))) {
        __PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__outUOp 
            = vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopATO;
    } else if ((1U & (IData)(vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopIQ))) {
        __PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__outUOp 
            = vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopIQ;
        if (vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__regFileLookup) {
            __PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__outUOp 
                = ((0xffULL & __PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__outUOp) 
                   | ((QData)((IData)(vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__readDataShifted)) 
                      << 8U));
        }
    }
    __PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__outUOp = 0ULL;
    if ((1U & (IData)(vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopATO))) {
        __PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__outUOp 
            = vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopATO;
    } else if ((1U & (IData)(vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopIQ))) {
        __PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__outUOp 
            = vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopIQ;
        if (vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__regFileLookup) {
            __PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__outUOp 
                = ((0xffULL & __PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__outUOp) 
                   | ((QData)((IData)(vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__readDataShifted)) 
                      << 8U));
        }
    }
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (2U | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = ((2U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U]) | (1U & (IData)(vlSelfRef.__PVT__rfMux__DOT__staticReadEnable)));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (2U | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = ((2U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [1U]) | (1U & ((IData)(vlSelfRef.__PVT__rfMux__DOT__staticReadEnable) 
                           >> 1U)));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (2U | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = ((2U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U]) | (1U & ((IData)(vlSelfRef.__PVT__rfMux__DOT__staticReadEnable) 
                           >> 2U)));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (2U | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = ((2U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [3U]) | (1U & ((IData)(vlSelfRef.__PVT__rfMux__DOT__staticReadEnable) 
                           >> 3U)));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (1U | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [4U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (2U | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [4U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = ((2U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [4U]) | (1U & ((IData)(vlSelfRef.__PVT__rfMux__DOT__staticReadEnable) 
                           >> 4U)));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (1U | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (2U | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = ((2U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [5U]) | (1U & ((IData)(vlSelfRef.__PVT__rfMux__DOT__staticReadEnable) 
                           >> 5U)));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (1U | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [6U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (2U | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [6U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = ((2U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [6U]) | (1U & ((IData)(vlSelfRef.__PVT__rfMux__DOT__staticReadEnable) 
                           >> 6U)));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (1U | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (2U | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = ((2U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [7U]) | (1U & ((IData)(vlSelfRef.__PVT__rfMux__DOT__staticReadEnable) 
                           >> 7U)));
    vlSelfRef.__PVT__SDL_stDataUOp[0U] = __PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__outUOp;
    vlSelfRef.__PVT__SDL_stDataUOp[1U] = __PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__outUOp;
    __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [0U]))));
    __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [2U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [2U]))));
    __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [4U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [4U]))));
    __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [6U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [6U]))));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [4U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [6U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [1U] >> 1U));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0U] >> 1U));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [3U] >> 1U));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [2U] >> 1U));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [5U] >> 1U));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [4U] >> 1U));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [7U] >> 1U));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [6U] >> 1U));
    vlSymsp->TOP__Top__soc__core__sq.__PVT__IN_stDataUOp[1U] 
        = vlSelfRef.__PVT__SDL_stDataUOp[1U];
    vlSymsp->TOP__Top__soc__core__sq.__PVT__IN_stDataUOp[0U] 
        = vlSelfRef.__PVT__SDL_stDataUOp[0U];
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((0xcU & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((2U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 1U)) | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((0xcU & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((2U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 1U)) | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [2U]))]));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((0xcU & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [2U]) | ((2U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [4U] << 1U)) | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [4U]))]));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((0xcU & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [3U]) | ((2U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [6U] << 1U)) | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [6U]))]));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((3U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((8U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 2U)) | (((2U >= (IData)(__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((3U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((8U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 2U)) | (((2U >= (IData)(__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((3U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [2U]) | ((8U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [4U] << 2U)) | (((2U >= (IData)(__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((3U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [3U]) | ((8U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [6U] << 2U)) | (((2U >= (IData)(__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                                  [0U]))));
    __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [2U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                                  [2U]))));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 2U));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0U] >> 2U));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [3U] >> 2U));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [2U] >> 2U));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((0x38U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((4U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [0U] << 2U)) | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((0x38U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [1U]) | ((4U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [2U] << 2U)) | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [2U]))]));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((7U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((0x20U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [0U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((7U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [1U]) | ((0x20U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [2U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [0U] >> 3U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                                  [0U]))));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (7U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (7U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [1U] >> 3U));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (7U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (7U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [0U] >> 3U));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((0xf0U & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [0U]) | ((8U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                            [0U] << 3U)) | vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((0xfU & vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [0U]) | ((0x80U & (vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                               [0U] << 4U)) | (((2U 
                                                 >= (IData)(__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 4U)));
    __PVT__rfMux__DOT__genblk1__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_c[0U] 
        = (7U & ((IData)(__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadValid_c[0U] 
        = (1U & (~ (IData)(__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_c[1U] 
        = (7U & ((IData)(__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 5U));
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadValid_c[1U] 
        = (1U & (~ ((IData)(__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                    >> 4U)));
    vlSelfRef.__PVT__RF_readEnable = vlSelfRef.__PVT__rfMux__DOT__staticReadEnable;
    rfMux__DOT____Vlvbound_h0683f5a1__0 = (0x3fU & 
                                           (vlSelfRef.__Vcellinp__rfMux__IN_read[0U] 
                                            >> 1U));
    vlSelfRef.__Vcellout__rfMux__OUT_readAddress = 
        ((0xffffffffffc0ULL & vlSelfRef.__Vcellout__rfMux__OUT_readAddress) 
         | (IData)((IData)(rfMux__DOT____Vlvbound_h0683f5a1__0)));
    rfMux__DOT____Vlvbound_h0683f5a1__0 = (0x3fU & 
                                           (vlSelfRef.__Vcellinp__rfMux__IN_read[0U] 
                                            >> 8U));
    vlSelfRef.__Vcellout__rfMux__OUT_readAddress = 
        ((0xfffffffff03fULL & vlSelfRef.__Vcellout__rfMux__OUT_readAddress) 
         | ((QData)((IData)(rfMux__DOT____Vlvbound_h0683f5a1__0)) 
            << 6U));
    rfMux__DOT____Vlvbound_h0683f5a1__0 = (0x3fU & 
                                           (vlSelfRef.__Vcellinp__rfMux__IN_read[0U] 
                                            >> 0xfU));
    vlSelfRef.__Vcellout__rfMux__OUT_readAddress = 
        ((0xfffffffc0fffULL & vlSelfRef.__Vcellout__rfMux__OUT_readAddress) 
         | ((QData)((IData)(rfMux__DOT____Vlvbound_h0683f5a1__0)) 
            << 0xcU));
    rfMux__DOT____Vlvbound_h0683f5a1__0 = (0x3fU & 
                                           (vlSelfRef.__Vcellinp__rfMux__IN_read[0U] 
                                            >> 0x16U));
    vlSelfRef.__Vcellout__rfMux__OUT_readAddress = 
        ((0xffffff03ffffULL & vlSelfRef.__Vcellout__rfMux__OUT_readAddress) 
         | ((QData)((IData)(rfMux__DOT____Vlvbound_h0683f5a1__0)) 
            << 0x12U));
    rfMux__DOT____Vlvbound_h0683f5a1__0 = (0x3fU & 
                                           ((vlSelfRef.__Vcellinp__rfMux__IN_read[1U] 
                                             << 3U) 
                                            | (vlSelfRef.__Vcellinp__rfMux__IN_read[0U] 
                                               >> 0x1dU)));
    vlSelfRef.__Vcellout__rfMux__OUT_readAddress = 
        ((0xffffc0ffffffULL & vlSelfRef.__Vcellout__rfMux__OUT_readAddress) 
         | ((QData)((IData)(rfMux__DOT____Vlvbound_h0683f5a1__0)) 
            << 0x18U));
    rfMux__DOT____Vlvbound_h0683f5a1__0 = (0x3fU & 
                                           (vlSelfRef.__Vcellinp__rfMux__IN_read[1U] 
                                            >> 4U));
    vlSelfRef.__Vcellout__rfMux__OUT_readAddress = 
        ((0xfff03fffffffULL & vlSelfRef.__Vcellout__rfMux__OUT_readAddress) 
         | ((QData)((IData)(rfMux__DOT____Vlvbound_h0683f5a1__0)) 
            << 0x1eU));
    rfMux__DOT____Vlvbound_h0683f5a1__0 = (0x3fU & 
                                           (vlSelfRef.__Vcellinp__rfMux__IN_read[1U] 
                                            >> 0xbU));
    vlSelfRef.__Vcellout__rfMux__OUT_readAddress = 
        ((0xfc0fffffffffULL & vlSelfRef.__Vcellout__rfMux__OUT_readAddress) 
         | ((QData)((IData)(rfMux__DOT____Vlvbound_h0683f5a1__0)) 
            << 0x24U));
    rfMux__DOT____Vlvbound_h0683f5a1__0 = (0x3fU & 
                                           (vlSelfRef.__Vcellinp__rfMux__IN_read[1U] 
                                            >> 0x12U));
    vlSelfRef.__Vcellout__rfMux__OUT_readAddress = 
        ((0x3ffffffffffULL & vlSelfRef.__Vcellout__rfMux__OUT_readAddress) 
         | ((QData)((IData)(rfMux__DOT____Vlvbound_h0683f5a1__0)) 
            << 0x2aU));
    if ((vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadValid_c
         [0U] & (vlSelfRef.__Vcellinp__rfMux__IN_read[1U] 
                 >> 0x18U))) {
        vlSelfRef.__PVT__RF_readEnable = ((IData)(vlSelfRef.__PVT__RF_readEnable) 
                                          | (0xffU 
                                             & ((IData)(1U) 
                                                << 
                                                vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_c
                                                [0U])));
        vlSelfRef.rfMux__DOT____Vlvbound_h68b1b333__0 
            = (0x3fU & (vlSelfRef.__Vcellinp__rfMux__IN_read[1U] 
                        >> 0x19U));
        if ((0x2fU >= (0x3fU & ((IData)(6U) * vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_c
                                [0U])))) {
            vlSelfRef.__Vcellout__rfMux__OUT_readAddress 
                = (((~ (0x3fULL << (0x3fU & ((IData)(6U) 
                                             * vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_c
                                             [0U])))) 
                    & vlSelfRef.__Vcellout__rfMux__OUT_readAddress) 
                   | (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rfMux__DOT____Vlvbound_h68b1b333__0)) 
                                           << (0x3fU 
                                               & ((IData)(6U) 
                                                  * 
                                                  vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_c
                                                  [0U])))));
        }
    }
    vlSelfRef.__PVT__RFMUX_readReady = (0xffU | (0x200U 
                                                 & (IData)(vlSelfRef.__PVT__RFMUX_readReady)));
    if ((vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadValid_c
         [0U] & (vlSelfRef.__Vcellinp__rfMux__IN_read[1U] 
                 >> 0x18U))) {
        vlSelfRef.__PVT__RFMUX_readReady = (0x100U 
                                            | (IData)(vlSelfRef.__PVT__RFMUX_readReady));
    }
    vlSelfRef.__PVT__RFMUX_readReady = (0x1ffU & (IData)(vlSelfRef.__PVT__RFMUX_readReady));
    if ((vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadValid_c
         [1U] & (vlSelfRef.__Vcellinp__rfMux__IN_read[1U] 
                 >> 0x1fU))) {
        vlSelfRef.__PVT__RF_readEnable = ((IData)(vlSelfRef.__PVT__RF_readEnable) 
                                          | (0xffU 
                                             & ((IData)(1U) 
                                                << 
                                                vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_c
                                                [1U])));
        vlSelfRef.rfMux__DOT____Vlvbound_h68b1b333__0 
            = (0x3fU & vlSelfRef.__Vcellinp__rfMux__IN_read[2U]);
        if ((0x2fU >= (0x3fU & ((IData)(6U) * vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_c
                                [1U])))) {
            vlSelfRef.__Vcellout__rfMux__OUT_readAddress 
                = (((~ (0x3fULL << (0x3fU & ((IData)(6U) 
                                             * vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_c
                                             [1U])))) 
                    & vlSelfRef.__Vcellout__rfMux__OUT_readAddress) 
                   | (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.rfMux__DOT____Vlvbound_h68b1b333__0)) 
                                           << (0x3fU 
                                               & ((IData)(6U) 
                                                  * 
                                                  vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_c
                                                  [1U])))));
        }
        vlSelfRef.__PVT__RFMUX_readReady = (0x200U 
                                            | (IData)(vlSelfRef.__PVT__RFMUX_readReady));
    }
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_ready 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopATO) 
                     & (IData)(vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopIQ))) 
                 & ((~ (IData)(vlSelfRef.__Vcellout__stDataLd__OUT_readReq)) 
                    | ((IData)(vlSelfRef.__PVT__RFMUX_readReady) 
                       >> 8U))));
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_ready 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopATO) 
                     & (IData)(vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopIQ))) 
                 & ((~ ((IData)(vlSelfRef.__Vcellout__stDataLd__OUT_readReq) 
                        >> 7U)) | ((IData)(vlSelfRef.__PVT__RFMUX_readReady) 
                                   >> 9U))));
    vlSelfRef.__PVT__stLookupUOp_ready[0U] = vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_ready;
    vlSelfRef.__PVT__stLookupUOp_ready[1U] = vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_ready;
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__28(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__28\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*73:0*/ __PVT__trapHandler__DOT__OUT_branch_c;
    VL_ZERO_W(74, __PVT__trapHandler__DOT__OUT_branch_c);
    // Body
    vlSymsp->TOP__Top__soc__IF_mmio.__PVT__we = 1U;
    vlSymsp->TOP__Top__soc__IF_mmio.__PVT__waddr = 0U;
    vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask = 0U;
    vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata = 0U;
    if (vlSelfRef.lsu__DOT____VdfgExtracted_ha53847fe__0) {
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__we = 0U;
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__waddr 
            = ((vlSelfRef.__PVT__SQB_uop[5U] << 8U) 
               | (vlSelfRef.__PVT__SQB_uop[4U] >> 0x18U));
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask 
            = (0xfU & (vlSelfRef.__PVT__SQB_uop[0U] 
                       >> 8U));
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata 
            = ((vlSelfRef.__PVT__SQB_uop[1U] << 8U) 
               | (vlSelfRef.__PVT__SQB_uop[0U] >> 0x18U));
    }
    vlSelfRef.ROB_perfcInfo = vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_perfcInfo;
    vlSelfRef.ROB_trapUOp = vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_trapUOp;
    vlSelfRef.__PVT__trapHandler__DOT__OUT_fence_c = 0U;
    vlSelfRef.__PVT__trapHandler__DOT__OUT_clearICache_c = 0U;
    __PVT__trapHandler__DOT__OUT_branch_c[0U] = 0U;
    __PVT__trapHandler__DOT__OUT_branch_c[1U] = 0U;
    __PVT__trapHandler__DOT__OUT_branch_c[2U] = 0U;
    __PVT__trapHandler__DOT__OUT_branch_c[0U] = (0xfffffffeU 
                                                 & __PVT__trapHandler__DOT__OUT_branch_c[0U]);
    vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U] = 0U;
    vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[1U] = 0U;
    vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[2U] = 0U;
    vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U] 
        = (0xfffffffeU & vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U]);
    vlSelfRef.__PVT__trapHandler__DOT__trapPCSpec_c = 0U;
    vlSelfRef.__PVT__trapHandler__DOT__OUT_flushTLB_c = 0U;
    vlSelfRef.__PVT__trapHandler__DOT__setMemoryWait = 0U;
    vlSelfRef.__PVT__trapHandler__DOT__OUT_dbgStallPC_c 
        = vlSelfRef.__PVT__TH_stallPC;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if ((1U & (IData)(vlSelfRef.ROB_trapUOp))) {
            if (((~ (IData)((vlSelfRef.ROB_trapUOp 
                             >> 0x2fU))) & ((((4U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.ROB_trapUOp 
                                                           >> 0x2bU)))) 
                                              | (5U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.ROB_trapUOp 
                                                             >> 0x2bU))))) 
                                             | (0xeU 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.ROB_trapUOp 
                                                            >> 0x2bU))))) 
                                            | (IData)(
                                                      (0x380000003c00ULL 
                                                       == 
                                                       (0x780000007c00ULL 
                                                        & vlSelfRef.ROB_trapUOp)))))) {
                if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                   >> 0x2eU)))) {
                    if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                       >> 0x2dU)))) {
                        if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                           >> 0x2cU)))) {
                            if ((1U & (~ (IData)((vlSelfRef.ROB_trapUOp 
                                                  >> 0x2bU))))) {
                                __PVT__trapHandler__DOT__OUT_branch_c[2U] 
                                    = (0x39fU & __PVT__trapHandler__DOT__OUT_branch_c[2U]);
                                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                                    = ((0xfffffffU 
                                        & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                                       | (0xe0000000U 
                                          & (vlSelfRef.CSR_trapControl[3U] 
                                             << 0x16U)));
                                __PVT__trapHandler__DOT__OUT_branch_c[1U] 
                                    = ((0xf0000000U 
                                        & __PVT__trapHandler__DOT__OUT_branch_c[1U]) 
                                       | (0xfffffffU 
                                          & ((0xfc00000U 
                                              & (vlSelfRef.CSR_trapControl[4U] 
                                                 << 0x16U)) 
                                             | (vlSelfRef.CSR_trapControl[3U] 
                                                >> 0xaU))));
                            }
                        }
                    }
                } else if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                          >> 0x2dU)))) {
                    if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                       >> 0x2cU)))) {
                        if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                           >> 0x2bU)))) {
                            vlSelfRef.__PVT__trapHandler__DOT__OUT_flushTLB_c = 1U;
                            __PVT__trapHandler__DOT__OUT_branch_c[2U] 
                                = (0x20U | (0x39fU 
                                            & __PVT__trapHandler__DOT__OUT_branch_c[2U]));
                        }
                    } else if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                              >> 0x2bU)))) {
                        __PVT__trapHandler__DOT__OUT_branch_c[2U] 
                            = (0x20U | (0x39fU & __PVT__trapHandler__DOT__OUT_branch_c[2U]));
                    } else {
                        vlSelfRef.__PVT__trapHandler__DOT__OUT_clearICache_c = 1U;
                        vlSelfRef.__PVT__trapHandler__DOT__setMemoryWait = 1U;
                        vlSelfRef.__PVT__trapHandler__DOT__OUT_fence_c = 1U;
                        __PVT__trapHandler__DOT__OUT_branch_c[2U] 
                            = (0x20U | (0x39fU & __PVT__trapHandler__DOT__OUT_branch_c[2U]));
                    }
                }
                if (((0xeU == (0xfU & (IData)((vlSelfRef.ROB_trapUOp 
                                               >> 0x2bU)))) 
                     | (5U == (0xfU & (IData)((vlSelfRef.ROB_trapUOp 
                                               >> 0x2bU)))))) {
                    if ((0x40U & vlSelfRef.CSR_trapControl[0U])) {
                        vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U] 
                            = (1U | vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U]);
                        __PVT__trapHandler__DOT__OUT_branch_c[2U] 
                            = (0x39fU & __PVT__trapHandler__DOT__OUT_branch_c[2U]);
                        vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U] 
                            = (0xffU & vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U]);
                        vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[1U] 
                            = (0xffffff00U & vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[1U]);
                        __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                            = ((0xfffffffU & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                               | (0xf0000000U & (((1U 
                                                   & vlSelfRef.CSR_trapControl[0U])
                                                   ? 
                                                  ((vlSelfRef.CSR_trapControl[2U] 
                                                    << 0x16U) 
                                                   | (vlSelfRef.CSR_trapControl[1U] 
                                                      >> 0xaU))
                                                   : 
                                                  ((vlSelfRef.CSR_trapControl[3U] 
                                                    << 0x17U) 
                                                   | (vlSelfRef.CSR_trapControl[2U] 
                                                      >> 9U))) 
                                                 << 0x1eU)));
                        __PVT__trapHandler__DOT__OUT_branch_c[1U] 
                            = ((0xf0000000U & __PVT__trapHandler__DOT__OUT_branch_c[1U]) 
                               | (0xfffffffU & (((1U 
                                                  & vlSelfRef.CSR_trapControl[0U])
                                                  ? 
                                                 ((vlSelfRef.CSR_trapControl[2U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.CSR_trapControl[1U] 
                                                     >> 0xaU))
                                                  : 
                                                 ((vlSelfRef.CSR_trapControl[3U] 
                                                   << 0x17U) 
                                                  | (vlSelfRef.CSR_trapControl[2U] 
                                                     >> 9U))) 
                                                >> 2U)));
                        if ((0xeU == (0xfU & (IData)(
                                                     (vlSelfRef.ROB_trapUOp 
                                                      >> 0x2bU))))) {
                            vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[1U] 
                                = ((0xffU & vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[1U]) 
                                   | (0xfffffe00U & 
                                      (vlSelfRef.CSR_trapControl[3U] 
                                       << 2U)));
                            vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[2U] 
                                = (0xffU & ((0xfcU 
                                             & (vlSelfRef.CSR_trapControl[4U] 
                                                << 2U)) 
                                            | (vlSelfRef.CSR_trapControl[3U] 
                                               >> 0x1eU)));
                            vlSelfRef.__PVT__trapHandler__DOT__trapPCSpec_c = 0U;
                        } else {
                            vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[1U] 
                                = (0xffU & vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[1U]);
                            vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[2U] = 0U;
                            vlSelfRef.__PVT__trapHandler__DOT__trapPCSpec_c = 1U;
                        }
                        vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U] 
                            = ((0xffffff01U & vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U]) 
                               | (0xfffffffeU & (0x80U 
                                                 | (0x7eU 
                                                    & (vlSelfRef.CSR_trapControl[0U] 
                                                       << 1U)))));
                    }
                }
                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                    = (1U | __PVT__trapHandler__DOT__OUT_branch_c[0U]);
                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                    = ((0xf01fffffU & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                       | (0xfe00000U & ((IData)((vlSelfRef.ROB_trapUOp 
                                                 >> 0x1dU)) 
                                        << 0x15U)));
                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                    = ((0xffe0003fU & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                       | (0xffffffc0U & (0x40U | ((0x1fc000U 
                                                   & ((IData)(
                                                              (vlSelfRef.ROB_trapUOp 
                                                               >> 0xfU)) 
                                                      << 0xeU)) 
                                                  | (0x3f80U 
                                                     & ((IData)(
                                                                (vlSelfRef.ROB_trapUOp 
                                                                 >> 0x16U)) 
                                                        << 7U))))));
                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                    = ((0xffffffc1U & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                       | (0x3eU & ((IData)((vlSelfRef.ROB_trapUOp 
                                            >> 2U)) 
                                   << 1U)));
                __PVT__trapHandler__DOT__OUT_branch_c[1U] 
                    = (0xfffffffU & __PVT__trapHandler__DOT__OUT_branch_c[1U]);
                __PVT__trapHandler__DOT__OUT_branch_c[2U] 
                    = ((0x3e0U & __PVT__trapHandler__DOT__OUT_branch_c[2U]) 
                       | (0xeU & ((IData)((vlSelfRef.ROB_trapUOp 
                                           >> 7U)) 
                                  << 1U)));
                __PVT__trapHandler__DOT__OUT_branch_c[2U] 
                    = (0x7fU & __PVT__trapHandler__DOT__OUT_branch_c[2U]);
            } else if ((1U & ((IData)((vlSelfRef.ROB_trapUOp 
                                       >> 0x2fU)) | 
                              ((6U <= (0xfU & (IData)(
                                                      (vlSelfRef.ROB_trapUOp 
                                                       >> 0x2bU)))) 
                               & (0xdU >= (0xfU & (IData)(
                                                          (vlSelfRef.ROB_trapUOp 
                                                           >> 0x2bU)))))))) {
                vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause = 2U;
                vlSelfRef.__PVT__trapHandler__DOT__trapPCSpec_c 
                    = ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                      >> 1U))) ? 2U
                        : 3U);
                vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__isInterrupt 
                    = (IData)((0x380000004000ULL == 
                               (0xf80000007c00ULL & vlSelfRef.ROB_trapUOp)));
                if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                   >> 0x2fU)))) {
                    vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause = 0x18U;
                } else if (vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__isInterrupt) {
                    vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause 
                        = (0x1fU & (vlSelfRef.CSR_trapControl[0U] 
                                    >> 1U));
                } else {
                    if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                       >> 0x2eU)))) {
                        if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                           >> 0x2dU)))) {
                            if ((1U & (~ (IData)((vlSelfRef.ROB_trapUOp 
                                                  >> 0x2cU))))) {
                                vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause 
                                    = ((1U & (IData)(
                                                     (vlSelfRef.ROB_trapUOp 
                                                      >> 0x2bU)))
                                        ? 0xfU : 7U);
                            }
                        } else {
                            vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause 
                                = ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                                  >> 0x2cU)))
                                    ? ((1U & (IData)(
                                                     (vlSelfRef.ROB_trapUOp 
                                                      >> 0x2bU)))
                                        ? 6U : 0xdU)
                                    : ((1U & (IData)(
                                                     (vlSelfRef.ROB_trapUOp 
                                                      >> 0x2bU)))
                                        ? 5U : 4U));
                        }
                    } else if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                              >> 0x2dU)))) {
                        if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                           >> 0x2cU)))) {
                            vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause 
                                = ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                                  >> 0x2bU)))
                                    ? (0x1fU & (IData)(
                                                       (vlSelfRef.ROB_trapUOp 
                                                        >> 0xaU)))
                                    : 2U);
                        }
                    }
                    if ((0xbU == (IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause))) {
                        if ((1U == (3U & (vlSelfRef.CSR_trapControl[0U] 
                                          >> 7U)))) {
                            vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause = 9U;
                        } else if ((0U == (3U & (vlSelfRef.CSR_trapControl[0U] 
                                                 >> 7U)))) {
                            vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause = 8U;
                        }
                    }
                }
                vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__delegate 
                    = (((0xfU >= (IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause)) 
                        & (3U != (3U & (vlSelfRef.CSR_trapControl[0U] 
                                        >> 7U)))) & 
                       ((IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__isInterrupt)
                         ? ((0x85U >= ((IData)(9U) 
                                       + (0xfU & (IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause)))) 
                            && (1U & (vlSelfRef.CSR_trapControl[
                                      (((IData)(9U) 
                                        + (0xfU & (IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause)))))))
                         : ((0x85U >= ((IData)(0x19U) 
                                       + (0xfU & (IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause)))) 
                            && (1U & (vlSelfRef.CSR_trapControl[
                                      (((IData)(0x19U) 
                                        + (0xfU & (IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x19U) 
                                                      + 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause)))))))));
                vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U] 
                    = (1U | vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U]);
                vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U] 
                    = ((1U & vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U]) 
                       | (((IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__isInterrupt) 
                           << 7U) | (((IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause) 
                                      << 2U) | ((IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__delegate) 
                                                << 1U))));
                vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[1U] 
                    = ((1U & ((IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__isInterrupt) 
                              >> 0x19U)) | ((1U & ((IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause) 
                                                   >> 0x1eU)) 
                                            | ((IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__delegate) 
                                               >> 0x1fU)));
                vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[2U] = 0U;
                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                    = (1U | __PVT__trapHandler__DOT__OUT_branch_c[0U]);
                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                    = ((0xfffffffU & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                       | (0xf0000000U & (((IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__delegate)
                                           ? ((vlSelfRef.CSR_trapControl[2U] 
                                               << 0x16U) 
                                              | (vlSelfRef.CSR_trapControl[1U] 
                                                 >> 0xaU))
                                           : ((vlSelfRef.CSR_trapControl[3U] 
                                               << 0x17U) 
                                              | (vlSelfRef.CSR_trapControl[2U] 
                                                 >> 9U))) 
                                         << 0x1eU)));
                __PVT__trapHandler__DOT__OUT_branch_c[1U] 
                    = ((0xf0000000U & __PVT__trapHandler__DOT__OUT_branch_c[1U]) 
                       | (0xfffffffU & (((IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__delegate)
                                          ? ((vlSelfRef.CSR_trapControl[2U] 
                                              << 0x16U) 
                                             | (vlSelfRef.CSR_trapControl[1U] 
                                                >> 0xaU))
                                          : ((vlSelfRef.CSR_trapControl[3U] 
                                              << 0x17U) 
                                             | (vlSelfRef.CSR_trapControl[2U] 
                                                >> 9U))) 
                                        >> 2U)));
                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                    = ((0xf01fffffU & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                       | (0xfe00000U & ((IData)((vlSelfRef.ROB_trapUOp 
                                                 >> 0x1dU)) 
                                        << 0x15U)));
                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                    = ((0xffe0003fU & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                       | (0xffffffc0U & (0x40U | ((0x1fc000U 
                                                   & ((IData)(
                                                              (vlSelfRef.ROB_trapUOp 
                                                               >> 0xfU)) 
                                                      << 0xeU)) 
                                                  | (0x3f80U 
                                                     & ((IData)(
                                                                (vlSelfRef.ROB_trapUOp 
                                                                 >> 0x16U)) 
                                                        << 7U))))));
                if ((((0xbU == (0xfU & (IData)((vlSelfRef.ROB_trapUOp 
                                                >> 0x2bU)))) 
                      | (0xcU == (0xfU & (IData)((vlSelfRef.ROB_trapUOp 
                                                  >> 0x2bU))))) 
                     | (0xdU == (0xfU & (IData)((vlSelfRef.ROB_trapUOp 
                                                 >> 0x2bU)))))) {
                    __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                        = ((0xffe03fffU & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                           | (0x1fc000U & (((IData)(
                                                    (vlSelfRef.ROB_trapUOp 
                                                     >> 0xfU)) 
                                            - (IData)(1U)) 
                                           << 0xeU)));
                }
                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                    = ((0xffffffc1U & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                       | (0x3eU & ((IData)((vlSelfRef.ROB_trapUOp 
                                            >> 2U)) 
                                   << 1U)));
                __PVT__trapHandler__DOT__OUT_branch_c[1U] 
                    = (0xfffffffU & __PVT__trapHandler__DOT__OUT_branch_c[1U]);
                __PVT__trapHandler__DOT__OUT_branch_c[2U] 
                    = (0xeU & ((IData)((vlSelfRef.ROB_trapUOp 
                                        >> 7U)) << 1U));
            } else {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((0xfU != (0xfU 
                                               & (IData)(
                                                         (vlSelfRef.ROB_trapUOp 
                                                          >> 0x2bU))))))) {
                        VL_WRITEF_NX("[%0t] %%Error: TrapHandler.sv:242: Assertion failed in %NTop.soc.core.trapHandler: 'assert' failed.\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("src/TrapHandler.sv", 242, "");
                    }
                }
                vlSelfRef.__PVT__trapHandler__DOT__OUT_dbgStallPC_c 
                    = vlSelfRef.trapHandler__DOT____VdfgExtracted_h35f639f3__0;
            }
        }
    }
    vlSelfRef.__PVT__branchProvs[3U][0U] = __PVT__trapHandler__DOT__OUT_branch_c[0U];
    vlSelfRef.__PVT__branchProvs[3U][1U] = __PVT__trapHandler__DOT__OUT_branch_c[1U];
    vlSelfRef.__PVT__branchProvs[3U][2U] = __PVT__trapHandler__DOT__OUT_branch_c[2U];
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__29(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__29\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*5:0*/ __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*5:0*/ __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*5:0*/ __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*5:0*/ __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*5:0*/ __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    // Body
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[3U][0U] 
        = vlSelfRef.RN_uop[3U][0U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[3U][1U] 
        = vlSelfRef.RN_uop[3U][1U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[3U][2U] 
        = vlSelfRef.RN_uop[3U][2U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[3U][3U] 
        = vlSelfRef.RN_uop[3U][3U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[3U][4U] 
        = vlSelfRef.RN_uop[3U][4U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[2U][0U] 
        = vlSelfRef.RN_uop[2U][0U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[2U][1U] 
        = vlSelfRef.RN_uop[2U][1U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[2U][2U] 
        = vlSelfRef.RN_uop[2U][2U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[2U][3U] 
        = vlSelfRef.RN_uop[2U][3U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[2U][4U] 
        = vlSelfRef.RN_uop[2U][4U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[1U][0U] 
        = vlSelfRef.RN_uop[1U][0U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[1U][1U] 
        = vlSelfRef.RN_uop[1U][1U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[1U][2U] 
        = vlSelfRef.RN_uop[1U][2U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[1U][3U] 
        = vlSelfRef.RN_uop[1U][3U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[1U][4U] 
        = vlSelfRef.RN_uop[1U][4U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[0U][0U] 
        = vlSelfRef.RN_uop[0U][0U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[0U][1U] 
        = vlSelfRef.RN_uop[0U][1U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[0U][2U] 
        = vlSelfRef.RN_uop[0U][2U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[0U][3U] 
        = vlSelfRef.RN_uop[0U][3U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[0U][4U] 
        = vlSelfRef.RN_uop[0U][4U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (0xeU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((1U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__isBaseCand_c))) {
        if (((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                         [0U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (1U | (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (0xdU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((2U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__isBaseCand_c))) {
        if (((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                         [1U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (2U | (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (0xbU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((4U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__isBaseCand_c))) {
        if (((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                         [2U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (4U | (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (7U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((8U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__isBaseCand_c))) {
        if (((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                         [3U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (8U | (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (0xeU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((1U & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__isBaseCand_c))) {
        if (((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                         [0U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (1U | (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (0xdU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((2U & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__isBaseCand_c))) {
        if (((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                         [1U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (2U | (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (0xbU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((4U & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__isBaseCand_c))) {
        if (((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                         [2U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (4U | (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (7U & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((8U & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__isBaseCand_c))) {
        if (((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                         [3U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (8U | (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (0xeU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((1U & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__isBaseCand_c))) {
        if (((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                         [0U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (1U | (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (0xdU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((2U & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__isBaseCand_c))) {
        if (((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                         [1U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (2U | (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (0xbU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((4U & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__isBaseCand_c))) {
        if (((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                         [2U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (4U | (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (7U & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((8U & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__isBaseCand_c))) {
        if (((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                         [3U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (8U | (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (0xeU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((1U & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__isBaseCand_c))) {
        if (((IData)(vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid) 
             & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                [0U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (1U | (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (0xdU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((2U & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((((IData)(vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid) 
              >> 1U) & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                        [1U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (2U | (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (0xbU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((4U & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((((IData)(vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid) 
              >> 2U) & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                        [2U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (4U | (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (7U & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((8U & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((((IData)(vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid) 
              >> 3U) & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                        [3U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (8U | (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (0xeU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((1U & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__isBaseCand_c))) {
        if (((IData)(vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid) 
             & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                [0U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (1U | (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (0xdU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((2U & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((((IData)(vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid) 
              >> 1U) & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                        [1U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (2U | (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (0xbU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((4U & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((((IData)(vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid) 
              >> 2U) & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                        [2U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (4U | (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
        = (7U & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
    if ((8U & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((((IData)(vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid) 
              >> 3U) & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                        [3U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c 
                = (8U | (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c));
        }
    }
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_flagUOps[6U] 
        = vlSelfRef.flagUOps[6U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_flagUOps[5U] 
        = vlSelfRef.flagUOps[5U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_flagUOps[4U] 
        = vlSelfRef.flagUOps[4U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_flagUOps[3U] 
        = vlSelfRef.flagUOps[3U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_flagUOps[2U] 
        = vlSelfRef.flagUOps[2U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_flagUOps[1U] 
        = vlSelfRef.flagUOps[1U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_flagUOps[0U] 
        = vlSelfRef.flagUOps[0U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U]) | (1U & (~ (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c))));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [1U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c) 
                              >> 1U))));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c) 
                              >> 2U))));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [3U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c) 
                              >> 3U))));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U]) | (1U & (~ (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c))));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [1U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c) 
                              >> 1U))));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c) 
                              >> 2U))));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [3U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c) 
                              >> 3U))));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U]) | (1U & (~ (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c))));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [1U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c) 
                              >> 1U))));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c) 
                              >> 2U))));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [3U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c) 
                              >> 3U))));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U]) | (1U & (~ (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c))));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [1U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c) 
                              >> 1U))));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c) 
                              >> 2U))));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [3U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c) 
                              >> 3U))));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U]) | (1U & (~ (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c))));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [1U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c) 
                              >> 1U))));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c) 
                              >> 2U))));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = ((2U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [3U]) | (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c) 
                              >> 3U))));
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [0U]))));
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [2U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [2U]))));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [1U] >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0U] >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [3U] >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [2U] >> 1U));
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [0U]))));
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [2U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [2U]))));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [1U] >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0U] >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [3U] >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [2U] >> 1U));
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [0U]))));
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [2U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [2U]))));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [1U] >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0U] >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [3U] >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [2U] >> 1U));
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [0U]))));
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [2U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [2U]))));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [1U] >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0U] >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [3U] >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [2U] >> 1U));
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [0U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [0U]))));
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                           [2U] >> 1U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                                  [2U]))));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [1U] >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [0U] >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [3U] >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (1U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                 [2U] >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((0xcU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((2U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 1U)) | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((0xcU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((2U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 1U)) | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [2U]))]));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((3U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((8U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 2U)) | (((2U >= (IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((3U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((8U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 2U)) | (((2U >= (IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((0xcU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((2U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 1U)) | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((0xcU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((2U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 1U)) | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [2U]))]));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((3U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((8U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 2U)) | (((2U >= (IData)(__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((3U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((8U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 2U)) | (((2U >= (IData)(__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((0xcU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((2U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 1U)) | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((0xcU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((2U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 1U)) | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [2U]))]));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((3U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((8U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 2U)) | (((2U >= (IData)(__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((3U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((8U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 2U)) | (((2U >= (IData)(__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((0xcU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((2U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 1U)) | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((0xcU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((2U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 1U)) | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [2U]))]));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((3U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((8U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 2U)) | (((2U >= (IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((3U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((8U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 2U)) | (((2U >= (IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((0xcU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((2U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 1U)) | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((0xcU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((2U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 1U)) | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                             [2U]))]));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((3U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((8U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [0U] << 2U)) | (((2U >= (IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((3U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((8U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                            [2U] << 2U)) | (((2U >= (IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum)) 
                                             && vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                             [__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum]) 
                                            << 2U)));
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                                  [0U]))));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 2U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0U] >> 2U));
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                                  [0U]))));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 2U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0U] >> 2U));
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                                  [0U]))));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 2U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0U] >> 2U));
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                                  [0U]))));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 2U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0U] >> 2U));
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                                  [0U]))));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 2U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0U] >> 2U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((0x38U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((4U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [0U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((7U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((0x20U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [0U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((0x38U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((4U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [0U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((7U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((0x20U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [0U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((0x38U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((4U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [0U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((7U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((0x20U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [0U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((0x38U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((4U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [0U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((7U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((0x20U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [0U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((0x38U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((4U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [0U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((7U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((0x20U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [0U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c[0U] 
        = (3U & ((IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__candValid_c[0U] 
        = (1U & (~ (IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c[1U] 
        = (3U & ((IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 4U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__candValid_c[1U] 
        = (1U & (~ ((IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                    >> 3U)));
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c[0U] 
        = (3U & ((IData)(__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__candValid_c[0U] 
        = (1U & (~ (IData)(__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c[1U] 
        = (3U & ((IData)(__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 4U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__candValid_c[1U] 
        = (1U & (~ ((IData)(__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                    >> 3U)));
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c[0U] 
        = (3U & ((IData)(__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__candValid_c[0U] 
        = (1U & (~ (IData)(__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c[1U] 
        = (3U & ((IData)(__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 4U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__candValid_c[1U] 
        = (1U & (~ ((IData)(__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                    >> 3U)));
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c[0U] 
        = (3U & ((IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__candValid_c[0U] 
        = (1U & (~ (IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c[1U] 
        = (3U & ((IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 4U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__candValid_c[1U] 
        = (1U & (~ ((IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                    >> 3U)));
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c[0U] 
        = (3U & ((IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__candValid_c[0U] 
        = (1U & (~ (IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c[1U] 
        = (3U & ((IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 4U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__candValid_c[1U] 
        = (1U & (~ ((IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                    >> 3U)));
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][0U] = 0U;
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][1U] = 0U;
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][2U] = 0U;
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][3U] = 0U;
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][4U] = 0U;
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][0U] 
        = (0xfffffffeU & vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
           [0U][0U]);
    if ((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__candValid_c
         [0U] & (0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
        vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][0U] 
            = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][0U];
        vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][1U] 
            = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][1U];
        vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][2U] 
            = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][2U];
        vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][3U] 
            = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][3U];
        vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][4U] 
            = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][4U];
    }
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][0U] = 0U;
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][1U] = 0U;
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][2U] = 0U;
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][3U] = 0U;
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][4U] = 0U;
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][0U] 
        = (0xfffffffeU & vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
           [1U][0U]);
    if ((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__candValid_c
         [1U] & (1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
        vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][0U] 
            = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][0U];
        vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][1U] 
            = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][1U];
        vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][2U] 
            = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][2U];
        vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][3U] 
            = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][3U];
        vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][4U] 
            = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][4U];
    }
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][0U] = 0U;
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][1U] = 0U;
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][2U] = 0U;
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][3U] = 0U;
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][4U] = 0U;
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][0U] 
        = (0xfffffffeU & vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
           [0U][0U]);
    if ((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__candValid_c
         [0U] & (0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
        vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][0U] 
            = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][0U];
        vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][1U] 
            = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][1U];
        vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][2U] 
            = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][2U];
        vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][3U] 
            = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][3U];
        vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][4U] 
            = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][4U];
    }
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][0U] = 0U;
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][1U] = 0U;
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][2U] = 0U;
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][3U] = 0U;
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][4U] = 0U;
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][0U] 
        = (0xfffffffeU & vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
           [1U][0U]);
    if ((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__candValid_c
         [1U] & (1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
        vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][0U] 
            = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][0U];
        vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][1U] 
            = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][1U];
        vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][2U] 
            = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][2U];
        vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][3U] 
            = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][3U];
        vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][4U] 
            = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][4U];
    }
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][0U] = 0U;
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][1U] = 0U;
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][2U] = 0U;
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][3U] = 0U;
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][4U] = 0U;
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][0U] 
        = (0xfffffffeU & vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
           [0U][0U]);
    if ((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__candValid_c
         [0U] & (0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
        vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][0U] 
            = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][0U];
        vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][1U] 
            = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][1U];
        vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][2U] 
            = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][2U];
        vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][3U] 
            = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][3U];
        vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][4U] 
            = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][4U];
    }
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][0U] = 0U;
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][1U] = 0U;
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][2U] = 0U;
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][3U] = 0U;
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][4U] = 0U;
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][0U] 
        = (0xfffffffeU & vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
           [1U][0U]);
    if ((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__candValid_c
         [1U] & (1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
        vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][0U] 
            = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][0U];
        vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][1U] 
            = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][1U];
        vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][2U] 
            = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][2U];
        vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][3U] 
            = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][3U];
        vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][4U] 
            = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][4U];
    }
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][0U] = 0U;
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][1U] = 0U;
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][2U] = 0U;
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][3U] = 0U;
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][4U] = 0U;
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][0U] 
        = (0xfffffffeU & vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
           [0U][0U]);
    if ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__candValid_c
         [0U] & (0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
        vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][0U] 
            = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][0U];
        vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][1U] 
            = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][1U];
        vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][2U] 
            = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][2U];
        vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][3U] 
            = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][3U];
        vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][4U] 
            = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][4U];
    }
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][0U] = 0U;
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][1U] = 0U;
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][2U] = 0U;
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][3U] = 0U;
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][4U] = 0U;
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][0U] 
        = (0xfffffffeU & vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
           [1U][0U]);
    if ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__candValid_c
         [1U] & (1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
        vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][0U] 
            = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][0U];
        vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][1U] 
            = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][1U];
        vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][2U] 
            = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][2U];
        vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][3U] 
            = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][3U];
        vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][4U] 
            = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][4U];
    }
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][0U] = 0U;
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][1U] = 0U;
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][2U] = 0U;
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][3U] = 0U;
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][4U] = 0U;
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][0U] 
        = (0xfffffffeU & vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
           [0U][0U]);
    if ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__candValid_c
         [0U] & (0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
        vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][0U] 
            = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][0U];
        vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][1U] 
            = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][1U];
        vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][2U] 
            = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][2U];
        vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][3U] 
            = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][3U];
        vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[0U][4U] 
            = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [0U]][4U];
    }
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][0U] = 0U;
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][1U] = 0U;
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][2U] = 0U;
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][3U] = 0U;
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][4U] = 0U;
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][0U] 
        = (0xfffffffeU & vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
           [1U][0U]);
    if ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__candValid_c
         [1U] & (1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__numAllowedEnq_c)))) {
        vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][0U] 
            = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][0U];
        vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][1U] 
            = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][1U];
        vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][2U] 
            = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][2U];
        vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][3U] 
            = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][3U];
        vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[1U][4U] 
            = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops
            [vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c
            [1U]][4U];
    }
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates[1U][0U] 
        = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][0U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates[1U][1U] 
        = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][1U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates[1U][2U] 
        = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][2U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates[1U][3U] 
        = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][3U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates[1U][4U] 
        = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][4U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates[0U][0U] 
        = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][0U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates[0U][1U] 
        = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][1U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates[0U][2U] 
        = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][2U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates[0U][3U] 
        = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][3U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates[0U][4U] 
        = vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][4U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqCandidates[1U][0U] 
        = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][0U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqCandidates[1U][1U] 
        = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][1U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqCandidates[1U][2U] 
        = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][2U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqCandidates[1U][3U] 
        = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][3U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqCandidates[1U][4U] 
        = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][4U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqCandidates[0U][0U] 
        = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][0U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqCandidates[0U][1U] 
        = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][1U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqCandidates[0U][2U] 
        = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][2U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqCandidates[0U][3U] 
        = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][3U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqCandidates[0U][4U] 
        = vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][4U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqCandidates[1U][0U] 
        = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][0U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqCandidates[1U][1U] 
        = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][1U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqCandidates[1U][2U] 
        = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][2U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqCandidates[1U][3U] 
        = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][3U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqCandidates[1U][4U] 
        = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][4U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqCandidates[0U][0U] 
        = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][0U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqCandidates[0U][1U] 
        = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][1U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqCandidates[0U][2U] 
        = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][2U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqCandidates[0U][3U] 
        = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][3U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqCandidates[0U][4U] 
        = vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][4U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqCandidates[1U][0U] 
        = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][0U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqCandidates[1U][1U] 
        = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][1U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqCandidates[1U][2U] 
        = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][2U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqCandidates[1U][3U] 
        = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][3U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqCandidates[1U][4U] 
        = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][4U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqCandidates[0U][0U] 
        = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][0U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqCandidates[0U][1U] 
        = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][1U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqCandidates[0U][2U] 
        = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][2U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqCandidates[0U][3U] 
        = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][3U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqCandidates[0U][4U] 
        = vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][4U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqCandidates[1U][0U] 
        = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][0U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqCandidates[1U][1U] 
        = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][1U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqCandidates[1U][2U] 
        = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][2U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqCandidates[1U][3U] 
        = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][3U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqCandidates[1U][4U] 
        = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [1U][4U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqCandidates[0U][0U] 
        = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][0U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqCandidates[0U][1U] 
        = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][1U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqCandidates[0U][2U] 
        = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][2U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqCandidates[0U][3U] 
        = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][3U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqCandidates[0U][4U] 
        = vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops
        [0U][4U];
}
