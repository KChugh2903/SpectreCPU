// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_ReturnStack.h"
#include "VTop__Syms.h"

void VTop_ReturnStack___ctor_var_reset(VTop_ReturnStack* vlSelf);

VTop_ReturnStack::VTop_ReturnStack(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_ReturnStack___ctor_var_reset(this);
}

void VTop_ReturnStack::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop_ReturnStack::~VTop_ReturnStack() {
}

// Savable
void VTop_ReturnStack::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x2b06d2ba167dbb26ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<__PVT__forwardRindex;
    os<<__PVT__rindexReg;
    os<<__PVT__lastInvalComFetchID;
    os<<__Vdly__lastInvalComFetchID;
    os<<__PVT__lastValid;
    os<<__PVT__rindex;
    os<<__PVT__OUT_predBr;
    os<<__PVT__OUT_curRetAddr;
    os<<__Vdly__qindex_r;
    os<<__Vdly__qindexEnd_r;
    os<<__Vdly__recoveryInProgress;
    os<<__Vdly__lastValid;
    os<<__Vdly__postRecSave;
    os<<__PVT__unnamedblk4__DOT__doPostRecSave;
    os<<__PVT__unnamedblk4__DOT__startRecovery;
    os<<__PVT__qindex;
    os<<__PVT__qindexEnd;
    os<<__PVT__recoveryID;
    os<<__PVT__recoveryBase;
    os<<__PVT__recoveryOffs;
    os<<__PVT__recoveryOverwOwn;
    os<<__PVT__queueFull;
    os<<__PVT__recoveryContinue_c;
    os<<__VdlySet__rstack__v0;
    os<<__VdlySet__rstack__v1;
    os<<__VdlyDim0__rstack__v32;
    os<<__VdlySet__rstack__v32;
    os<<__VdlyDim0__rrqueue__v0;
    os<<__VdlyVal__rrqueue__v1;
    os<<__VdlyDim0__rrqueue__v1;
    os<<__VdlySet__rrqueue__v1;
    os<<__VdlyVal__rrqueue__v2;
    os<<__VdlyDim0__rrqueue__v2;
    os<<__VdlyVal__rrqueue__v3;
    os<<__VdlyDim0__rrqueue__v3;
    os<<__VdlyDim0__rrqueue__v4;
    os<<__VdlyDim0__rstack__v33;
    os<<__VdlyVal__rrqueue__v5;
    os<<__VdlyDim0__rrqueue__v5;
    os<<__VdlySet__rrqueue__v5;
    os<<__VdlyVal__rrqueue__v6;
    os<<__VdlyDim0__rrqueue__v6;
    os<<__VdlyVal__rrqueue__v7;
    os<<__VdlyDim0__rrqueue__v7;
    os<<__VdlyDim0__rrqueue__v8;
    os<<__VdlyDim0__rstack__v34;
    os<<__VdlySet__rstack__v34;
    os<<__VdlyDim0__rrqueue__v9;
    os<<__VdlySet__rrqueue__v9;
    os<<__VdlyVal__rstack__v32;
    os<<__VdlyVal__rrqueue__v4;
    os<<__VdlyVal__rstack__v33;
    os<<__VdlyVal__rrqueue__v8;
    os<<__VdlyVal__rstack__v34;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os<<__PVT__rrqueue[__Vi0];
    }
    os<<__PVT__OUT_curIdx;
    os<<__PVT__qindex_r;
    os<<__PVT__qindexEnd_r;
    os<<__PVT__recoveryInProgress;
    os<<__PVT__queueEmpty;
    os<<__PVT__postRecSave;
    os<<__PVT__addrToPush;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        os<<rstack[__Vi0];
    }
    os<<__PVT__clk;
    os<<__PVT__rst;
    os<<__PVT__OUT_stall;
    os<<__PVT__IN_valid;
    os<<__PVT__IN_fetchID;
    os<<__PVT__IN_comFetchID;
    os<<__PVT__IN_recoveryIdx;
    os<<__PVT__IN_lastPC;
    os<<__PVT__OUT_lateRetAddr;
    os<<__PVT__IN_branch;
    os<<__PVT__IN_mispr;
    os<<__PVT__IN_returnUpd;
}
void VTop_ReturnStack::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x2b06d2ba167dbb26ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>__PVT__forwardRindex;
    os>>__PVT__rindexReg;
    os>>__PVT__lastInvalComFetchID;
    os>>__Vdly__lastInvalComFetchID;
    os>>__PVT__lastValid;
    os>>__PVT__rindex;
    os>>__PVT__OUT_predBr;
    os>>__PVT__OUT_curRetAddr;
    os>>__Vdly__qindex_r;
    os>>__Vdly__qindexEnd_r;
    os>>__Vdly__recoveryInProgress;
    os>>__Vdly__lastValid;
    os>>__Vdly__postRecSave;
    os>>__PVT__unnamedblk4__DOT__doPostRecSave;
    os>>__PVT__unnamedblk4__DOT__startRecovery;
    os>>__PVT__qindex;
    os>>__PVT__qindexEnd;
    os>>__PVT__recoveryID;
    os>>__PVT__recoveryBase;
    os>>__PVT__recoveryOffs;
    os>>__PVT__recoveryOverwOwn;
    os>>__PVT__queueFull;
    os>>__PVT__recoveryContinue_c;
    os>>__VdlySet__rstack__v0;
    os>>__VdlySet__rstack__v1;
    os>>__VdlyDim0__rstack__v32;
    os>>__VdlySet__rstack__v32;
    os>>__VdlyDim0__rrqueue__v0;
    os>>__VdlyVal__rrqueue__v1;
    os>>__VdlyDim0__rrqueue__v1;
    os>>__VdlySet__rrqueue__v1;
    os>>__VdlyVal__rrqueue__v2;
    os>>__VdlyDim0__rrqueue__v2;
    os>>__VdlyVal__rrqueue__v3;
    os>>__VdlyDim0__rrqueue__v3;
    os>>__VdlyDim0__rrqueue__v4;
    os>>__VdlyDim0__rstack__v33;
    os>>__VdlyVal__rrqueue__v5;
    os>>__VdlyDim0__rrqueue__v5;
    os>>__VdlySet__rrqueue__v5;
    os>>__VdlyVal__rrqueue__v6;
    os>>__VdlyDim0__rrqueue__v6;
    os>>__VdlyVal__rrqueue__v7;
    os>>__VdlyDim0__rrqueue__v7;
    os>>__VdlyDim0__rrqueue__v8;
    os>>__VdlyDim0__rstack__v34;
    os>>__VdlySet__rstack__v34;
    os>>__VdlyDim0__rrqueue__v9;
    os>>__VdlySet__rrqueue__v9;
    os>>__VdlyVal__rstack__v32;
    os>>__VdlyVal__rrqueue__v4;
    os>>__VdlyVal__rstack__v33;
    os>>__VdlyVal__rrqueue__v8;
    os>>__VdlyVal__rstack__v34;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os>>__PVT__rrqueue[__Vi0];
    }
    os>>__PVT__OUT_curIdx;
    os>>__PVT__qindex_r;
    os>>__PVT__qindexEnd_r;
    os>>__PVT__recoveryInProgress;
    os>>__PVT__queueEmpty;
    os>>__PVT__postRecSave;
    os>>__PVT__addrToPush;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        os>>rstack[__Vi0];
    }
    os>>__PVT__clk;
    os>>__PVT__rst;
    os>>__PVT__OUT_stall;
    os>>__PVT__IN_valid;
    os>>__PVT__IN_fetchID;
    os>>__PVT__IN_comFetchID;
    os>>__PVT__IN_recoveryIdx;
    os>>__PVT__IN_lastPC;
    os>>__PVT__OUT_lateRetAddr;
    os>>__PVT__IN_branch;
    os>>__PVT__IN_mispr;
    os>>__PVT__IN_returnUpd;
}
