// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop__Syms.h"
#include "VTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__ico(VTop___024root* vlSelf);
#endif  // VL_DEBUG

void VTop___024root___eval_triggers__ico(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_triggers__ico\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
    vlSelfRef.__VicoTriggered.set(1U, vlSelfRef.__Vtrigprevexpr___TOP__Top__soc__core__rn____PVT__scheduler__DOT__prios_c__1.neq(vlSymsp->TOP__Top__soc__core__rn.__PVT__scheduler__DOT__prios_c));
    vlSelfRef.__Vtrigprevexpr___TOP__Top__soc__core__rn____PVT__scheduler__DOT__prios_c__1.assign(vlSymsp->TOP__Top__soc__core__rn.__PVT__scheduler__DOT__prios_c);
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void VTop_Core___ico_sequent__TOP__Top__soc__core__0(VTop_Core* vlSelf);
void VTop_Core___ico_sequent__TOP__Top__soc__core__1(VTop_Core* vlSelf);
void VTop_Core___ico_sequent__TOP__Top__soc__core__2(VTop_Core* vlSelf);
void VTop_IFetch___ico_sequent__TOP__Top__soc__core__ifetch__0(VTop_IFetch* vlSelf);
void VTop_StoreQueue___ico_sequent__TOP__Top__soc__core__sq__0(VTop_StoreQueue* vlSelf);
void VTop_IFetchPipeline___ico_sequent__TOP__Top__soc__core__ifetch__ifp__0(VTop_IFetchPipeline* vlSelf);
void VTop_CSR___ico_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__0(VTop_CSR* vlSelf);
void VTop_ROB___ico_sequent__TOP__Top__soc__core__rob__0(VTop_ROB* vlSelf);
void VTop_SoC___ico_sequent__TOP__Top__soc__0(VTop_SoC* vlSelf);
void VTop_TagBuffer___ico_sequent__TOP__Top__soc__core__rn__tb__0(VTop_TagBuffer* vlSelf);
void VTop_Rename__WC5___ico_sequent__TOP__Top__soc__core__rn__0(VTop_Rename__WC5* vlSelf);
void VTop_IFetch___ico_sequent__TOP__Top__soc__core__ifetch__1(VTop_IFetch* vlSelf);
void VTop_Core___ico_sequent__TOP__Top__soc__core__3(VTop_Core* vlSelf);
void VTop_Core___ico_sequent__TOP__Top__soc__core__4(VTop_Core* vlSelf);
void VTop_Core___ico_sequent__TOP__Top__soc__core__5(VTop_Core* vlSelf);
void VTop_Core___ico_sequent__TOP__Top__soc__core__6(VTop_Core* vlSelf);
void VTop_IFetchPipeline___ico_sequent__TOP__Top__soc__core__ifetch__ifp__1(VTop_IFetchPipeline* vlSelf);
void VTop_RenameTable__ND5___ico_sequent__TOP__Top__soc__core__rn__rt__0(VTop_RenameTable__ND5* vlSelf);
void VTop_SoC___ico_sequent__TOP__Top__soc__1(VTop_SoC* vlSelf);
void VTop_Rename__WC5___ico_sequent__TOP__Top__soc__core__rn__1(VTop_Rename__WC5* vlSelf);
void VTop_IFetch___ico_sequent__TOP__Top__soc__core__ifetch__2(VTop_IFetch* vlSelf);
void VTop_Core___ico_sequent__TOP__Top__soc__core__7(VTop_Core* vlSelf);
void VTop_RenameTable__ND5___ico_sequent__TOP__Top__soc__core__rn__rt__1(VTop_RenameTable__ND5* vlSelf);
void VTop_IFetchPipeline___ico_sequent__TOP__Top__soc__core__ifetch__ifp__2(VTop_IFetchPipeline* vlSelf);
void VTop_BranchPredictor__N3___ico_sequent__TOP__Top__soc__core__ifetch__bp__0(VTop_BranchPredictor__N3* vlSelf);
void VTop_Rename__WC5___ico_sequent__TOP__Top__soc__core__rn__2(VTop_Rename__WC5* vlSelf);
void VTop_Rename__WC5___ico_comb__TOP__Top__soc__core__rn__0(VTop_Rename__WC5* vlSelf);

void VTop___024root___eval_ico(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_ico\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VTop_Core___ico_sequent__TOP__Top__soc__core__0((&vlSymsp->TOP__Top__soc__core));
        VTop_Core___ico_sequent__TOP__Top__soc__core__1((&vlSymsp->TOP__Top__soc__core));
        VTop_Core___ico_sequent__TOP__Top__soc__core__2((&vlSymsp->TOP__Top__soc__core));
        VTop_IFetch___ico_sequent__TOP__Top__soc__core__ifetch__0((&vlSymsp->TOP__Top__soc__core__ifetch));
        VTop_StoreQueue___ico_sequent__TOP__Top__soc__core__sq__0((&vlSymsp->TOP__Top__soc__core__sq));
        VTop_IFetchPipeline___ico_sequent__TOP__Top__soc__core__ifetch__ifp__0((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
        VTop_CSR___ico_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__0((&vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr));
        VTop_ROB___ico_sequent__TOP__Top__soc__core__rob__0((&vlSymsp->TOP__Top__soc__core__rob));
        VTop_SoC___ico_sequent__TOP__Top__soc__0((&vlSymsp->TOP__Top__soc));
        VTop_TagBuffer___ico_sequent__TOP__Top__soc__core__rn__tb__0((&vlSymsp->TOP__Top__soc__core__rn__tb));
        VTop_Rename__WC5___ico_sequent__TOP__Top__soc__core__rn__0((&vlSymsp->TOP__Top__soc__core__rn));
        VTop_IFetch___ico_sequent__TOP__Top__soc__core__ifetch__1((&vlSymsp->TOP__Top__soc__core__ifetch));
        VTop_Core___ico_sequent__TOP__Top__soc__core__3((&vlSymsp->TOP__Top__soc__core));
        VTop_Core___ico_sequent__TOP__Top__soc__core__4((&vlSymsp->TOP__Top__soc__core));
        VTop_Core___ico_sequent__TOP__Top__soc__core__5((&vlSymsp->TOP__Top__soc__core));
        VTop_Core___ico_sequent__TOP__Top__soc__core__6((&vlSymsp->TOP__Top__soc__core));
        VTop_IFetchPipeline___ico_sequent__TOP__Top__soc__core__ifetch__ifp__1((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
        VTop_RenameTable__ND5___ico_sequent__TOP__Top__soc__core__rn__rt__0((&vlSymsp->TOP__Top__soc__core__rn__rt));
        VTop_SoC___ico_sequent__TOP__Top__soc__1((&vlSymsp->TOP__Top__soc));
        VTop_Rename__WC5___ico_sequent__TOP__Top__soc__core__rn__1((&vlSymsp->TOP__Top__soc__core__rn));
        VTop_IFetch___ico_sequent__TOP__Top__soc__core__ifetch__2((&vlSymsp->TOP__Top__soc__core__ifetch));
        VTop_Core___ico_sequent__TOP__Top__soc__core__7((&vlSymsp->TOP__Top__soc__core));
        VTop_RenameTable__ND5___ico_sequent__TOP__Top__soc__core__rn__rt__1((&vlSymsp->TOP__Top__soc__core__rn__rt));
        VTop_IFetchPipeline___ico_sequent__TOP__Top__soc__core__ifetch__ifp__2((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
        VTop_BranchPredictor__N3___ico_sequent__TOP__Top__soc__core__ifetch__bp__0((&vlSymsp->TOP__Top__soc__core__ifetch__bp));
        VTop_Rename__WC5___ico_sequent__TOP__Top__soc__core__rn__2((&vlSymsp->TOP__Top__soc__core__rn));
    }
    if ((3ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VTop_Rename__WC5___ico_comb__TOP__Top__soc__core__rn__0((&vlSymsp->TOP__Top__soc__core__rn));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf);
#endif  // VL_DEBUG

void VTop___024root___eval_triggers__act(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_triggers__act\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__Vtrigprevexpr___TOP__Top__soc__core__rn____PVT__scheduler__DOT__prios_c__2.neq(vlSymsp->TOP__Top__soc__core__rn.__PVT__scheduler__DOT__prios_c));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__Top__soc__core__rn____PVT__scheduler__DOT__prios_c__2.assign(vlSymsp->TOP__Top__soc__core__rn.__PVT__scheduler__DOT__prios_c);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VTop___024root___eval_act(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_act\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VTop_Rename__WC5___ico_comb__TOP__Top__soc__core__rn__0((&vlSymsp->TOP__Top__soc__core__rn));
    }
}

void VTop___024root____Vthread__nba__0(void* voidSelf, bool even_cycle);
void VTop___024root____Vthread__nba__1(void* voidSelf, bool even_cycle);
void VTop___024root____Vthread__nba__2(void* voidSelf, bool even_cycle);
void VTop___024root____Vthread__nba__3(void* voidSelf, bool even_cycle);

void VTop___024root___eval_nba(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_nba\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->__Vm_even_cycle__nba = !vlSymsp->__Vm_even_cycle__nba;
    vlSymsp->__Vm_threadPoolp->workerp(0)->addTask(&VTop___024root____Vthread__nba__0, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(1)->addTask(&VTop___024root____Vthread__nba__1, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(2)->addTask(&VTop___024root____Vthread__nba__2, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    VTop___024root____Vthread__nba__3(vlSelf, vlSymsp->__Vm_even_cycle__nba);
    Verilated::mtaskId(0);
    vlSelf->__Vm_mtaskstate_final__nba.waitUntilUpstreamDone(vlSymsp->__Vm_even_cycle__nba);
}

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__0(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.OUT_halt = ((IData)(vlSymsp->TOP__Top__soc.__PVT__OUT_powerOff) 
                          | (IData)(vlSymsp->TOP__Top__soc.__PVT__OUT_reboot));
}

void VTop_Core___nba_sequent__TOP__Top__soc__core__0(VTop_Core* vlSelf);

void VTop___024root__nba_mtask0(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(0);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_Core___nba_sequent__TOP__Top__soc__core__0((&vlSymsp->TOP__Top__soc__core));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_Core___nba_sequent__TOP__Top__soc__core__1(VTop_Core* vlSelf);
void VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt__0(VTop_MemRTL1RW__W2_N40_WB2* vlSelf);
void VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__ictable__0(VTop_MemRTL1RW__W54_N40_WB15* vlSelf);
void VTop_SoC___nba_sequent__TOP__Top__soc__0(VTop_SoC* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__2(VTop_Core* vlSelf);

void VTop___024root__nba_mtask1(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(1);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_Core___nba_sequent__TOP__Top__soc__core__1((&vlSymsp->TOP__Top__soc__core));
        VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt__0((&vlSymsp->TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt));
        VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt__0((&vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt));
        VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt__0((&vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt));
        VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__ictable__0((&vlSymsp->TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable));
        VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__ictable__0((&vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable));
        VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__ictable__0((&vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable));
        VTop_SoC___nba_sequent__TOP__Top__soc__0((&vlSymsp->TOP__Top__soc));
        VTop_Core___nba_sequent__TOP__Top__soc__core__2((&vlSymsp->TOP__Top__soc__core));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_Core___nba_sequent__TOP__Top__soc__core__3(VTop_Core* vlSelf);

void VTop___024root__nba_mtask2(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(2);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_Core___nba_sequent__TOP__Top__soc__core__3((&vlSymsp->TOP__Top__soc__core));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_MemRTL__W200_N100_WB80___nba_sequent__TOP__Top__soc__icache__0(VTop_MemRTL__W200_N100_WB80* vlSelf);
void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__0(VTop_IFetchPipeline* vlSelf);
void VTop_RegFile__W23_S20_N3_NB1___nba_sequent__TOP__Top__soc__core__ifetch__pcFile__0(VTop_RegFile__W23_S20_N3_NB1* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__4(VTop_Core* vlSelf);
void VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__0(VTop_ROB* vlSelf);
void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__0(VTop_BranchPredictor__N3* vlSelf);
void VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__0(VTop_ReturnStack* vlSelf);
void VTop_CSR___nba_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__0(VTop_CSR* vlSelf);
void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__1(VTop_IFetchPipeline* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__5(VTop_Core* vlSelf);

void VTop___024root__nba_mtask3(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask3\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(3);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_MemRTL__W200_N100_WB80___nba_sequent__TOP__Top__soc__icache__0((&vlSymsp->TOP__Top__soc__icache));
        VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__0((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
        VTop_RegFile__W23_S20_N3_NB1___nba_sequent__TOP__Top__soc__core__ifetch__pcFile__0((&vlSymsp->TOP__Top__soc__core__ifetch__pcFile));
        VTop_Core___nba_sequent__TOP__Top__soc__core__4((&vlSymsp->TOP__Top__soc__core));
        VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__0((&vlSymsp->TOP__Top__soc__core__rob));
        VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__0((&vlSymsp->TOP__Top__soc__core__ifetch__bp));
        VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__0((&vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack));
        VTop_CSR___nba_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__0((&vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr));
        VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__ictable__0((&vlSymsp->TOP__Top__soc__ictable));
        VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__1((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
        VTop_Core___nba_sequent__TOP__Top__soc__core__5((&vlSymsp->TOP__Top__soc__core));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache__0(VTop_MemRTL__W200_N40* vlSelf);

void VTop___024root__nba_mtask4(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask4\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(4);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache__0((&vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache));
        VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache__0((&vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache));
        VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache__0((&vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache));
        VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache__0((&vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_Core___nba_sequent__TOP__Top__soc__core__6(VTop_Core* vlSelf);
void VTop_SoC___nba_sequent__TOP__Top__soc__1(VTop_SoC* vlSelf);
void VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__0(VTop_StoreQueue* vlSelf);

void VTop___024root__nba_mtask5(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask5\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(5);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_Core___nba_sequent__TOP__Top__soc__core__6((&vlSymsp->TOP__Top__soc__core));
        VTop_SoC___nba_sequent__TOP__Top__soc__1((&vlSymsp->TOP__Top__soc));
        VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__0((&vlSymsp->TOP__Top__soc__core__sq));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_Core___nba_sequent__TOP__Top__soc__core__7(VTop_Core* vlSelf);
void VTop_SoC___nba_sequent__TOP__Top__soc__2(VTop_SoC* vlSelf);
void VTop_TagBuffer___nba_sequent__TOP__Top__soc__core__rn__tb__0(VTop_TagBuffer* vlSelf);

void VTop___024root__nba_mtask6(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask6\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(6);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_Core___nba_sequent__TOP__Top__soc__core__7((&vlSymsp->TOP__Top__soc__core));
        VTop_SoC___nba_sequent__TOP__Top__soc__2((&vlSymsp->TOP__Top__soc));
        VTop_TagBuffer___nba_sequent__TOP__Top__soc__core__rn__tb__0((&vlSymsp->TOP__Top__soc__core__rn__tb));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_Core___nba_sequent__TOP__Top__soc__core__8(VTop_Core* vlSelf);
void VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__2(VTop_ROB* vlSelf);

void VTop___024root__nba_mtask7(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask7\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(7);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_Core___nba_sequent__TOP__Top__soc__core__8((&vlSymsp->TOP__Top__soc__core));
        VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__2((&vlSymsp->TOP__Top__soc__core__rob));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_Core___nba_sequent__TOP__Top__soc__core__9(VTop_Core* vlSelf);
void VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__0(VTop_Rename__WC5* vlSelf);
void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__2(VTop_IFetchPipeline* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__10(VTop_Core* vlSelf);

void VTop___024root__nba_mtask8(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask8\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(8);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_Core___nba_sequent__TOP__Top__soc__core__9((&vlSymsp->TOP__Top__soc__core));
        VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__0((&vlSymsp->TOP__Top__soc__core__rn));
        VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__2((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
        VTop_Core___nba_sequent__TOP__Top__soc__core__10((&vlSymsp->TOP__Top__soc__core));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__1(VTop_StoreQueue* vlSelf);

void VTop___024root__nba_mtask9(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask9\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(9);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__1((&vlSymsp->TOP__Top__soc__core__sq));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_TagBuffer___nba_sequent__TOP__Top__soc__core__rn__tb__1(VTop_TagBuffer* vlSelf);

void VTop___024root__nba_mtask10(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask10\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(10);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_TagBuffer___nba_sequent__TOP__Top__soc__core__rn__tb__1((&vlSymsp->TOP__Top__soc__core__rn__tb));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__0(VTop_ExternalAXISim* vlSelf);
void VTop_SoC___nba_sequent__TOP__Top__soc__3(VTop_SoC* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__11(VTop_Core* vlSelf);
void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__1(VTop_BranchPredictor__N3* vlSelf);
void VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt__1(VTop_MemRTL1RW__W2_N40_WB2* vlSelf);
void VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt__1(VTop_MemRTL1RW__W2_N40_WB2* vlSelf);
void VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt__1(VTop_MemRTL1RW__W2_N40_WB2* vlSelf);
void VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable__1(VTop_MemRTL1RW__W54_N40_WB15* vlSelf);
void VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable__1(VTop_MemRTL1RW__W54_N40_WB15* vlSelf);
void VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable__1(VTop_MemRTL1RW__W54_N40_WB15* vlSelf);
void VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__2(VTop_StoreQueue* vlSelf);
void VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__1(VTop_ExternalAXISim* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__12(VTop_Core* vlSelf);

void VTop___024root__nba_mtask11(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask11\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(11);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__0((&vlSymsp->TOP__Top__extMem));
        VTop_SoC___nba_sequent__TOP__Top__soc__3((&vlSymsp->TOP__Top__soc));
        VTop_Core___nba_sequent__TOP__Top__soc__core__11((&vlSymsp->TOP__Top__soc__core));
        VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__1((&vlSymsp->TOP__Top__soc__core__ifetch__bp));
        VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt__1((&vlSymsp->TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt));
        VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt__1((&vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt));
        VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt__1((&vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt));
        VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable__1((&vlSymsp->TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable));
        VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable__1((&vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable));
        VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable__1((&vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable));
        VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__2((&vlSymsp->TOP__Top__soc__core__sq));
        VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__1((&vlSymsp->TOP__Top__extMem));
        VTop_Core___nba_sequent__TOP__Top__soc__core__12((&vlSymsp->TOP__Top__soc__core));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__2(VTop_BranchPredictor__N3* vlSelf);
void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__3(VTop_IFetchPipeline* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__13(VTop_Core* vlSelf);
void VTop_RenameTable__ND5___nba_sequent__TOP__Top__soc__core__rn__rt__0(VTop_RenameTable__ND5* vlSelf);
void VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__1(VTop_Rename__WC5* vlSelf);
void VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__0(VTop_IFetch* vlSelf);
void VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__1(VTop_ReturnStack* vlSelf);
void VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__3(VTop_ROB* vlSelf);
void VTop_RegFile__NB5_A1___nba_sequent__TOP__Top__soc__core__rf__0(VTop_RegFile__NB5_A1* vlSelf);
void VTop_RegFile__W23_S20_N3_NB1___nba_sequent__TOP__Top__soc__core__ifetch__pcFile__1(VTop_RegFile__W23_S20_N3_NB1* vlSelf);
void VTop_CSR___nba_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__1(VTop_CSR* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__14(VTop_Core* vlSelf);
void VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__1(VTop_IFetch* vlSelf);
void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__3(VTop_BranchPredictor__N3* vlSelf);
void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__4(VTop_IFetchPipeline* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__15(VTop_Core* vlSelf);

void VTop___024root__nba_mtask12(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask12\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(12);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__2((&vlSymsp->TOP__Top__soc__core__ifetch__bp));
        VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__3((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
        VTop_Core___nba_sequent__TOP__Top__soc__core__13((&vlSymsp->TOP__Top__soc__core));
        VTop_RenameTable__ND5___nba_sequent__TOP__Top__soc__core__rn__rt__0((&vlSymsp->TOP__Top__soc__core__rn__rt));
        VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__1((&vlSymsp->TOP__Top__soc__core__rn));
        VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__0((&vlSymsp->TOP__Top__soc__core__ifetch));
        VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__1((&vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack));
        VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__3((&vlSymsp->TOP__Top__soc__core__rob));
        VTop_RegFile__NB5_A1___nba_sequent__TOP__Top__soc__core__rf__0((&vlSymsp->TOP__Top__soc__core__rf));
        VTop_RegFile__W23_S20_N3_NB1___nba_sequent__TOP__Top__soc__core__ifetch__pcFile__1((&vlSymsp->TOP__Top__soc__core__ifetch__pcFile));
        VTop_CSR___nba_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__1((&vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr));
        VTop_Core___nba_sequent__TOP__Top__soc__core__14((&vlSymsp->TOP__Top__soc__core));
        VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__1((&vlSymsp->TOP__Top__soc__core__ifetch));
        VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__3((&vlSymsp->TOP__Top__soc__core__ifetch__bp));
        VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__4((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
        VTop_Core___nba_sequent__TOP__Top__soc__core__15((&vlSymsp->TOP__Top__soc__core));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_Core___nba_sequent__TOP__Top__soc__core__16(VTop_Core* vlSelf);
void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__4(VTop_BranchPredictor__N3* vlSelf);
void VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt__2(VTop_MemRTL1RW__W2_N40_WB2* vlSelf);
void VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt__2(VTop_MemRTL1RW__W2_N40_WB2* vlSelf);
void VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt__2(VTop_MemRTL1RW__W2_N40_WB2* vlSelf);
void VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable__2(VTop_MemRTL1RW__W54_N40_WB15* vlSelf);
void VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable__2(VTop_MemRTL1RW__W54_N40_WB15* vlSelf);
void VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable__2(VTop_MemRTL1RW__W54_N40_WB15* vlSelf);

void VTop___024root__nba_mtask13(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask13\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(13);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_Core___nba_sequent__TOP__Top__soc__core__16((&vlSymsp->TOP__Top__soc__core));
        VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__4((&vlSymsp->TOP__Top__soc__core__ifetch__bp));
        VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt__2((&vlSymsp->TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt));
        VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt__2((&vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt));
        VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt__2((&vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt));
        VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable__2((&vlSymsp->TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable));
        VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable__2((&vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable));
        VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable__2((&vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__5(VTop_IFetchPipeline* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__17(VTop_Core* vlSelf);
void VTop_SoC___nba_sequent__TOP__Top__soc__5(VTop_SoC* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__18(VTop_Core* vlSelf);

void VTop___024root__nba_mtask14(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask14\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(14);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__5((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
        VTop_Core___nba_sequent__TOP__Top__soc__core__17((&vlSymsp->TOP__Top__soc__core));
        VTop_SoC___nba_sequent__TOP__Top__soc__5((&vlSymsp->TOP__Top__soc));
        VTop_Core___nba_sequent__TOP__Top__soc__core__18((&vlSymsp->TOP__Top__soc__core));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_RegFile__NB5_A1___nba_sequent__TOP__Top__soc__core__rf__1(VTop_RegFile__NB5_A1* vlSelf);
void VTop_SoC___nba_sequent__TOP__Top__soc__6(VTop_SoC* vlSelf);
void VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__2(VTop_ExternalAXISim* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__19(VTop_Core* vlSelf);
void VTop_CSR___nba_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__2(VTop_CSR* vlSelf);
void VTop_RenameTable__ND5___nba_sequent__TOP__Top__soc__core__rn__rt__1(VTop_RenameTable__ND5* vlSelf);
void VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__4(VTop_ROB* vlSelf);
void VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__2(VTop_Rename__WC5* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__20(VTop_Core* vlSelf);

void VTop___024root__nba_mtask15(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask15\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(15);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_RegFile__NB5_A1___nba_sequent__TOP__Top__soc__core__rf__1((&vlSymsp->TOP__Top__soc__core__rf));
        VTop_SoC___nba_sequent__TOP__Top__soc__6((&vlSymsp->TOP__Top__soc));
        VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__2((&vlSymsp->TOP__Top__extMem));
        VTop_Core___nba_sequent__TOP__Top__soc__core__19((&vlSymsp->TOP__Top__soc__core));
        VTop_CSR___nba_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__2((&vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr));
        VTop_RenameTable__ND5___nba_sequent__TOP__Top__soc__core__rn__rt__1((&vlSymsp->TOP__Top__soc__core__rn__rt));
        VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__4((&vlSymsp->TOP__Top__soc__core__rob));
        VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__2((&vlSymsp->TOP__Top__soc__core__rn));
        VTop_Core___nba_sequent__TOP__Top__soc__core__20((&vlSymsp->TOP__Top__soc__core));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__ictable__1(VTop_MemRTL1RW__W54_N40_WB15* vlSelf);
void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__6(VTop_IFetchPipeline* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__21(VTop_Core* vlSelf);
void VTop_RegFile__W50_S20_N1_NB1___nba_sequent__TOP__Top__soc__core__ifetch__bp__bpFile__0(VTop_RegFile__W50_S20_N1_NB1* vlSelf);
void VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__3(VTop_ExternalAXISim* vlSelf);
void VTop_SoC___nba_sequent__TOP__Top__soc__7(VTop_SoC* vlSelf);
void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__5(VTop_BranchPredictor__N3* vlSelf);
void VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__2(VTop_IFetch* vlSelf);
void VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__2(VTop_ReturnStack* vlSelf);
void VTop_MemRTL__W200_N100_WB80___nba_sequent__TOP__Top__soc__icache__1(VTop_MemRTL__W200_N100_WB80* vlSelf);
void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__7(VTop_IFetchPipeline* vlSelf);

void VTop___024root__nba_mtask16(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask16\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(16);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__ictable__1((&vlSymsp->TOP__Top__soc__ictable));
        VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__6((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
        VTop_Core___nba_sequent__TOP__Top__soc__core__21((&vlSymsp->TOP__Top__soc__core));
        VTop_RegFile__W50_S20_N1_NB1___nba_sequent__TOP__Top__soc__core__ifetch__bp__bpFile__0((&vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile));
        VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__3((&vlSymsp->TOP__Top__extMem));
        VTop_SoC___nba_sequent__TOP__Top__soc__7((&vlSymsp->TOP__Top__soc));
        VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__5((&vlSymsp->TOP__Top__soc__core__ifetch__bp));
        VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__2((&vlSymsp->TOP__Top__soc__core__ifetch));
        VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__2((&vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack));
        VTop_MemRTL__W200_N100_WB80___nba_sequent__TOP__Top__soc__icache__1((&vlSymsp->TOP__Top__soc__icache));
        VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__7((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_Core___nba_sequent__TOP__Top__soc__core__22(VTop_Core* vlSelf);
void VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache__1(VTop_MemRTL__W200_N40* vlSelf);
void VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache__1(VTop_MemRTL__W200_N40* vlSelf);
void VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache__1(VTop_MemRTL__W200_N40* vlSelf);
void VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache__1(VTop_MemRTL__W200_N40* vlSelf);
void VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__4(VTop_StoreQueue* vlSelf);

void VTop___024root__nba_mtask17(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask17\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(17);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_Core___nba_sequent__TOP__Top__soc__core__22((&vlSymsp->TOP__Top__soc__core));
        VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache__1((&vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache));
        VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache__1((&vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache));
        VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache__1((&vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache));
        VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache__1((&vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache));
        VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__4((&vlSymsp->TOP__Top__soc__core__sq));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_Core___nba_sequent__TOP__Top__soc__core__23(VTop_Core* vlSelf);
void VTop_TagBuffer___nba_sequent__TOP__Top__soc__core__rn__tb__2(VTop_TagBuffer* vlSelf);
void VTop_SoC___nba_sequent__TOP__Top__soc__8(VTop_SoC* vlSelf);
void VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__3(VTop_Rename__WC5* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__24(VTop_Core* vlSelf);

void VTop___024root__nba_mtask18(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask18\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(18);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_Core___nba_sequent__TOP__Top__soc__core__23((&vlSymsp->TOP__Top__soc__core));
        VTop_TagBuffer___nba_sequent__TOP__Top__soc__core__rn__tb__2((&vlSymsp->TOP__Top__soc__core__rn__tb));
        VTop_SoC___nba_sequent__TOP__Top__soc__8((&vlSymsp->TOP__Top__soc));
        VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__3((&vlSymsp->TOP__Top__soc__core__rn));
        VTop_Core___nba_sequent__TOP__Top__soc__core__24((&vlSymsp->TOP__Top__soc__core));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_Core___nba_sequent__TOP__Top__soc__core__25(VTop_Core* vlSelf);
void VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__5(VTop_StoreQueue* vlSelf);
void VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__5(VTop_ROB* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__26(VTop_Core* vlSelf);

void VTop___024root__nba_mtask19(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask19\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(19);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_Core___nba_sequent__TOP__Top__soc__core__25((&vlSymsp->TOP__Top__soc__core));
        VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__5((&vlSymsp->TOP__Top__soc__core__sq));
        VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__5((&vlSymsp->TOP__Top__soc__core__rob));
        VTop_Core___nba_sequent__TOP__Top__soc__core__26((&vlSymsp->TOP__Top__soc__core));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__8(VTop_IFetchPipeline* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__27(VTop_Core* vlSelf);
void VTop_SoC___nba_sequent__TOP__Top__soc__9(VTop_SoC* vlSelf);
void VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__6(VTop_ROB* vlSelf);
void VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__3(VTop_IFetch* vlSelf);
void VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__3(VTop_ReturnStack* vlSelf);
void VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__4(VTop_ExternalAXISim* vlSelf);
void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__6(VTop_BranchPredictor__N3* vlSelf);
void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__9(VTop_IFetchPipeline* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__28(VTop_Core* vlSelf);
void VTop_SoC___nba_sequent__TOP__Top__soc__10(VTop_SoC* vlSelf);
void VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__4(VTop_IFetch* vlSelf);

void VTop___024root__nba_mtask20(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask20\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(20);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__8((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
        VTop_Core___nba_sequent__TOP__Top__soc__core__27((&vlSymsp->TOP__Top__soc__core));
        VTop_SoC___nba_sequent__TOP__Top__soc__9((&vlSymsp->TOP__Top__soc));
        VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__6((&vlSymsp->TOP__Top__soc__core__rob));
        VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__3((&vlSymsp->TOP__Top__soc__core__ifetch));
        VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__3((&vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack));
        VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__4((&vlSymsp->TOP__Top__extMem));
        VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__6((&vlSymsp->TOP__Top__soc__core__ifetch__bp));
        VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__9((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
        VTop_Core___nba_sequent__TOP__Top__soc__core__28((&vlSymsp->TOP__Top__soc__core));
        VTop___024root___nba_sequent__TOP__0(vlSelf);
        VTop_SoC___nba_sequent__TOP__Top__soc__10((&vlSymsp->TOP__Top__soc));
        VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__4((&vlSymsp->TOP__Top__soc__core__ifetch));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__7(VTop_BranchPredictor__N3* vlSelf);
void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__10(VTop_IFetchPipeline* vlSelf);

void VTop___024root__nba_mtask21(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask21\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(21);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__7((&vlSymsp->TOP__Top__soc__core__ifetch__bp));
        VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__10((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_Core___nba_sequent__TOP__Top__soc__core__29(VTop_Core* vlSelf);
void VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__7(VTop_ROB* vlSelf);
void VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__6(VTop_StoreQueue* vlSelf);
void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__8(VTop_BranchPredictor__N3* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__30(VTop_Core* vlSelf);
void VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__4(VTop_Rename__WC5* vlSelf);
void VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__5(VTop_Rename__WC5* vlSelf);

void VTop___024root__nba_mtask22(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask22\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(22);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_Core___nba_sequent__TOP__Top__soc__core__29((&vlSymsp->TOP__Top__soc__core));
        VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__7((&vlSymsp->TOP__Top__soc__core__rob));
        VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__6((&vlSymsp->TOP__Top__soc__core__sq));
        VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__8((&vlSymsp->TOP__Top__soc__core__ifetch__bp));
        VTop_Core___nba_sequent__TOP__Top__soc__core__30((&vlSymsp->TOP__Top__soc__core));
        VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__4((&vlSymsp->TOP__Top__soc__core__rn));
        VTop_RenameTable__ND5___ico_sequent__TOP__Top__soc__core__rn__rt__0((&vlSymsp->TOP__Top__soc__core__rn__rt));
        VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__5((&vlSymsp->TOP__Top__soc__core__rn));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache__2(VTop_MemRTL__W200_N40* vlSelf);
void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__9(VTop_BranchPredictor__N3* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__31(VTop_Core* vlSelf);

void VTop___024root__nba_mtask23(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask23\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(23);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache__2((&vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache));
        VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache__2((&vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache));
        VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__9((&vlSymsp->TOP__Top__soc__core__ifetch__bp));
        VTop_CSR___ico_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__0((&vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr));
        VTop_Core___nba_sequent__TOP__Top__soc__core__31((&vlSymsp->TOP__Top__soc__core));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__10(VTop_BranchPredictor__N3* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__32(VTop_Core* vlSelf);
void VTop_TagBuffer___nba_sequent__TOP__Top__soc__core__rn__tb__3(VTop_TagBuffer* vlSelf);
void VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__4(VTop_ReturnStack* vlSelf);
void VTop_SoC___nba_sequent__TOP__Top__soc__11(VTop_SoC* vlSelf);
void VTop_RegFile__W23_S20_N3_NB1___nba_sequent__TOP__Top__soc__core__ifetch__pcFile__2(VTop_RegFile__W23_S20_N3_NB1* vlSelf);
void VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__7(VTop_StoreQueue* vlSelf);
void VTop_RegFile__W50_S20_N1_NB1___nba_sequent__TOP__Top__soc__core__ifetch__bp__bpFile__1(VTop_RegFile__W50_S20_N1_NB1* vlSelf);
void VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__5(VTop_ExternalAXISim* vlSelf);
void VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__5(VTop_IFetch* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__33(VTop_Core* vlSelf);

void VTop___024root__nba_mtask24(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask24\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(24);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__10((&vlSymsp->TOP__Top__soc__core__ifetch__bp));
        VTop_Core___nba_sequent__TOP__Top__soc__core__32((&vlSymsp->TOP__Top__soc__core));
        VTop_TagBuffer___nba_sequent__TOP__Top__soc__core__rn__tb__3((&vlSymsp->TOP__Top__soc__core__rn__tb));
        VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__4((&vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack));
        VTop_SoC___nba_sequent__TOP__Top__soc__11((&vlSymsp->TOP__Top__soc));
        VTop_RegFile__W23_S20_N3_NB1___nba_sequent__TOP__Top__soc__core__ifetch__pcFile__2((&vlSymsp->TOP__Top__soc__core__ifetch__pcFile));
        VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__7((&vlSymsp->TOP__Top__soc__core__sq));
        VTop_RegFile__W50_S20_N1_NB1___nba_sequent__TOP__Top__soc__core__ifetch__bp__bpFile__1((&vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile));
        VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__5((&vlSymsp->TOP__Top__extMem));
        VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__5((&vlSymsp->TOP__Top__soc__core__ifetch));
        VTop_Core___nba_sequent__TOP__Top__soc__core__33((&vlSymsp->TOP__Top__soc__core));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_Core___nba_sequent__TOP__Top__soc__core__34(VTop_Core* vlSelf);
void VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__6(VTop_Rename__WC5* vlSelf);
void VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__8(VTop_StoreQueue* vlSelf);
void VTop_SoC___nba_sequent__TOP__Top__soc__12(VTop_SoC* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__35(VTop_Core* vlSelf);

void VTop___024root__nba_mtask25(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask25\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(25);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_Core___nba_sequent__TOP__Top__soc__core__34((&vlSymsp->TOP__Top__soc__core));
        VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__6((&vlSymsp->TOP__Top__soc__core__rn));
        VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__8((&vlSymsp->TOP__Top__soc__core__sq));
        VTop_SoC___nba_sequent__TOP__Top__soc__12((&vlSymsp->TOP__Top__soc));
        VTop_Core___nba_sequent__TOP__Top__soc__core__35((&vlSymsp->TOP__Top__soc__core));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_Core___nba_sequent__TOP__Top__soc__core__36(VTop_Core* vlSelf);
void VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__9(VTop_StoreQueue* vlSelf);
void VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__7(VTop_Rename__WC5* vlSelf);

void VTop___024root__nba_mtask26(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask26\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(26);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_Core___nba_sequent__TOP__Top__soc__core__36((&vlSymsp->TOP__Top__soc__core));
        VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__9((&vlSymsp->TOP__Top__soc__core__sq));
        VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__7((&vlSymsp->TOP__Top__soc__core__rn));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_Rename__WC5___ico_comb__TOP__Top__soc__core__rn__0((&vlSymsp->TOP__Top__soc__core__rn));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_SoC___nba_sequent__TOP__Top__soc__13(VTop_SoC* vlSelf);
void VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__6(VTop_ExternalAXISim* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__37(VTop_Core* vlSelf);
void VTop_SoC___nba_sequent__TOP__Top__soc__14(VTop_SoC* vlSelf);
void VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__8(VTop_Rename__WC5* vlSelf);

void VTop___024root__nba_mtask27(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask27\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(27);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_SoC___nba_sequent__TOP__Top__soc__13((&vlSymsp->TOP__Top__soc));
        VTop_ExternalAXISim___nba_sequent__TOP__Top__extMem__6((&vlSymsp->TOP__Top__extMem));
        VTop_Core___nba_sequent__TOP__Top__soc__core__37((&vlSymsp->TOP__Top__soc__core));
        VTop_SoC___nba_sequent__TOP__Top__soc__14((&vlSymsp->TOP__Top__soc));
        VTop_Rename__WC5___nba_sequent__TOP__Top__soc__core__rn__8((&vlSymsp->TOP__Top__soc__core__rn));
        VTop_RenameTable__ND5___ico_sequent__TOP__Top__soc__core__rn__rt__1((&vlSymsp->TOP__Top__soc__core__rn__rt));
        VTop_Rename__WC5___ico_sequent__TOP__Top__soc__core__rn__2((&vlSymsp->TOP__Top__soc__core__rn));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_Core___nba_sequent__TOP__Top__soc__core__38(VTop_Core* vlSelf);

void VTop___024root__nba_mtask28(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask28\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(28);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_Core___nba_sequent__TOP__Top__soc__core__38((&vlSymsp->TOP__Top__soc__core));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__11(VTop_BranchPredictor__N3* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__39(VTop_Core* vlSelf);
void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__12(VTop_IFetchPipeline* vlSelf);
void VTop_SoC___nba_sequent__TOP__Top__soc__15(VTop_SoC* vlSelf);

void VTop___024root__nba_mtask29(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask29\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(29);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__11((&vlSymsp->TOP__Top__soc__core__ifetch__bp));
        VTop_Core___nba_sequent__TOP__Top__soc__core__39((&vlSymsp->TOP__Top__soc__core));
        VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__12((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
        VTop_SoC___nba_sequent__TOP__Top__soc__15((&vlSymsp->TOP__Top__soc));
        VTop_IFetch___ico_sequent__TOP__Top__soc__core__ifetch__2((&vlSymsp->TOP__Top__soc__core__ifetch));
        VTop_IFetchPipeline___ico_sequent__TOP__Top__soc__core__ifetch__ifp__2((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
        VTop_BranchPredictor__N3___ico_sequent__TOP__Top__soc__core__ifetch__bp__0((&vlSymsp->TOP__Top__soc__core__ifetch__bp));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__13(VTop_BranchPredictor__N3* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__40(VTop_Core* vlSelf);
void VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__7(VTop_IFetch* vlSelf);
void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__14(VTop_BranchPredictor__N3* vlSelf);

void VTop___024root__nba_mtask30(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask30\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(30);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__13((&vlSymsp->TOP__Top__soc__core__ifetch__bp));
        VTop_Core___nba_sequent__TOP__Top__soc__core__40((&vlSymsp->TOP__Top__soc__core));
        VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache__2((&vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache));
        VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__7((&vlSymsp->TOP__Top__soc__core__ifetch));
        VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__14((&vlSymsp->TOP__Top__soc__core__ifetch__bp));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop_Core___nba_sequent__TOP__Top__soc__core__41(VTop_Core* vlSelf);
void VTop_Core___nba_sequent__TOP__Top__soc__core__42(VTop_Core* vlSelf);

void VTop___024root__nba_mtask31(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__nba_mtask31\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(31);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop_Core___nba_sequent__TOP__Top__soc__core__41((&vlSymsp->TOP__Top__soc__core));
        VTop_Core___nba_sequent__TOP__Top__soc__core__42((&vlSymsp->TOP__Top__soc__core));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTop___024root____Vthread__nba__0(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root____Vthread__nba__0\n"); );
    // Body
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VTop___024root__nba_mtask1(vlSelf);
    vlSelf->__Vm_mtaskstate_11.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_14.signalUpstreamDone(even_cycle);
    VTop___024root__nba_mtask0(vlSelf);
    vlSelf->__Vm_mtaskstate_7.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask7(vlSelf);
    vlSelf->__Vm_mtaskstate_9.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_19.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_12.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask12(vlSelf);
    vlSelf->__Vm_mtaskstate_13.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_16.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_18.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_19.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_21.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask21(vlSelf);
    vlSelf->__Vm_mtaskstate_29.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_17.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask17(vlSelf);
    vlSelf->__Vm_mtaskstate_26.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_27.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_29.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_24.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask24(vlSelf);
    vlSelf->__Vm_mtaskstate_26.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_29.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_30.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask30(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void VTop___024root____Vthread__nba__1(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root____Vthread__nba__1\n"); );
    // Body
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VTop___024root__nba_mtask6(vlSelf);
    vlSelf->__Vm_mtaskstate_10.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_16.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_19.signalUpstreamDone(even_cycle);
    VTop___024root__nba_mtask4(vlSelf);
    vlSelf->__Vm_mtaskstate_17.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_14.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask14(vlSelf);
    vlSelf->__Vm_mtaskstate_18.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask18(vlSelf);
    vlSelf->__Vm_mtaskstate_20.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_22.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_24.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_25.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_30.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_28.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask28(vlSelf);
    vlSelf->__Vm_mtaskstate_23.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask23(vlSelf);
    vlSelf->__Vm_mtaskstate_29.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask29(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void VTop___024root____Vthread__nba__2(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root____Vthread__nba__2\n"); );
    // Body
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VTop___024root__nba_mtask3(vlSelf);
    vlSelf->__Vm_mtaskstate_7.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_12.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_14.signalUpstreamDone(even_cycle);
    VTop___024root__nba_mtask8(vlSelf);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_19.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_9.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask9(vlSelf);
    vlSelf->__Vm_mtaskstate_16.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask16(vlSelf);
    vlSelf->__Vm_mtaskstate_17.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_20.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_22.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_23.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_24.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_13.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask13(vlSelf);
    vlSelf->__Vm_mtaskstate_29.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_25.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask25(vlSelf);
    vlSelf->__Vm_mtaskstate_26.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_29.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_27.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask27(vlSelf);
    VTop___024root__nba_mtask31(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void VTop___024root____Vthread__nba__3(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root____Vthread__nba__3\n"); );
    // Body
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VTop___024root__nba_mtask5(vlSelf);
    vlSelf->__Vm_mtaskstate_7.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_14.signalUpstreamDone(even_cycle);
    VTop___024root__nba_mtask2(vlSelf);
    vlSelf->__Vm_mtaskstate_12.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_11.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask11(vlSelf);
    vlSelf->__Vm_mtaskstate_13.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_16.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_18.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_21.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_10.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask10(vlSelf);
    vlSelf->__Vm_mtaskstate_15.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask15(vlSelf);
    vlSelf->__Vm_mtaskstate_23.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_24.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_25.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_28.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_30.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_19.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask19(vlSelf);
    vlSelf->__Vm_mtaskstate_24.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_25.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_30.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_20.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask20(vlSelf);
    vlSelf->__Vm_mtaskstate_29.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_22.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask22(vlSelf);
    vlSelf->__Vm_mtaskstate_26.waitUntilUpstreamDone(even_cycle);
    VTop___024root__nba_mtask26(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}
