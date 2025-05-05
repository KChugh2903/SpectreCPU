// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_RegFile__W23_S20_N3_NB1.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_RegFile__W23_S20_N3_NB1___nba_sequent__TOP__Top__soc__core__ifetch__pcFile__0(VTop_RegFile__W23_S20_N3_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VTop_RegFile__W23_S20_N3_NB1___nba_sequent__TOP__Top__soc__core__ifetch__pcFile__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__mem__v0 = 0U;
    if (vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_pcFileWE) {
        vlSelfRef.__VdlyVal__mem__v0 = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_pcFileEntry;
        vlSelfRef.__VdlyDim0__mem__v0 = vlSymsp->TOP__Top__soc__core__ifetch.PCF_writeAddr;
        vlSelfRef.__VdlySet__mem__v0 = 1U;
    }
}

VL_INLINE_OPT void VTop_RegFile__W23_S20_N3_NB1___nba_sequent__TOP__Top__soc__core__ifetch__pcFile__1(VTop_RegFile__W23_S20_N3_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VTop_RegFile__W23_S20_N3_NB1___nba_sequent__TOP__Top__soc__core__ifetch__pcFile__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*34:0*/ __Vlvbound_h83838869__0;
    __Vlvbound_h83838869__0 = 0;
    // Body
    __Vlvbound_h83838869__0 = ((1U & (IData)(vlSymsp->TOP__Top__soc__core__ifetch.__PVT__sharedReq))
                                ? vlSelfRef.mem[(0x1fU 
                                                 & ((IData)(vlSymsp->TOP__Top__soc__core__ifetch.__PVT__sharedReq) 
                                                    >> 1U))]
                                : 0ULL);
    vlSelfRef.__PVT__OUT_rdata[0U] = (IData)(__Vlvbound_h83838869__0);
    vlSelfRef.__PVT__OUT_rdata[1U] = ((0xfffffff8U 
                                       & vlSelfRef.__PVT__OUT_rdata[1U]) 
                                      | (IData)((__Vlvbound_h83838869__0 
                                                 >> 0x20U)));
    __Vlvbound_h83838869__0 = ((1U & vlSymsp->TOP__Top__soc__core__ifetch.__PVT__IN_pcRead
                                [1U]) ? vlSelfRef.mem
                               [(0x1fU & (vlSymsp->TOP__Top__soc__core__ifetch.__PVT__IN_pcRead
                                          [1U] >> 1U))]
                                : 0ULL);
    vlSelfRef.__PVT__OUT_rdata[1U] = ((7U & vlSelfRef.__PVT__OUT_rdata[1U]) 
                                      | ((IData)(__Vlvbound_h83838869__0) 
                                         << 3U));
    vlSelfRef.__PVT__OUT_rdata[2U] = ((0xffffffc0U 
                                       & vlSelfRef.__PVT__OUT_rdata[2U]) 
                                      | (((IData)(__Vlvbound_h83838869__0) 
                                          >> 0x1dU) 
                                         | ((IData)(
                                                    (__Vlvbound_h83838869__0 
                                                     >> 0x20U)) 
                                            << 3U)));
    __Vlvbound_h83838869__0 = ((1U & (IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_pcFileRead))
                                ? vlSelfRef.mem[(0x1fU 
                                                 & ((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_pcFileRead) 
                                                    >> 1U))]
                                : 0ULL);
    vlSelfRef.__PVT__OUT_rdata[2U] = ((0x3fU & vlSelfRef.__PVT__OUT_rdata[2U]) 
                                      | ((IData)(__Vlvbound_h83838869__0) 
                                         << 6U));
    vlSelfRef.__PVT__OUT_rdata[3U] = (0x1ffU & (((IData)(__Vlvbound_h83838869__0) 
                                                 >> 0x1aU) 
                                                | ((IData)(
                                                           (__Vlvbound_h83838869__0 
                                                            >> 0x20U)) 
                                                   << 6U)));
}
