// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_IF_CACHE_H_
#define VERILATED_VTOP_IF_CACHE_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_save.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_IF_Cache final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VlWide<8>/*255:0*/ __PVT__rdata;
    CData/*2:0*/ __PVT__re;
    CData/*2:0*/ __PVT__we;
    CData/*5:0*/ __PVT__wassoc;
    QData/*47:0*/ __PVT__wmask;
    VlWide<12>/*383:0*/ __PVT__wdata;
    QData/*35:0*/ __PVT__addr;
    CData/*2:0*/ __PVT__busy;

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_IF_Cache(VTop__Syms* symsp, const char* v__name);
    ~VTop_IF_Cache();
    VL_UNCOPYABLE(VTop_IF_Cache);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};

std::string VL_TO_STRING(const VTop_IF_Cache* obj);

#endif  // guard
