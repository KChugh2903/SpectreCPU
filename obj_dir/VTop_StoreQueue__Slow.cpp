// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_StoreQueue.h"
#include "VTop__Syms.h"

void VTop_StoreQueue___ctor_var_reset(VTop_StoreQueue* vlSelf);

VTop_StoreQueue::VTop_StoreQueue(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_StoreQueue___ctor_var_reset(this);
}

void VTop_StoreQueue::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop_StoreQueue::~VTop_StoreQueue() {
}

// Savable
void VTop_StoreQueue::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x5ab6332504cdae80ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<__PVT__OUT_maxStoreSqN;
    os<<__PVT__deqCountUnary;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os<<__PVT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0];
    }
    os<<__PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<__PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0];
    }
    os<<__PVT__unhandled;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__IN_stall[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0];
    }
    os<<__PVT__OUT_empty;
    os<<__Vdly__OUT_empty;
    os<<__PVT__invalRange_c;
    os<<__PVT__unnamedblk28__DOT__modified;
    os<<__PVT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__idx;
    os<<__PVT__unnamedblk28__DOT__unnamedblk31__DOT__unnamedblk32__DOT__addr;
    os<<__PVT__unnamedblk28__DOT__unnamedblk33__DOT__unnamedblk34__DOT__idx;
    os<<__PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index;
    os<<__PVT__empty;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os<<__PVT__IN_uopSt[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__deqAddrsSorted[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__deqAddrs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os<<__PVT__deqPorts[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os<<__PVT__deqEntries[__Vi0][__Vi1];
        }
    }
    os<<entryReady_r;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os<<entries[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os<<__PVT__OUT_uop[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            os<<__PVT__IN_uopLd[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__lookupMask[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__lookupData[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__lookupConflict[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__forwardRange_c[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__lookupAddr[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__readMask[__Vi0];
    }
    os<<__PVT__flushing;
    os<<__Vdly__flushing;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__OUT_fwd[__Vi0];
    }
    os<<__VdlySet__OUT_fwd__v0;
    os<<__VdlySet__OUT_fwd__v4;
    os<<__VdlyVal__OUT_fwd__v6;
    os<<__VdlyVal__OUT_fwd__v7;
    os<<__VdlySet__OUT_fwd__v8;
    os<<__VdlyVal__OUT_fwd__v10;
    os<<__VdlyVal__OUT_fwd__v11;
    os<<__VdlyVal__OUT_fwd__v5;
    os<<__VdlyVal__OUT_fwd__v9;
    os<<__PVT__entryReady_c;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__IN_stDataUOp[__Vi0];
    }
    os<<__PVT__entryWasDeqd;
    os<<__PVT__nextBaseIndex;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__srcIdx[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os<<__PVT__outDeqView[__Vi0][__Vi1];
        }
    }
    os<<baseIndex;
    os<<__PVT__clk;
    os<<__PVT__rst;
    os<<__PVT__OUT_done;
    os<<__PVT__IN_curSqN;
    os<<__PVT__IN_comStSqN;
    os<<__PVT__OUT_flush;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<__PVT__IN_branch[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            os<<__PVT__IN_rnUOp[__Vi0][__Vi1];
        }
    }
}
void VTop_StoreQueue::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x5ab6332504cdae80ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>__PVT__OUT_maxStoreSqN;
    os>>__PVT__deqCountUnary;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os>>__PVT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0];
    }
    os>>__PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>__PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0];
    }
    os>>__PVT__unhandled;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__IN_stall[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0];
    }
    os>>__PVT__OUT_empty;
    os>>__Vdly__OUT_empty;
    os>>__PVT__invalRange_c;
    os>>__PVT__unnamedblk28__DOT__modified;
    os>>__PVT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__idx;
    os>>__PVT__unnamedblk28__DOT__unnamedblk31__DOT__unnamedblk32__DOT__addr;
    os>>__PVT__unnamedblk28__DOT__unnamedblk33__DOT__unnamedblk34__DOT__idx;
    os>>__PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index;
    os>>__PVT__empty;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os>>__PVT__IN_uopSt[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__deqAddrsSorted[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__deqAddrs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os>>__PVT__deqPorts[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os>>__PVT__deqEntries[__Vi0][__Vi1];
        }
    }
    os>>entryReady_r;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os>>entries[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os>>__PVT__OUT_uop[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            os>>__PVT__IN_uopLd[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__lookupMask[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__lookupData[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__lookupConflict[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__forwardRange_c[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__lookupAddr[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__readMask[__Vi0];
    }
    os>>__PVT__flushing;
    os>>__Vdly__flushing;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__OUT_fwd[__Vi0];
    }
    os>>__VdlySet__OUT_fwd__v0;
    os>>__VdlySet__OUT_fwd__v4;
    os>>__VdlyVal__OUT_fwd__v6;
    os>>__VdlyVal__OUT_fwd__v7;
    os>>__VdlySet__OUT_fwd__v8;
    os>>__VdlyVal__OUT_fwd__v10;
    os>>__VdlyVal__OUT_fwd__v11;
    os>>__VdlyVal__OUT_fwd__v5;
    os>>__VdlyVal__OUT_fwd__v9;
    os>>__PVT__entryReady_c;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__IN_stDataUOp[__Vi0];
    }
    os>>__PVT__entryWasDeqd;
    os>>__PVT__nextBaseIndex;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__srcIdx[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os>>__PVT__outDeqView[__Vi0][__Vi1];
        }
    }
    os>>baseIndex;
    os>>__PVT__clk;
    os>>__PVT__rst;
    os>>__PVT__OUT_done;
    os>>__PVT__IN_curSqN;
    os>>__PVT__IN_comStSqN;
    os>>__PVT__OUT_flush;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>__PVT__IN_branch[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            os>>__PVT__IN_rnUOp[__Vi0][__Vi1];
        }
    }
}
