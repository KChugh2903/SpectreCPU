// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_IF_CTABLE_H_
#define VERILATED_VTOP_IF_CTABLE_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_save.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_IF_CTable final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*5:0*/ __PVT__ridx;
    VlWide<8>/*251:0*/ __PVT__rdata;
    VlUnpacked<SData/*11:0*/, 3> __PVT__raddr;
    VlUnpacked<CData/*0:0*/, 3> __PVT__re;

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_IF_CTable(VTop__Syms* symsp, const char* v__name);
    ~VTop_IF_CTable();
    VL_UNCOPYABLE(VTop_IF_CTable);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};

std::string VL_TO_STRING(const VTop_IF_CTable* obj);

#endif  // guard
