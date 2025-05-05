// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IF_ICache.h"
#include "VTop__Syms.h"

void VTop_IF_ICache___ctor_var_reset(VTop_IF_ICache* vlSelf);

VTop_IF_ICache::VTop_IF_ICache(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_IF_ICache___ctor_var_reset(this);
}

void VTop_IF_ICache::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop_IF_ICache::~VTop_IF_ICache() {
}

// Savable
void VTop_IF_ICache::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x5b7548ca5860f14fULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<__PVT__re;
    os<<__PVT__raddr;
}
void VTop_IF_ICache::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x5b7548ca5860f14fULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>__PVT__re;
    os>>__PVT__raddr;
}
