// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_REGFILE__NB5_A1_H_
#define VERILATED_VTOP_REGFILE__NB5_A1_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_save.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_RegFile__NB5_A1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VlUnpacked<IData/*31:0*/, 64> mem;
    VL_OUTW(__PVT__OUT_rdata,255,0,8);
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__IN_re,7,0);
    VL_IN64(__PVT__IN_raddr,47,0);
    VL_IN8(__PVT__IN_we,4,0);
    VL_IN(__PVT__IN_waddr,29,0);
    VL_INW(__PVT__IN_wdata,159,0,5);

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_RegFile__NB5_A1(VTop__Syms* symsp, const char* v__name);
    ~VTop_RegFile__NB5_A1();
    VL_UNCOPYABLE(VTop_RegFile__NB5_A1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};


#endif  // guard
