// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop__Syms.h"
#include "VTop___024root.h"

void VTop___024root___ctor_var_reset(VTop___024root* vlSelf);

VTop___024root::VTop___024root(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __Vm_mtaskstate_7(2U)
    , __Vm_mtaskstate_12(2U)
    , __Vm_mtaskstate_21(1U)
    , __Vm_mtaskstate_17(2U)
    , __Vm_mtaskstate_24(4U)
    , __Vm_mtaskstate_30(3U)
    , __Vm_mtaskstate_14(3U)
    , __Vm_mtaskstate_18(2U)
    , __Vm_mtaskstate_28(1U)
    , __Vm_mtaskstate_23(2U)
    , __Vm_mtaskstate_29(6U)
    , __Vm_mtaskstate_9(1U)
    , __Vm_mtaskstate_16(3U)
    , __Vm_mtaskstate_13(2U)
    , __Vm_mtaskstate_25(3U)
    , __Vm_mtaskstate_27(1U)
    , __Vm_mtaskstate_11(1U)
    , __Vm_mtaskstate_10(1U)
    , __Vm_mtaskstate_15(4U)
    , __Vm_mtaskstate_19(4U)
    , __Vm_mtaskstate_20(2U)
    , __Vm_mtaskstate_22(2U)
    , __Vm_mtaskstate_26(3U)
    , __Vm_mtaskstate_final__nba(4U)
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop___024root___ctor_var_reset(this);
}

void VTop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop___024root::~VTop___024root() {
}

// Savable
void VTop___024root::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x3cd09362672197c8ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<rst;
    os<<en;
    os<<OUT_halt;
    os<<clk;
    os<<__VstlDidInit;
    os<<__VstlFirstIteration;
    os<<__VicoDidInit;
    os<<__VicoFirstIteration;
    os<<__Vtrigprevexpr___TOP__clk__0;
    os<<__VactDidInit;
    os<<__VactContinue;
    os<<__VactIterCount;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__Vtrigprevexpr___TOP__Top__soc__core__rn____PVT__scheduler__DOT__prios_c__0[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__Vtrigprevexpr___TOP__Top__soc__core__rn____PVT__scheduler__DOT__prios_c__1[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__Vtrigprevexpr___TOP__Top__soc__core__rn____PVT__scheduler__DOT__prios_c__2[__Vi0];
    }
}
void VTop___024root::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x3cd09362672197c8ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>rst;
    os>>en;
    os>>OUT_halt;
    os>>clk;
    os>>__VstlDidInit;
    os>>__VstlFirstIteration;
    os>>__VicoDidInit;
    os>>__VicoFirstIteration;
    os>>__Vtrigprevexpr___TOP__clk__0;
    os>>__VactDidInit;
    os>>__VactContinue;
    os>>__VactIterCount;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__Vtrigprevexpr___TOP__Top__soc__core__rn____PVT__scheduler__DOT__prios_c__0[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__Vtrigprevexpr___TOP__Top__soc__core__rn____PVT__scheduler__DOT__prios_c__1[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__Vtrigprevexpr___TOP__Top__soc__core__rn____PVT__scheduler__DOT__prios_c__2[__Vi0];
    }
}
