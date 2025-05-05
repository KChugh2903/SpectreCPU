// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_REGFILE__W23_S20_N3_NB1_H_
#define VERILATED_VTOP_REGFILE__W23_S20_N3_NB1_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_save.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_RegFile__W23_S20_N3_NB1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUTW(__PVT__OUT_rdata,104,0,4);
    VlUnpacked<QData/*34:0*/, 32> mem;
    CData/*4:0*/ __VdlyDim0__mem__v0;
    CData/*0:0*/ __VdlySet__mem__v0;
    QData/*34:0*/ __VdlyVal__mem__v0;
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__IN_re,2,0);
    VL_IN16(__PVT__IN_raddr,14,0);
    VL_IN8(__PVT__IN_we,0,0);
    VL_IN8(__PVT__IN_waddr,4,0);
    VL_IN64(__PVT__IN_wdata,34,0);

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_RegFile__W23_S20_N3_NB1(VTop__Syms* symsp, const char* v__name);
    ~VTop_RegFile__W23_S20_N3_NB1();
    VL_UNCOPYABLE(VTop_RegFile__W23_S20_N3_NB1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};


#endif  // guard
