// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IFetchPipeline.h"
#include "VTop__Syms.h"

extern const VlWide<8>/*255:0*/ VTop__ConstPool__CONST_hbd3d39cf_0;

VL_INLINE_OPT void VTop_IFetchPipeline___ico_sequent__TOP__Top__soc__core__ifetch__ifp__1(VTop_IFetchPipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IFetchPipeline___ico_sequent__TOP__Top__soc__core__ifetch__ifp__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__BH_endOffsetValid;
    __PVT__BH_endOffsetValid = 0;
    CData/*2:0*/ __PVT__BH_endOffset;
    __PVT__BH_endOffset = 0;
    CData/*0:0*/ __PVT__BH_newPredTaken;
    __PVT__BH_newPredTaken = 0;
    CData/*2:0*/ __PVT__BH_newPredPos;
    __PVT__BH_newPredPos = 0;
    CData/*0:0*/ __PVT__cacheHit;
    __PVT__cacheHit = 0;
    CData/*0:0*/ __PVT__doCacheLoad;
    __PVT__doCacheLoad = 0;
    CData/*0:0*/ __PVT__unnamedblk3__DOT__transferExists;
    __PVT__unnamedblk3__DOT__transferExists = 0;
    CData/*0:0*/ __PVT__unnamedblk3__DOT__allowPassThru;
    __PVT__unnamedblk3__DOT__allowPassThru = 0;
    CData/*0:0*/ instrAligner__DOT____Vlvbound_hced28d0f__0;
    instrAligner__DOT____Vlvbound_hced28d0f__0 = 0;
    // Body
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
    vlSelfRef.__PVT__instrAligner__DOT__outputReady 
        = (1U & ((~ vlSelfRef.__PVT__OUT_instrs[0U][0U]) 
                 | (IData)(vlSymsp->TOP__Top__soc__core.__Vcellinp__idec__en)));
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
    vlSelfRef.__PVT__OUT_retUpdate = 0ULL;
    __PVT__BH_endOffsetValid = 0U;
    __PVT__BH_endOffset = 0U;
    __PVT__BH_newPredPos = 0U;
    __PVT__BH_newPredTaken = 0U;
    vlSelfRef.__PVT__BH_decBranch = 0ULL;
    if ((1U & vlSelfRef.__PVT__packet[0U])) {
        vlSelfRef.__PVT__OUT_retUpdate = vlSelfRef.__PVT__branchHandler__DOT__retUpd_c;
        __PVT__BH_endOffsetValid = vlSelfRef.__PVT__branchHandler__DOT__endOffsValid;
        __PVT__BH_endOffset = vlSelfRef.__PVT__branchHandler__DOT__endOffs;
        __PVT__BH_newPredPos = vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c;
        __PVT__BH_newPredTaken = vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c;
        vlSelfRef.__PVT__BH_decBranch = vlSelfRef.__PVT__branchHandler__DOT__decBranch_c;
    }
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfffffeU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | (IData)(instrAligner__DOT____Vlvbound_hced28d0f__0));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & ((1U 
                                                            & (~ 
                                                               ((0x17U 
                                                                 >= 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [3U]) 
                                                                && (1U 
                                                                    & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                       >> 
                                                                       vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                       [3U]))))) 
                                                           && (1U 
                                                               > 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfffffdU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 1U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (1U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (2U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfffffbU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 2U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (2U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (3U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfffff7U & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 3U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (3U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (4U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xffffefU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 4U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (4U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (5U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xffffdfU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 5U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (5U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (6U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xffffbfU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 6U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (6U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (7U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xffff7fU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 7U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (7U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (8U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfffeffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 8U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (8U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (9U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfffdffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 9U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (9U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0xaU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfffbffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0xaU));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0xaU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0xbU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfff7ffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0xbU));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0xbU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0xcU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xffefffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0xcU));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0xcU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0xdU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xffdfffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0xdU));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0xdU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0xeU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xffbfffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0xeU));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0xeU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0xfU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xff7fffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0xfU));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0xfU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0x10U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfeffffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0x10U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0x10U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0x11U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfdffffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0x11U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0x11U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0x12U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfbffffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0x12U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0x12U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0x13U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xf7ffffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0x13U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0x13U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0x14U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xefffffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0x14U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0x14U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0x15U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xdfffffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0x15U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0x15U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0x16U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xbfffffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0x16U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0x16U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0x17U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0x7fffffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0x17U));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xff7fffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | (0x8000U & ((0xffff8000U & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
                         | ((IData)(vlSelfRef.__PVT__instrAligner__DOT__middleIsSplit32) 
                            << 0xfU))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0x7fffffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(((vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
                        >> 0x17U) | ((IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c) 
                                     >> 7U))) << 0x17U));
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
    vlSelfRef.packetRePred[0U] = vlSelfRef.__PVT__packet[0U];
    vlSelfRef.packetRePred[1U] = vlSelfRef.__PVT__packet[1U];
    vlSelfRef.packetRePred[2U] = vlSelfRef.__PVT__packet[2U];
    vlSelfRef.packetRePred[3U] = vlSelfRef.__PVT__packet[3U];
    vlSelfRef.packetRePred[4U] = vlSelfRef.__PVT__packet[4U];
    vlSelfRef.packetRePred[5U] = vlSelfRef.__PVT__packet[5U];
    vlSelfRef.packetRePred[6U] = vlSelfRef.__PVT__packet[6U];
    if ((0U == (3U & (vlSelfRef.packetRePred[5U] >> 0xaU)))) {
        if (__PVT__BH_endOffsetValid) {
            if ((0U == (IData)(__PVT__BH_endOffset))) {
                vlSelfRef.packetRePred[0U] = 0U;
                vlSelfRef.packetRePred[1U] = 0U;
                vlSelfRef.packetRePred[2U] = 0U;
                vlSelfRef.packetRePred[3U] = 0U;
                vlSelfRef.packetRePred[4U] = 0U;
                vlSelfRef.packetRePred[5U] = 0U;
                vlSelfRef.packetRePred[6U] = 0U;
                vlSelfRef.packetRePred[0U] = (0xfffffffeU 
                                              & vlSelfRef.packetRePred[0U]);
            } else {
                vlSelfRef.packetRePred[5U] = ((0xffffff8fU 
                                               & vlSelfRef.packetRePred[5U]) 
                                              | (0x70U 
                                                 & (((IData)(__PVT__BH_endOffset) 
                                                     - (IData)(1U)) 
                                                    << 4U)));
            }
            if (((7U & (vlSelfRef.packetRePred[5U] 
                        >> 7U)) > (7U & (vlSelfRef.packetRePred[5U] 
                                         >> 4U)))) {
                vlSelfRef.packetRePred[0U] = 0U;
                vlSelfRef.packetRePred[1U] = 0U;
                vlSelfRef.packetRePred[2U] = 0U;
                vlSelfRef.packetRePred[3U] = 0U;
                vlSelfRef.packetRePred[4U] = 0U;
                vlSelfRef.packetRePred[5U] = 0U;
                vlSelfRef.packetRePred[6U] = 0U;
                vlSelfRef.packetRePred[0U] = (0xfffffffeU 
                                              & vlSelfRef.packetRePred[0U]);
            }
        }
        if ((1U & (IData)(vlSelfRef.__PVT__BH_decBranch))) {
            vlSelfRef.packetRePred[4U] = ((1U & vlSelfRef.packetRePred[4U]) 
                                          | ((IData)(
                                                     (((QData)((IData)(__PVT__BH_newPredPos)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (((IData)(__PVT__BH_newPredTaken) 
                                                                          << 0x1fU) 
                                                                         | (0x7fffffffU 
                                                                            & (IData)(
                                                                                (vlSelfRef.__PVT__BH_decBranch 
                                                                                >> 7U)))))))) 
                                             << 1U));
            vlSelfRef.packetRePred[5U] = ((0xfffffff0U 
                                           & vlSelfRef.packetRePred[5U]) 
                                          | (((IData)(
                                                      (((QData)((IData)(__PVT__BH_newPredPos)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         (((IData)(__PVT__BH_newPredTaken) 
                                                                           << 0x1fU) 
                                                                          | (0x7fffffffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.__PVT__BH_decBranch 
                                                                                >> 7U)))))))) 
                                              >> 0x1fU) 
                                             | ((IData)(
                                                        ((((QData)((IData)(__PVT__BH_newPredPos)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            (((IData)(__PVT__BH_newPredTaken) 
                                                                              << 0x1fU) 
                                                                             | (0x7fffffffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__BH_decBranch 
                                                                                >> 7U))))))) 
                                                         >> 0x20U)) 
                                                << 1U)));
        }
    }
    vlSelfRef.__PVT__OUT_fetchBranch = vlSelfRef.__PVT__BH_decBranch;
    if (((IData)(vlSelfRef.__PVT__cacheMiss) | (IData)(vlSelfRef.__PVT__tlbMiss))) {
        vlSelfRef.__PVT__OUT_fetchBranch = (0x1000000000000ULL 
                                            | (((QData)((IData)(
                                                                (7U 
                                                                 & (vlSelfRef.fetch1[2U] 
                                                                    >> 0x19U)))) 
                                                << 0x2bU) 
                                               | (((QData)((IData)(
                                                                   (0x7fffffffU 
                                                                    & ((vlSelfRef.fetch1[3U] 
                                                                        << 7U) 
                                                                       | (vlSelfRef.fetch1[2U] 
                                                                          >> 0x19U))))) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     | (0x7cU 
                                                                        & (vlSelfRef.fetch1[2U] 
                                                                           >> 0x11U))))))));
    }
    vlSelfRef.__PVT__IA_ready = ((~ (IData)((0U != 
                                             (0xffU 
                                              & (vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
                                                 & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c))))) 
                                 & (IData)(vlSelfRef.__PVT__outFIFO__DOT__outValidReg));
    vlSelfRef.__PVT__outFIFO__DOT__outputReady = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__outFIFO__DOT__outValidReg)) 
                                                     | (IData)(vlSelfRef.__PVT__IA_ready)));
    vlSelfRef.__PVT__outFIFO__DOT__doExtract = ((~ (IData)(vlSelfRef.__PVT__outFIFO__DOT__empty)) 
                                                & (IData)(vlSelfRef.__PVT__outFIFO__DOT__outputReady));
    vlSelfRef.__PVT__outFIFO__DOT__doInsert = (1U & 
                                               (vlSelfRef.packetRePred[0U] 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__outFIFO__DOT__fullCond) 
                                                     & (IData)(vlSelfRef.__PVT__outFIFO__DOT__equal))) 
                                                   | (IData)(vlSelfRef.__PVT__outFIFO__DOT__doExtract))));
}

