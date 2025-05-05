// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_CSR.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_CSR___ico_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__0(VTop_CSR* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_CSR___ico_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __PVT__unnamedblk5__DOT__temp;
    __PVT__unnamedblk5__DOT__temp = 0;
    SData/*11:0*/ __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm = 0;
    SData/*11:0*/ __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh = 0;
    SData/*11:0*/ __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm = 0;
    // Body
    __PVT__unnamedblk5__DOT__temp = 0U;
    vlSelfRef.__PVT__invalidCSR = 0U;
    vlSelfRef.__PVT__rdata = 0U;
    if ((0x2000000U & vlSymsp->TOP__Top__soc__core.LD_uop
         [0U][1U])) {
        if ((0x1000000U & vlSymsp->TOP__Top__soc__core.LD_uop
             [0U][1U])) {
            if ((0x800000U & vlSymsp->TOP__Top__soc__core.LD_uop
                 [0U][1U])) {
                if ((0x400000U & vlSymsp->TOP__Top__soc__core.LD_uop
                     [0U][1U])) {
                    if ((0x200000U & vlSymsp->TOP__Top__soc__core.LD_uop
                         [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else if ((0x100000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else if ((0x80000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else if ((0x40000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                [0U][1U])) {
                        if ((0x20000U & vlSymsp->TOP__Top__soc__core.LD_uop
                             [0U][1U])) {
                            vlSelfRef.__PVT__invalidCSR = 1U;
                        } else if ((0x10000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                    [0U][1U])) {
                            if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                 [0U][1U])) {
                                vlSelfRef.__PVT__invalidCSR = 1U;
                            } else {
                                vlSelfRef.__PVT__rdata = 0U;
                            }
                        } else if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                    [0U][1U])) {
                            vlSelfRef.__PVT__rdata 
                                = ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                    [0U][1U]) ? 0x50087532U
                                    : 0x50087502U);
                        } else if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                    [0U][1U])) {
                            vlSelfRef.__PVT__rdata = 0U;
                        } else {
                            vlSelfRef.__PVT__invalidCSR = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                }
            } else if ((0x400000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                vlSelfRef.__PVT__invalidCSR = 1U;
            } else if ((0x200000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                if ((0x100000U & vlSymsp->TOP__Top__soc__core.LD_uop
                     [0U][1U])) {
                    if ((0x80000U & vlSymsp->TOP__Top__soc__core.LD_uop
                         [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else if ((0x40000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else if ((0x20000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else if ((0x10000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else {
                        vlSelfRef.__PVT__rdata = 0x88980fU;
                    }
                } else if ((0x80000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                } else if ((0x40000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    vlSelfRef.__PVT__rdata = 0U;
                } else if ((0x20000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    vlSelfRef.__PVT__rdata = 0U;
                } else if ((0x10000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                         [0U][1U])) {
                        vlSelfRef.__PVT__rdata = 0U;
                    } else {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    }
                } else if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                         [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else {
                        vlSelfRef.__PVT__invalidCSR 
                            = (1U & (~ (((3U == (IData)(vlSelfRef.__PVT__priv)) 
                                         | ((1U == (IData)(vlSelfRef.__PVT__priv)) 
                                            & (vlSelfRef.__PVT__mcounteren 
                                               >> 2U))) 
                                        | (((0U == (IData)(vlSelfRef.__PVT__priv)) 
                                            & (vlSelfRef.__PVT__mcounteren 
                                               >> 2U)) 
                                           & (vlSelfRef.__PVT__scounteren 
                                              >> 2U)))));
                        vlSelfRef.__PVT__rdata = (IData)(
                                                         (vlSelfRef.minstret 
                                                          >> 0x20U));
                    }
                } else if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    vlSelfRef.__PVT__invalidCSR = (1U 
                                                   & (~ 
                                                      (((3U 
                                                         == (IData)(vlSelfRef.__PVT__priv)) 
                                                        | ((1U 
                                                            == (IData)(vlSelfRef.__PVT__priv)) 
                                                           & (vlSelfRef.__PVT__mcounteren 
                                                              >> 1U))) 
                                                       | (((0U 
                                                            == (IData)(vlSelfRef.__PVT__priv)) 
                                                           & (vlSelfRef.__PVT__mcounteren 
                                                              >> 1U)) 
                                                          & (vlSelfRef.__PVT__scounteren 
                                                             >> 1U)))));
                    vlSelfRef.__PVT__rdata = ((0xc01U 
                                               == (0xfffU 
                                                   & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                      [0U][1U] 
                                                      >> 0xeU)))
                                               ? (IData)(vlSymsp->TOP__Top__soc.__PVT__mmio__DOT__aclint__DOT__mtime)
                                               : (IData)(
                                                         (vlSymsp->TOP__Top__soc.__PVT__mmio__DOT__aclint__DOT__mtime 
                                                          >> 0x20U)));
                } else {
                    vlSelfRef.__PVT__invalidCSR = (1U 
                                                   & (~ 
                                                      (((3U 
                                                         == (IData)(vlSelfRef.__PVT__priv)) 
                                                        | ((1U 
                                                            == (IData)(vlSelfRef.__PVT__priv)) 
                                                           & vlSelfRef.__PVT__mcounteren)) 
                                                       | (((0U 
                                                            == (IData)(vlSelfRef.__PVT__priv)) 
                                                           & vlSelfRef.__PVT__mcounteren) 
                                                          & vlSelfRef.__PVT__scounteren))));
                    vlSelfRef.__PVT__rdata = (IData)(
                                                     (vlSelfRef.mcycle 
                                                      >> 0x20U));
                }
            } else if ((0x100000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                vlSelfRef.__PVT__invalidCSR = 1U;
            } else if ((0x80000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                vlSelfRef.__PVT__invalidCSR = 1U;
            } else if ((0x40000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                vlSelfRef.__PVT__rdata = 0U;
            } else if ((0x20000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                vlSelfRef.__PVT__rdata = 0U;
            } else if ((0x10000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                     [0U][1U])) {
                    vlSelfRef.__PVT__rdata = 0U;
                } else {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                }
            } else if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                     [0U][1U])) {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                } else {
                    vlSelfRef.__PVT__invalidCSR = (1U 
                                                   & (~ 
                                                      (((3U 
                                                         == (IData)(vlSelfRef.__PVT__priv)) 
                                                        | ((1U 
                                                            == (IData)(vlSelfRef.__PVT__priv)) 
                                                           & (vlSelfRef.__PVT__mcounteren 
                                                              >> 2U))) 
                                                       | (((0U 
                                                            == (IData)(vlSelfRef.__PVT__priv)) 
                                                           & (vlSelfRef.__PVT__mcounteren 
                                                              >> 2U)) 
                                                          & (vlSelfRef.__PVT__scounteren 
                                                             >> 2U)))));
                    vlSelfRef.__PVT__rdata = (IData)(vlSelfRef.minstret);
                }
            } else if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                vlSelfRef.__PVT__invalidCSR = (1U & 
                                               (~ (
                                                   ((3U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    | ((1U 
                                                        == (IData)(vlSelfRef.__PVT__priv)) 
                                                       & (vlSelfRef.__PVT__mcounteren 
                                                          >> 1U))) 
                                                   | (((0U 
                                                        == (IData)(vlSelfRef.__PVT__priv)) 
                                                       & (vlSelfRef.__PVT__mcounteren 
                                                          >> 1U)) 
                                                      & (vlSelfRef.__PVT__scounteren 
                                                         >> 1U)))));
                vlSelfRef.__PVT__rdata = ((0xc01U == 
                                           (0xfffU 
                                            & (vlSymsp->TOP__Top__soc__core.LD_uop
                                               [0U][1U] 
                                               >> 0xeU)))
                                           ? (IData)(vlSymsp->TOP__Top__soc.__PVT__mmio__DOT__aclint__DOT__mtime)
                                           : (IData)(
                                                     (vlSymsp->TOP__Top__soc.__PVT__mmio__DOT__aclint__DOT__mtime 
                                                      >> 0x20U)));
            } else {
                vlSelfRef.__PVT__invalidCSR = (1U & 
                                               (~ (
                                                   ((3U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    | ((1U 
                                                        == (IData)(vlSelfRef.__PVT__priv)) 
                                                       & vlSelfRef.__PVT__mcounteren)) 
                                                   | (((0U 
                                                        == (IData)(vlSelfRef.__PVT__priv)) 
                                                       & vlSelfRef.__PVT__mcounteren) 
                                                      & vlSelfRef.__PVT__scounteren))));
                vlSelfRef.__PVT__rdata = (IData)(vlSelfRef.mcycle);
            }
        } else if ((0x800000U & vlSymsp->TOP__Top__soc__core.LD_uop
                    [0U][1U])) {
            if ((0x400000U & vlSymsp->TOP__Top__soc__core.LD_uop
                 [0U][1U])) {
                if ((0x200000U & vlSymsp->TOP__Top__soc__core.LD_uop
                     [0U][1U])) {
                    if ((0x100000U & vlSymsp->TOP__Top__soc__core.LD_uop
                         [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else if ((0x80000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else if ((0x40000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                [0U][1U])) {
                        vlSelfRef.__PVT__rdata = 0U;
                    } else if ((0x20000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                [0U][1U])) {
                        vlSelfRef.__PVT__rdata = 0U;
                    } else if ((0x10000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                [0U][1U])) {
                        if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                             [0U][1U])) {
                            vlSelfRef.__PVT__rdata = 0U;
                        } else {
                            vlSelfRef.__PVT__invalidCSR = 1U;
                        }
                    } else if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                [0U][1U])) {
                        if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                             [0U][1U])) {
                            vlSelfRef.__PVT__invalidCSR = 1U;
                        } else {
                            vlSelfRef.__PVT__rdata 
                                = (IData)((vlSelfRef.minstret 
                                           >> 0x20U));
                        }
                    } else if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else {
                        vlSelfRef.__PVT__rdata = (IData)(
                                                         (vlSelfRef.mcycle 
                                                          >> 0x20U));
                    }
                } else if ((0x100000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                } else if ((0x80000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                } else if ((0x40000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    vlSelfRef.__PVT__rdata = 0U;
                } else if ((0x20000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    vlSelfRef.__PVT__rdata = 0U;
                } else if ((0x10000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                         [0U][1U])) {
                        vlSelfRef.__PVT__rdata = 0U;
                    } else {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    }
                } else if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                         [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else {
                        vlSelfRef.__PVT__rdata = (IData)(vlSelfRef.minstret);
                    }
                } else if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                } else {
                    vlSelfRef.__PVT__rdata = (IData)(vlSelfRef.mcycle);
                }
            } else {
                vlSelfRef.__PVT__invalidCSR = 1U;
            }
        } else {
            vlSelfRef.__PVT__invalidCSR = 1U;
        }
    } else if ((0x1000000U & vlSymsp->TOP__Top__soc__core.LD_uop
                [0U][1U])) {
        if ((0x800000U & vlSymsp->TOP__Top__soc__core.LD_uop
             [0U][1U])) {
            if ((0x400000U & vlSymsp->TOP__Top__soc__core.LD_uop
                 [0U][1U])) {
                if ((0x200000U & vlSymsp->TOP__Top__soc__core.LD_uop
                     [0U][1U])) {
                    if ((0x100000U & vlSymsp->TOP__Top__soc__core.LD_uop
                         [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else if ((0x80000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                [0U][1U])) {
                        if ((0x40000U & vlSymsp->TOP__Top__soc__core.LD_uop
                             [0U][1U])) {
                            vlSelfRef.__PVT__invalidCSR = 1U;
                        } else if ((0x20000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                    [0U][1U])) {
                            if ((0x10000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                 [0U][1U])) {
                                vlSelfRef.__PVT__invalidCSR = 1U;
                            } else if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                        [0U][1U])) {
                                vlSelfRef.__PVT__invalidCSR = 1U;
                            } else if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                        [0U][1U])) {
                                vlSelfRef.__PVT__invalidCSR = 1U;
                            } else {
                                vlSelfRef.__PVT__rdata = 0U;
                            }
                        } else if ((0x10000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                    [0U][1U])) {
                            vlSelfRef.__PVT__invalidCSR = 1U;
                        } else {
                            vlSelfRef.__PVT__rdata = 0U;
                        }
                    } else {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                }
            } else {
                vlSelfRef.__PVT__invalidCSR = 1U;
            }
        } else {
            vlSelfRef.__PVT__invalidCSR = 1U;
        }
    } else if ((0x800000U & vlSymsp->TOP__Top__soc__core.LD_uop
                [0U][1U])) {
        if ((0x400000U & vlSymsp->TOP__Top__soc__core.LD_uop
             [0U][1U])) {
            if ((0x200000U & vlSymsp->TOP__Top__soc__core.LD_uop
                 [0U][1U])) {
                vlSelfRef.__PVT__invalidCSR = 1U;
            } else if ((0x100000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                if ((0x80000U & vlSymsp->TOP__Top__soc__core.LD_uop
                     [0U][1U])) {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                } else if ((0x40000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                } else if ((0x20000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                } else if ((0x10000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                         [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else {
                        vlSelfRef.__PVT__rdata = vlSelfRef.__PVT__mip;
                    }
                } else {
                    vlSelfRef.__PVT__rdata = ((0x8000U 
                                               & vlSymsp->TOP__Top__soc__core.LD_uop
                                               [0U][1U])
                                               ? ((0x4000U 
                                                   & vlSymsp->TOP__Top__soc__core.LD_uop
                                                   [0U][1U])
                                                   ? vlSelfRef.__PVT__mtval
                                                   : vlSelfRef.__PVT__mcause)
                                               : ((0x4000U 
                                                   & vlSymsp->TOP__Top__soc__core.LD_uop
                                                   [0U][1U])
                                                   ? vlSelfRef.__PVT__mepc
                                                   : vlSelfRef.__PVT__mscratch));
                }
            } else if ((0x80000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                if ((0x40000U & vlSymsp->TOP__Top__soc__core.LD_uop
                     [0U][1U])) {
                    vlSelfRef.__PVT__rdata = 0U;
                } else if ((0x20000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    vlSelfRef.__PVT__rdata = 0U;
                } else if ((0x10000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    vlSelfRef.__PVT__rdata = ((0x8000U 
                                               & vlSymsp->TOP__Top__soc__core.LD_uop
                                               [0U][1U])
                                               ? 0U
                                               : ((0x4000U 
                                                   & vlSymsp->TOP__Top__soc__core.LD_uop
                                                   [0U][1U])
                                                   ? 5U
                                                   : 4U));
                } else if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                         [0U][1U])) {
                        vlSelfRef.__PVT__rdata = 3U;
                    } else {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    }
                } else if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                } else {
                    vlSelfRef.__PVT__rdata = vlSelfRef.__PVT__mcountinhibit;
                }
            } else if ((0x40000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                if ((0x20000U & vlSymsp->TOP__Top__soc__core.LD_uop
                     [0U][1U])) {
                    if ((0x10000U & vlSymsp->TOP__Top__soc__core.LD_uop
                         [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                [0U][1U])) {
                        if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                             [0U][1U])) {
                            vlSelfRef.__PVT__invalidCSR = 1U;
                        } else {
                            vlSelfRef.__PVT__rdata = 0U;
                        }
                    } else {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    }
                } else if ((0x10000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                } else if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                } else if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                } else {
                    vlSelfRef.__PVT__rdata = 0U;
                }
            } else if ((0x20000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                if ((0x10000U & vlSymsp->TOP__Top__soc__core.LD_uop
                     [0U][1U])) {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                } else if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                         [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else {
                        vlSelfRef.__PVT__rdata = vlSelfRef.__PVT__menvcfg;
                    }
                } else {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                }
            } else if ((0x10000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                     [0U][1U])) {
                    if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                         [0U][1U])) {
                        vlSelfRef.__PVT__invalidCSR = 1U;
                    } else {
                        vlSelfRef.__PVT__rdata = vlSelfRef.__PVT__mcounteren;
                    }
                } else {
                    vlSelfRef.__PVT__rdata = ((0x4000U 
                                               & vlSymsp->TOP__Top__soc__core.LD_uop
                                               [0U][1U])
                                               ? vlSelfRef.__PVT__mtvec
                                               : (IData)(vlSelfRef.__PVT__mie));
                }
            } else {
                vlSelfRef.__PVT__rdata = ((0x8000U 
                                           & vlSymsp->TOP__Top__soc__core.LD_uop
                                           [0U][1U])
                                           ? ((0x4000U 
                                               & vlSymsp->TOP__Top__soc__core.LD_uop
                                               [0U][1U])
                                               ? (IData)(vlSelfRef.__PVT__mideleg)
                                               : (IData)(vlSelfRef.__PVT__medeleg))
                                           : ((0x4000U 
                                               & vlSymsp->TOP__Top__soc__core.LD_uop
                                               [0U][1U])
                                               ? (0x40141105U 
                                                  | ((IData)(vlSelfRef.__PVT__misa_X) 
                                                     << 0x17U))
                                               : vlSelfRef.__PVT__mstatus));
            }
        } else {
            vlSelfRef.__PVT__invalidCSR = 1U;
        }
    } else if ((0x400000U & vlSymsp->TOP__Top__soc__core.LD_uop
                [0U][1U])) {
        if ((0x200000U & vlSymsp->TOP__Top__soc__core.LD_uop
             [0U][1U])) {
            if ((0x100000U & vlSymsp->TOP__Top__soc__core.LD_uop
                 [0U][1U])) {
                vlSelfRef.__PVT__invalidCSR = 1U;
            } else if ((0x80000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                vlSelfRef.__PVT__invalidCSR = 1U;
            } else if ((0x40000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                vlSelfRef.__PVT__invalidCSR = 1U;
            } else if ((0x20000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                vlSelfRef.__PVT__invalidCSR = 1U;
            } else if ((0x10000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                vlSelfRef.__PVT__invalidCSR = 1U;
            } else if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                vlSelfRef.__PVT__invalidCSR = 1U;
            } else if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                vlSelfRef.__PVT__invalidCSR = 1U;
            } else {
                vlSelfRef.__PVT__invalidCSR = (1U & 
                                               (vlSelfRef.__PVT__mstatus 
                                                >> 0x14U));
                vlSelfRef.__PVT__rdata = vlSelfRef.__PVT__satp;
            }
        } else if ((0x100000U & vlSymsp->TOP__Top__soc__core.LD_uop
                    [0U][1U])) {
            if ((0x80000U & vlSymsp->TOP__Top__soc__core.LD_uop
                 [0U][1U])) {
                vlSelfRef.__PVT__invalidCSR = 1U;
            } else if ((0x40000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                vlSelfRef.__PVT__invalidCSR = 1U;
            } else if ((0x20000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                vlSelfRef.__PVT__invalidCSR = 1U;
            } else if ((0x10000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                     [0U][1U])) {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                } else if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U])) {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                } else {
                    vlSelfRef.__PVT__rdata = 0U;
                    if ((2U & (IData)(vlSelfRef.__PVT__mideleg))) {
                        vlSelfRef.__PVT__rdata = ((0xfffffffdU 
                                                   & vlSelfRef.__PVT__rdata) 
                                                  | (2U 
                                                     & (IData)(vlSelfRef.__PVT__mip)));
                    }
                    if ((0x20U & (IData)(vlSelfRef.__PVT__mideleg))) {
                        vlSelfRef.__PVT__rdata = ((0xffffffdfU 
                                                   & vlSelfRef.__PVT__rdata) 
                                                  | (0x20U 
                                                     & (IData)(vlSelfRef.__PVT__mip)));
                    }
                    if ((0x200U & (IData)(vlSelfRef.__PVT__mideleg))) {
                        vlSelfRef.__PVT__rdata = ((0xfffffdffU 
                                                   & vlSelfRef.__PVT__rdata) 
                                                  | (0x200U 
                                                     & (IData)(vlSelfRef.__PVT__mip)));
                    }
                }
            } else {
                vlSelfRef.__PVT__rdata = ((0x8000U 
                                           & vlSymsp->TOP__Top__soc__core.LD_uop
                                           [0U][1U])
                                           ? ((0x4000U 
                                               & vlSymsp->TOP__Top__soc__core.LD_uop
                                               [0U][1U])
                                               ? vlSelfRef.__PVT__stval
                                               : vlSelfRef.__PVT__scause)
                                           : ((0x4000U 
                                               & vlSymsp->TOP__Top__soc__core.LD_uop
                                               [0U][1U])
                                               ? vlSelfRef.__PVT__sepc
                                               : vlSelfRef.__PVT__sscratch));
            }
        } else if ((0x80000U & vlSymsp->TOP__Top__soc__core.LD_uop
                    [0U][1U])) {
            vlSelfRef.__PVT__invalidCSR = 1U;
        } else if ((0x40000U & vlSymsp->TOP__Top__soc__core.LD_uop
                    [0U][1U])) {
            vlSelfRef.__PVT__invalidCSR = 1U;
        } else if ((0x20000U & vlSymsp->TOP__Top__soc__core.LD_uop
                    [0U][1U])) {
            if ((0x10000U & vlSymsp->TOP__Top__soc__core.LD_uop
                 [0U][1U])) {
                vlSelfRef.__PVT__invalidCSR = 1U;
            } else if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                     [0U][1U])) {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                } else {
                    vlSelfRef.__PVT__rdata = vlSelfRef.__PVT__senvcfg;
                }
            } else {
                vlSelfRef.__PVT__invalidCSR = 1U;
            }
        } else if ((0x10000U & vlSymsp->TOP__Top__soc__core.LD_uop
                    [0U][1U])) {
            if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                 [0U][1U])) {
                if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                     [0U][1U])) {
                    vlSelfRef.__PVT__invalidCSR = 1U;
                } else {
                    vlSelfRef.__PVT__rdata = vlSelfRef.__PVT__scounteren;
                }
            } else if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                        [0U][1U])) {
                vlSelfRef.__PVT__rdata = vlSelfRef.__PVT__stvec;
            } else {
                vlSelfRef.__PVT__rdata = 0U;
                if ((2U & (IData)(vlSelfRef.__PVT__mideleg))) {
                    vlSelfRef.__PVT__rdata = ((0xfffffffdU 
                                               & vlSelfRef.__PVT__rdata) 
                                              | (2U 
                                                 & (IData)(vlSelfRef.__PVT__mie)));
                }
                if ((8U & (IData)(vlSelfRef.__PVT__mideleg))) {
                    vlSelfRef.__PVT__rdata = ((0xfffffff7U 
                                               & vlSelfRef.__PVT__rdata) 
                                              | (8U 
                                                 & (IData)(vlSelfRef.__PVT__mie)));
                }
                if ((0x20U & (IData)(vlSelfRef.__PVT__mideleg))) {
                    vlSelfRef.__PVT__rdata = ((0xffffffdfU 
                                               & vlSelfRef.__PVT__rdata) 
                                              | (0x20U 
                                                 & (IData)(vlSelfRef.__PVT__mie)));
                }
                if ((0x80U & (IData)(vlSelfRef.__PVT__mideleg))) {
                    vlSelfRef.__PVT__rdata = ((0xffffff7fU 
                                               & vlSelfRef.__PVT__rdata) 
                                              | (0x80U 
                                                 & (IData)(vlSelfRef.__PVT__mie)));
                }
                if ((0x200U & (IData)(vlSelfRef.__PVT__mideleg))) {
                    vlSelfRef.__PVT__rdata = ((0xfffffdffU 
                                               & vlSelfRef.__PVT__rdata) 
                                              | (0x200U 
                                                 & (IData)(vlSelfRef.__PVT__mie)));
                }
                if ((0x800U & (IData)(vlSelfRef.__PVT__mideleg))) {
                    vlSelfRef.__PVT__rdata = ((0xfffff7ffU 
                                               & vlSelfRef.__PVT__rdata) 
                                              | (0x800U 
                                                 & (IData)(vlSelfRef.__PVT__mie)));
                }
            }
        } else if ((0x8000U & vlSymsp->TOP__Top__soc__core.LD_uop
                    [0U][1U])) {
            vlSelfRef.__PVT__invalidCSR = 1U;
        } else if ((0x4000U & vlSymsp->TOP__Top__soc__core.LD_uop
                    [0U][1U])) {
            vlSelfRef.__PVT__invalidCSR = 1U;
        } else {
            __PVT__unnamedblk5__DOT__temp = ((0xfffffffdU 
                                              & __PVT__unnamedblk5__DOT__temp) 
                                             | (2U 
                                                & vlSelfRef.__PVT__mstatus));
            __PVT__unnamedblk5__DOT__temp = ((0xffffff9fU 
                                              & __PVT__unnamedblk5__DOT__temp) 
                                             | (0x60U 
                                                & vlSelfRef.__PVT__mstatus));
            __PVT__unnamedblk5__DOT__temp = ((0xfffff8ffU 
                                              & __PVT__unnamedblk5__DOT__temp) 
                                             | (0x700U 
                                                & vlSelfRef.__PVT__mstatus));
            __PVT__unnamedblk5__DOT__temp = ((0xfffe1fffU 
                                              & __PVT__unnamedblk5__DOT__temp) 
                                             | (0x1e000U 
                                                & vlSelfRef.__PVT__mstatus));
            __PVT__unnamedblk5__DOT__temp = ((0xfff3ffffU 
                                              & __PVT__unnamedblk5__DOT__temp) 
                                             | (0xc0000U 
                                                & vlSelfRef.__PVT__mstatus));
            __PVT__unnamedblk5__DOT__temp = ((0x7fffffffU 
                                              & __PVT__unnamedblk5__DOT__temp) 
                                             | (0x80000000U 
                                                & vlSelfRef.__PVT__mstatus));
            vlSelfRef.__PVT__rdata = __PVT__unnamedblk5__DOT__temp;
        }
    } else {
        vlSelfRef.__PVT__invalidCSR = 1U;
    }
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm = 0xc03U;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh = 0xc83U;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm = 0xb03U;
    if (((0xb03U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                               [0U][1U] >> 0xeU))) 
         | (0xb83U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                 [0U][1U] >> 0xeU))))) {
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [3U]) : (IData)(
                                                             (vlSelfRef.mhpmcounter
                                                              [3U] 
                                                              >> 0x20U)));
        vlSelfRef.__PVT__invalidCSR = 0U;
    } else if ((((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm)) 
                | ((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                              [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh)))) {
        vlSelfRef.__PVT__invalidCSR = (1U & (~ (((3U 
                                                  == (IData)(vlSelfRef.__PVT__priv)) 
                                                 | ((1U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 3U))) 
                                                | (((0U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 3U)) 
                                                   & (vlSelfRef.__PVT__scounteren 
                                                      >> 3U)))));
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [3U]) : (IData)(
                                                             (vlSelfRef.mhpmcounter
                                                              [3U] 
                                                              >> 0x20U)));
    }
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm = 0xc04U;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh = 0xc84U;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm = 0xb04U;
    if (((0xb04U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                               [0U][1U] >> 0xeU))) 
         | (0xb84U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                 [0U][1U] >> 0xeU))))) {
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [4U]) : (IData)(
                                                             (vlSelfRef.mhpmcounter
                                                              [4U] 
                                                              >> 0x20U)));
        vlSelfRef.__PVT__invalidCSR = 0U;
    } else if ((((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm)) 
                | ((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                              [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh)))) {
        vlSelfRef.__PVT__invalidCSR = (1U & (~ (((3U 
                                                  == (IData)(vlSelfRef.__PVT__priv)) 
                                                 | ((1U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 4U))) 
                                                | (((0U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 4U)) 
                                                   & (vlSelfRef.__PVT__scounteren 
                                                      >> 4U)))));
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [4U]) : (IData)(
                                                             (vlSelfRef.mhpmcounter
                                                              [4U] 
                                                              >> 0x20U)));
    }
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm = 0xc05U;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh = 0xc85U;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm = 0xb05U;
    if (((0xb05U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                               [0U][1U] >> 0xeU))) 
         | (0xb85U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                 [0U][1U] >> 0xeU))))) {
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [5U]) : (IData)(
                                                             (vlSelfRef.mhpmcounter
                                                              [5U] 
                                                              >> 0x20U)));
        vlSelfRef.__PVT__invalidCSR = 0U;
    } else if ((((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm)) 
                | ((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                              [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh)))) {
        vlSelfRef.__PVT__invalidCSR = (1U & (~ (((3U 
                                                  == (IData)(vlSelfRef.__PVT__priv)) 
                                                 | ((1U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 5U))) 
                                                | (((0U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 5U)) 
                                                   & (vlSelfRef.__PVT__scounteren 
                                                      >> 5U)))));
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [5U]) : (IData)(
                                                             (vlSelfRef.mhpmcounter
                                                              [5U] 
                                                              >> 0x20U)));
    }
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm = 0xc06U;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh = 0xc86U;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm = 0xb06U;
    if (((0xb06U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                               [0U][1U] >> 0xeU))) 
         | (0xb86U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                 [0U][1U] >> 0xeU))))) {
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [6U]) : (IData)(
                                                             (vlSelfRef.mhpmcounter
                                                              [6U] 
                                                              >> 0x20U)));
        vlSelfRef.__PVT__invalidCSR = 0U;
    } else if ((((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm)) 
                | ((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                              [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh)))) {
        vlSelfRef.__PVT__invalidCSR = (1U & (~ (((3U 
                                                  == (IData)(vlSelfRef.__PVT__priv)) 
                                                 | ((1U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 6U))) 
                                                | (((0U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 6U)) 
                                                   & (vlSelfRef.__PVT__scounteren 
                                                      >> 6U)))));
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [6U]) : (IData)(
                                                             (vlSelfRef.mhpmcounter
                                                              [6U] 
                                                              >> 0x20U)));
    }
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm = 0xc07U;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh = 0xc87U;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm = 0xb07U;
    if (((0xb07U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                               [0U][1U] >> 0xeU))) 
         | (0xb87U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                 [0U][1U] >> 0xeU))))) {
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [7U]) : (IData)(
                                                             (vlSelfRef.mhpmcounter
                                                              [7U] 
                                                              >> 0x20U)));
        vlSelfRef.__PVT__invalidCSR = 0U;
    } else if ((((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm)) 
                | ((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                              [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh)))) {
        vlSelfRef.__PVT__invalidCSR = (1U & (~ (((3U 
                                                  == (IData)(vlSelfRef.__PVT__priv)) 
                                                 | ((1U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 7U))) 
                                                | (((0U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 7U)) 
                                                   & (vlSelfRef.__PVT__scounteren 
                                                      >> 7U)))));
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [7U]) : (IData)(
                                                             (vlSelfRef.mhpmcounter
                                                              [7U] 
                                                              >> 0x20U)));
    }
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm = 0xc08U;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh = 0xc88U;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm = 0xb08U;
    if (((0xb08U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                               [0U][1U] >> 0xeU))) 
         | (0xb88U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                 [0U][1U] >> 0xeU))))) {
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [8U]) : (IData)(
                                                             (vlSelfRef.mhpmcounter
                                                              [8U] 
                                                              >> 0x20U)));
        vlSelfRef.__PVT__invalidCSR = 0U;
    } else if ((((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm)) 
                | ((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                              [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh)))) {
        vlSelfRef.__PVT__invalidCSR = (1U & (~ (((3U 
                                                  == (IData)(vlSelfRef.__PVT__priv)) 
                                                 | ((1U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 8U))) 
                                                | (((0U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 8U)) 
                                                   & (vlSelfRef.__PVT__scounteren 
                                                      >> 8U)))));
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [8U]) : (IData)(
                                                             (vlSelfRef.mhpmcounter
                                                              [8U] 
                                                              >> 0x20U)));
    }
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm = 0xc09U;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh = 0xc89U;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm = 0xb09U;
    if (((0xb09U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                               [0U][1U] >> 0xeU))) 
         | (0xb89U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                 [0U][1U] >> 0xeU))))) {
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [9U]) : (IData)(
                                                             (vlSelfRef.mhpmcounter
                                                              [9U] 
                                                              >> 0x20U)));
        vlSelfRef.__PVT__invalidCSR = 0U;
    } else if ((((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm)) 
                | ((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                              [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh)))) {
        vlSelfRef.__PVT__invalidCSR = (1U & (~ (((3U 
                                                  == (IData)(vlSelfRef.__PVT__priv)) 
                                                 | ((1U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 9U))) 
                                                | (((0U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 9U)) 
                                                   & (vlSelfRef.__PVT__scounteren 
                                                      >> 9U)))));
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [9U]) : (IData)(
                                                             (vlSelfRef.mhpmcounter
                                                              [9U] 
                                                              >> 0x20U)));
    }
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm = 0xc0aU;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh = 0xc8aU;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm = 0xb0aU;
    if (((0xb0aU == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                               [0U][1U] >> 0xeU))) 
         | (0xb8aU == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                 [0U][1U] >> 0xeU))))) {
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [0xaU])
                                   : (IData)((vlSelfRef.mhpmcounter
                                              [0xaU] 
                                              >> 0x20U)));
        vlSelfRef.__PVT__invalidCSR = 0U;
    } else if ((((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm)) 
                | ((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                              [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh)))) {
        vlSelfRef.__PVT__invalidCSR = (1U & (~ (((3U 
                                                  == (IData)(vlSelfRef.__PVT__priv)) 
                                                 | ((1U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 0xaU))) 
                                                | (((0U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 0xaU)) 
                                                   & (vlSelfRef.__PVT__scounteren 
                                                      >> 0xaU)))));
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [0xaU])
                                   : (IData)((vlSelfRef.mhpmcounter
                                              [0xaU] 
                                              >> 0x20U)));
    }
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm = 0xc0bU;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh = 0xc8bU;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm = 0xb0bU;
    if (((0xb0bU == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                               [0U][1U] >> 0xeU))) 
         | (0xb8bU == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                 [0U][1U] >> 0xeU))))) {
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [0xbU])
                                   : (IData)((vlSelfRef.mhpmcounter
                                              [0xbU] 
                                              >> 0x20U)));
        vlSelfRef.__PVT__invalidCSR = 0U;
    } else if ((((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm)) 
                | ((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                              [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh)))) {
        vlSelfRef.__PVT__invalidCSR = (1U & (~ (((3U 
                                                  == (IData)(vlSelfRef.__PVT__priv)) 
                                                 | ((1U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 0xbU))) 
                                                | (((0U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 0xbU)) 
                                                   & (vlSelfRef.__PVT__scounteren 
                                                      >> 0xbU)))));
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [0xbU])
                                   : (IData)((vlSelfRef.mhpmcounter
                                              [0xbU] 
                                              >> 0x20U)));
    }
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm = 0xc0cU;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh = 0xc8cU;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm = 0xb0cU;
    if (((0xb0cU == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                               [0U][1U] >> 0xeU))) 
         | (0xb8cU == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                 [0U][1U] >> 0xeU))))) {
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [0xcU])
                                   : (IData)((vlSelfRef.mhpmcounter
                                              [0xcU] 
                                              >> 0x20U)));
        vlSelfRef.__PVT__invalidCSR = 0U;
    } else if ((((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm)) 
                | ((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                              [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh)))) {
        vlSelfRef.__PVT__invalidCSR = (1U & (~ (((3U 
                                                  == (IData)(vlSelfRef.__PVT__priv)) 
                                                 | ((1U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 0xcU))) 
                                                | (((0U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 0xcU)) 
                                                   & (vlSelfRef.__PVT__scounteren 
                                                      >> 0xcU)))));
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [0xcU])
                                   : (IData)((vlSelfRef.mhpmcounter
                                              [0xcU] 
                                              >> 0x20U)));
    }
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm = 0xc0dU;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh = 0xc8dU;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm = 0xb0dU;
    if (((0xb0dU == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                               [0U][1U] >> 0xeU))) 
         | (0xb8dU == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                 [0U][1U] >> 0xeU))))) {
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [0xdU])
                                   : (IData)((vlSelfRef.mhpmcounter
                                              [0xdU] 
                                              >> 0x20U)));
        vlSelfRef.__PVT__invalidCSR = 0U;
    } else if ((((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm)) 
                | ((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                              [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh)))) {
        vlSelfRef.__PVT__invalidCSR = (1U & (~ (((3U 
                                                  == (IData)(vlSelfRef.__PVT__priv)) 
                                                 | ((1U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 0xdU))) 
                                                | (((0U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 0xdU)) 
                                                   & (vlSelfRef.__PVT__scounteren 
                                                      >> 0xdU)))));
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [0xdU])
                                   : (IData)((vlSelfRef.mhpmcounter
                                              [0xdU] 
                                              >> 0x20U)));
    }
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm = 0xc0eU;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh = 0xc8eU;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm = 0xb0eU;
    if (((0xb0eU == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                               [0U][1U] >> 0xeU))) 
         | (0xb8eU == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                 [0U][1U] >> 0xeU))))) {
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [0xeU])
                                   : (IData)((vlSelfRef.mhpmcounter
                                              [0xeU] 
                                              >> 0x20U)));
        vlSelfRef.__PVT__invalidCSR = 0U;
    } else if ((((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm)) 
                | ((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                              [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh)))) {
        vlSelfRef.__PVT__invalidCSR = (1U & (~ (((3U 
                                                  == (IData)(vlSelfRef.__PVT__priv)) 
                                                 | ((1U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 0xeU))) 
                                                | (((0U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 0xeU)) 
                                                   & (vlSelfRef.__PVT__scounteren 
                                                      >> 0xeU)))));
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [0xeU])
                                   : (IData)((vlSelfRef.mhpmcounter
                                              [0xeU] 
                                              >> 0x20U)));
    }
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm = 0xc0fU;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh = 0xc8fU;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm = 0xb0fU;
    if (((0xb0fU == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                               [0U][1U] >> 0xeU))) 
         | (0xb8fU == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                 [0U][1U] >> 0xeU))))) {
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [0xfU])
                                   : (IData)((vlSelfRef.mhpmcounter
                                              [0xfU] 
                                              >> 0x20U)));
        vlSelfRef.__PVT__invalidCSR = 0U;
    } else if ((((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm)) 
                | ((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                              [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh)))) {
        vlSelfRef.__PVT__invalidCSR = (1U & (~ (((3U 
                                                  == (IData)(vlSelfRef.__PVT__priv)) 
                                                 | ((1U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 0xfU))) 
                                                | (((0U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 0xfU)) 
                                                   & (vlSelfRef.__PVT__scounteren 
                                                      >> 0xfU)))));
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [0xfU])
                                   : (IData)((vlSelfRef.mhpmcounter
                                              [0xfU] 
                                              >> 0x20U)));
    }
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm = 0xc10U;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh = 0xc90U;
    __PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm = 0xb10U;
    if (((0xb10U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                               [0U][1U] >> 0xeU))) 
         | (0xb90U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                 [0U][1U] >> 0xeU))))) {
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mhpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [0x10U])
                                   : (IData)((vlSelfRef.mhpmcounter
                                              [0x10U] 
                                              >> 0x20U)));
        vlSelfRef.__PVT__invalidCSR = 0U;
    } else if ((((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                            [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm)) 
                | ((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                              [0U][1U] >> 0xeU)) == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpmh)))) {
        vlSelfRef.__PVT__invalidCSR = (1U & (~ (((3U 
                                                  == (IData)(vlSelfRef.__PVT__priv)) 
                                                 | ((1U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 0x10U))) 
                                                | (((0U 
                                                     == (IData)(vlSelfRef.__PVT__priv)) 
                                                    & (vlSelfRef.__PVT__mcounteren 
                                                       >> 0x10U)) 
                                                   & (vlSelfRef.__PVT__scounteren 
                                                      >> 0x10U)))));
        vlSelfRef.__PVT__rdata = (((0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xeU)) 
                                   == (IData)(__PVT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hpm))
                                   ? (IData)(vlSelfRef.mhpmcounter
                                             [0x10U])
                                   : (IData)((vlSelfRef.mhpmcounter
                                              [0x10U] 
                                              >> 0x20U)));
    }
}

