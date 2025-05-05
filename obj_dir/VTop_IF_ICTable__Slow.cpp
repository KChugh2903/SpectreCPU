// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IF_ICTable.h"
#include "VTop__Syms.h"

void VTop_IF_ICTable___ctor_var_reset(VTop_IF_ICTable* vlSelf);

VTop_IF_ICTable::VTop_IF_ICTable(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_IF_ICTable___ctor_var_reset(this);
}

void VTop_IF_ICTable::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop_IF_ICTable::~VTop_IF_ICTable() {
}

// Savable
void VTop_IF_ICTable::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x52788d543c1de767ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<__PVT__we;
    os<<__PVT__wassoc;
    os<<__PVT__waddr;
    os<<__PVT__wdata;
    os<<__PVT__re;
    os<<__PVT__raddr;
}
void VTop_IF_ICTable::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x52788d543c1de767ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>__PVT__we;
    os>>__PVT__wassoc;
    os>>__PVT__waddr;
    os>>__PVT__wdata;
    os>>__PVT__re;
    os>>__PVT__raddr;
}
