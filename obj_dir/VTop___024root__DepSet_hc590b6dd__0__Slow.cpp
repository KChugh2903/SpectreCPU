// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop__Syms.h"
#include "VTop___024root.h"

VL_ATTR_COLD void VTop_ExternalAXISim___eval_static__TOP__Top__extMem(VTop_ExternalAXISim* vlSelf);
VL_ATTR_COLD void VTop_MemRTL__W200_N40___eval_static__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache(VTop_MemRTL__W200_N40* vlSelf);
VL_ATTR_COLD void VTop_MemRTL1RW__W54_N40_WB15___eval_static__TOP__Top__soc__ictable(VTop_MemRTL1RW__W54_N40_WB15* vlSelf);
VL_ATTR_COLD void VTop_MemRTL1RW__W2_N40_WB2___eval_static__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt(VTop_MemRTL1RW__W2_N40_WB2* vlSelf);
VL_ATTR_COLD void VTop_MemRTL__W200_N100_WB80___eval_static__TOP__Top__soc__icache(VTop_MemRTL__W200_N100_WB80* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_static(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_static\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTop_ExternalAXISim___eval_static__TOP__Top__extMem((&vlSymsp->TOP__Top__extMem));
    VTop_MemRTL__W200_N40___eval_static__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache((&vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache));
    VTop_MemRTL__W200_N40___eval_static__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache((&vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache));
    VTop_MemRTL__W200_N40___eval_static__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache((&vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache));
    VTop_MemRTL__W200_N40___eval_static__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache((&vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache));
    VTop_MemRTL1RW__W54_N40_WB15___eval_static__TOP__Top__soc__ictable((&vlSymsp->TOP__Top__soc__ictable));
    VTop_MemRTL1RW__W54_N40_WB15___eval_static__TOP__Top__soc__ictable((&vlSymsp->TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable));
    VTop_MemRTL1RW__W54_N40_WB15___eval_static__TOP__Top__soc__ictable((&vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable));
    VTop_MemRTL1RW__W54_N40_WB15___eval_static__TOP__Top__soc__ictable((&vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable));
    VTop_MemRTL1RW__W2_N40_WB2___eval_static__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt((&vlSymsp->TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt));
    VTop_MemRTL1RW__W2_N40_WB2___eval_static__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt((&vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt));
    VTop_MemRTL1RW__W2_N40_WB2___eval_static__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt((&vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt));
    VTop_MemRTL__W200_N100_WB80___eval_static__TOP__Top__soc__icache((&vlSymsp->TOP__Top__soc__icache));
}

VL_ATTR_COLD void VTop_ExternalAXISim___eval_initial__TOP__Top__extMem(VTop_ExternalAXISim* vlSelf);
VL_ATTR_COLD void VTop_Core___eval_initial__TOP__Top__soc__core(VTop_Core* vlSelf);
VL_ATTR_COLD void VTop_MemRTL__W200_N40___eval_initial__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache(VTop_MemRTL__W200_N40* vlSelf);
VL_ATTR_COLD void VTop_MemRTL1RW__W54_N40_WB15___eval_initial__TOP__Top__soc__ictable(VTop_MemRTL1RW__W54_N40_WB15* vlSelf);
VL_ATTR_COLD void VTop_MemRTL1RW__W2_N40_WB2___eval_initial__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt(VTop_MemRTL1RW__W2_N40_WB2* vlSelf);
VL_ATTR_COLD void VTop_MemRTL__W200_N100_WB80___eval_initial__TOP__Top__soc__icache(VTop_MemRTL__W200_N100_WB80* vlSelf);
VL_ATTR_COLD void VTop_Rename__WC5___eval_initial__TOP__Top__soc__core__rn(VTop_Rename__WC5* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_initial(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTop_ExternalAXISim___eval_initial__TOP__Top__extMem((&vlSymsp->TOP__Top__extMem));
    VTop_Core___eval_initial__TOP__Top__soc__core((&vlSymsp->TOP__Top__soc__core));
    VTop_MemRTL__W200_N40___eval_initial__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache((&vlSymsp->TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache));
    VTop_MemRTL__W200_N40___eval_initial__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache((&vlSymsp->TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache));
    VTop_MemRTL__W200_N40___eval_initial__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache((&vlSymsp->TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache));
    VTop_MemRTL__W200_N40___eval_initial__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache((&vlSymsp->TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache));
    VTop_MemRTL1RW__W54_N40_WB15___eval_initial__TOP__Top__soc__ictable((&vlSymsp->TOP__Top__soc__ictable));
    VTop_MemRTL1RW__W54_N40_WB15___eval_initial__TOP__Top__soc__ictable((&vlSymsp->TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable));
    VTop_MemRTL1RW__W54_N40_WB15___eval_initial__TOP__Top__soc__ictable((&vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable));
    VTop_MemRTL1RW__W54_N40_WB15___eval_initial__TOP__Top__soc__ictable((&vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable));
    VTop_MemRTL1RW__W2_N40_WB2___eval_initial__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt((&vlSymsp->TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt));
    VTop_MemRTL1RW__W2_N40_WB2___eval_initial__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt((&vlSymsp->TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt));
    VTop_MemRTL1RW__W2_N40_WB2___eval_initial__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt((&vlSymsp->TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt));
    VTop_MemRTL__W200_N100_WB80___eval_initial__TOP__Top__soc__icache((&vlSymsp->TOP__Top__soc__icache));
    VTop_Rename__WC5___eval_initial__TOP__Top__soc__core__rn((&vlSymsp->TOP__Top__soc__core__rn));
    vlSelfRef.__Vtrigprevexpr___TOP__Top__soc__core__rn____PVT__scheduler__DOT__prios_c__0 
        = vlSymsp->TOP__Top__soc__core__rn.__PVT__scheduler__DOT__prios_c;
    vlSelfRef.__Vtrigprevexpr___TOP__Top__soc__core__rn____PVT__scheduler__DOT__prios_c__1 
        = vlSymsp->TOP__Top__soc__core__rn.__PVT__scheduler__DOT__prios_c;
    vlSelfRef.__Vtrigprevexpr___TOP__Top__soc__core__rn____PVT__scheduler__DOT__prios_c__2 
        = vlSymsp->TOP__Top__soc__core__rn.__PVT__scheduler__DOT__prios_c;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root___eval_triggers__stl(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_triggers__stl\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, vlSelfRef.__Vtrigprevexpr___TOP__Top__soc__core__rn____PVT__scheduler__DOT__prios_c__0.neq(vlSymsp->TOP__Top__soc__core__rn.__PVT__scheduler__DOT__prios_c));
    vlSelfRef.__Vtrigprevexpr___TOP__Top__soc__core__rn____PVT__scheduler__DOT__prios_c__0.assign(vlSymsp->TOP__Top__soc__core__rn.__PVT__scheduler__DOT__prios_c);
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VTop_ExternalAXISim___stl_sequent__TOP__Top__extMem__0(VTop_ExternalAXISim* vlSelf);
VL_ATTR_COLD void VTop_Core___stl_sequent__TOP__Top__soc__core__0(VTop_Core* vlSelf);
VL_ATTR_COLD void VTop_Core___stl_sequent__TOP__Top__soc__core__1(VTop_Core* vlSelf);
VL_ATTR_COLD void VTop_IFetch___stl_sequent__TOP__Top__soc__core__ifetch__0(VTop_IFetch* vlSelf);
VL_ATTR_COLD void VTop_StoreQueue___stl_sequent__TOP__Top__soc__core__sq__0(VTop_StoreQueue* vlSelf);
VL_ATTR_COLD void VTop_BranchPredictor__N3___stl_sequent__TOP__Top__soc__core__ifetch__bp__0(VTop_BranchPredictor__N3* vlSelf);
VL_ATTR_COLD void VTop_ReturnStack___stl_sequent__TOP__Top__soc__core__ifetch__bp__retStack__0(VTop_ReturnStack* vlSelf);
void VTop___024root___nba_sequent__TOP__0(VTop___024root* vlSelf);
VL_ATTR_COLD void VTop_IFetchPipeline___stl_sequent__TOP__Top__soc__core__ifetch__ifp__0(VTop_IFetchPipeline* vlSelf);
VL_ATTR_COLD void VTop_IFetchPipeline___stl_sequent__TOP__Top__soc__core__ifetch__ifp__1(VTop_IFetchPipeline* vlSelf);
VL_ATTR_COLD void VTop_CSR___stl_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__0(VTop_CSR* vlSelf);
VL_ATTR_COLD void VTop_SoC___stl_sequent__TOP__Top__soc__0(VTop_SoC* vlSelf);
void VTop_ROB___ico_sequent__TOP__Top__soc__core__rob__0(VTop_ROB* vlSelf);
VL_ATTR_COLD void VTop_Rename__WC5___stl_sequent__TOP__Top__soc__core__rn__0(VTop_Rename__WC5* vlSelf);
void VTop_TagBuffer___ico_sequent__TOP__Top__soc__core__rn__tb__0(VTop_TagBuffer* vlSelf);
VL_ATTR_COLD void VTop_Core___stl_sequent__TOP__Top__soc__core__2(VTop_Core* vlSelf);
VL_ATTR_COLD void VTop_Core___stl_sequent__TOP__Top__soc__core__3(VTop_Core* vlSelf);
VL_ATTR_COLD void VTop_Core___stl_sequent__TOP__Top__soc__core__4(VTop_Core* vlSelf);
VL_ATTR_COLD void VTop_Core___stl_sequent__TOP__Top__soc__core__5(VTop_Core* vlSelf);
VL_ATTR_COLD void VTop_Core___stl_sequent__TOP__Top__soc__core__6(VTop_Core* vlSelf);
VL_ATTR_COLD void VTop_IFetch___stl_sequent__TOP__Top__soc__core__ifetch__1(VTop_IFetch* vlSelf);
VL_ATTR_COLD void VTop_ExternalAXISim___stl_sequent__TOP__Top__extMem__1(VTop_ExternalAXISim* vlSelf);
void VTop_IFetchPipeline___ico_sequent__TOP__Top__soc__core__ifetch__ifp__1(VTop_IFetchPipeline* vlSelf);
void VTop_RenameTable__ND5___ico_sequent__TOP__Top__soc__core__rn__rt__0(VTop_RenameTable__ND5* vlSelf);
void VTop_CSR___ico_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__0(VTop_CSR* vlSelf);
VL_ATTR_COLD void VTop_SoC___stl_sequent__TOP__Top__soc__1(VTop_SoC* vlSelf);
void VTop_Rename__WC5___ico_sequent__TOP__Top__soc__core__rn__1(VTop_Rename__WC5* vlSelf);
void VTop_IFetch___ico_sequent__TOP__Top__soc__core__ifetch__2(VTop_IFetch* vlSelf);
void VTop_Core___ico_sequent__TOP__Top__soc__core__7(VTop_Core* vlSelf);
void VTop_RenameTable__ND5___ico_sequent__TOP__Top__soc__core__rn__rt__1(VTop_RenameTable__ND5* vlSelf);
void VTop_IFetchPipeline___ico_sequent__TOP__Top__soc__core__ifetch__ifp__2(VTop_IFetchPipeline* vlSelf);
void VTop_BranchPredictor__N3___ico_sequent__TOP__Top__soc__core__ifetch__bp__0(VTop_BranchPredictor__N3* vlSelf);
void VTop_Rename__WC5___ico_sequent__TOP__Top__soc__core__rn__2(VTop_Rename__WC5* vlSelf);
void VTop_Rename__WC5___ico_comb__TOP__Top__soc__core__rn__0(VTop_Rename__WC5* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_stl(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_stl\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VTop_ExternalAXISim___stl_sequent__TOP__Top__extMem__0((&vlSymsp->TOP__Top__extMem));
        VTop_Core___stl_sequent__TOP__Top__soc__core__0((&vlSymsp->TOP__Top__soc__core));
        VTop_Core___stl_sequent__TOP__Top__soc__core__1((&vlSymsp->TOP__Top__soc__core));
        VTop_IFetch___stl_sequent__TOP__Top__soc__core__ifetch__0((&vlSymsp->TOP__Top__soc__core__ifetch));
        VTop_StoreQueue___stl_sequent__TOP__Top__soc__core__sq__0((&vlSymsp->TOP__Top__soc__core__sq));
        VTop_BranchPredictor__N3___stl_sequent__TOP__Top__soc__core__ifetch__bp__0((&vlSymsp->TOP__Top__soc__core__ifetch__bp));
        VTop_ReturnStack___stl_sequent__TOP__Top__soc__core__ifetch__bp__retStack__0((&vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack));
        VTop___024root___nba_sequent__TOP__0(vlSelf);
        VTop_IFetchPipeline___stl_sequent__TOP__Top__soc__core__ifetch__ifp__0((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
        VTop_IFetchPipeline___stl_sequent__TOP__Top__soc__core__ifetch__ifp__1((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
        VTop_CSR___stl_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__0((&vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr));
        VTop_SoC___stl_sequent__TOP__Top__soc__0((&vlSymsp->TOP__Top__soc));
        VTop_ROB___ico_sequent__TOP__Top__soc__core__rob__0((&vlSymsp->TOP__Top__soc__core__rob));
        VTop_Rename__WC5___stl_sequent__TOP__Top__soc__core__rn__0((&vlSymsp->TOP__Top__soc__core__rn));
        VTop_TagBuffer___ico_sequent__TOP__Top__soc__core__rn__tb__0((&vlSymsp->TOP__Top__soc__core__rn__tb));
        VTop_Core___stl_sequent__TOP__Top__soc__core__2((&vlSymsp->TOP__Top__soc__core));
        VTop_Core___stl_sequent__TOP__Top__soc__core__3((&vlSymsp->TOP__Top__soc__core));
        VTop_Core___stl_sequent__TOP__Top__soc__core__4((&vlSymsp->TOP__Top__soc__core));
        VTop_Core___stl_sequent__TOP__Top__soc__core__5((&vlSymsp->TOP__Top__soc__core));
        VTop_Core___stl_sequent__TOP__Top__soc__core__6((&vlSymsp->TOP__Top__soc__core));
        VTop_IFetch___stl_sequent__TOP__Top__soc__core__ifetch__1((&vlSymsp->TOP__Top__soc__core__ifetch));
        VTop_ExternalAXISim___stl_sequent__TOP__Top__extMem__1((&vlSymsp->TOP__Top__extMem));
        VTop_IFetchPipeline___ico_sequent__TOP__Top__soc__core__ifetch__ifp__1((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
        VTop_RenameTable__ND5___ico_sequent__TOP__Top__soc__core__rn__rt__0((&vlSymsp->TOP__Top__soc__core__rn__rt));
        VTop_CSR___ico_sequent__TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr__0((&vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr));
        VTop_SoC___stl_sequent__TOP__Top__soc__1((&vlSymsp->TOP__Top__soc));
        VTop_Rename__WC5___ico_sequent__TOP__Top__soc__core__rn__1((&vlSymsp->TOP__Top__soc__core__rn));
        VTop_IFetch___ico_sequent__TOP__Top__soc__core__ifetch__2((&vlSymsp->TOP__Top__soc__core__ifetch));
        VTop_Core___ico_sequent__TOP__Top__soc__core__7((&vlSymsp->TOP__Top__soc__core));
        VTop_RenameTable__ND5___ico_sequent__TOP__Top__soc__core__rn__rt__1((&vlSymsp->TOP__Top__soc__core__rn__rt));
        VTop_IFetchPipeline___ico_sequent__TOP__Top__soc__core__ifetch__ifp__2((&vlSymsp->TOP__Top__soc__core__ifetch__ifp));
        VTop_BranchPredictor__N3___ico_sequent__TOP__Top__soc__core__ifetch__bp__0((&vlSymsp->TOP__Top__soc__core__ifetch__bp));
        VTop_Rename__WC5___ico_sequent__TOP__Top__soc__core__rn__2((&vlSymsp->TOP__Top__soc__core__rn));
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VTop_Rename__WC5___ico_comb__TOP__Top__soc__core__rn__0((&vlSymsp->TOP__Top__soc__core__rn));
    }
}
