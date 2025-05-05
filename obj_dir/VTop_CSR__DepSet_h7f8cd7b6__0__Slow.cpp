// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_CSR.h"

VL_ATTR_COLD void VTop_CSR___stl_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__0(VTop_CSR* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_CSR___stl_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __PVT__unnamedblk4__DOT__epm;
    __PVT__unnamedblk4__DOT__epm = 0;
    // Body
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
}

VL_ATTR_COLD void VTop_CSR___ctor_var_reset(VTop_CSR* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_CSR___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_irq = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(183, vlSelf->__PVT__IN_uop);
    VL_RAND_RESET_W(74, vlSelf->__PVT__IN_branch);
    vlSelf->__PVT__IN_fpNewFlags = VL_RAND_RESET_I(5);
    vlSelf->__PVT__IN_perfcInfo = VL_RAND_RESET_I(13);
    vlSelf->__PVT__IN_branchMispr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_tvalState = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(72, vlSelf->__PVT__IN_trapInfo);
    VL_RAND_RESET_W(134, vlSelf->__PVT__OUT_trapControl);
    vlSelf->__PVT__OUT_fRoundMode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__OUT_dec = VL_RAND_RESET_I(3);
    vlSelf->__PVT__OUT_vmem = VL_RAND_RESET_I(31);
    vlSelf->__PVT__OUT_uop = VL_RAND_RESET_Q(52);
    vlSelf->__PVT__priv = VL_RAND_RESET_I(2);
    vlSelf->mcycle = VL_RAND_RESET_Q(64);
    vlSelf->minstret = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->mhpmcounter[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stvec = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mscratch = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mepc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mcause = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mtval = VL_RAND_RESET_I(32);
    vlSelf->__PVT__medeleg = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mideleg = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mip = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mie = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mcounteren = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mcountinhibit = VL_RAND_RESET_I(32);
    vlSelf->__PVT__menvcfg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__senvcfg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__scounteren = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sepc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sscratch = VL_RAND_RESET_I(32);
    vlSelf->__PVT__scause = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stval = VL_RAND_RESET_I(32);
    vlSelf->__PVT__misa_X = VL_RAND_RESET_I(1);
    vlSelf->__PVT__satp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__retvec = VL_RAND_RESET_I(31);
    vlSelf->__PVT__interrupt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__interruptCause = VL_RAND_RESET_I(5);
    vlSelf->__PVT__interruptDelegate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vmem_c = VL_RAND_RESET_I(31);
    vlSelf->__PVT__rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__invalidCSR = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__PVT__unnamedblk1__DOT__mPrio[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__unnamedblk1__DOT__sPrio[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__PVT__unnamedblk9__DOT__tval = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk10__DOT__temp = VL_RAND_RESET_I(3);
    vlSelf->__PVT__unnamedblk12__DOT__temp = VL_RAND_RESET_I(3);
    vlSelf->__PVT__unnamedblk14__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk14__DOT__unnamedblk16__DOT__temp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk14__DOT__unnamedblk17__DOT__temp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk14__DOT__unnamedblk18__DOT__temp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk14__DOT__unnamedblk19__DOT__temp = VL_RAND_RESET_I(32);
    vlSelf->__Vlvbound_h4b2c3bb3__0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vlvbound_hab3b1230__0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vlvbound_hbaecf5dc__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vlvbound_hbaeae206__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__priv = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__mstatus = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mcycle = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__minstret = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__mepc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mideleg = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__sepc = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__mhpmcounter__v0 = 0;
    vlSelf->__VdlySet__mhpmcounter__v1 = 0;
    vlSelf->__VdlySet__mhpmcounter__v2 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v17 = VL_RAND_RESET_Q(64);
    vlSelf->__VdlySet__mhpmcounter__v17 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v18 = VL_RAND_RESET_Q(64);
    vlSelf->__VdlySet__mhpmcounter__v18 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v19 = VL_RAND_RESET_Q(64);
    vlSelf->__VdlySet__mhpmcounter__v19 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v20 = VL_RAND_RESET_Q(64);
    vlSelf->__VdlyDim0__mhpmcounter__v20 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__mhpmcounter__v20 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v21 = VL_RAND_RESET_Q(64);
    vlSelf->__VdlyDim0__mhpmcounter__v21 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__mhpmcounter__v21 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v22 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__mhpmcounter__v22 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v23 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__mhpmcounter__v23 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v24 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__mhpmcounter__v24 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v25 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__mhpmcounter__v25 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v26 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__mhpmcounter__v26 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v27 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__mhpmcounter__v27 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v28 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__mhpmcounter__v28 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v29 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__mhpmcounter__v29 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v30 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__mhpmcounter__v30 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v31 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__mhpmcounter__v31 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v32 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__mhpmcounter__v32 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v33 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__mhpmcounter__v33 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v34 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__mhpmcounter__v34 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v35 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__mhpmcounter__v35 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v36 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__mhpmcounter__v36 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v37 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__mhpmcounter__v37 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v38 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__mhpmcounter__v38 = 0;
    vlSelf->__VdlyVal__mhpmcounter__v39 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__mhpmcounter__v39 = 0;
}
