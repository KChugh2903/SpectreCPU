// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Top.h"
#include "VTop__Syms.h"

void VTop_Top___ctor_var_reset(VTop_Top* vlSelf);

VTop_Top::VTop_Top(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_Top___ctor_var_reset(this);
}

void VTop_Top::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop_Top::~VTop_Top() {
}

// Savable
void VTop_Top::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0xaedef544cbaf1e28ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<clk;
    os<<rst;
    os<<en;
    os<<OUT_halt;
}
void VTop_Top::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0xaedef544cbaf1e28ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>clk;
    os>>rst;
    os>>en;
    os>>OUT_halt;
}