VL_INLINE_OPT void VTop_IFetchPipeline___ico_sequent__TOP__Top__soc__core__ifetch__ifp__2(VTop_IFetchPipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IFetchPipeline___ico_sequent__TOP__Top__soc__core__ifetch__ifp__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__Top__soc__IF_icache.__PVT__re = 0U;
    vlSymsp->TOP__Top__soc__IF_icache.__PVT__raddr = 0U;
    vlSymsp->TOP__Top__soc__IF_ict.__PVT__re = 0U;
    vlSymsp->TOP__Top__soc__IF_ict.__PVT__raddr = 0U;
    if ((1U & (vlSymsp->TOP__Top__soc__core__ifetch.__PVT__ifetchOp[0U] 
               & (~ (IData)(vlSelfRef.__PVT__OUT_stall))))) {
        vlSymsp->TOP__Top__soc__IF_icache.__PVT__re = 1U;
        vlSymsp->TOP__Top__soc__IF_icache.__PVT__raddr 
            = (0xfffU & ((vlSymsp->TOP__Top__soc__core__ifetch.__PVT__ifetchOp[3U] 
                          << 8U) | (vlSymsp->TOP__Top__soc__core__ifetch.__PVT__ifetchOp[2U] 
                                    >> 0x18U)));
        vlSymsp->TOP__Top__soc__IF_ict.__PVT__re = 1U;
        vlSymsp->TOP__Top__soc__IF_ict.__PVT__raddr 
            = (0xfffU & ((vlSymsp->TOP__Top__soc__core__ifetch.__PVT__ifetchOp[3U] 
                          << 8U) | (vlSymsp->TOP__Top__soc__core__ifetch.__PVT__ifetchOp[2U] 
                                    >> 0x18U)));
    }
}

VL_INLINE_OPT void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__0(VTop_IFetchPipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__flushAssocIter = vlSelfRef.__PVT__flushAssocIter;
    vlSelfRef.__Vdly__flushAddrIter = vlSelfRef.__PVT__flushAddrIter;
    vlSelfRef.__Vdly__flushState = vlSelfRef.__PVT__flushState;
    vlSelfRef.__Vdly__fetchID = vlSelfRef.fetchID;
    vlSelfRef.__Vdly__fetch1[0U] = vlSelfRef.fetch1[0U];
    vlSelfRef.__Vdly__fetch1[1U] = vlSelfRef.fetch1[1U];
    vlSelfRef.__Vdly__fetch1[2U] = vlSelfRef.fetch1[2U];
    vlSelfRef.__Vdly__fetch1[3U] = vlSelfRef.fetch1[3U];
    vlSelfRef.__Vdly__fetch1[0U] = 0U;
    vlSelfRef.__Vdly__fetch1[1U] = 0U;
    vlSelfRef.__Vdly__fetch1[2U] = 0U;
    vlSelfRef.__Vdly__fetch1[3U] = 0U;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__flushState = 1U;
        vlSelfRef.__Vdly__flushAssocIter = 0U;
        vlSelfRef.__Vdly__flushAddrIter = 0U;
        vlSelfRef.__Vdly__fetchID = 0U;
        vlSelfRef.__PVT__branchHandler__DOT__lastInstr = 0U;
        vlSelfRef.__PVT__branchHandler__DOT__lastInstrPC = 0U;
        vlSelfRef.__PVT__branchHandler__DOT__lastInstrValid = 0U;
    } else {
        if ((1U == (IData)(vlSelfRef.__PVT__flushState))) {
            vlSelfRef.__Vdly__flushState = 2U;
            vlSelfRef.__Vdly__flushAssocIter = 0U;
            vlSelfRef.__Vdly__flushAddrIter = 0U;
            if ((1U & (vlSelfRef.fetch0[0U] | vlSelfRef.fetch1[0U]))) {
                vlSelfRef.__Vdly__flushState = 1U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__flushState))) {
            vlSelfRef.__PVT__unnamedblk4__DOT__flushDone 
                = (1U & (((IData)(1U) + (((IData)(vlSelfRef.__PVT__flushAssocIter) 
                                          << 6U) | (IData)(vlSelfRef.__PVT__flushAddrIter))) 
                         >> 8U));
            vlSelfRef.__PVT__unnamedblk4__DOT__nextFlushAssoc 
                = (3U & (((IData)(1U) + (((IData)(vlSelfRef.__PVT__flushAssocIter) 
                                          << 6U) | (IData)(vlSelfRef.__PVT__flushAddrIter))) 
                         >> 6U));
            vlSelfRef.__PVT__unnamedblk4__DOT__nextFlushAddr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__flushAddrIter)));
            vlSelfRef.__Vdly__flushAssocIter = vlSelfRef.__PVT__unnamedblk4__DOT__nextFlushAssoc;
            vlSelfRef.__Vdly__flushAddrIter = vlSelfRef.__PVT__unnamedblk4__DOT__nextFlushAddr;
            if (vlSelfRef.__PVT__unnamedblk4__DOT__flushDone) {
                vlSelfRef.__Vdly__flushState = ((IData)(vlSymsp->TOP__Top__soc__core.__PVT__MEM_busy)
                                                 ? 3U
                                                 : 0U);
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__flushState))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__Top__soc__core.__PVT__MEM_busy)))) {
                vlSelfRef.__Vdly__flushState = 0U;
            }
        } else {
            vlSelfRef.__Vdly__flushState = 0U;
            vlSelfRef.__Vdly__flushAssocIter = 0U;
            vlSelfRef.__Vdly__flushAddrIter = 0U;
            if (vlSymsp->TOP__Top__soc__core.__PVT__TH_clearICache) {
                vlSelfRef.__Vdly__flushState = 1U;
            }
        }
        if (vlSymsp->TOP__Top__soc__core__ifetch.__Vcellinp__ifp__IN_mispr) {
            vlSelfRef.__Vdly__fetchID = (0x1fU & ((IData)(1U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Top__soc__core.branch[0U])
                                                    ? 
                                                   ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                     << 0x1fU) 
                                                    | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                       >> 1U))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__Top__soc__core.__PVT__decBranch) 
                                                    >> 5U))));
            vlSelfRef.__PVT__branchHandler__DOT__lastInstr = 0U;
            vlSelfRef.__PVT__branchHandler__DOT__lastInstrValid = 0U;
        } else {
            if ((1U & (IData)(vlSelfRef.__PVT__BH_decBranch))) {
                vlSelfRef.__Vdly__fetchID = (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelfRef.__PVT__BH_decBranch 
                                                           >> 2U))));
            } else if (((IData)(vlSelfRef.__PVT__cacheMiss) 
                        | (IData)(vlSelfRef.__PVT__tlbMiss))) {
                vlSelfRef.__Vdly__fetchID = (0x1fU 
                                             & (vlSelfRef.fetch1[2U] 
                                                >> 0x13U));
            } else if ((1U & vlSelfRef.fetch0[0U])) {
                vlSelfRef.__Vdly__fetch1[0U] = vlSelfRef.fetch0[0U];
                vlSelfRef.__Vdly__fetch1[1U] = vlSelfRef.fetch0[1U];
                vlSelfRef.__Vdly__fetch1[2U] = vlSelfRef.fetch0[2U];
                vlSelfRef.__Vdly__fetch1[3U] = vlSelfRef.fetch0[3U];
                vlSelfRef.__Vdly__fetch1[2U] = ((0xff07ffffU 
                                                 & vlSelfRef.__Vdly__fetch1[2U]) 
                                                | ((IData)(vlSelfRef.fetchID) 
                                                   << 0x13U));
                vlSelfRef.__Vdly__fetch1[0U] = ((1U 
                                                 & vlSelfRef.__Vdly__fetch1[0U]) 
                                                | ((IData)(
                                                           (((QData)((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__OUT_curRetAddr)) 
                                                             << 5U) 
                                                            | (QData)((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__OUT_curIdx)))) 
                                                   << 1U));
                vlSelfRef.__Vdly__fetch1[1U] = (((IData)(
                                                         (((QData)((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__OUT_curRetAddr)) 
                                                           << 5U) 
                                                          | (QData)((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__OUT_curIdx)))) 
                                                 >> 0x1fU) 
                                                | (((IData)(vlSymsp->TOP__Top__soc__core__ifetch.predBr) 
                                                    << 5U) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__OUT_curRetAddr)) 
                                                                 << 5U) 
                                                                | (QData)((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__OUT_curIdx))) 
                                                               >> 0x20U)) 
                                                      << 1U)));
                vlSelfRef.__Vdly__fetch1[2U] = ((0xfffe0000U 
                                                 & vlSelfRef.__Vdly__fetch1[2U]) 
                                                | (((1U 
                                                     & ((IData)(vlSymsp->TOP__Top__soc__core__ifetch.predBr) 
                                                        >> 0x1bU)) 
                                                    | ((IData)(
                                                               ((((QData)((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__OUT_curRetAddr)) 
                                                                  << 5U) 
                                                                 | (QData)((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__OUT_curIdx))) 
                                                                >> 0x20U)) 
                                                       >> 0x1fU)) 
                                                   | (((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_lastOffs) 
                                                       << 0xeU) 
                                                      | ((0x1eU 
                                                          & ((IData)(vlSymsp->TOP__Top__soc__core__ifetch.predBr) 
                                                             >> 0x1bU)) 
                                                         | ((IData)(
                                                                    (vlSymsp->TOP__Top__soc__core__ifetch.predBr 
                                                                     >> 0x20U)) 
                                                            << 5U)))));
                vlSelfRef.__Vdly__fetchID = (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.fetchID)));
            }
            if ((1U & vlSelfRef.__PVT__packet[0U])) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk18__DOT__lastIdx 
                    = (0xfU & ((IData)(1U) + (7U & 
                                              (vlSelfRef.fetch1[2U] 
                                               >> 0xeU))));
                if ((((8U >= (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk18__DOT__lastIdx)) 
                      && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                >> (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk18__DOT__lastIdx)))) 
                     & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__decBranch_c)))) {
                    vlSelfRef.__PVT__branchHandler__DOT__lastInstrValid = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__lastInstr 
                        = (0xffffU & vlSelfRef.__PVT__branchHandler__DOT__instrsView[4U]);
                    vlSelfRef.__PVT__branchHandler__DOT__lastInstrPC 
                        = vlSelfRef.__PVT__branchHandler__DOT__pc
                        [8U];
                } else {
                    vlSelfRef.__PVT__branchHandler__DOT__lastInstrValid = 0U;
                    vlSelfRef.__PVT__branchHandler__DOT__lastInstr = 0U;
                }
            }
        }
    }
    vlSelfRef.__PVT__OUT_pcFileAddr = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if ((1U & vlSelfRef.fetch1[0U])) {
            vlSelfRef.__PVT__OUT_pcFileAddr = (0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U));
        }
    }
    vlSelfRef.__PVT__TLB_res = vlSelfRef.__Vcellout__itlb__OUT_res
        [0U];
}