VL_INLINE_OPT void VTop_CSR___nba_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__0(VTop_CSR* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_CSR___nba_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__mcycle = vlSelfRef.mcycle;
    vlSelfRef.__Vdly__minstret = vlSelfRef.minstret;
    vlSelfRef.__Vdly__mepc = vlSelfRef.__PVT__mepc;
    vlSelfRef.__Vdly__sepc = vlSelfRef.__PVT__sepc;
    vlSelfRef.__VdlySet__mhpmcounter__v0 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v1 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v2 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v17 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v18 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v19 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v20 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v21 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v22 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v23 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v24 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v25 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v26 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v27 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v28 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v29 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v30 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v31 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v32 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v33 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v34 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v35 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v36 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v37 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v38 = 0U;
    vlSelfRef.__VdlySet__mhpmcounter__v39 = 0U;
    vlSelfRef.__Vdly__mstatus = vlSelfRef.__PVT__mstatus;
    vlSelfRef.__Vdly__mideleg = vlSelfRef.__PVT__mideleg;
    vlSelfRef.__Vdly__priv = vlSelfRef.__PVT__priv;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__priv = 3U;
        vlSelfRef.__Vdly__mstatus = 0U;
        vlSelfRef.__Vdly__mcycle = 0xfffffffffffff000ULL;
        vlSelfRef.__Vdly__minstret = 0ULL;
        vlSelfRef.__PVT__mcounteren = 0U;
        vlSelfRef.__PVT__mtvec = 0x80000000U;
        vlSelfRef.__Vdly__mepc = 0U;
        vlSelfRef.__PVT__mcause = 0U;
        vlSelfRef.__PVT__mtval = 0U;
        vlSelfRef.__Vdly__mideleg = 0U;
        vlSelfRef.__PVT__medeleg = 0U;
        vlSelfRef.__PVT__mip = 0U;
        vlSelfRef.__PVT__mie = 0U;
        vlSelfRef.__PVT__menvcfg = 0U;
        vlSelfRef.__PVT__scounteren = 0U;
        vlSelfRef.__Vdly__sepc = 0U;
        vlSelfRef.__PVT__scause = 0U;
        vlSelfRef.__PVT__stval = 0U;
        vlSelfRef.__PVT__stvec = 0x80000000U;
        vlSelfRef.__PVT__satp = 0U;
        vlSelfRef.__PVT__senvcfg = 0U;
        vlSelfRef.__VdlySet__mhpmcounter__v0 = 1U;
        vlSelfRef.__PVT__OUT_uop = 0ULL;
        vlSelfRef.__PVT__misa_X = 1U;
        vlSelfRef.__VdlySet__mhpmcounter__v1 = 1U;
        vlSelfRef.__PVT__OUT_uop = (0xffffffffffffeULL 
                                    & vlSelfRef.__PVT__OUT_uop);
        vlSelfRef.__VdlySet__mhpmcounter__v2 = 1U;
    } else {
        if ((1U & vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[0U])) {
            vlSelfRef.__PVT__unnamedblk9__DOT__tval = 0U;
            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[0U] 
                          >> 7U)))) {
                if ((1U & (~ (vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[0U] 
                              >> 6U)))) {
                    if ((0x20U & vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[0U])) {
                        if ((0x10U & vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[0U])) {
                            if ((8U & vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[0U])) {
                                if ((4U & vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[0U])) {
                                    vlSelfRef.__PVT__unnamedblk9__DOT__tval 
                                        = (IData)((vlSymsp->TOP__Top__soc__core.__PVT__tvalSelect__DOT__curTVal 
                                                   >> 8U));
                                }
                            } else {
                                vlSelfRef.__PVT__unnamedblk9__DOT__tval 
                                    = ((4U & vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[0U])
                                        ? (IData)((vlSymsp->TOP__Top__soc__core.__PVT__tvalSelect__DOT__curTVal 
                                                   >> 8U))
                                        : ((vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[1U] 
                                            << 0x18U) 
                                           | (vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[0U] 
                                              >> 8U)));
                            }
                        }
                    } else if ((0x10U & vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[0U])) {
                        vlSelfRef.__PVT__unnamedblk9__DOT__tval 
                            = (IData)((vlSymsp->TOP__Top__soc__core.__PVT__tvalSelect__DOT__curTVal 
                                       >> 8U));
                    } else if ((8U & vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[0U])) {
                        if ((4U & vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[0U])) {
                            vlSelfRef.__PVT__unnamedblk9__DOT__tval 
                                = ((vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[2U] 
                                    << 0x18U) | (vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[1U] 
                                                 >> 8U));
                        }
                    } else if ((4U & vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[0U])) {
                        vlSelfRef.__PVT__unnamedblk9__DOT__tval 
                            = ((vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[1U] 
                                << 0x18U) | (vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[0U] 
                                             >> 8U));
                    }
                }
            }
            if ((2U & vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[0U])) {
                vlSelfRef.__Vdly__mstatus = ((0xffffffdfU 
                                              & vlSelfRef.__Vdly__mstatus) 
                                             | (0x20U 
                                                & (vlSelfRef.__PVT__mstatus 
                                                   << 4U)));
                vlSelfRef.__Vdly__sepc = ((vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[2U] 
                                           << 0x18U) 
                                          | (vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[1U] 
                                             >> 8U));
                vlSelfRef.__PVT__scause = ((0xffffffe0U 
                                            & vlSelfRef.__PVT__scause) 
                                           | (0x1fU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[0U] 
                                                 >> 2U)));
                vlSelfRef.__PVT__stval = vlSelfRef.__PVT__unnamedblk9__DOT__tval;
                vlSelfRef.__Vdly__mstatus = (0xfffffffdU 
                                             & vlSelfRef.__Vdly__mstatus);
                vlSelfRef.__PVT__scause = ((0x7fffffffU 
                                            & vlSelfRef.__PVT__scause) 
                                           | (0x80000000U 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[0U] 
                                                 << 0x18U)));
                vlSelfRef.__Vdly__mstatus = ((0xfffffeffU 
                                              & vlSelfRef.__Vdly__mstatus) 
                                             | (0x100U 
                                                & ((IData)(vlSelfRef.__PVT__priv) 
                                                   << 8U)));
                vlSelfRef.__Vdly__priv = 1U;
            } else {
                vlSelfRef.__Vdly__mstatus = ((0xffffff7fU 
                                              & vlSelfRef.__Vdly__mstatus) 
                                             | (0x80U 
                                                & (vlSelfRef.__PVT__mstatus 
                                                   << 4U)));
                vlSelfRef.__Vdly__mepc = ((vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[2U] 
                                           << 0x18U) 
                                          | (vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[1U] 
                                             >> 8U));
                vlSelfRef.__PVT__mcause = ((0xffffffe0U 
                                            & vlSelfRef.__PVT__mcause) 
                                           | (0x1fU 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[0U] 
                                                 >> 2U)));
                vlSelfRef.__PVT__mtval = vlSelfRef.__PVT__unnamedblk9__DOT__tval;
                vlSelfRef.__Vdly__mstatus = (0xfffffff7U 
                                             & vlSelfRef.__Vdly__mstatus);
                vlSelfRef.__PVT__mcause = (0xffffffefU 
                                           & vlSelfRef.__PVT__mcause);
                vlSelfRef.__Vdly__mstatus = ((0xffffe7ffU 
                                              & vlSelfRef.__Vdly__mstatus) 
                                             | ((IData)(vlSelfRef.__PVT__priv) 
                                                << 0xbU));
                vlSelfRef.__PVT__mcause = ((0x7fffffffU 
                                            & vlSelfRef.__PVT__mcause) 
                                           | (0x80000000U 
                                              & (vlSymsp->TOP__Top__soc__core.__PVT__TH_trapInfo[0U] 
                                                 << 0x18U)));
                vlSelfRef.__Vdly__priv = 3U;
            }
        }
        if ((1U & (~ vlSelfRef.__PVT__mcountinhibit))) {
            vlSelfRef.__Vdly__mcycle = (1ULL + vlSelfRef.mcycle);
        }
        vlSelfRef.__PVT__mip = ((0xff7fU & (IData)(vlSelfRef.__PVT__mip)) 
                                | ((vlSymsp->TOP__Top__soc.__PVT__mmio__DOT__aclint__DOT__mtime 
                                    >= vlSymsp->TOP__Top__soc.__PVT__mmio__DOT__aclint__DOT__mtimecmp) 
                                   << 7U));
        vlSelfRef.__PVT__mip = (0xf7ffU & (IData)(vlSelfRef.__PVT__mip));
        if ((1U & (~ (vlSelfRef.__PVT__mcountinhibit 
                      >> 2U)))) {
            vlSelfRef.__PVT__unnamedblk10__DOT__temp = 0U;
            if ((1U & (IData)(vlSymsp->TOP__Top__soc__core.ROB_perfcInfo))) {
                vlSelfRef.__PVT__unnamedblk10__DOT__temp 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__temp)));
            }
            if ((2U & (IData)(vlSymsp->TOP__Top__soc__core.ROB_perfcInfo))) {
                vlSelfRef.__PVT__unnamedblk10__DOT__temp 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__temp)));
            }
            if ((4U & (IData)(vlSymsp->TOP__Top__soc__core.ROB_perfcInfo))) {
                vlSelfRef.__PVT__unnamedblk10__DOT__temp 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__temp)));
            }
            if ((8U & (IData)(vlSymsp->TOP__Top__soc__core.ROB_perfcInfo))) {
                vlSelfRef.__PVT__unnamedblk10__DOT__temp 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__unnamedblk10__DOT__temp)));
            }
            vlSelfRef.__Vdly__minstret = (vlSelfRef.minstret 
                                          + (QData)((IData)(vlSelfRef.__PVT__unnamedblk10__DOT__temp)));
        }
        if ((1U & (~ (vlSelfRef.__PVT__mcountinhibit 
                      >> 3U)))) {
            vlSelfRef.__PVT__unnamedblk12__DOT__temp = 0U;
            if ((0x10U & (IData)(vlSymsp->TOP__Top__soc__core.ROB_perfcInfo))) {
                vlSelfRef.__PVT__unnamedblk12__DOT__temp 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__unnamedblk12__DOT__temp)));
            }
            if ((0x20U & (IData)(vlSymsp->TOP__Top__soc__core.ROB_perfcInfo))) {
                vlSelfRef.__PVT__unnamedblk12__DOT__temp 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__unnamedblk12__DOT__temp)));
            }
            if ((0x40U & (IData)(vlSymsp->TOP__Top__soc__core.ROB_perfcInfo))) {
                vlSelfRef.__PVT__unnamedblk12__DOT__temp 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__unnamedblk12__DOT__temp)));
            }
            if ((0x80U & (IData)(vlSymsp->TOP__Top__soc__core.ROB_perfcInfo))) {
                vlSelfRef.__PVT__unnamedblk12__DOT__temp 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__unnamedblk12__DOT__temp)));
            }
            vlSelfRef.__VdlyVal__mhpmcounter__v17 = 
                (vlSelfRef.mhpmcounter[3U] + (QData)((IData)(vlSelfRef.__PVT__unnamedblk12__DOT__temp)));
            vlSelfRef.__VdlySet__mhpmcounter__v17 = 1U;
        }
        if (((~ (vlSelfRef.__PVT__mcountinhibit >> 4U)) 
             & (IData)(vlSymsp->TOP__Top__soc__core.__PVT__BS_PERFC_branchMispr))) {
            vlSelfRef.__VdlyVal__mhpmcounter__v18 = 
                (1ULL + vlSelfRef.mhpmcounter[4U]);
            vlSelfRef.__VdlySet__mhpmcounter__v18 = 1U;
        }
        if ((1U & ((~ (vlSelfRef.__PVT__mcountinhibit 
                       >> 5U)) & vlSymsp->TOP__Top__soc__core.branch[0U]))) {
            vlSelfRef.__VdlyVal__mhpmcounter__v19 = 
                (1ULL + vlSelfRef.mhpmcounter[5U]);
            vlSelfRef.__VdlySet__mhpmcounter__v19 = 1U;
        }
        if ((1U & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                   & (~ (vlSelfRef.__PVT__mcountinhibit 
                         >> (0x1fU & ((IData)(6U) + 
                                      (7U & (vlSymsp->TOP__Top__soc__core.branch[2U] 
                                             >> 7U))))))))) {
            vlSelfRef.__Vlvbound_h4b2c3bb3__0 = (1ULL 
                                                 + 
                                                 ((0x10U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       + 
                                                       (7U 
                                                        & (vlSymsp->TOP__Top__soc__core.branch[2U] 
                                                           >> 7U)))))
                                                   ? 
                                                  vlSelfRef.mhpmcounter
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      (7U 
                                                       & (vlSymsp->TOP__Top__soc__core.branch[2U] 
                                                          >> 7U))))]
                                                   : 0ULL));
            if ((0x10U >= (0x1fU & ((IData)(6U) + (7U 
                                                   & (vlSymsp->TOP__Top__soc__core.branch[2U] 
                                                      >> 7U)))))) {
                vlSelfRef.__VdlyVal__mhpmcounter__v20 
                    = vlSelfRef.__Vlvbound_h4b2c3bb3__0;
                vlSelfRef.__VdlyDim0__mhpmcounter__v20 
                    = (0x1fU & ((IData)(6U) + (7U & 
                                               (vlSymsp->TOP__Top__soc__core.branch[2U] 
                                                >> 7U))));
                vlSelfRef.__VdlySet__mhpmcounter__v20 = 1U;
            }
        }
        if ((0U != (7U & ((IData)(vlSymsp->TOP__Top__soc__core.ROB_perfcInfo) 
                          >> 8U)))) {
            vlSelfRef.__Vlvbound_hab3b1230__0 = (1ULL 
                                                 + 
                                                 (((0x10U 
                                                    >= 
                                                    (0x1fU 
                                                     & ((IData)(0xbU) 
                                                        + 
                                                        (7U 
                                                         & ((IData)(vlSymsp->TOP__Top__soc__core.ROB_perfcInfo) 
                                                            >> 8U)))))
                                                    ? 
                                                   vlSelfRef.mhpmcounter
                                                   [
                                                   (0x1fU 
                                                    & ((IData)(0xbU) 
                                                       + 
                                                       (7U 
                                                        & ((IData)(vlSymsp->TOP__Top__soc__core.ROB_perfcInfo) 
                                                           >> 8U))))]
                                                    : 0ULL) 
                                                  + (QData)((IData)(
                                                                    (3U 
                                                                     & ((IData)(vlSymsp->TOP__Top__soc__core.ROB_perfcInfo) 
                                                                        >> 0xbU))))));
            if ((0x10U >= (0x1fU & ((IData)(0xbU) + 
                                    (7U & ((IData)(vlSymsp->TOP__Top__soc__core.ROB_perfcInfo) 
                                           >> 8U)))))) {
                vlSelfRef.__VdlyVal__mhpmcounter__v21 
                    = vlSelfRef.__Vlvbound_hab3b1230__0;
                vlSelfRef.__VdlyDim0__mhpmcounter__v21 
                    = (0x1fU & ((IData)(0xbU) + (7U 
                                                 & ((IData)(vlSymsp->TOP__Top__soc__core.ROB_perfcInfo) 
                                                    >> 8U))));
                vlSelfRef.__VdlySet__mhpmcounter__v21 = 1U;
            }
        }
        if ((((0xbU == (0xfU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                [0U][0U] >> 2U))) & 
              vlSymsp->TOP__Top__soc__core.LD_uop[0U][0U]) 
             & ((~ vlSymsp->TOP__Top__soc__core.branch[0U]) 
                | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                    (0x7fU 
                                                     & (((vlSymsp->TOP__Top__soc__core.LD_uop
                                                          [0U][1U] 
                                                          << 6U) 
                                                         | (vlSymsp->TOP__Top__soc__core.LD_uop
                                                            [0U][0U] 
                                                            >> 0x1aU)) 
                                                        - 
                                                        ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                          << 0xbU) 
                                                         | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                            >> 0x15U))))))))) {
            vlSelfRef.__PVT__OUT_uop = ((0xffffffff00000ULL 
                                         & vlSelfRef.__PVT__OUT_uop) 
                                        | (IData)((IData)(
                                                          (1U 
                                                           | ((0xfe000U 
                                                               & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                  [0U][1U] 
                                                                  << 0xcU)) 
                                                              | (0x1fc0U 
                                                                 & ((vlSymsp->TOP__Top__soc__core.LD_uop
                                                                     [0U][1U] 
                                                                     << 0xcU) 
                                                                    | (0xfc0U 
                                                                       & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                          [0U][0U] 
                                                                          >> 0x14U)))))))));
            if (((8U == (0x3fU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                  [0U][1U] >> 8U))) 
                 | (7U == (0x3fU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                    [0U][1U] >> 8U))))) {
                vlSelfRef.__PVT__OUT_uop = (0x38ULL 
                                            | (0xfffffffffffc3ULL 
                                               & vlSelfRef.__PVT__OUT_uop));
                if ((8U == (0x3fU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                     [0U][1U] >> 8U)))) {
                    if ((3U > (IData)(vlSelfRef.__PVT__priv))) {
                        vlSelfRef.__PVT__OUT_uop = 
                            (0x18ULL | (0xfffffffffffc3ULL 
                                        & vlSelfRef.__PVT__OUT_uop));
                    } else {
                        vlSelfRef.__Vdly__mstatus = 
                            ((0xfffffff7U & vlSelfRef.__Vdly__mstatus) 
                             | (8U & (vlSelfRef.__PVT__mstatus 
                                      >> 4U)));
                        vlSelfRef.__PVT__retvec = (vlSelfRef.__PVT__mepc 
                                                   >> 1U);
                        vlSelfRef.__Vdly__mstatus = 
                            (0x80U | vlSelfRef.__Vdly__mstatus);
                        vlSelfRef.__Vdly__priv = (3U 
                                                  & (vlSelfRef.__PVT__mstatus 
                                                     >> 0xbU));
                        vlSelfRef.__Vdly__mstatus = 
                            (0xffffe7ffU & vlSelfRef.__Vdly__mstatus);
                        if ((3U != (3U & (vlSelfRef.__PVT__mstatus 
                                          >> 0xbU)))) {
                            vlSelfRef.__Vdly__mstatus 
                                = (0xfffdffffU & vlSelfRef.__Vdly__mstatus);
                        }
                    }
                } else if (((1U > (IData)(vlSelfRef.__PVT__priv)) 
                            | ((7U == (0x3fU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                [0U][1U] 
                                                >> 8U))) 
                               & (vlSelfRef.__PVT__mstatus 
                                  >> 0x16U)))) {
                    vlSelfRef.__PVT__OUT_uop = (0x18ULL 
                                                | (0xfffffffffffc3ULL 
                                                   & vlSelfRef.__PVT__OUT_uop));
                } else {
                    vlSelfRef.__Vdly__mstatus = ((0xfffffffdU 
                                                  & vlSelfRef.__Vdly__mstatus) 
                                                 | (2U 
                                                    & (vlSelfRef.__PVT__mstatus 
                                                       >> 4U)));
                    vlSelfRef.__PVT__retvec = (vlSelfRef.__PVT__sepc 
                                               >> 1U);
                    vlSelfRef.__Vdly__mstatus = (0x20U 
                                                 | vlSelfRef.__Vdly__mstatus);
                    vlSelfRef.__Vdly__priv = (1U & 
                                              (vlSelfRef.__PVT__mstatus 
                                               >> 8U));
                    vlSelfRef.__Vdly__mstatus = (0xfffffeffU 
                                                 & vlSelfRef.__Vdly__mstatus);
                    vlSelfRef.__Vdly__mstatus = (0xfffdffffU 
                                                 & vlSelfRef.__Vdly__mstatus);
                }
            } else if ((((IData)(vlSelfRef.__PVT__priv) 
                         < (3U & (vlSymsp->TOP__Top__soc__core.LD_uop
                                  [0U][1U] >> 0x16U))) 
                        | (IData)(vlSelfRef.__PVT__invalidCSR))) {
                vlSelfRef.__PVT__OUT_uop = (0x18ULL 
                                            | (0xfffffffffffc3ULL 
                                               & vlSelfRef.__PVT__OUT_uop));
            } else {
                if ((0U != (0x3fU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                     [0U][1U] >> 8U)))) {
                    if ((1U & (~ (vlSymsp->TOP__Top__soc__core.LD_uop
                                  [0U][1U] >> 0x19U)))) {
                        if ((1U & (~ (vlSymsp->TOP__Top__soc__core.LD_uop
                                      [0U][1U] >> 0x18U)))) {
                            if ((0x800000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                 [0U][1U])) {
                                if ((0x400000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                     [0U][1U])) {
                                    if ((1U & (~ (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0x15U)))) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__Top__soc__core.LD_uop
                                             [0U][1U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U] 
                                                     >> 0x13U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__Top__soc__core.LD_uop
                                                         [0U][1U] 
                                                         >> 0x12U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__Top__soc__core.LD_uop
                                                             [0U][1U] 
                                                             >> 0x11U)))) {
                                                        if (
                                                            (0x10000U 
                                                             & vlSymsp->TOP__Top__soc__core.LD_uop
                                                             [0U][1U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                     [0U][1U] 
                                                                     >> 0xfU)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                         [0U][1U] 
                                                                         >> 0xeU)))) {
                                                                    vlSelfRef.__PVT__OUT_uop 
                                                                        = 
                                                                        (0x14ULL 
                                                                         | (0xfffffffffffc3ULL 
                                                                            & vlSelfRef.__PVT__OUT_uop));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__Top__soc__core.LD_uop
                                                        [0U][1U] 
                                                        >> 0x13U)))) {
                                            if ((0x40000U 
                                                 & vlSymsp->TOP__Top__soc__core.LD_uop
                                                 [0U][1U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__Top__soc__core.LD_uop
                                                         [0U][1U] 
                                                         >> 0x11U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__Top__soc__core.LD_uop
                                                             [0U][1U] 
                                                             >> 0x10U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                 [0U][1U] 
                                                                 >> 0xfU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                     [0U][1U] 
                                                                     >> 0xeU)))) {
                                                                vlSelfRef.__PVT__OUT_uop 
                                                                    = 
                                                                    (0x14ULL 
                                                                     | (0xfffffffffffc3ULL 
                                                                        & vlSelfRef.__PVT__OUT_uop));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (0x20000U 
                                                        & vlSymsp->TOP__Top__soc__core.LD_uop
                                                        [0U][1U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__Top__soc__core.LD_uop
                                                         [0U][1U] 
                                                         >> 0x10U)))) {
                                                    if (
                                                        (0x8000U 
                                                         & vlSymsp->TOP__Top__soc__core.LD_uop
                                                         [0U][1U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                 [0U][1U] 
                                                                 >> 0xeU)))) {
                                                            vlSelfRef.__PVT__OUT_uop 
                                                                = 
                                                                (0x14ULL 
                                                                 | (0xfffffffffffc3ULL 
                                                                    & vlSelfRef.__PVT__OUT_uop));
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (0x10000U 
                                                        & vlSymsp->TOP__Top__soc__core.LD_uop
                                                        [0U][1U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__Top__soc__core.LD_uop
                                                         [0U][1U] 
                                                         >> 0xeU)))) {
                                                    vlSelfRef.__PVT__OUT_uop 
                                                        = 
                                                        (0x14ULL 
                                                         | (0xfffffffffffc3ULL 
                                                            & vlSelfRef.__PVT__OUT_uop));
                                                }
                                            } else if (
                                                       (0x8000U 
                                                        & vlSymsp->TOP__Top__soc__core.LD_uop
                                                        [0U][1U])) {
                                                if (
                                                    (0x4000U 
                                                     & vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U])) {
                                                    vlSelfRef.__PVT__OUT_uop 
                                                        = 
                                                        (0x14ULL 
                                                         | (0xfffffffffffc3ULL 
                                                            & vlSelfRef.__PVT__OUT_uop));
                                                }
                                            } else {
                                                vlSelfRef.__PVT__OUT_uop 
                                                    = 
                                                    (0x14ULL 
                                                     | (0xfffffffffffc3ULL 
                                                        & vlSelfRef.__PVT__OUT_uop));
                                            }
                                        }
                                    }
                                }
                            } else if ((0x400000U & 
                                        vlSymsp->TOP__Top__soc__core.LD_uop
                                        [0U][1U])) {
                                if ((0x200000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                     [0U][1U])) {
                                    if ((1U & (~ (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0x14U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__Top__soc__core.LD_uop
                                                    [0U][1U] 
                                                    >> 0x13U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U] 
                                                     >> 0x12U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__Top__soc__core.LD_uop
                                                         [0U][1U] 
                                                         >> 0x11U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__Top__soc__core.LD_uop
                                                             [0U][1U] 
                                                             >> 0x10U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                 [0U][1U] 
                                                                 >> 0xfU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                     [0U][1U] 
                                                                     >> 0xeU)))) {
                                                                vlSelfRef.__PVT__OUT_uop 
                                                                    = 
                                                                    (0x14ULL 
                                                                     | (0xfffffffffffc3ULL 
                                                                        & vlSelfRef.__PVT__OUT_uop));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((0x100000U 
                                            & vlSymsp->TOP__Top__soc__core.LD_uop
                                            [0U][1U])) {
                                    if ((1U & (~ (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0x13U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__Top__soc__core.LD_uop
                                                    [0U][1U] 
                                                    >> 0x12U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U] 
                                                     >> 0x11U)))) {
                                                if (
                                                    (0x10000U 
                                                     & vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__Top__soc__core.LD_uop
                                                             [0U][1U] 
                                                             >> 0xfU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                 [0U][1U] 
                                                                 >> 0xeU)))) {
                                                            vlSelfRef.__PVT__OUT_uop 
                                                                = 
                                                                (0x14ULL 
                                                                 | (0xfffffffffffc3ULL 
                                                                    & vlSelfRef.__PVT__OUT_uop));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSymsp->TOP__Top__soc__core.LD_uop
                                                   [0U][1U] 
                                                   >> 0x13U)))) {
                                    if ((1U & (~ (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0x12U)))) {
                                        if ((0x20000U 
                                             & vlSymsp->TOP__Top__soc__core.LD_uop
                                             [0U][1U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U] 
                                                     >> 0x10U)))) {
                                                if (
                                                    (0x8000U 
                                                     & vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__Top__soc__core.LD_uop
                                                             [0U][1U] 
                                                             >> 0xeU)))) {
                                                        vlSelfRef.__PVT__OUT_uop 
                                                            = 
                                                            (0x14ULL 
                                                             | (0xfffffffffffc3ULL 
                                                                & vlSelfRef.__PVT__OUT_uop));
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (0x10000U 
                                                    & vlSymsp->TOP__Top__soc__core.LD_uop
                                                    [0U][1U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U] 
                                                     >> 0xeU)))) {
                                                vlSelfRef.__PVT__OUT_uop 
                                                    = 
                                                    (0x14ULL 
                                                     | (0xfffffffffffc3ULL 
                                                        & vlSelfRef.__PVT__OUT_uop));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__Top__soc__core.LD_uop
                                                        [0U][1U] 
                                                        >> 0xfU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U] 
                                                     >> 0xeU)))) {
                                                vlSelfRef.__PVT__OUT_uop 
                                                    = 
                                                    (0x14ULL 
                                                     | (0xfffffffffffc3ULL 
                                                        & vlSelfRef.__PVT__OUT_uop));
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSymsp->TOP__Top__soc__core.LD_uop
                                                 [0U][1U] 
                                                 >> 0x15U)))) {
                                if ((1U & (~ (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0x14U)))) {
                                    if ((1U & (~ (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0x13U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__Top__soc__core.LD_uop
                                                    [0U][1U] 
                                                    >> 0x12U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U] 
                                                     >> 0x11U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__Top__soc__core.LD_uop
                                                         [0U][1U] 
                                                         >> 0x10U)))) {
                                                    if (
                                                        (0x8000U 
                                                         & vlSymsp->TOP__Top__soc__core.LD_uop
                                                         [0U][1U])) {
                                                        vlSelfRef.__PVT__OUT_uop 
                                                            = 
                                                            (0x14ULL 
                                                             | (0xfffffffffffc3ULL 
                                                                & vlSelfRef.__PVT__OUT_uop));
                                                    } else if (
                                                               (0x4000U 
                                                                & vlSymsp->TOP__Top__soc__core.LD_uop
                                                                [0U][1U])) {
                                                        vlSelfRef.__PVT__OUT_uop 
                                                            = 
                                                            (0x14ULL 
                                                             | (0xfffffffffffc3ULL 
                                                                & vlSelfRef.__PVT__OUT_uop));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((3U == (3U & (vlSymsp->TOP__Top__soc__core.LD_uop
                                      [0U][1U] >> 0x18U)))) {
                        vlSelfRef.__PVT__OUT_uop = 
                            (0x18ULL | (0xfffffffffffc3ULL 
                                        & vlSelfRef.__PVT__OUT_uop));
                    } else {
                        if ((1U & (~ (vlSymsp->TOP__Top__soc__core.LD_uop
                                      [0U][1U] >> 0xdU)))) {
                            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.LD_uop
                                          [0U][1U] 
                                          >> 0xcU)))) {
                                if ((1U & (~ (vlSymsp->TOP__Top__soc__core.LD_uop
                                              [0U][1U] 
                                              >> 0xbU)))) {
                                    if ((0x400U & vlSymsp->TOP__Top__soc__core.LD_uop
                                         [0U][1U])) {
                                        if ((0x200U 
                                             & vlSymsp->TOP__Top__soc__core.LD_uop
                                             [0U][1U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U] 
                                                     >> 8U)))) {
                                                vlSelfRef.__PVT__unnamedblk14__DOT__wdata 
                                                    = 
                                                    (vlSelfRef.__PVT__rdata 
                                                     & (~ 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                            [0U][1U] 
                                                            >> 0x1aU))));
                                            }
                                        } else {
                                            vlSelfRef.__PVT__unnamedblk14__DOT__wdata 
                                                = (
                                                   (0x100U 
                                                    & vlSymsp->TOP__Top__soc__core.LD_uop
                                                    [0U][1U])
                                                    ? 
                                                   (vlSelfRef.__PVT__rdata 
                                                    | (0x1fU 
                                                       & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                          [0U][1U] 
                                                          >> 0x1aU)))
                                                    : 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                       [0U][1U] 
                                                       >> 0x1aU)));
                                        }
                                    } else if ((0x200U 
                                                & vlSymsp->TOP__Top__soc__core.LD_uop
                                                [0U][1U])) {
                                        vlSelfRef.__PVT__unnamedblk14__DOT__wdata 
                                            = ((0x100U 
                                                & vlSymsp->TOP__Top__soc__core.LD_uop
                                                [0U][1U])
                                                ? (vlSelfRef.__PVT__rdata 
                                                   & (~ 
                                                      ((vlSymsp->TOP__Top__soc__core.LD_uop
                                                        [0U][5U] 
                                                        << 9U) 
                                                       | (vlSymsp->TOP__Top__soc__core.LD_uop
                                                          [0U][4U] 
                                                          >> 0x17U))))
                                                : (vlSelfRef.__PVT__rdata 
                                                   | ((vlSymsp->TOP__Top__soc__core.LD_uop
                                                       [0U][5U] 
                                                       << 9U) 
                                                      | (vlSymsp->TOP__Top__soc__core.LD_uop
                                                         [0U][4U] 
                                                         >> 0x17U))));
                                    } else if ((0x100U 
                                                & vlSymsp->TOP__Top__soc__core.LD_uop
                                                [0U][1U])) {
                                        vlSelfRef.__PVT__unnamedblk14__DOT__wdata 
                                            = ((vlSymsp->TOP__Top__soc__core.LD_uop
                                                [0U][5U] 
                                                << 9U) 
                                               | (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][4U] 
                                                  >> 0x17U));
                                    }
                                }
                            }
                        }
                        if ((0xb03U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0xeU)))) {
                            vlSelfRef.__Vlvbound_hbaecf5dc__0 
                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                            vlSelfRef.__VdlyVal__mhpmcounter__v22 
                                = vlSelfRef.__Vlvbound_hbaecf5dc__0;
                            vlSelfRef.__VdlySet__mhpmcounter__v22 = 1U;
                        }
                        if ((0xb83U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0xeU)))) {
                            vlSelfRef.__Vlvbound_hbaeae206__0 
                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                            vlSelfRef.__VdlyVal__mhpmcounter__v23 
                                = vlSelfRef.__Vlvbound_hbaeae206__0;
                            vlSelfRef.__VdlySet__mhpmcounter__v23 = 1U;
                        }
                        if ((0xb04U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0xeU)))) {
                            vlSelfRef.__Vlvbound_hbaecf5dc__0 
                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                            vlSelfRef.__VdlyVal__mhpmcounter__v24 
                                = vlSelfRef.__Vlvbound_hbaecf5dc__0;
                            vlSelfRef.__VdlySet__mhpmcounter__v24 = 1U;
                        }
                        if ((0xb84U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0xeU)))) {
                            vlSelfRef.__Vlvbound_hbaeae206__0 
                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                            vlSelfRef.__VdlyVal__mhpmcounter__v25 
                                = vlSelfRef.__Vlvbound_hbaeae206__0;
                            vlSelfRef.__VdlySet__mhpmcounter__v25 = 1U;
                        }
                        if ((0xb05U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0xeU)))) {
                            vlSelfRef.__Vlvbound_hbaecf5dc__0 
                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                            vlSelfRef.__VdlyVal__mhpmcounter__v26 
                                = vlSelfRef.__Vlvbound_hbaecf5dc__0;
                            vlSelfRef.__VdlySet__mhpmcounter__v26 = 1U;
                        }
                        if ((0xb85U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0xeU)))) {
                            vlSelfRef.__Vlvbound_hbaeae206__0 
                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                            vlSelfRef.__VdlyVal__mhpmcounter__v27 
                                = vlSelfRef.__Vlvbound_hbaeae206__0;
                            vlSelfRef.__VdlySet__mhpmcounter__v27 = 1U;
                        }
                        if ((0xb06U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0xeU)))) {
                            vlSelfRef.__Vlvbound_hbaecf5dc__0 
                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                            vlSelfRef.__VdlyVal__mhpmcounter__v28 
                                = vlSelfRef.__Vlvbound_hbaecf5dc__0;
                            vlSelfRef.__VdlySet__mhpmcounter__v28 = 1U;
                        }
                        if ((0xb86U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0xeU)))) {
                            vlSelfRef.__Vlvbound_hbaeae206__0 
                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                            vlSelfRef.__VdlyVal__mhpmcounter__v29 
                                = vlSelfRef.__Vlvbound_hbaeae206__0;
                            vlSelfRef.__VdlySet__mhpmcounter__v29 = 1U;
                        }
                        if ((0xb07U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0xeU)))) {
                            vlSelfRef.__Vlvbound_hbaecf5dc__0 
                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                            vlSelfRef.__VdlyVal__mhpmcounter__v30 
                                = vlSelfRef.__Vlvbound_hbaecf5dc__0;
                            vlSelfRef.__VdlySet__mhpmcounter__v30 = 1U;
                        }
                        if ((0xb87U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0xeU)))) {
                            vlSelfRef.__Vlvbound_hbaeae206__0 
                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                            vlSelfRef.__VdlyVal__mhpmcounter__v31 
                                = vlSelfRef.__Vlvbound_hbaeae206__0;
                            vlSelfRef.__VdlySet__mhpmcounter__v31 = 1U;
                        }
                        if ((0xb08U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0xeU)))) {
                            vlSelfRef.__Vlvbound_hbaecf5dc__0 
                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                            vlSelfRef.__VdlyVal__mhpmcounter__v32 
                                = vlSelfRef.__Vlvbound_hbaecf5dc__0;
                            vlSelfRef.__VdlySet__mhpmcounter__v32 = 1U;
                        }
                        if ((0xb88U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0xeU)))) {
                            vlSelfRef.__Vlvbound_hbaeae206__0 
                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                            vlSelfRef.__VdlyVal__mhpmcounter__v33 
                                = vlSelfRef.__Vlvbound_hbaeae206__0;
                            vlSelfRef.__VdlySet__mhpmcounter__v33 = 1U;
                        }
                        if ((0xb09U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0xeU)))) {
                            vlSelfRef.__Vlvbound_hbaecf5dc__0 
                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                            vlSelfRef.__VdlyVal__mhpmcounter__v34 
                                = vlSelfRef.__Vlvbound_hbaecf5dc__0;
                            vlSelfRef.__VdlySet__mhpmcounter__v34 = 1U;
                        }
                        if ((0xb89U == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0xeU)))) {
                            vlSelfRef.__Vlvbound_hbaeae206__0 
                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                            vlSelfRef.__VdlyVal__mhpmcounter__v35 
                                = vlSelfRef.__Vlvbound_hbaeae206__0;
                            vlSelfRef.__VdlySet__mhpmcounter__v35 = 1U;
                        }
                        if ((0xb0aU == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0xeU)))) {
                            vlSelfRef.__Vlvbound_hbaecf5dc__0 
                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                            vlSelfRef.__VdlyVal__mhpmcounter__v36 
                                = vlSelfRef.__Vlvbound_hbaecf5dc__0;
                            vlSelfRef.__VdlySet__mhpmcounter__v36 = 1U;
                        }
                        if ((0xb8aU == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0xeU)))) {
                            vlSelfRef.__Vlvbound_hbaeae206__0 
                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                            vlSelfRef.__VdlyVal__mhpmcounter__v37 
                                = vlSelfRef.__Vlvbound_hbaeae206__0;
                            vlSelfRef.__VdlySet__mhpmcounter__v37 = 1U;
                        }
                        if ((0xb0bU == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0xeU)))) {
                            vlSelfRef.__Vlvbound_hbaecf5dc__0 
                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                            vlSelfRef.__VdlyVal__mhpmcounter__v38 
                                = vlSelfRef.__Vlvbound_hbaecf5dc__0;
                            vlSelfRef.__VdlySet__mhpmcounter__v38 = 1U;
                        }
                        if ((0xb8bU == (0xfffU & (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0xeU)))) {
                            vlSelfRef.__Vlvbound_hbaeae206__0 
                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                            vlSelfRef.__VdlyVal__mhpmcounter__v39 
                                = vlSelfRef.__Vlvbound_hbaeae206__0;
                            vlSelfRef.__VdlySet__mhpmcounter__v39 = 1U;
                        }
                        if ((0x2000000U & vlSymsp->TOP__Top__soc__core.LD_uop
                             [0U][1U])) {
                            if ((1U & (~ (vlSymsp->TOP__Top__soc__core.LD_uop
                                          [0U][1U] 
                                          >> 0x18U)))) {
                                if ((0x800000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                     [0U][1U])) {
                                    if ((0x400000U 
                                         & vlSymsp->TOP__Top__soc__core.LD_uop
                                         [0U][1U])) {
                                        if ((0x200000U 
                                             & vlSymsp->TOP__Top__soc__core.LD_uop
                                             [0U][1U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U] 
                                                     >> 0x14U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__Top__soc__core.LD_uop
                                                         [0U][1U] 
                                                         >> 0x13U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__Top__soc__core.LD_uop
                                                             [0U][1U] 
                                                             >> 0x12U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                 [0U][1U] 
                                                                 >> 0x11U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                     [0U][1U] 
                                                                     >> 0x10U)))) {
                                                                if (
                                                                    (0x8000U 
                                                                     & vlSymsp->TOP__Top__soc__core.LD_uop
                                                                     [0U][1U])) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                             [0U][1U] 
                                                                             >> 0xeU)))) {
                                                                        vlSelfRef.__Vdly__minstret 
                                                                            = 
                                                                            ((0xffffffffULL 
                                                                              & vlSelfRef.__Vdly__minstret) 
                                                                             | ((QData)((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__wdata)) 
                                                                                << 0x20U));
                                                                    }
                                                                } else if (
                                                                           (1U 
                                                                            & (~ 
                                                                               (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                                [0U][1U] 
                                                                                >> 0xeU)))) {
                                                                    vlSelfRef.__Vdly__mcycle 
                                                                        = 
                                                                        ((0xffffffffULL 
                                                                          & vlSelfRef.__Vdly__mcycle) 
                                                                         | ((QData)((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__wdata)) 
                                                                            << 0x20U));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__Top__soc__core.LD_uop
                                                        [0U][1U] 
                                                        >> 0x14U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U] 
                                                     >> 0x13U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__Top__soc__core.LD_uop
                                                         [0U][1U] 
                                                         >> 0x12U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__Top__soc__core.LD_uop
                                                             [0U][1U] 
                                                             >> 0x11U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                 [0U][1U] 
                                                                 >> 0x10U)))) {
                                                            if (
                                                                (0x8000U 
                                                                 & vlSymsp->TOP__Top__soc__core.LD_uop
                                                                 [0U][1U])) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                         [0U][1U] 
                                                                         >> 0xeU)))) {
                                                                    vlSelfRef.__Vdly__minstret 
                                                                        = 
                                                                        ((0xffffffff00000000ULL 
                                                                          & vlSelfRef.__Vdly__minstret) 
                                                                         | (IData)((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__wdata)));
                                                                }
                                                            } else if (
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                            [0U][1U] 
                                                                            >> 0xeU)))) {
                                                                vlSelfRef.__Vdly__mcycle 
                                                                    = 
                                                                    ((0xffffffff00000000ULL 
                                                                      & vlSelfRef.__Vdly__mcycle) 
                                                                     | (IData)((IData)(vlSelfRef.__PVT__unnamedblk14__DOT__wdata)));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSymsp->TOP__Top__soc__core.LD_uop
                                             [0U][1U] 
                                             >> 0x18U)))) {
                            if ((0x800000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                 [0U][1U])) {
                                if ((0x400000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                     [0U][1U])) {
                                    if ((1U & (~ (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0x15U)))) {
                                        if ((0x100000U 
                                             & vlSymsp->TOP__Top__soc__core.LD_uop
                                             [0U][1U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U] 
                                                     >> 0x13U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__Top__soc__core.LD_uop
                                                         [0U][1U] 
                                                         >> 0x12U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__Top__soc__core.LD_uop
                                                             [0U][1U] 
                                                             >> 0x11U)))) {
                                                        if (
                                                            (0x10000U 
                                                             & vlSymsp->TOP__Top__soc__core.LD_uop
                                                             [0U][1U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                     [0U][1U] 
                                                                     >> 0xfU)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                         [0U][1U] 
                                                                         >> 0xeU)))) {
                                                                    vlSelfRef.__PVT__mip 
                                                                        = 
                                                                        ((0xfffdU 
                                                                          & (IData)(vlSelfRef.__PVT__mip)) 
                                                                         | (2U 
                                                                            & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                                    vlSelfRef.__PVT__mip 
                                                                        = 
                                                                        ((0xffdfU 
                                                                          & (IData)(vlSelfRef.__PVT__mip)) 
                                                                         | (0x20U 
                                                                            & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                                    vlSelfRef.__PVT__mip 
                                                                        = 
                                                                        ((0xfdffU 
                                                                          & (IData)(vlSelfRef.__PVT__mip)) 
                                                                         | (0x200U 
                                                                            & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                                }
                                                            }
                                                        } else if (
                                                                   (0x8000U 
                                                                    & vlSymsp->TOP__Top__soc__core.LD_uop
                                                                    [0U][1U])) {
                                                            if (
                                                                (0x4000U 
                                                                 & vlSymsp->TOP__Top__soc__core.LD_uop
                                                                 [0U][1U])) {
                                                                vlSelfRef.__PVT__mtval 
                                                                    = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                                                            } else {
                                                                vlSelfRef.__PVT__mcause 
                                                                    = 
                                                                    ((0xffffffe0U 
                                                                      & vlSelfRef.__PVT__mcause) 
                                                                     | (0x1fU 
                                                                        & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                                vlSelfRef.__PVT__mcause 
                                                                    = 
                                                                    ((0x7fffffffU 
                                                                      & vlSelfRef.__PVT__mcause) 
                                                                     | (0x80000000U 
                                                                        & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                            }
                                                        } else if (
                                                                   (0x4000U 
                                                                    & vlSymsp->TOP__Top__soc__core.LD_uop
                                                                    [0U][1U])) {
                                                            vlSelfRef.__Vdly__mepc 
                                                                = 
                                                                ((1U 
                                                                  & vlSelfRef.__Vdly__mepc) 
                                                                 | (0xfffffffeU 
                                                                    & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                        } else {
                                                            vlSelfRef.__PVT__mscratch 
                                                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                                                        }
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__Top__soc__core.LD_uop
                                                        [0U][1U] 
                                                        >> 0x13U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U] 
                                                     >> 0x12U)))) {
                                                if (
                                                    (0x20000U 
                                                     & vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__Top__soc__core.LD_uop
                                                             [0U][1U] 
                                                             >> 0x10U)))) {
                                                        if (
                                                            (0x8000U 
                                                             & vlSymsp->TOP__Top__soc__core.LD_uop
                                                             [0U][1U])) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                     [0U][1U] 
                                                                     >> 0xeU)))) {
                                                                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk17__DOT__temp 
                                                                    = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                                                                vlSelfRef.__PVT__menvcfg 
                                                                    = 
                                                                    ((0xfffffffeU 
                                                                      & vlSelfRef.__PVT__menvcfg) 
                                                                     | (1U 
                                                                        & vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk17__DOT__temp));
                                                                vlSelfRef.__PVT__menvcfg 
                                                                    = 
                                                                    ((0xffffffcfU 
                                                                      & vlSelfRef.__PVT__menvcfg) 
                                                                     | (((2U 
                                                                          == 
                                                                          (3U 
                                                                           & (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk17__DOT__temp 
                                                                              >> 4U)))
                                                                          ? 0U
                                                                          : 
                                                                         (3U 
                                                                          & (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk17__DOT__temp 
                                                                             >> 4U))) 
                                                                        << 4U));
                                                                vlSelfRef.__PVT__menvcfg 
                                                                    = 
                                                                    ((0xffffff3fU 
                                                                      & vlSelfRef.__PVT__menvcfg) 
                                                                     | (0x40U 
                                                                        & vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk17__DOT__temp));
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (0x10000U 
                                                            & vlSymsp->TOP__Top__soc__core.LD_uop
                                                            [0U][1U])) {
                                                    if (
                                                        (0x8000U 
                                                         & vlSymsp->TOP__Top__soc__core.LD_uop
                                                         [0U][1U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                 [0U][1U] 
                                                                 >> 0xeU)))) {
                                                            vlSelfRef.__PVT__mcounteren 
                                                                = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                                                        }
                                                    } else if (
                                                               (0x4000U 
                                                                & vlSymsp->TOP__Top__soc__core.LD_uop
                                                                [0U][1U])) {
                                                        vlSelfRef.__PVT__mtvec 
                                                            = 
                                                            ((3U 
                                                              & vlSelfRef.__PVT__mtvec) 
                                                             | (0xfffffffcU 
                                                                & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                    } else {
                                                        vlSelfRef.__PVT__mie 
                                                            = 
                                                            ((0xfffdU 
                                                              & (IData)(vlSelfRef.__PVT__mie)) 
                                                             | (2U 
                                                                & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                        vlSelfRef.__PVT__mie 
                                                            = 
                                                            ((0xfff7U 
                                                              & (IData)(vlSelfRef.__PVT__mie)) 
                                                             | (8U 
                                                                & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                        vlSelfRef.__PVT__mie 
                                                            = 
                                                            ((0xffdfU 
                                                              & (IData)(vlSelfRef.__PVT__mie)) 
                                                             | (0x20U 
                                                                & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                        vlSelfRef.__PVT__mie 
                                                            = 
                                                            ((0xff7fU 
                                                              & (IData)(vlSelfRef.__PVT__mie)) 
                                                             | (0x80U 
                                                                & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                        vlSelfRef.__PVT__mie 
                                                            = 
                                                            ((0xfdffU 
                                                              & (IData)(vlSelfRef.__PVT__mie)) 
                                                             | (0x200U 
                                                                & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                        vlSelfRef.__PVT__mie 
                                                            = 
                                                            ((0xf7ffU 
                                                              & (IData)(vlSelfRef.__PVT__mie)) 
                                                             | (0x800U 
                                                                & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                    }
                                                } else if (
                                                           (0x8000U 
                                                            & vlSymsp->TOP__Top__soc__core.LD_uop
                                                            [0U][1U])) {
                                                    if (
                                                        (0x4000U 
                                                         & vlSymsp->TOP__Top__soc__core.LD_uop
                                                         [0U][1U])) {
                                                        vlSelfRef.__Vdly__mideleg 
                                                            = 
                                                            (0xffffU 
                                                             & vlSelfRef.__PVT__unnamedblk14__DOT__wdata);
                                                    } else {
                                                        vlSelfRef.__PVT__medeleg 
                                                            = 
                                                            (0xffffU 
                                                             & vlSelfRef.__PVT__unnamedblk14__DOT__wdata);
                                                    }
                                                } else if (
                                                           (0x4000U 
                                                            & vlSymsp->TOP__Top__soc__core.LD_uop
                                                            [0U][1U])) {
                                                    vlSelfRef.__PVT__misa_X 
                                                        = 
                                                        (1U 
                                                         & (vlSelfRef.__PVT__unnamedblk14__DOT__wdata 
                                                            >> 0x17U));
                                                } else {
                                                    vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk16__DOT__temp 
                                                        = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                                                    vlSelfRef.__Vdly__mstatus 
                                                        = 
                                                        ((0xff81ffffU 
                                                          & vlSelfRef.__Vdly__mstatus) 
                                                         | (0x7e0000U 
                                                            & vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk16__DOT__temp));
                                                    vlSelfRef.__Vdly__mstatus 
                                                        = 
                                                        ((0xfffffffdU 
                                                          & vlSelfRef.__Vdly__mstatus) 
                                                         | (2U 
                                                            & vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk16__DOT__temp));
                                                    vlSelfRef.__Vdly__mstatus 
                                                        = 
                                                        ((0xfffffff7U 
                                                          & vlSelfRef.__Vdly__mstatus) 
                                                         | (8U 
                                                            & vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk16__DOT__temp));
                                                    vlSelfRef.__Vdly__mstatus 
                                                        = 
                                                        ((0xffffffdfU 
                                                          & vlSelfRef.__Vdly__mstatus) 
                                                         | (0x20U 
                                                            & vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk16__DOT__temp));
                                                    vlSelfRef.__Vdly__mstatus 
                                                        = 
                                                        ((0xfffffe7fU 
                                                          & vlSelfRef.__Vdly__mstatus) 
                                                         | (0x180U 
                                                            & vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk16__DOT__temp));
                                                    vlSelfRef.__Vdly__mstatus 
                                                        = 
                                                        ((0xffff87ffU 
                                                          & vlSelfRef.__Vdly__mstatus) 
                                                         | (0x7800U 
                                                            & vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk16__DOT__temp));
                                                    vlSelfRef.__Vdly__mstatus 
                                                        = 
                                                        ((0x7fffffffU 
                                                          & vlSelfRef.__Vdly__mstatus) 
                                                         | ((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk16__DOT__temp 
                                                                         >> 0xdU)))) 
                                                            << 0x1fU));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((0x400000U & 
                                        vlSymsp->TOP__Top__soc__core.LD_uop
                                        [0U][1U])) {
                                if ((0x200000U & vlSymsp->TOP__Top__soc__core.LD_uop
                                     [0U][1U])) {
                                    if ((1U & (~ (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0x14U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__Top__soc__core.LD_uop
                                                    [0U][1U] 
                                                    >> 0x13U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U] 
                                                     >> 0x12U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__Top__soc__core.LD_uop
                                                         [0U][1U] 
                                                         >> 0x11U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__Top__soc__core.LD_uop
                                                             [0U][1U] 
                                                             >> 0x10U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                 [0U][1U] 
                                                                 >> 0xfU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                     [0U][1U] 
                                                                     >> 0xeU)))) {
                                                                vlSelfRef.__PVT__satp 
                                                                    = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                                                                vlSelfRef.__PVT__satp 
                                                                    = 
                                                                    (0x800fffffU 
                                                                     & vlSelfRef.__PVT__satp);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((0x100000U 
                                            & vlSymsp->TOP__Top__soc__core.LD_uop
                                            [0U][1U])) {
                                    if ((1U & (~ (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0x13U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__Top__soc__core.LD_uop
                                                    [0U][1U] 
                                                    >> 0x12U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U] 
                                                     >> 0x11U)))) {
                                                if (
                                                    (0x10000U 
                                                     & vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__Top__soc__core.LD_uop
                                                             [0U][1U] 
                                                             >> 0xfU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Top__soc__core.LD_uop
                                                                 [0U][1U] 
                                                                 >> 0xeU)))) {
                                                            if (
                                                                (2U 
                                                                 & (IData)(vlSelfRef.__PVT__mideleg))) {
                                                                vlSelfRef.__PVT__mip 
                                                                    = 
                                                                    ((0xfffdU 
                                                                      & (IData)(vlSelfRef.__PVT__mip)) 
                                                                     | (2U 
                                                                        & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                            }
                                                            if (
                                                                (0x20U 
                                                                 & (IData)(vlSelfRef.__PVT__mideleg))) {
                                                                vlSelfRef.__PVT__mip 
                                                                    = 
                                                                    ((0xffdfU 
                                                                      & (IData)(vlSelfRef.__PVT__mip)) 
                                                                     | (0x20U 
                                                                        & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                            }
                                                            if (
                                                                (0x200U 
                                                                 & (IData)(vlSelfRef.__PVT__mideleg))) {
                                                                vlSelfRef.__PVT__mip 
                                                                    = 
                                                                    ((0xfdffU 
                                                                      & (IData)(vlSelfRef.__PVT__mip)) 
                                                                     | (0x200U 
                                                                        & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (0x8000U 
                                                            & vlSymsp->TOP__Top__soc__core.LD_uop
                                                            [0U][1U])) {
                                                    if (
                                                        (0x4000U 
                                                         & vlSymsp->TOP__Top__soc__core.LD_uop
                                                         [0U][1U])) {
                                                        vlSelfRef.__PVT__stval 
                                                            = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                                                    } else {
                                                        vlSelfRef.__PVT__scause 
                                                            = 
                                                            ((0xffffffe0U 
                                                              & vlSelfRef.__PVT__scause) 
                                                             | (0x1fU 
                                                                & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                        vlSelfRef.__PVT__scause 
                                                            = 
                                                            ((0x7fffffffU 
                                                              & vlSelfRef.__PVT__scause) 
                                                             | (0x80000000U 
                                                                & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                    }
                                                } else if (
                                                           (0x4000U 
                                                            & vlSymsp->TOP__Top__soc__core.LD_uop
                                                            [0U][1U])) {
                                                    vlSelfRef.__Vdly__sepc 
                                                        = 
                                                        ((1U 
                                                          & vlSelfRef.__Vdly__sepc) 
                                                         | (0xfffffffeU 
                                                            & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                } else {
                                                    vlSelfRef.__PVT__sscratch 
                                                        = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSymsp->TOP__Top__soc__core.LD_uop
                                                   [0U][1U] 
                                                   >> 0x13U)))) {
                                    if ((1U & (~ (vlSymsp->TOP__Top__soc__core.LD_uop
                                                  [0U][1U] 
                                                  >> 0x12U)))) {
                                        if ((0x20000U 
                                             & vlSymsp->TOP__Top__soc__core.LD_uop
                                             [0U][1U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U] 
                                                     >> 0x10U)))) {
                                                if (
                                                    (0x8000U 
                                                     & vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__Top__soc__core.LD_uop
                                                             [0U][1U] 
                                                             >> 0xeU)))) {
                                                        vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk19__DOT__temp 
                                                            = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                                                        vlSelfRef.__PVT__senvcfg 
                                                            = 
                                                            ((0xfffffffeU 
                                                              & vlSelfRef.__PVT__senvcfg) 
                                                             | (1U 
                                                                & vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk19__DOT__temp));
                                                        vlSelfRef.__PVT__senvcfg 
                                                            = 
                                                            ((0xffffffcfU 
                                                              & vlSelfRef.__PVT__senvcfg) 
                                                             | (((2U 
                                                                  == 
                                                                  (3U 
                                                                   & (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk19__DOT__temp 
                                                                      >> 4U)))
                                                                  ? 0U
                                                                  : 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk19__DOT__temp 
                                                                     >> 4U))) 
                                                                << 4U));
                                                        vlSelfRef.__PVT__senvcfg 
                                                            = 
                                                            ((0xffffff3fU 
                                                              & vlSelfRef.__PVT__senvcfg) 
                                                             | (0x40U 
                                                                & vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk19__DOT__temp));
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (0x10000U 
                                                    & vlSymsp->TOP__Top__soc__core.LD_uop
                                                    [0U][1U])) {
                                            if ((0x8000U 
                                                 & vlSymsp->TOP__Top__soc__core.LD_uop
                                                 [0U][1U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__Top__soc__core.LD_uop
                                                         [0U][1U] 
                                                         >> 0xeU)))) {
                                                    vlSelfRef.__PVT__scounteren 
                                                        = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                                                }
                                            } else if (
                                                       (0x4000U 
                                                        & vlSymsp->TOP__Top__soc__core.LD_uop
                                                        [0U][1U])) {
                                                vlSelfRef.__PVT__stvec 
                                                    = 
                                                    ((3U 
                                                      & vlSelfRef.__PVT__stvec) 
                                                     | (0xfffffffcU 
                                                        & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                            } else {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelfRef.__PVT__mideleg))) {
                                                    vlSelfRef.__PVT__mie 
                                                        = 
                                                        ((0xfffdU 
                                                          & (IData)(vlSelfRef.__PVT__mie)) 
                                                         | (2U 
                                                            & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelfRef.__PVT__mideleg))) {
                                                    vlSelfRef.__PVT__mie 
                                                        = 
                                                        ((0xfff7U 
                                                          & (IData)(vlSelfRef.__PVT__mie)) 
                                                         | (8U 
                                                            & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                }
                                                if (
                                                    (0x20U 
                                                     & (IData)(vlSelfRef.__PVT__mideleg))) {
                                                    vlSelfRef.__PVT__mie 
                                                        = 
                                                        ((0xffdfU 
                                                          & (IData)(vlSelfRef.__PVT__mie)) 
                                                         | (0x20U 
                                                            & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                }
                                                if (
                                                    (0x80U 
                                                     & (IData)(vlSelfRef.__PVT__mideleg))) {
                                                    vlSelfRef.__PVT__mie 
                                                        = 
                                                        ((0xff7fU 
                                                          & (IData)(vlSelfRef.__PVT__mie)) 
                                                         | (0x80U 
                                                            & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                }
                                                if (
                                                    (0x200U 
                                                     & (IData)(vlSelfRef.__PVT__mideleg))) {
                                                    vlSelfRef.__PVT__mie 
                                                        = 
                                                        ((0xfdffU 
                                                          & (IData)(vlSelfRef.__PVT__mie)) 
                                                         | (0x200U 
                                                            & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                }
                                                if (
                                                    (0x800U 
                                                     & (IData)(vlSelfRef.__PVT__mideleg))) {
                                                    vlSelfRef.__PVT__mie 
                                                        = 
                                                        ((0xf7ffU 
                                                          & (IData)(vlSelfRef.__PVT__mie)) 
                                                         | (0x800U 
                                                            & vlSelfRef.__PVT__unnamedblk14__DOT__wdata));
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP__Top__soc__core.LD_uop
                                                        [0U][1U] 
                                                        >> 0xfU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__Top__soc__core.LD_uop
                                                     [0U][1U] 
                                                     >> 0xeU)))) {
                                                vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk18__DOT__temp 
                                                    = vlSelfRef.__PVT__unnamedblk14__DOT__wdata;
                                                vlSelfRef.__Vdly__mstatus 
                                                    = 
                                                    ((0xfff3ffffU 
                                                      & vlSelfRef.__Vdly__mstatus) 
                                                     | (0xc0000U 
                                                        & vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk18__DOT__temp));
                                                vlSelfRef.__Vdly__mstatus 
                                                    = 
                                                    ((0xfffffffdU 
                                                      & vlSelfRef.__Vdly__mstatus) 
                                                     | (2U 
                                                        & vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk18__DOT__temp));
                                                vlSelfRef.__Vdly__mstatus 
                                                    = 
                                                    ((0xffffffdfU 
                                                      & vlSelfRef.__Vdly__mstatus) 
                                                     | (0x20U 
                                                        & vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk18__DOT__temp));
                                                vlSelfRef.__Vdly__mstatus 
                                                    = 
                                                    ((0xfffffeffU 
                                                      & vlSelfRef.__Vdly__mstatus) 
                                                     | (0x100U 
                                                        & vlSelfRef.__PVT__unnamedblk14__DOT__unnamedblk18__DOT__temp));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSymsp->TOP__Top__soc__core.LD_uop
                              [0U][1U] >> 7U)))) {
                    vlSelfRef.__PVT__OUT_uop = ((0xfffffULL 
                                                 & vlSelfRef.__PVT__OUT_uop) 
                                                | ((QData)((IData)(vlSelfRef.__PVT__rdata)) 
                                                   << 0x14U));
                }
            }
        } else {
            vlSelfRef.__PVT__OUT_uop = (0xffffffffffffeULL 
                                        & vlSelfRef.__PVT__OUT_uop);
        }
    }
}

VL_INLINE_OPT void VTop_CSR___nba_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__2(VTop_CSR* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_CSR___nba_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __PVT__unnamedblk4__DOT__epm;
    __PVT__unnamedblk4__DOT__epm = 0;
    // Body
    vlSelfRef.mcycle = vlSelfRef.__Vdly__mcycle;
    vlSelfRef.minstret = vlSelfRef.__Vdly__minstret;
    vlSelfRef.__PVT__mepc = vlSelfRef.__Vdly__mepc;
    vlSelfRef.__PVT__sepc = vlSelfRef.__Vdly__sepc;
    if (vlSelfRef.__VdlySet__mhpmcounter__v0) {
        vlSelfRef.mhpmcounter[0U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v1) {
        vlSelfRef.mhpmcounter[1U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v2) {
        vlSelfRef.mhpmcounter[2U] = 0ULL;
        vlSelfRef.mhpmcounter[3U] = 0ULL;
        vlSelfRef.mhpmcounter[4U] = 0ULL;
        vlSelfRef.mhpmcounter[5U] = 0ULL;
        vlSelfRef.mhpmcounter[6U] = 0ULL;
        vlSelfRef.mhpmcounter[7U] = 0ULL;
        vlSelfRef.mhpmcounter[8U] = 0ULL;
        vlSelfRef.mhpmcounter[9U] = 0ULL;
        vlSelfRef.mhpmcounter[0xaU] = 0ULL;
        vlSelfRef.mhpmcounter[0xbU] = 0ULL;
        vlSelfRef.mhpmcounter[0xcU] = 0ULL;
        vlSelfRef.mhpmcounter[0xdU] = 0ULL;
        vlSelfRef.mhpmcounter[0xeU] = 0ULL;
        vlSelfRef.mhpmcounter[0xfU] = 0ULL;
        vlSelfRef.mhpmcounter[0x10U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v17) {
        vlSelfRef.mhpmcounter[3U] = vlSelfRef.__VdlyVal__mhpmcounter__v17;
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v18) {
        vlSelfRef.mhpmcounter[4U] = vlSelfRef.__VdlyVal__mhpmcounter__v18;
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v19) {
        vlSelfRef.mhpmcounter[5U] = vlSelfRef.__VdlyVal__mhpmcounter__v19;
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v20) {
        vlSelfRef.mhpmcounter[vlSelfRef.__VdlyDim0__mhpmcounter__v20] 
            = vlSelfRef.__VdlyVal__mhpmcounter__v20;
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v21) {
        vlSelfRef.mhpmcounter[vlSelfRef.__VdlyDim0__mhpmcounter__v21] 
            = vlSelfRef.__VdlyVal__mhpmcounter__v21;
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v22) {
        vlSelfRef.mhpmcounter[3U] = ((0xffffffff00000000ULL 
                                      & vlSelfRef.mhpmcounter
                                      [3U]) | (IData)((IData)(vlSelfRef.__VdlyVal__mhpmcounter__v22)));
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v23) {
        vlSelfRef.mhpmcounter[3U] = ((0xffffffffULL 
                                      & vlSelfRef.mhpmcounter
                                      [3U]) | ((QData)((IData)(vlSelfRef.__VdlyVal__mhpmcounter__v23)) 
                                               << 0x20U));
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v24) {
        vlSelfRef.mhpmcounter[4U] = ((0xffffffff00000000ULL 
                                      & vlSelfRef.mhpmcounter
                                      [4U]) | (IData)((IData)(vlSelfRef.__VdlyVal__mhpmcounter__v24)));
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v25) {
        vlSelfRef.mhpmcounter[4U] = ((0xffffffffULL 
                                      & vlSelfRef.mhpmcounter
                                      [4U]) | ((QData)((IData)(vlSelfRef.__VdlyVal__mhpmcounter__v25)) 
                                               << 0x20U));
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v26) {
        vlSelfRef.mhpmcounter[5U] = ((0xffffffff00000000ULL 
                                      & vlSelfRef.mhpmcounter
                                      [5U]) | (IData)((IData)(vlSelfRef.__VdlyVal__mhpmcounter__v26)));
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v27) {
        vlSelfRef.mhpmcounter[5U] = ((0xffffffffULL 
                                      & vlSelfRef.mhpmcounter
                                      [5U]) | ((QData)((IData)(vlSelfRef.__VdlyVal__mhpmcounter__v27)) 
                                               << 0x20U));
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v28) {
        vlSelfRef.mhpmcounter[6U] = ((0xffffffff00000000ULL 
                                      & vlSelfRef.mhpmcounter
                                      [6U]) | (IData)((IData)(vlSelfRef.__VdlyVal__mhpmcounter__v28)));
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v29) {
        vlSelfRef.mhpmcounter[6U] = ((0xffffffffULL 
                                      & vlSelfRef.mhpmcounter
                                      [6U]) | ((QData)((IData)(vlSelfRef.__VdlyVal__mhpmcounter__v29)) 
                                               << 0x20U));
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v30) {
        vlSelfRef.mhpmcounter[7U] = ((0xffffffff00000000ULL 
                                      & vlSelfRef.mhpmcounter
                                      [7U]) | (IData)((IData)(vlSelfRef.__VdlyVal__mhpmcounter__v30)));
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v31) {
        vlSelfRef.mhpmcounter[7U] = ((0xffffffffULL 
                                      & vlSelfRef.mhpmcounter
                                      [7U]) | ((QData)((IData)(vlSelfRef.__VdlyVal__mhpmcounter__v31)) 
                                               << 0x20U));
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v32) {
        vlSelfRef.mhpmcounter[8U] = ((0xffffffff00000000ULL 
                                      & vlSelfRef.mhpmcounter
                                      [8U]) | (IData)((IData)(vlSelfRef.__VdlyVal__mhpmcounter__v32)));
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v33) {
        vlSelfRef.mhpmcounter[8U] = ((0xffffffffULL 
                                      & vlSelfRef.mhpmcounter
                                      [8U]) | ((QData)((IData)(vlSelfRef.__VdlyVal__mhpmcounter__v33)) 
                                               << 0x20U));
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v34) {
        vlSelfRef.mhpmcounter[9U] = ((0xffffffff00000000ULL 
                                      & vlSelfRef.mhpmcounter
                                      [9U]) | (IData)((IData)(vlSelfRef.__VdlyVal__mhpmcounter__v34)));
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v35) {
        vlSelfRef.mhpmcounter[9U] = ((0xffffffffULL 
                                      & vlSelfRef.mhpmcounter
                                      [9U]) | ((QData)((IData)(vlSelfRef.__VdlyVal__mhpmcounter__v35)) 
                                               << 0x20U));
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v36) {
        vlSelfRef.mhpmcounter[0xaU] = ((0xffffffff00000000ULL 
                                        & vlSelfRef.mhpmcounter
                                        [0xaU]) | (IData)((IData)(vlSelfRef.__VdlyVal__mhpmcounter__v36)));
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v37) {
        vlSelfRef.mhpmcounter[0xaU] = ((0xffffffffULL 
                                        & vlSelfRef.mhpmcounter
                                        [0xaU]) | ((QData)((IData)(vlSelfRef.__VdlyVal__mhpmcounter__v37)) 
                                                   << 0x20U));
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v38) {
        vlSelfRef.mhpmcounter[0xbU] = ((0xffffffff00000000ULL 
                                        & vlSelfRef.mhpmcounter
                                        [0xbU]) | (IData)((IData)(vlSelfRef.__VdlyVal__mhpmcounter__v38)));
    }
    if (vlSelfRef.__VdlySet__mhpmcounter__v39) {
        vlSelfRef.mhpmcounter[0xbU] = ((0xffffffffULL 
                                        & vlSelfRef.mhpmcounter
                                        [0xbU]) | ((QData)((IData)(vlSelfRef.__VdlyVal__mhpmcounter__v39)) 
                                                   << 0x20U));
    }
    vlSelfRef.__PVT__mstatus = vlSelfRef.__Vdly__mstatus;
    vlSelfRef.__PVT__mideleg = vlSelfRef.__Vdly__mideleg;
    vlSelfRef.__PVT__priv = vlSelfRef.__Vdly__priv;
    vlSelfRef.__PVT__unnamedblk1__DOT__mPrio[5U] = 5U;
    vlSelfRef.__PVT__unnamedblk1__DOT__mPrio[4U] = 1U;
    vlSelfRef.__PVT__unnamedblk1__DOT__mPrio[3U] = 9U;
    vlSelfRef.__PVT__unnamedblk1__DOT__mPrio[2U] = 7U;
    vlSelfRef.__PVT__unnamedblk1__DOT__mPrio[1U] = 3U;
    vlSelfRef.__PVT__unnamedblk1__DOT__mPrio[0U] = 0xbU;
    vlSelfRef.__PVT__unnamedblk1__DOT__sPrio[2U] = 5U;
    vlSelfRef.__PVT__unnamedblk1__DOT__sPrio[1U] = 1U;
    vlSelfRef.__PVT__unnamedblk1__DOT__sPrio[0U] = 9U;
    vlSelfRef.__PVT__interruptCause = 0U;
    vlSelfRef.__PVT__interrupt = 0U;
    vlSelfRef.__PVT__interruptDelegate = 0U;
    if (((1U > (IData)(vlSelfRef.__PVT__priv)) | ((vlSelfRef.__PVT__mstatus 
                                                   >> 1U) 
                                                  & (1U 
                                                     == (IData)(vlSelfRef.__PVT__priv))))) {
        if ((1U & (((IData)(vlSelfRef.__PVT__mip) >> 
                    vlSelfRef.__PVT__unnamedblk1__DOT__sPrio
                    [0U]) & ((IData)(vlSelfRef.__PVT__mie) 
                             >> vlSelfRef.__PVT__unnamedblk1__DOT__sPrio
                             [0U])))) {
            vlSelfRef.__PVT__interrupt = 1U;
            vlSelfRef.__PVT__interruptCause = vlSelfRef.__PVT__unnamedblk1__DOT__sPrio
                [0U];
            vlSelfRef.__PVT__interruptDelegate = 1U;
        }
        if ((1U & (((IData)(vlSelfRef.__PVT__mip) >> 
                    vlSelfRef.__PVT__unnamedblk1__DOT__sPrio
                    [1U]) & ((IData)(vlSelfRef.__PVT__mie) 
                             >> vlSelfRef.__PVT__unnamedblk1__DOT__sPrio
                             [1U])))) {
            vlSelfRef.__PVT__interrupt = 1U;
            vlSelfRef.__PVT__interruptCause = vlSelfRef.__PVT__unnamedblk1__DOT__sPrio
                [1U];
            vlSelfRef.__PVT__interruptDelegate = 1U;
        }
        if ((1U & (((IData)(vlSelfRef.__PVT__mip) >> 
                    vlSelfRef.__PVT__unnamedblk1__DOT__sPrio
                    [2U]) & ((IData)(vlSelfRef.__PVT__mie) 
                             >> vlSelfRef.__PVT__unnamedblk1__DOT__sPrio
                             [2U])))) {
            vlSelfRef.__PVT__interrupt = 1U;
            vlSelfRef.__PVT__interruptCause = vlSelfRef.__PVT__unnamedblk1__DOT__sPrio
                [2U];
            vlSelfRef.__PVT__interruptDelegate = 1U;
        }
    }
    if ((1U & ((3U > (IData)(vlSelfRef.__PVT__priv)) 
               | (vlSelfRef.__PVT__mstatus >> 3U)))) {
        if ((1U & ((((IData)(vlSelfRef.__PVT__mip) 
                     >> vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                     [0U]) & ((IData)(vlSelfRef.__PVT__mie) 
                              >> vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                              [0U])) & (~ ((IData)(vlSelfRef.__PVT__mideleg) 
                                           >> vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                                           [0U]))))) {
            vlSelfRef.__PVT__interrupt = 1U;
            vlSelfRef.__PVT__interruptCause = vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                [0U];
            vlSelfRef.__PVT__interruptDelegate = 0U;
        }
        if ((1U & ((((IData)(vlSelfRef.__PVT__mip) 
                     >> vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                     [1U]) & ((IData)(vlSelfRef.__PVT__mie) 
                              >> vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                              [1U])) & (~ ((IData)(vlSelfRef.__PVT__mideleg) 
                                           >> vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                                           [1U]))))) {
            vlSelfRef.__PVT__interrupt = 1U;
            vlSelfRef.__PVT__interruptCause = vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                [1U];
            vlSelfRef.__PVT__interruptDelegate = 0U;
        }
        if ((1U & ((((IData)(vlSelfRef.__PVT__mip) 
                     >> vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                     [2U]) & ((IData)(vlSelfRef.__PVT__mie) 
                              >> vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                              [2U])) & (~ ((IData)(vlSelfRef.__PVT__mideleg) 
                                           >> vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                                           [2U]))))) {
            vlSelfRef.__PVT__interrupt = 1U;
            vlSelfRef.__PVT__interruptCause = vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                [2U];
            vlSelfRef.__PVT__interruptDelegate = 0U;
        }
        if ((1U & ((((IData)(vlSelfRef.__PVT__mip) 
                     >> vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                     [3U]) & ((IData)(vlSelfRef.__PVT__mie) 
                              >> vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                              [3U])) & (~ ((IData)(vlSelfRef.__PVT__mideleg) 
                                           >> vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                                           [3U]))))) {
            vlSelfRef.__PVT__interrupt = 1U;
            vlSelfRef.__PVT__interruptCause = vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                [3U];
            vlSelfRef.__PVT__interruptDelegate = 0U;
        }
        if ((1U & ((((IData)(vlSelfRef.__PVT__mip) 
                     >> vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                     [4U]) & ((IData)(vlSelfRef.__PVT__mie) 
                              >> vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                              [4U])) & (~ ((IData)(vlSelfRef.__PVT__mideleg) 
                                           >> vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                                           [4U]))))) {
            vlSelfRef.__PVT__interrupt = 1U;
            vlSelfRef.__PVT__interruptCause = vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                [4U];
            vlSelfRef.__PVT__interruptDelegate = 0U;
        }
        if ((1U & ((((IData)(vlSelfRef.__PVT__mip) 
                     >> vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                     [5U]) & ((IData)(vlSelfRef.__PVT__mie) 
                              >> vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                              [5U])) & (~ ((IData)(vlSelfRef.__PVT__mideleg) 
                                           >> vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                                           [5U]))))) {
            vlSelfRef.__PVT__interrupt = 1U;
            vlSelfRef.__PVT__interruptCause = vlSelfRef.__PVT__unnamedblk1__DOT__mPrio
                [5U];
            vlSelfRef.__PVT__interruptDelegate = 0U;
        }
    }
    __PVT__unnamedblk4__DOT__epm = (3U & ((0x20000U 
                                           & vlSelfRef.__PVT__mstatus)
                                           ? (vlSelfRef.__PVT__mstatus 
                                              >> 0xbU)
                                           : (IData)(vlSelfRef.__PVT__priv)));
    vlSelfRef.__PVT__vmem_c = ((0x4000007fU & vlSelfRef.__PVT__vmem_c) 
                               | ((0x20000000U & ((vlSelfRef.__PVT__satp 
                                                   >> 2U) 
                                                  & ((3U 
                                                      != (IData)(vlSelfRef.__PVT__priv)) 
                                                     << 0x1dU))) 
                                  | (0x1fffff80U & 
                                     (vlSelfRef.__PVT__satp 
                                      << 7U))));
    vlSelfRef.__PVT__vmem_c = ((0x3fffffffU & vlSelfRef.__PVT__vmem_c) 
                               | (0x40000000U & (vlSelfRef.__PVT__satp 
                                                 >> 1U)));
    vlSelfRef.__PVT__vmem_c = ((0x7ffffffcU & vlSelfRef.__PVT__vmem_c) 
                               | (IData)(__PVT__unnamedblk4__DOT__epm));
    vlSelfRef.__PVT__vmem_c = ((0x7fffff9fU & vlSelfRef.__PVT__vmem_c) 
                               | (0x40U & (vlSelfRef.__PVT__mstatus 
                                           >> 0xdU)));
    if ((3U == (IData)(__PVT__unnamedblk4__DOT__epm))) {
        vlSelfRef.__PVT__vmem_c = (0x1fffffffU & vlSelfRef.__PVT__vmem_c);
    } else if ((1U == (IData)(__PVT__unnamedblk4__DOT__epm))) {
        vlSelfRef.__PVT__vmem_c = ((0x7fffffdfU & vlSelfRef.__PVT__vmem_c) 
                                   | (0x20U & (vlSelfRef.__PVT__mstatus 
                                               >> 0xdU)));
    }
    vlSelfRef.__PVT__vmem_c = ((0x7ffffffbU & vlSelfRef.__PVT__vmem_c) 
                               | (4U & ((~ (((3U != (IData)(vlSelfRef.__PVT__priv)) 
                                             & (~ (vlSelfRef.__PVT__menvcfg 
                                                   >> 6U))) 
                                            | ((0U 
                                                == (IData)(vlSelfRef.__PVT__priv)) 
                                               & (~ 
                                                  (vlSelfRef.__PVT__senvcfg 
                                                   >> 6U))))) 
                                        << 2U)));
    vlSelfRef.__PVT__vmem_c = ((0x7fffffe7U & vlSelfRef.__PVT__vmem_c) 
                               | ((((IData)(((0U == 
                                              (0x30U 
                                               & vlSelfRef.__PVT__menvcfg)) 
                                             & (3U 
                                                != (IData)(vlSelfRef.__PVT__priv)))) 
                                    | (IData)(((0U 
                                                == (IData)(vlSelfRef.__PVT__priv)) 
                                               & (0U 
                                                  == 
                                                  (0x30U 
                                                   & vlSelfRef.__PVT__senvcfg)))))
                                    ? 0U : (((IData)(
                                                     ((0x10U 
                                                       == 
                                                       (0x30U 
                                                        & vlSelfRef.__PVT__menvcfg)) 
                                                      & (3U 
                                                         != (IData)(vlSelfRef.__PVT__priv)))) 
                                             | (IData)(
                                                       ((0U 
                                                         == (IData)(vlSelfRef.__PVT__priv)) 
                                                        & (0x10U 
                                                           == 
                                                           (0x30U 
                                                            & vlSelfRef.__PVT__senvcfg)))))
                                             ? 1U : 3U)) 
                                  << 3U));
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__mcountinhibit = 0U;
    }
}
