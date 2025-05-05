// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_TOP_H_
#define VERILATED_VTOP_TOP_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_save.h"
class VTop_ExternalAXISim;
class VTop_SoC;


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_Top final : public VerilatedModule {
  public:
    // CELLS
    VTop_ExternalAXISim* extMem;
    VTop_SoC* soc;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(OUT_halt,0,0);

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_Top(VTop__Syms* symsp, const char* v__name);
    ~VTop_Top();
    VL_UNCOPYABLE(VTop_Top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};


#endif  // guard