VL_INLINE_OPT void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__1(VTop_IFetchPipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ branchHandler__DOT____Vlvbound_ha2f56b24__0;
    branchHandler__DOT____Vlvbound_ha2f56b24__0 = 0;
    // Body
    vlSelfRef.__PVT__OUT_pcFileWE = 0U;
    vlSelfRef.__PVT__OUT_pcFileEntry = 0ULL;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if ((1U & vlSelfRef.fetch1[0U])) {
            vlSelfRef.__PVT__OUT_pcFileWE = 1U;
            vlSelfRef.__PVT__OUT_pcFileEntry = (((QData)((IData)(
                                                                 (0x7fffffffU 
                                                                  & ((vlSelfRef.fetch1[3U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.fetch1[2U] 
                                                                        >> 0x19U))))) 
                                                 << 4U) 
                                                | (QData)((IData)(
                                                                  (0xfU 
                                                                   & vlSelfRef.packetRePred[5U]))));
        }
    }
    vlSelfRef.fetch1[0U] = vlSelfRef.__Vdly__fetch1[0U];
    vlSelfRef.fetch1[1U] = vlSelfRef.__Vdly__fetch1[1U];
    vlSelfRef.fetch1[2U] = vlSelfRef.__Vdly__fetch1[2U];
    vlSelfRef.fetch1[3U] = vlSelfRef.__Vdly__fetch1[3U];
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
}

extern const VlWide<14>/*447:0*/ VTop__ConstPool__CONST_h7893fc35_0;

