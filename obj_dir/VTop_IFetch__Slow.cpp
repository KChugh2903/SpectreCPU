// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IFetch.h"
#include "VTop__Syms.h"

void VTop_IFetch___ctor_var_reset(VTop_IFetch* vlSelf);

VTop_IFetch::VTop_IFetch(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_IFetch___ctor_var_reset(this);
}

void VTop_IFetch::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop_IFetch::~VTop_IFetch() {
}

// Savable
void VTop_IFetch::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0xad35d9b675d04aabULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<__Vcellinp__ifp__IN_mispr;
    os<<waitForInterrupt;
    os<<ifetchEn;
    os<<__PVT__BP_mispr;
    os<<__Vdly__waitForInterrupt;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__ifetchOp[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os<<__PVT__IN_btUpdates[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os<<__Vcellinp__bp__IN_btUpdates[__Vi0][__Vi1];
        }
    }
    os<<__PVT__unnamedblk1__DOT__wfiDone;
    os<<__PVT__unnamedblk1__DOT__wfiCount_next;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__OUT_pcReadData[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            os<<__PVT__OUT_instrs[__Vi0][__Vi1];
        }
    }
    os<<__PVT__sharedReq;
    os<<__PVT__issuedInterrupt;
    os<<__PVT__resetWait;
    os<<__PVT__wfiCount;
    os<<__Vdly__wfiCount;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__IN_pcRead[__Vi0];
    }
    os<<predBr;
    os<<BPF_writeAddr;
    os<<PCF_writeAddr;
    os<<__PVT__clk;
    os<<__PVT__rst;
    os<<__PVT__IN_en;
    os<<__PVT__IN_interruptPending;
    os<<__PVT__IN_MEM_busy;
    os<<__PVT__IN_ROB_curFetchID;
    os<<__PVT__IN_clearICache;
    os<<__PVT__IN_flushTLB;
    os<<__PVT__IN_pcReadTH;
    os<<__PVT__IN_ready;
    os<<__PVT__IN_decBranch;
    os<<__PVT__IN_bpUpdate;
    os<<__PVT__IN_vmem;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<__PVT__IN_branch[__Vi0];
    }
    os<<__PVT__OUT_pcReadDataTH;
    os<<__PVT__OUT_pw;
    os<<__PVT__IN_pw;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os<<__PVT__OUT_memc[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        os<<__PVT__IN_memc[__Vi0];
    }
}
void VTop_IFetch::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0xad35d9b675d04aabULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>__Vcellinp__ifp__IN_mispr;
    os>>waitForInterrupt;
    os>>ifetchEn;
    os>>__PVT__BP_mispr;
    os>>__Vdly__waitForInterrupt;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__ifetchOp[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os>>__PVT__IN_btUpdates[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os>>__Vcellinp__bp__IN_btUpdates[__Vi0][__Vi1];
        }
    }
    os>>__PVT__unnamedblk1__DOT__wfiDone;
    os>>__PVT__unnamedblk1__DOT__wfiCount_next;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__OUT_pcReadData[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            os>>__PVT__OUT_instrs[__Vi0][__Vi1];
        }
    }
    os>>__PVT__sharedReq;
    os>>__PVT__issuedInterrupt;
    os>>__PVT__resetWait;
    os>>__PVT__wfiCount;
    os>>__Vdly__wfiCount;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__IN_pcRead[__Vi0];
    }
    os>>predBr;
    os>>BPF_writeAddr;
    os>>PCF_writeAddr;
    os>>__PVT__clk;
    os>>__PVT__rst;
    os>>__PVT__IN_en;
    os>>__PVT__IN_interruptPending;
    os>>__PVT__IN_MEM_busy;
    os>>__PVT__IN_ROB_curFetchID;
    os>>__PVT__IN_clearICache;
    os>>__PVT__IN_flushTLB;
    os>>__PVT__IN_pcReadTH;
    os>>__PVT__IN_ready;
    os>>__PVT__IN_decBranch;
    os>>__PVT__IN_bpUpdate;
    os>>__PVT__IN_vmem;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>__PVT__IN_branch[__Vi0];
    }
    os>>__PVT__OUT_pcReadDataTH;
    os>>__PVT__OUT_pw;
    os>>__PVT__IN_pw;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os>>__PVT__OUT_memc[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        os>>__PVT__IN_memc[__Vi0];
    }
}
