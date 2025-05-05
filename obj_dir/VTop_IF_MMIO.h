// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_IF_MMIO_H_
#define VERILATED_VTOP_IF_MMIO_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_save.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_IF_MMIO final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__rdata;
    CData/*0:0*/ __PVT__we;
    CData/*3:0*/ __PVT__wmask;
    CData/*0:0*/ __PVT__re;
    IData/*31:0*/ __PVT__waddr;
    IData/*31:0*/ __PVT__wdata;
    IData/*31:0*/ __PVT__raddr;

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_IF_MMIO(VTop__Syms* symsp, const char* v__name);
    ~VTop_IF_MMIO();
    VL_UNCOPYABLE(VTop_IF_MMIO);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};

std::string VL_TO_STRING(const VTop_IF_MMIO* obj);

#endif  // guard