VL_INLINE_OPT void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__2(VTop_IFetchPipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*204:0*/ __PVT__FIFO_out;
    VL_ZERO_W(205, __PVT__FIFO_out);
    CData/*0:0*/ __PVT__instrAligner__DOT__validInstrStart_c;
    __PVT__instrAligner__DOT__validInstrStart_c = 0;
    CData/*0:0*/ __PVT__instrAligner__DOT__is32bit;
    __PVT__instrAligner__DOT__is32bit = 0;
    CData/*0:0*/ instrAligner__DOT____Vlvbound_hededc4e5__0;
    instrAligner__DOT____Vlvbound_hededc4e5__0 = 0;
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
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    IData/*23:0*/ __PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    VlWide<14>/*441:0*/ __Vdly__instrAligner__DOT__prev_r;
    VL_ZERO_W(442, __Vdly__instrAligner__DOT__prev_r);
    // Body
    vlSelfRef.__Vdly__outFIFO__DOT__indexOut = vlSelfRef.__PVT__outFIFO__DOT__indexOut;
    __Vdly__instrAligner__DOT__prev_r[0U] = vlSelfRef.__PVT__instrAligner__DOT__prev_r[0U];
    __Vdly__instrAligner__DOT__prev_r[1U] = vlSelfRef.__PVT__instrAligner__DOT__prev_r[1U];
    __Vdly__instrAligner__DOT__prev_r[2U] = vlSelfRef.__PVT__instrAligner__DOT__prev_r[2U];
    __Vdly__instrAligner__DOT__prev_r[3U] = vlSelfRef.__PVT__instrAligner__DOT__prev_r[3U];
    __Vdly__instrAligner__DOT__prev_r[4U] = vlSelfRef.__PVT__instrAligner__DOT__prev_r[4U];
    __Vdly__instrAligner__DOT__prev_r[5U] = vlSelfRef.__PVT__instrAligner__DOT__prev_r[5U];
    __Vdly__instrAligner__DOT__prev_r[6U] = vlSelfRef.__PVT__instrAligner__DOT__prev_r[6U];
    __Vdly__instrAligner__DOT__prev_r[7U] = vlSelfRef.__PVT__instrAligner__DOT__prev_r[7U];
    __Vdly__instrAligner__DOT__prev_r[8U] = vlSelfRef.__PVT__instrAligner__DOT__prev_r[8U];
    __Vdly__instrAligner__DOT__prev_r[9U] = vlSelfRef.__PVT__instrAligner__DOT__prev_r[9U];
    __Vdly__instrAligner__DOT__prev_r[0xaU] = vlSelfRef.__PVT__instrAligner__DOT__prev_r[0xaU];
    __Vdly__instrAligner__DOT__prev_r[0xbU] = vlSelfRef.__PVT__instrAligner__DOT__prev_r[0xbU];
    __Vdly__instrAligner__DOT__prev_r[0xcU] = vlSelfRef.__PVT__instrAligner__DOT__prev_r[0xcU];
    __Vdly__instrAligner__DOT__prev_r[0xdU] = vlSelfRef.__PVT__instrAligner__DOT__prev_r[0xdU];
    if (vlSymsp->TOP.rst) {
        __Vdly__instrAligner__DOT__prev_r[0U] = VTop__ConstPool__CONST_h7893fc35_0[0U];
        __Vdly__instrAligner__DOT__prev_r[1U] = VTop__ConstPool__CONST_h7893fc35_0[1U];
        __Vdly__instrAligner__DOT__prev_r[2U] = VTop__ConstPool__CONST_h7893fc35_0[2U];
        __Vdly__instrAligner__DOT__prev_r[3U] = VTop__ConstPool__CONST_h7893fc35_0[3U];
        __Vdly__instrAligner__DOT__prev_r[4U] = VTop__ConstPool__CONST_h7893fc35_0[4U];
        __Vdly__instrAligner__DOT__prev_r[5U] = VTop__ConstPool__CONST_h7893fc35_0[5U];
        __Vdly__instrAligner__DOT__prev_r[6U] = VTop__ConstPool__CONST_h7893fc35_0[6U];
        __Vdly__instrAligner__DOT__prev_r[7U] = VTop__ConstPool__CONST_h7893fc35_0[7U];
        __Vdly__instrAligner__DOT__prev_r[8U] = VTop__ConstPool__CONST_h7893fc35_0[8U];
        __Vdly__instrAligner__DOT__prev_r[9U] = VTop__ConstPool__CONST_h7893fc35_0[9U];
        __Vdly__instrAligner__DOT__prev_r[0xaU] = VTop__ConstPool__CONST_h7893fc35_0[0xaU];
        __Vdly__instrAligner__DOT__prev_r[0xbU] = VTop__ConstPool__CONST_h7893fc35_0[0xbU];
        __Vdly__instrAligner__DOT__prev_r[0xcU] = VTop__ConstPool__CONST_h7893fc35_0[0xcU];
        __Vdly__instrAligner__DOT__prev_r[0xdU] = VTop__ConstPool__CONST_h7893fc35_0[0xdU];
    } else {
        if (vlSelfRef.__PVT__IA_ready) {
            vlSelfRef.instrAligner__DOT____Vlvbound_hd7591fb5__0 
                = (0xffU & (((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U] 
                              << 0x1bU) | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U] 
                                           >> 5U)) 
                            & (vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
                               >> 8U)));
            __Vdly__instrAligner__DOT__prev_r[0U] = 
                ((0xffff00ffU & __Vdly__instrAligner__DOT__prev_r[0U]) 
                 | ((IData)(vlSelfRef.instrAligner__DOT____Vlvbound_hd7591fb5__0) 
                    << 8U));
            vlSelfRef.instrAligner__DOT____Vlvbound_h4d56b7ca__0 
                = (0xffU & ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U] 
                             << 3U) | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[6U] 
                                       >> 0x1dU)));
            __Vdly__instrAligner__DOT__prev_r[0U] = 
                ((0xffffff00U & __Vdly__instrAligner__DOT__prev_r[0U]) 
                 | (IData)(vlSelfRef.instrAligner__DOT____Vlvbound_h4d56b7ca__0));
            vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[0U] 
                = ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[8U] 
                    << 0x13U) | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[7U] 
                                 >> 0xdU));
            vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[1U] 
                = ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[9U] 
                    << 0x13U) | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[8U] 
                                 >> 0xdU));
            vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[2U] 
                = ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xaU] 
                    << 0x13U) | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[9U] 
                                 >> 0xdU));
            vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[3U] 
                = ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xbU] 
                    << 0x13U) | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xaU] 
                                 >> 0xdU));
            vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[4U] 
                = ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xcU] 
                    << 0x13U) | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xbU] 
                                 >> 0xdU));
            vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[5U] 
                = ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xdU] 
                    << 0x13U) | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xcU] 
                                 >> 0xdU));
            vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[6U] 
                = (0x1fffU & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xdU] 
                              >> 0xdU));
            __Vdly__instrAligner__DOT__prev_r[0U] = 
                ((0xffffU & __Vdly__instrAligner__DOT__prev_r[0U]) 
                 | (vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[0U] 
                    << 0x10U));
            __Vdly__instrAligner__DOT__prev_r[1U] = 
                ((vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[0U] 
                  >> 0x10U) | (vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[1U] 
                               << 0x10U));
            __Vdly__instrAligner__DOT__prev_r[2U] = 
                ((vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[1U] 
                  >> 0x10U) | (vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[2U] 
                               << 0x10U));
            __Vdly__instrAligner__DOT__prev_r[3U] = 
                ((vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[2U] 
                  >> 0x10U) | (vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[3U] 
                               << 0x10U));
            __Vdly__instrAligner__DOT__prev_r[4U] = 
                ((vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[3U] 
                  >> 0x10U) | (vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[4U] 
                               << 0x10U));
            __Vdly__instrAligner__DOT__prev_r[5U] = 
                ((vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[4U] 
                  >> 0x10U) | (vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[5U] 
                               << 0x10U));
            __Vdly__instrAligner__DOT__prev_r[6U] = 
                ((0xe0000000U & __Vdly__instrAligner__DOT__prev_r[6U]) 
                 | ((vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[5U] 
                     >> 0x10U) | (vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[6U] 
                                  << 0x10U)));
            vlSelfRef.instrAligner__DOT____Vlvbound_hd7591fb5__0 
                = (0xffU & (((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xeU] 
                              << 0x1eU) | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xeU] 
                                           >> 2U)) 
                            & (vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
                               >> 0x10U)));
            __Vdly__instrAligner__DOT__prev_r[7U] = 
                ((0xffffe01fU & __Vdly__instrAligner__DOT__prev_r[7U]) 
                 | ((IData)(vlSelfRef.instrAligner__DOT____Vlvbound_hd7591fb5__0) 
                    << 5U));
            vlSelfRef.instrAligner__DOT____Vlvbound_h4d56b7ca__0 
                = (0xffU & ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xeU] 
                             << 6U) | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xdU] 
                                       >> 0x1aU)));
            __Vdly__instrAligner__DOT__prev_r[6U] = 
                ((0x1fffffffU & __Vdly__instrAligner__DOT__prev_r[6U]) 
                 | ((IData)(vlSelfRef.instrAligner__DOT____Vlvbound_h4d56b7ca__0) 
                    << 0x1dU));
            __Vdly__instrAligner__DOT__prev_r[7U] = 
                ((0xffffffe0U & __Vdly__instrAligner__DOT__prev_r[7U]) 
                 | ((IData)(vlSelfRef.instrAligner__DOT____Vlvbound_h4d56b7ca__0) 
                    >> 3U));
            vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[0U] 
                = ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xfU] 
                    << 0x16U) | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xeU] 
                                 >> 0xaU));
            vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[1U] 
                = ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x10U] 
                    << 0x16U) | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0xfU] 
                                 >> 0xaU));
            vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[2U] 
                = ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x11U] 
                    << 0x16U) | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x10U] 
                                 >> 0xaU));
            vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[3U] 
                = ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x12U] 
                    << 0x16U) | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x11U] 
                                 >> 0xaU));
            vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[4U] 
                = ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x13U] 
                    << 0x16U) | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x12U] 
                                 >> 0xaU));
            vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[5U] 
                = ((vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x14U] 
                    << 0x16U) | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x13U] 
                                 >> 0xaU));
            vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[6U] 
                = (0x1fffU & (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[0x14U] 
                              >> 0xaU));
            __Vdly__instrAligner__DOT__prev_r[7U] = 
                ((0x1fffU & __Vdly__instrAligner__DOT__prev_r[7U]) 
                 | (vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[0U] 
                    << 0xdU));
            __Vdly__instrAligner__DOT__prev_r[8U] = 
                ((vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[0U] 
                  >> 0x13U) | (vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[1U] 
                               << 0xdU));
            __Vdly__instrAligner__DOT__prev_r[9U] = 
                ((vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[1U] 
                  >> 0x13U) | (vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[2U] 
                               << 0xdU));
            __Vdly__instrAligner__DOT__prev_r[0xaU] 
                = ((vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[2U] 
                    >> 0x13U) | (vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[3U] 
                                 << 0xdU));
            __Vdly__instrAligner__DOT__prev_r[0xbU] 
                = ((vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[3U] 
                    >> 0x13U) | (vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[4U] 
                                 << 0xdU));
            __Vdly__instrAligner__DOT__prev_r[0xcU] 
                = ((vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[4U] 
                    >> 0x13U) | (vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[5U] 
                                 << 0xdU));
            __Vdly__instrAligner__DOT__prev_r[0xdU] 
                = (0x3ffffffU & ((vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[5U] 
                                  >> 0x13U) | (vlSelfRef.instrAligner__DOT____Vlvbound_h3416e45f__0[6U] 
                                               << 0xdU)));
        } else {
            vlSelfRef.instrAligner__DOT____Vlvbound_hb894d813__0 
                = (0xffU & (((vlSelfRef.__PVT__instrAligner__DOT__prev_r[0U] 
                              << 0x18U) | (vlSelfRef.__PVT__instrAligner__DOT__prev_r[0U] 
                                           >> 8U)) 
                            & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c));
            __Vdly__instrAligner__DOT__prev_r[0U] = 
                ((0xffff00ffU & __Vdly__instrAligner__DOT__prev_r[0U]) 
                 | ((IData)(vlSelfRef.instrAligner__DOT____Vlvbound_hb894d813__0) 
                    << 8U));
            vlSelfRef.instrAligner__DOT____Vlvbound_hb894d813__0 
                = (0xffU & (((vlSelfRef.__PVT__instrAligner__DOT__prev_r[7U] 
                              << 0x1bU) | (vlSelfRef.__PVT__instrAligner__DOT__prev_r[7U] 
                                           >> 5U)) 
                            & (vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
                               >> 8U)));
            __Vdly__instrAligner__DOT__prev_r[7U] = 
                ((0xffffe01fU & __Vdly__instrAligner__DOT__prev_r[7U]) 
                 | ((IData)(vlSelfRef.instrAligner__DOT____Vlvbound_hb894d813__0) 
                    << 5U));
        }
        if (vlSymsp->TOP__Top__soc__core__ifetch.__Vcellinp__ifp__IN_mispr) {
            __Vdly__instrAligner__DOT__prev_r[0U] = 
                VTop__ConstPool__CONST_h7893fc35_0[0U];
            __Vdly__instrAligner__DOT__prev_r[1U] = 
                VTop__ConstPool__CONST_h7893fc35_0[1U];
            __Vdly__instrAligner__DOT__prev_r[2U] = 
                VTop__ConstPool__CONST_h7893fc35_0[2U];
            __Vdly__instrAligner__DOT__prev_r[3U] = 
                VTop__ConstPool__CONST_h7893fc35_0[3U];
            __Vdly__instrAligner__DOT__prev_r[4U] = 
                VTop__ConstPool__CONST_h7893fc35_0[4U];
            __Vdly__instrAligner__DOT__prev_r[5U] = 
                VTop__ConstPool__CONST_h7893fc35_0[5U];
            __Vdly__instrAligner__DOT__prev_r[6U] = 
                VTop__ConstPool__CONST_h7893fc35_0[6U];
            __Vdly__instrAligner__DOT__prev_r[7U] = 
                VTop__ConstPool__CONST_h7893fc35_0[7U];
            __Vdly__instrAligner__DOT__prev_r[8U] = 
                VTop__ConstPool__CONST_h7893fc35_0[8U];
            __Vdly__instrAligner__DOT__prev_r[9U] = 
                VTop__ConstPool__CONST_h7893fc35_0[9U];
            __Vdly__instrAligner__DOT__prev_r[0xaU] 
                = VTop__ConstPool__CONST_h7893fc35_0[0xaU];
            __Vdly__instrAligner__DOT__prev_r[0xbU] 
                = VTop__ConstPool__CONST_h7893fc35_0[0xbU];
            __Vdly__instrAligner__DOT__prev_r[0xcU] 
                = VTop__ConstPool__CONST_h7893fc35_0[0xcU];
            __Vdly__instrAligner__DOT__prev_r[0xdU] 
                = VTop__ConstPool__CONST_h7893fc35_0[0xdU];
        }
    }
    if (vlSelfRef.__Vcellinp__outFIFO__rst) {
        vlSelfRef.__Vdly__outFIFO__DOT__indexOut = 0U;
        vlSelfRef.__PVT__outFIFO__DOT__outDataReg[0U] = 0U;
        vlSelfRef.__PVT__outFIFO__DOT__outDataReg[1U] = 0U;
        vlSelfRef.__PVT__outFIFO__DOT__outDataReg[2U] = 0U;
        vlSelfRef.__PVT__outFIFO__DOT__outDataReg[3U] = 0U;
        vlSelfRef.__PVT__outFIFO__DOT__outDataReg[4U] = 0U;
        vlSelfRef.__PVT__outFIFO__DOT__outDataReg[5U] = 0U;
        vlSelfRef.__PVT__outFIFO__DOT__outDataReg[6U] = 0U;
        vlSelfRef.__PVT__outFIFO__DOT__outValidReg = 0U;
    } else {
        if (vlSelfRef.__PVT__outFIFO__DOT__outputReady) {
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[0U] = 0U;
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[1U] = 0U;
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[2U] = 0U;
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[3U] = 0U;
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[4U] = 0U;
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[5U] = 0U;
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[6U] = 0U;
        }
        if (vlSelfRef.__PVT__IA_ready) {
            vlSelfRef.__PVT__outFIFO__DOT__outValidReg = 0U;
        }
        if ((((IData)(vlSelfRef.__PVT__outFIFO__DOT__empty) 
              & (IData)(vlSelfRef.__PVT__outFIFO__DOT__doInsert)) 
             & (IData)(vlSelfRef.__PVT__outFIFO__DOT__outputReady))) {
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[0U] 
                = ((vlSelfRef.packetRePred[1U] << 0x1fU) 
                   | (vlSelfRef.packetRePred[0U] >> 1U));
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[1U] 
                = ((vlSelfRef.packetRePred[2U] << 0x1fU) 
                   | (vlSelfRef.packetRePred[1U] >> 1U));
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[2U] 
                = ((vlSelfRef.packetRePred[3U] << 0x1fU) 
                   | (vlSelfRef.packetRePred[2U] >> 1U));
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[3U] 
                = ((vlSelfRef.packetRePred[4U] << 0x1fU) 
                   | (vlSelfRef.packetRePred[3U] >> 1U));
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[4U] 
                = ((vlSelfRef.packetRePred[5U] << 0x1fU) 
                   | (vlSelfRef.packetRePred[4U] >> 1U));
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[5U] 
                = ((vlSelfRef.packetRePred[6U] << 0x1fU) 
                   | (vlSelfRef.packetRePred[5U] >> 1U));
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[6U] 
                = (0xfffU & (vlSelfRef.packetRePred[6U] 
                             >> 1U));
            vlSelfRef.__PVT__outFIFO__DOT__outValidReg = 1U;
        } else if (vlSelfRef.__PVT__outFIFO__DOT__doExtract) {
            vlSelfRef.__Vdly__outFIFO__DOT__indexOut 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__outFIFO__DOT__indexOut)));
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[0U] 
                = vlSelfRef.__PVT__outFIFO__DOT__mem
                [vlSelfRef.__PVT__outFIFO__DOT__indexOut][0U];
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[1U] 
                = vlSelfRef.__PVT__outFIFO__DOT__mem
                [vlSelfRef.__PVT__outFIFO__DOT__indexOut][1U];
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[2U] 
                = vlSelfRef.__PVT__outFIFO__DOT__mem
                [vlSelfRef.__PVT__outFIFO__DOT__indexOut][2U];
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[3U] 
                = vlSelfRef.__PVT__outFIFO__DOT__mem
                [vlSelfRef.__PVT__outFIFO__DOT__indexOut][3U];
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[4U] 
                = vlSelfRef.__PVT__outFIFO__DOT__mem
                [vlSelfRef.__PVT__outFIFO__DOT__indexOut][4U];
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[5U] 
                = vlSelfRef.__PVT__outFIFO__DOT__mem
                [vlSelfRef.__PVT__outFIFO__DOT__indexOut][5U];
            vlSelfRef.__PVT__outFIFO__DOT__outDataReg[6U] 
                = vlSelfRef.__PVT__outFIFO__DOT__mem
                [vlSelfRef.__PVT__outFIFO__DOT__indexOut][6U];
            vlSelfRef.__PVT__outFIFO__DOT__outValidReg = 1U;
        }
    }
    vlSelfRef.__PVT__instrAligner__DOT__prev_r[0U] 
        = __Vdly__instrAligner__DOT__prev_r[0U];
    vlSelfRef.__PVT__instrAligner__DOT__prev_r[1U] 
        = __Vdly__instrAligner__DOT__prev_r[1U];
    vlSelfRef.__PVT__instrAligner__DOT__prev_r[2U] 
        = __Vdly__instrAligner__DOT__prev_r[2U];
    vlSelfRef.__PVT__instrAligner__DOT__prev_r[3U] 
        = __Vdly__instrAligner__DOT__prev_r[3U];
    vlSelfRef.__PVT__instrAligner__DOT__prev_r[4U] 
        = __Vdly__instrAligner__DOT__prev_r[4U];
    vlSelfRef.__PVT__instrAligner__DOT__prev_r[5U] 
        = __Vdly__instrAligner__DOT__prev_r[5U];
    vlSelfRef.__PVT__instrAligner__DOT__prev_r[6U] 
        = __Vdly__instrAligner__DOT__prev_r[6U];
    vlSelfRef.__PVT__instrAligner__DOT__prev_r[7U] 
        = __Vdly__instrAligner__DOT__prev_r[7U];
    vlSelfRef.__PVT__instrAligner__DOT__prev_r[8U] 
        = __Vdly__instrAligner__DOT__prev_r[8U];
    vlSelfRef.__PVT__instrAligner__DOT__prev_r[9U] 
        = __Vdly__instrAligner__DOT__prev_r[9U];
    vlSelfRef.__PVT__instrAligner__DOT__prev_r[0xaU] 
        = __Vdly__instrAligner__DOT__prev_r[0xaU];
    vlSelfRef.__PVT__instrAligner__DOT__prev_r[0xbU] 
        = __Vdly__instrAligner__DOT__prev_r[0xbU];
    vlSelfRef.__PVT__instrAligner__DOT__prev_r[0xcU] 
        = __Vdly__instrAligner__DOT__prev_r[0xcU];
    vlSelfRef.__PVT__instrAligner__DOT__prev_r[0xdU] 
        = __Vdly__instrAligner__DOT__prev_r[0xdU];
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
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0U] << 4U)) | (((4U 
                                                 >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                               << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [2U] << 4U)) | (((4U 
                                                 >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                               << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [2U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [4U] << 4U)) | (((4U 
                                                 >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                               << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [3U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [6U] << 4U)) | (((4U 
                                                 >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                               << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[4U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [4U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [8U] << 4U)) | (((4U 
                                                 >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                               << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[5U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [5U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0xaU] << 4U)) | (((4U 
                                                   >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                  && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                  [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                                 << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[6U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [6U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0xcU] << 4U)) | (((4U 
                                                   >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                  && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                  [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                                 << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[7U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [7U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0xeU] << 4U)) | (((4U 
                                                   >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                  && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                  [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                                 << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[8U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [8U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0x10U] << 4U)) | ((
                                                   (4U 
                                                    >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                   && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                   [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                                  << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[9U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [9U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0x12U] << 4U)) | ((
                                                   (4U 
                                                    >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                   && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                   [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                                  << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xaU] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xaU]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                 [0x14U] << 4U)) | 
                       (((4U >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                         && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__3__KET____DOT__mux
                         [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                        << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xbU] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xbU]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                 [0x16U] << 4U)) | 
                       (((4U >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                         && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__3__KET____DOT__mux
                         [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                        << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xcU] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xcU]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                 [0x18U] << 4U)) | 
                       (((4U >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                         && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__3__KET____DOT__mux
                         [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                        << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xdU] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xdU]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                 [0x1aU] << 4U)) | 
                       (((4U >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                         && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__3__KET____DOT__mux
                         [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                        << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xeU] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xeU]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                 [0x1cU] << 4U)) | 
                       (((4U >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                         && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__3__KET____DOT__mux
                         [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                        << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xfU] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xfU]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                 [0x1eU] << 4U)) | 
                       (((4U >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                         && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__3__KET____DOT__mux
                         [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                        << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [4U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [6U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [9U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [8U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xbU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xaU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xdU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xcU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xfU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xeU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [3U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [2U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [5U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [4U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [7U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [6U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [9U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [9U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [8U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xbU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xbU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xaU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xdU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xdU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xcU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xfU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xfU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xeU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [3U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [3U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [2U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [5U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [5U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [4U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [7U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [7U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [6U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [9U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [9U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [9U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [8U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xbU] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xbU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xbU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xaU] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xdU] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xdU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xdU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xcU] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xfU] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xfU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xfU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xeU] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [3U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [3U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [3U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [2U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [5U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [5U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [5U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [4U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [7U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [7U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [7U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [6U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [9U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [9U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [9U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [9U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [8U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xbU] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xbU] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xbU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xbU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xaU] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xdU] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xdU] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xdU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xdU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xcU] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xfU] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xfU] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xfU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xfU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xeU] >> 6U));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                                  [0U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [2U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                                  [2U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [4U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                                  [4U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [6U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                                  [6U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [8U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                                  [8U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0xaU] >> 2U))) + (1U & 
                                              (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                               [0xaU]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0xcU] >> 2U))) + (1U & 
                                              (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                               [0xcU]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0xeU] >> 2U))) + (1U & 
                                              (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                               [0xeU]))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((0xff8U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((4U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [0U] << 2U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((0xff8U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [1U]) | ((4U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [2U] << 2U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [2U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[2U] 
        = ((0xff8U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [2U]) | ((4U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [4U] << 2U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [4U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[3U] 
        = ((0xff8U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [3U]) | ((4U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [6U] << 2U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [6U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[4U] 
        = ((0xff8U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [4U]) | ((4U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [8U] << 2U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [8U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[5U] 
        = ((0xff8U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [5U]) | ((4U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [0xaU] << 2U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [0xaU]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[6U] 
        = ((0xff8U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [6U]) | ((4U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [0xcU] << 2U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [0xcU]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[7U] 
        = ((0xff8U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [7U]) | ((4U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [0xeU] << 2U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [0xeU]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((0xfc7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [0U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0U] >> 4U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((0xfc7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [1U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [2U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [2U] >> 4U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[2U] 
        = ((0xfc7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [2U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [4U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [4U] >> 4U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[3U] 
        = ((0xfc7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [3U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [6U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [6U] >> 4U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[4U] 
        = ((0xfc7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [4U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [8U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [8U] >> 4U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[5U] 
        = ((0xfc7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [5U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [0xaU] << 3U)) | (((2U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                   ? 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                   : 0U) 
                                                 << 3U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0xaU] >> 4U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[6U] 
        = ((0xfc7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [6U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [0xcU] << 3U)) | (((2U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                   ? 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                   : 0U) 
                                                 << 3U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0xcU] >> 4U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[7U] 
        = ((0xfc7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [7U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [0xeU] << 3U)) | (((2U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                   ? 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                   : 0U) 
                                                 << 3U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0xeU] >> 4U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((0xe3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((0x100U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [0U] << 4U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                << 6U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0U] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((0xe3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [1U]) | ((0x100U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [2U] << 4U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                << 6U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [2U] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[2U] 
        = ((0xe3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [2U]) | ((0x100U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [4U] << 4U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                << 6U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [4U] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[3U] 
        = ((0xe3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [3U]) | ((0x100U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [6U] << 4U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                << 6U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [6U] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[4U] 
        = ((0xe3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [4U]) | ((0x100U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [8U] << 4U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                << 6U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [8U] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[5U] 
        = ((0xe3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [5U]) | ((0x100U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [0xaU] << 4U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                  << 6U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0xaU] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[6U] 
        = ((0xe3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [6U]) | ((0x100U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [0xcU] << 4U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                  << 6U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0xcU] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[7U] 
        = ((0xe3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [7U]) | ((0x100U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [0xeU] << 4U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                  << 6U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0xeU] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((0x1ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [0U] << 5U)) | (((4U 
                                                  >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                  ? 
                                                 vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                  : 0U) 
                                                << 9U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((0x1ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [1U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [2U] << 5U)) | (((4U 
                                                  >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                  ? 
                                                 vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                  : 0U) 
                                                << 9U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[2U] 
        = ((0x1ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [2U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [4U] << 5U)) | (((4U 
                                                  >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                  ? 
                                                 vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                  : 0U) 
                                                << 9U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[3U] 
        = ((0x1ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [3U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [6U] << 5U)) | (((4U 
                                                  >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                  ? 
                                                 vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                  : 0U) 
                                                << 9U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[4U] 
        = ((0x1ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [4U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [8U] << 5U)) | (((4U 
                                                  >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                  ? 
                                                 vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                  : 0U) 
                                                << 9U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[5U] 
        = ((0x1ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [5U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [0xaU] << 5U)) | ((
                                                   (4U 
                                                    >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                    ? 
                                                   vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                   [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                    : 0U) 
                                                  << 9U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[6U] 
        = ((0x1ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [6U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [0xcU] << 5U)) | ((
                                                   (4U 
                                                    >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                    ? 
                                                   vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                   [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                    : 0U) 
                                                  << 9U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[7U] 
        = ((0x1ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [7U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [0xeU] << 5U)) | ((
                                                   (4U 
                                                    >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                    ? 
                                                   vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                   [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                    : 0U) 
                                                  << 9U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [4U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [6U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [1U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [0U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [3U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [2U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [5U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [4U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [7U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [6U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [1U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [1U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [0U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [3U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [3U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [2U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [5U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [5U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [4U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [7U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [7U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [6U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [1U] >> 9U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [1U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [1U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [0U] >> 9U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [3U] >> 9U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [3U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [3U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [2U] >> 9U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [5U] >> 9U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [5U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [5U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [4U] >> 9U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [7U] >> 9U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [7U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [7U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [6U] >> 9U));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [0U] >> 3U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                                  [0U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [2U] >> 3U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                                  [2U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [4U] >> 3U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                                  [4U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [6U] >> 3U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                                  [6U]))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((0xfff0U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [0U]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                            [0U] << 3U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[1U] 
        = ((0xfff0U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [1U]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                            [2U] << 3U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                             [2U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[2U] 
        = ((0xfff0U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [2U]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                            [4U] << 3U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                             [4U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[3U] 
        = ((0xfff0U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [3U]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                            [6U] << 3U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                             [6U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((0xff0fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [0U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                               [0U] << 4U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 4U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [0U] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[1U] 
        = ((0xff0fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [1U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                               [2U] << 4U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 4U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [2U] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[2U] 
        = ((0xff0fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [2U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                               [4U] << 4U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 4U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [4U] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[3U] 
        = ((0xff0fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [3U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                               [6U] << 4U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 4U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [6U] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((0xf0ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [0U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                [0U] << 5U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                << 8U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [0U] >> 9U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[1U] 
        = ((0xf0ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [1U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                [2U] << 5U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                << 8U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [2U] >> 9U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[2U] 
        = ((0xf0ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [2U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                [4U] << 5U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                << 8U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [4U] >> 9U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[3U] 
        = ((0xf0ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [3U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                [6U] << 5U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                << 8U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [6U] >> 9U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((0xfffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [0U]) | ((0x8000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                 [0U] << 6U)) | (((4U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                   ? 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                   : 0U) 
                                                 << 0xcU)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[1U] 
        = ((0xfffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [1U]) | ((0x8000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                 [2U] << 6U)) | (((4U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                   ? 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                   : 0U) 
                                                 << 0xcU)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[2U] 
        = ((0xfffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [2U]) | ((0x8000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                 [4U] << 6U)) | (((4U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                   ? 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                   : 0U) 
                                                 << 0xcU)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[3U] 
        = ((0xfffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [3U]) | ((0x8000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                 [6U] << 6U)) | (((4U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                   ? 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                   : 0U) 
                                                 << 0xcU)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [1U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [0U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [3U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [2U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [1U] >> 8U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [1U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [0U] >> 8U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [3U] >> 8U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [3U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [2U] >> 8U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [1U] >> 0xcU));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [1U] >> 8U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [1U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [0U] >> 0xcU));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [3U] >> 0xcU));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [3U] >> 8U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [3U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [2U] >> 0xcU));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                           [0U] >> 4U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                                                  [0U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                           [2U] >> 4U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                                                  [2U]))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s[0U] 
        = ((0xfffe0U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
            [0U]) | ((0x10U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                               [0U] << 4U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s[1U] 
        = ((0xfffe0U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
            [1U]) | ((0x10U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                               [2U] << 4U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                             [2U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s[0U] 
        = ((0xffc1fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
            [0U]) | ((0x200U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                                [0U] << 5U)) | (((2U 
                                                  >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                  ? 
                                                 vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                  : 0U) 
                                                << 5U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                           [0U] >> 8U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s[1U] 
        = ((0xffc1fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
            [1U]) | ((0x200U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                                [2U] << 5U)) | (((2U 
                                                  >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                  ? 
                                                 vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                  : 0U) 
                                                << 5U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                           [2U] >> 8U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s[0U] 
        = ((0xf83ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
            [0U]) | ((0x4000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                                 [0U] << 6U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                 << 0xaU)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                           [0U] >> 0xcU))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s[1U] 
        = ((0xf83ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
            [1U]) | ((0x4000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                                 [2U] << 6U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                 << 0xaU)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                           [2U] >> 0xcU))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s[0U] 
        = ((0x7fffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
            [0U]) | ((0x80000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                                  [0U] << 7U)) | ((
                                                   (4U 
                                                    >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                    ? 
                                                   vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                   [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                    : 0U) 
                                                  << 0xfU)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s[1U] 
        = ((0x7fffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
            [1U]) | ((0x80000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                                  [2U] << 7U)) | ((
                                                   (4U 
                                                    >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                    ? 
                                                   vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                   [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                    : 0U) 
                                                  << 0xfU)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (0x1fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (0x1fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                    [1U] >> 5U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (0x1fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                    [0U] >> 5U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                    [1U] >> 0xaU));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                    [1U] >> 5U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (0x1fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                    [0U] >> 0xaU));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                    [1U] >> 0xfU));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                    [1U] >> 0xaU));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                    [1U] >> 5U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (0x1fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                    [0U] >> 0xfU));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                           [0U] >> 5U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                                                  [0U]))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__s[0U] 
        = ((0xffffc0U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__s
            [0U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                               [0U] << 5U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__s[0U] 
        = ((0xfff03fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__s
            [0U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                                [0U] << 6U)) | (((2U 
                                                  >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                  ? 
                                                 vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                  : 0U) 
                                                << 6U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                           [0U] >> 0xaU))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__s[0U] 
        = ((0xfc0fffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__s
            [0U]) | ((0x20000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                                  [0U] << 7U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                  << 0xcU)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                           [0U] >> 0xfU))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__s[0U] 
        = ((0x3ffffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__s
            [0U]) | ((0x800000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                                   [0U] << 8U)) | (
                                                   ((4U 
                                                     >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                     ? 
                                                    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                    [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                     : 0U) 
                                                   << 0x12U)));
    __PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__instrAligner__DOT__pencIdx[0U] 
        = (0x1fU & (__PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
                    >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid[0U] 
        = (1U & (~ __PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs));
    vlSelfRef.__PVT__instrAligner__DOT__pencIdx[1U] 
        = (0x1fU & (__PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
                    >> 7U));
    vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid[1U] 
        = (1U & (~ (__PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
                    >> 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__pencIdx[2U] 
        = (0x1fU & (__PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
                    >> 0xdU));
    vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid[2U] 
        = (1U & (~ (__PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
                    >> 0xcU)));
    vlSelfRef.__PVT__instrAligner__DOT__pencIdx[3U] 
        = (0x1fU & (__PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
                    >> 0x13U));
    vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid[3U] 
        = (1U & (~ (__PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
                    >> 0x12U)));
}

VL_INLINE_OPT void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__3(VTop_IFetchPipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__3\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__OUT_instrs__v0;
    __VdlySet__OUT_instrs__v0 = 0;
    CData/*0:0*/ __VdlySet__OUT_instrs__v4;
    __VdlySet__OUT_instrs__v4 = 0;
    VlWide<4>/*109:0*/ __VdlyVal__OUT_instrs__v8;
    VL_ZERO_W(110, __VdlyVal__OUT_instrs__v8);
    CData/*0:0*/ __VdlySet__OUT_instrs__v8;
    __VdlySet__OUT_instrs__v8 = 0;
    VlWide<4>/*109:0*/ __VdlyVal__OUT_instrs__v9;
    VL_ZERO_W(110, __VdlyVal__OUT_instrs__v9);
    CData/*0:0*/ __VdlySet__OUT_instrs__v9;
    __VdlySet__OUT_instrs__v9 = 0;
    VlWide<4>/*109:0*/ __VdlyVal__OUT_instrs__v10;
    VL_ZERO_W(110, __VdlyVal__OUT_instrs__v10);
    CData/*0:0*/ __VdlySet__OUT_instrs__v10;
    __VdlySet__OUT_instrs__v10 = 0;
    VlWide<4>/*109:0*/ __VdlyVal__OUT_instrs__v11;
    VL_ZERO_W(110, __VdlyVal__OUT_instrs__v11);
    CData/*0:0*/ __VdlySet__OUT_instrs__v11;
    __VdlySet__OUT_instrs__v11 = 0;
    // Body
    __VdlySet__OUT_instrs__v0 = 0U;
    __VdlySet__OUT_instrs__v4 = 0U;
    __VdlySet__OUT_instrs__v8 = 0U;
    __VdlySet__OUT_instrs__v9 = 0U;
    __VdlySet__OUT_instrs__v10 = 0U;
    __VdlySet__OUT_instrs__v11 = 0U;
    if (vlSymsp->TOP.rst) {
        __VdlySet__OUT_instrs__v0 = 1U;
    } else if (vlSymsp->TOP__Top__soc__core__ifetch.__Vcellinp__ifp__IN_mispr) {
        __VdlySet__OUT_instrs__v4 = 1U;
    } else if (vlSelfRef.__PVT__instrAligner__DOT__outputReady) {
        __VdlyVal__OUT_instrs__v8[0U] = vlSelfRef.__PVT__instrAligner__DOT__instr_c
            [0U][0U];
        __VdlyVal__OUT_instrs__v8[1U] = vlSelfRef.__PVT__instrAligner__DOT__instr_c
            [0U][1U];
        __VdlyVal__OUT_instrs__v8[2U] = vlSelfRef.__PVT__instrAligner__DOT__instr_c
            [0U][2U];
        __VdlyVal__OUT_instrs__v8[3U] = vlSelfRef.__PVT__instrAligner__DOT__instr_c
            [0U][3U];
        __VdlySet__OUT_instrs__v8 = 1U;
        __VdlyVal__OUT_instrs__v9[0U] = vlSelfRef.__PVT__instrAligner__DOT__instr_c
            [1U][0U];
        __VdlyVal__OUT_instrs__v9[1U] = vlSelfRef.__PVT__instrAligner__DOT__instr_c
            [1U][1U];
        __VdlyVal__OUT_instrs__v9[2U] = vlSelfRef.__PVT__instrAligner__DOT__instr_c
            [1U][2U];
        __VdlyVal__OUT_instrs__v9[3U] = vlSelfRef.__PVT__instrAligner__DOT__instr_c
            [1U][3U];
        __VdlySet__OUT_instrs__v9 = 1U;
        __VdlyVal__OUT_instrs__v10[0U] = vlSelfRef.__PVT__instrAligner__DOT__instr_c
            [2U][0U];
        __VdlyVal__OUT_instrs__v10[1U] = vlSelfRef.__PVT__instrAligner__DOT__instr_c
            [2U][1U];
        __VdlyVal__OUT_instrs__v10[2U] = vlSelfRef.__PVT__instrAligner__DOT__instr_c
            [2U][2U];
        __VdlyVal__OUT_instrs__v10[3U] = vlSelfRef.__PVT__instrAligner__DOT__instr_c
            [2U][3U];
        __VdlySet__OUT_instrs__v10 = 1U;
        __VdlyVal__OUT_instrs__v11[0U] = vlSelfRef.__PVT__instrAligner__DOT__instr_c
            [3U][0U];
        __VdlyVal__OUT_instrs__v11[1U] = vlSelfRef.__PVT__instrAligner__DOT__instr_c
            [3U][1U];
        __VdlyVal__OUT_instrs__v11[2U] = vlSelfRef.__PVT__instrAligner__DOT__instr_c
            [3U][2U];
        __VdlyVal__OUT_instrs__v11[3U] = vlSelfRef.__PVT__instrAligner__DOT__instr_c
            [3U][3U];
        __VdlySet__OUT_instrs__v11 = 1U;
    }
    vlSelfRef.__PVT__OUT_btUpdate[0U] = 0U;
    vlSelfRef.__PVT__OUT_btUpdate[1U] = 0U;
    vlSelfRef.__PVT__OUT_btUpdate[2U] = 0U;
    if ((1U & (vlSelfRef.__PVT__packet[0U] & (~ (IData)(vlSymsp->TOP__Top__soc__core__ifetch.__Vcellinp__ifp__IN_mispr))))) {
        vlSelfRef.__PVT__OUT_btUpdate[0U] = vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U];
        vlSelfRef.__PVT__OUT_btUpdate[1U] = vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U];
        vlSelfRef.__PVT__OUT_btUpdate[2U] = vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U];
    }
    if (__VdlySet__OUT_instrs__v0) {
        vlSelfRef.__PVT__OUT_instrs[0U][0U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[0U][1U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[0U][2U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[0U][3U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[1U][0U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[1U][1U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[1U][2U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[1U][3U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[2U][0U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[2U][1U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[2U][2U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[2U][3U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[3U][0U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[3U][1U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[3U][2U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[3U][3U] = 0U;
    }
    if (__VdlySet__OUT_instrs__v4) {
        vlSelfRef.__PVT__OUT_instrs[0U][0U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[0U][1U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[0U][2U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[0U][3U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[1U][0U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[1U][1U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[1U][2U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[1U][3U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[2U][0U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[2U][1U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[2U][2U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[2U][3U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[3U][0U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[3U][1U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[3U][2U] = 0U;
        vlSelfRef.__PVT__OUT_instrs[3U][3U] = 0U;
    }
    if (__VdlySet__OUT_instrs__v8) {
        vlSelfRef.__PVT__OUT_instrs[0U][0U] = __VdlyVal__OUT_instrs__v8[0U];
        vlSelfRef.__PVT__OUT_instrs[0U][1U] = __VdlyVal__OUT_instrs__v8[1U];
        vlSelfRef.__PVT__OUT_instrs[0U][2U] = __VdlyVal__OUT_instrs__v8[2U];
        vlSelfRef.__PVT__OUT_instrs[0U][3U] = __VdlyVal__OUT_instrs__v8[3U];
    }
    if (__VdlySet__OUT_instrs__v9) {
        vlSelfRef.__PVT__OUT_instrs[1U][0U] = __VdlyVal__OUT_instrs__v9[0U];
        vlSelfRef.__PVT__OUT_instrs[1U][1U] = __VdlyVal__OUT_instrs__v9[1U];
        vlSelfRef.__PVT__OUT_instrs[1U][2U] = __VdlyVal__OUT_instrs__v9[2U];
        vlSelfRef.__PVT__OUT_instrs[1U][3U] = __VdlyVal__OUT_instrs__v9[3U];
    }
    if (__VdlySet__OUT_instrs__v10) {
        vlSelfRef.__PVT__OUT_instrs[2U][0U] = __VdlyVal__OUT_instrs__v10[0U];
        vlSelfRef.__PVT__OUT_instrs[2U][1U] = __VdlyVal__OUT_instrs__v10[1U];
        vlSelfRef.__PVT__OUT_instrs[2U][2U] = __VdlyVal__OUT_instrs__v10[2U];
        vlSelfRef.__PVT__OUT_instrs[2U][3U] = __VdlyVal__OUT_instrs__v10[3U];
    }
    if (__VdlySet__OUT_instrs__v11) {
        vlSelfRef.__PVT__OUT_instrs[3U][0U] = __VdlyVal__OUT_instrs__v11[0U];
        vlSelfRef.__PVT__OUT_instrs[3U][1U] = __VdlyVal__OUT_instrs__v11[1U];
        vlSelfRef.__PVT__OUT_instrs[3U][2U] = __VdlyVal__OUT_instrs__v11[2U];
        vlSelfRef.__PVT__OUT_instrs[3U][3U] = __VdlyVal__OUT_instrs__v11[3U];
    }
}

VL_INLINE_OPT void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__4(VTop_IFetchPipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__4\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vcellout__assocEnc____pinNumber3;
    __Vcellout__assocEnc____pinNumber3 = 0;
    SData/*15:0*/ __PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16;
    __PVT__branchHandler__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i16 = 0;
    IData/*31:0*/ branchHandler__DOT____Vlvbound_h4016cc4a__0;
    branchHandler__DOT____Vlvbound_h4016cc4a__0 = 0;
    IData/*31:0*/ branchHandler__DOT____Vlvbound_hb098b6eb__0;
    branchHandler__DOT____Vlvbound_hb098b6eb__0 = 0;
    // Body
    vlSelfRef.__PVT__phyPC = 0U;
    if (((vlSelfRef.fetch1[0U] & (0U == (0x60000U & 
                                         vlSelfRef.fetch1[2U]))) 
         & (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
            >> 0x1dU))) {
        if ((1U & vlSelfRef.__PVT__TLB_res)) {
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
    } else {
        vlSelfRef.__PVT__phyPC = ((vlSelfRef.fetch1[3U] 
                                   << 8U) | (vlSelfRef.fetch1[2U] 
                                             >> 0x18U));
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
    vlSelfRef.__PVT__assocHit = (((IData)(vlSelfRef.__Vcellout__assocEnc____pinNumber2) 
                                  << 1U) | (IData)(__Vcellout__assocEnc____pinNumber3));
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
}
