// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_save.h"
class VTop_Top;


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop___024root final : public VerilatedModule {
  public:
    // CELLS
    VTop_Top* Top;

    // DESIGN SPECIFIC STATE
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(OUT_halt,0,0);
    VL_IN8(clk,0,0);
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*1:0*/, 4> __Vtrigprevexpr___TOP__Top__soc__core__rn____PVT__scheduler__DOT__prios_c__0;
    VlUnpacked<CData/*1:0*/, 4> __Vtrigprevexpr___TOP__Top__soc__core__rn____PVT__scheduler__DOT__prios_c__1;
    VlUnpacked<CData/*1:0*/, 4> __Vtrigprevexpr___TOP__Top__soc__core__rn____PVT__scheduler__DOT__prios_c__2;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;
    VlMTaskVertex __Vm_mtaskstate_7;
    VlMTaskVertex __Vm_mtaskstate_12;
    VlMTaskVertex __Vm_mtaskstate_21;
    VlMTaskVertex __Vm_mtaskstate_17;
    VlMTaskVertex __Vm_mtaskstate_24;
    VlMTaskVertex __Vm_mtaskstate_30;
    VlMTaskVertex __Vm_mtaskstate_14;
    VlMTaskVertex __Vm_mtaskstate_18;
    VlMTaskVertex __Vm_mtaskstate_28;
    VlMTaskVertex __Vm_mtaskstate_23;
    VlMTaskVertex __Vm_mtaskstate_29;
    VlMTaskVertex __Vm_mtaskstate_9;
    VlMTaskVertex __Vm_mtaskstate_16;
    VlMTaskVertex __Vm_mtaskstate_13;
    VlMTaskVertex __Vm_mtaskstate_25;
    VlMTaskVertex __Vm_mtaskstate_27;
    VlMTaskVertex __Vm_mtaskstate_11;
    VlMTaskVertex __Vm_mtaskstate_10;
    VlMTaskVertex __Vm_mtaskstate_15;
    VlMTaskVertex __Vm_mtaskstate_19;
    VlMTaskVertex __Vm_mtaskstate_20;
    VlMTaskVertex __Vm_mtaskstate_22;
    VlMTaskVertex __Vm_mtaskstate_26;
    VlMTaskVertex __Vm_mtaskstate_final__nba;

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop___024root(VTop__Syms* symsp, const char* v__name);
    ~VTop___024root();
    VL_UNCOPYABLE(VTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};


#endif  // guard
