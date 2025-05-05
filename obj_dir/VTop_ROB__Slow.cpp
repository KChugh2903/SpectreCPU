// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_ROB.h"
#include "VTop__Syms.h"

void VTop_ROB___ctor_var_reset(VTop_ROB* vlSelf);

VTop_ROB::VTop_ROB(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_ROB___ctor_var_reset(this);
}

void VTop_ROB::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop_ROB::~VTop_ROB() {
}

// Savable
void VTop_ROB::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x33752f834114ad97ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<__PVT__OUT_lastLoadSqN;
    os<<__Vdly__OUT_lastLoadSqN;
    os<<__PVT__storeSqN_r;
    os<<__PVT__loadSqN_r;
    os<<__VdlyVal__flags__v0;
    os<<__VdlyDim0__flags__v0;
    os<<__VdlyDim0__gen__BRA__0__KET____DOT__entries__v0;
    os<<__VdlyVal__flags__v1;
    os<<__VdlyDim0__flags__v1;
    os<<__VdlyDim0__gen__BRA__1__KET____DOT__entries__v0;
    os<<__VdlyVal__flags__v2;
    os<<__VdlyDim0__flags__v2;
    os<<__VdlyDim0__gen__BRA__2__KET____DOT__entries__v1;
    os<<__VdlyDim0__gen__BRA__3__KET____DOT__entries__v1;
    os<<__VdlyVal__flags__v3;
    os<<__VdlyDim0__flags__v3;
    os<<__VdlyDim0__gen__BRA__2__KET____DOT__entries__v2;
    os<<__VdlyDim0__gen__BRA__3__KET____DOT__entries__v2;
    os<<__VdlyVal__flags__v4;
    os<<__VdlyDim0__flags__v4;
    os<<__VdlyVal__flags__v5;
    os<<__VdlyDim0__flags__v5;
    os<<__VdlyVal__flags__v6;
    os<<__VdlyDim0__flags__v6;
    os<<__VdlyVal__flags__v7;
    os<<__VdlyDim0__flags__v7;
    os<<__VdlyVal__flags__v8;
    os<<__VdlyDim0__flags__v8;
    os<<__VdlyVal__flags__v9;
    os<<__VdlyDim0__flags__v9;
    os<<__VdlyVal__flags__v10;
    os<<__VdlyDim0__flags__v10;
    os<<__PVT__OUT_perfcInfo;
    os<<__VdlyVal__gen__BRA__0__KET____DOT__entries__v0;
    os<<__VdlyVal__gen__BRA__1__KET____DOT__entries__v0;
    os<<__VdlyVal__gen__BRA__2__KET____DOT__entries__v1;
    os<<__VdlyVal__gen__BRA__3__KET____DOT__entries__v1;
    os<<__VdlyVal__gen__BRA__2__KET____DOT__entries__v2;
    os<<__VdlyVal__gen__BRA__3__KET____DOT__entries__v2;
    os<<__PVT__OUT_trapUOp;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__IN_stComLimit[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__deqEntries[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__deqFlags[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__deqPorts[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os<<__PVT__storeSqNs_c[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os<<__PVT__loadSqNs_c[__Vi0];
    }
    os<<__PVT__misprReplayEnd;
    os<<__PVT__misprReplay_r;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        os<<__PVT__flags[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__deqAddrs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__deqAddrsSorted[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__deqFlagPorts[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        os<<__PVT__gen__BRA__0__KET____DOT__entries[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        os<<__PVT__gen__BRA__1__KET____DOT__entries[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        os<<__PVT__gen__BRA__2__KET____DOT__entries[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        os<<__PVT__gen__BRA__3__KET____DOT__entries[__Vi0];
    }
    os<<__Vdly__hangDetected;
    os<<__VdlySet__gen__BRA__2__KET____DOT__entries__v0;
    os<<__VdlySet__gen__BRA__3__KET____DOT__entries__v0;
    os<<__VdlySet__gen__BRA__1__KET____DOT__entries__v1;
    os<<__VdlySet__gen__BRA__1__KET____DOT__entries__v2;
    os<<__PVT__hangCounter;
    os<<__Vdly__hangCounter;
    os<<__PVT__misprReplayFwdMask;
    os<<__PVT__misprReplay_c;
    os<<__PVT__OUT_mispredFlush;
    os<<IN_interruptPending;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__OUT_comUOp[__Vi0];
    }
    os<<__VdlyVal__OUT_comUOp__v10;
    os<<__VdlyVal__OUT_comUOp__v11;
    os<<__VdlyVal__OUT_comUOp__v15;
    os<<__VdlyVal__OUT_comUOp__v16;
    os<<__VdlyVal__OUT_comUOp__v20;
    os<<__VdlyVal__OUT_comUOp__v21;
    os<<__VdlyVal__OUT_comUOp__v25;
    os<<__VdlyVal__OUT_comUOp__v26;
    os<<__VdlyVal__OUT_comUOp__v28;
    os<<__VdlyVal__OUT_comUOp__v29;
    os<<__VdlyVal__OUT_comUOp__v30;
    os<<__VdlyVal__OUT_comUOp__v31;
    os<<__VdlyVal__OUT_comUOp__v32;
    os<<__VdlyVal__OUT_comUOp__v36;
    os<<__VdlyVal__OUT_comUOp__v37;
    os<<__VdlyVal__OUT_comUOp__v38;
    os<<__VdlyVal__OUT_comUOp__v39;
    os<<__VdlyVal__OUT_comUOp__v40;
    os<<__VdlyVal__OUT_comUOp__v44;
    os<<__VdlyVal__OUT_comUOp__v45;
    os<<__VdlyVal__OUT_comUOp__v46;
    os<<__VdlyVal__OUT_comUOp__v47;
    os<<__VdlyVal__OUT_comUOp__v48;
    os<<__VdlyVal__OUT_comUOp__v52;
    os<<__VdlyVal__OUT_comUOp__v53;
    os<<__VdlyVal__OUT_comUOp__v54;
    os<<__VdlyVal__OUT_comUOp__v55;
    os<<__VdlyVal__OUT_comUOp__v56;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            os<<__PVT__IN_uop[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        os<<__PVT__IN_flagUOps[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            os<<__PVT__rnUOpSorted[__Vi0][__Vi1];
        }
    }
    os<<__PVT__OUT_lastStoreSqN;
    os<<__VdlySet__OUT_comUOp__v0;
    os<<__VdlySet__OUT_comUOp__v8;
    os<<__VdlySet__OUT_comUOp__v13;
    os<<__VdlySet__OUT_comUOp__v18;
    os<<__VdlySet__OUT_comUOp__v23;
    os<<__VdlySet__OUT_comUOp__v28;
    os<<__VdlySet__OUT_comUOp__v34;
    os<<__VdlySet__OUT_comUOp__v36;
    os<<__VdlySet__OUT_comUOp__v42;
    os<<__VdlySet__OUT_comUOp__v44;
    os<<__VdlySet__OUT_comUOp__v50;
    os<<__VdlySet__OUT_comUOp__v52;
    os<<__VdlySet__OUT_comUOp__v58;
    os<<__PVT__unnamedblk14__DOT__temp;
    os<<__PVT__unnamedblk14__DOT__temp2;
    os<<__PVT__unnamedblk14__DOT__pred;
    os<<__PVT__unnamedblk14__DOT__cnt;
    os<<__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__id;
    os<<__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN;
    os<<__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN;
    os<<__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit;
    os<<__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isRenamed;
    os<<__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isExecuted;
    os<<__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__noFlagConflict;
    os<<__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__lbAllowsCommit;
    os<<__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit;
    os<<__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isBranch;
    os<<__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__minstretRetire;
    os<<__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isException;
    os<<__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sendTrapUOp;
    os<<__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sqN;
    os<<__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id;
    os<<__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id1;
    os<<__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id0;
    os<<__PVT__unnamedblk22__DOT__unnamedblk23__DOT__id;
    os<<__Vlvbound_h3cfa08f5__0;
    os<<__Vlvbound_hc62d1ce5__0;
    os<<__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry;
    os<<__PVT__didCommit;
    os<<__Vdly__baseIndex;
    os<<__PVT__baseIndex;
    os<<__PVT__OUT_curFetchID;
    os<<__PVT__lastIndex;
    os<<__PVT__stop;
    os<<__PVT__hangDetected;
    os<<__Vdly__stop;
    os<<__Vdly__lastIndex;
    os<<__VdlySet__flags__v0;
    os<<__VdlySet__gen__BRA__0__KET____DOT__entries__v0;
    os<<__VdlySet__flags__v1;
    os<<__VdlySet__gen__BRA__1__KET____DOT__entries__v0;
    os<<__VdlySet__flags__v2;
    os<<__VdlySet__gen__BRA__2__KET____DOT__entries__v1;
    os<<__VdlySet__gen__BRA__3__KET____DOT__entries__v1;
    os<<__VdlySet__flags__v3;
    os<<__VdlySet__gen__BRA__2__KET____DOT__entries__v2;
    os<<__VdlySet__gen__BRA__3__KET____DOT__entries__v2;
    os<<__VdlySet__flags__v4;
    os<<__VdlySet__flags__v5;
    os<<__VdlySet__flags__v6;
    os<<__VdlySet__flags__v7;
    os<<__VdlySet__flags__v8;
    os<<__VdlySet__flags__v9;
    os<<__VdlySet__flags__v10;
    os<<__PVT__OUT_bpUpdate;
    os<<__PVT__clk;
    os<<__PVT__rst;
    os<<__PVT__IN_ldComLimit;
    os<<__PVT__OUT_maxSqN;
    os<<__PVT__OUT_curSqN;
    os<<__PVT__OUT_fpNewFlags;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<__PVT__IN_branch[__Vi0];
    }
}
void VTop_ROB::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x33752f834114ad97ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>__PVT__OUT_lastLoadSqN;
    os>>__Vdly__OUT_lastLoadSqN;
    os>>__PVT__storeSqN_r;
    os>>__PVT__loadSqN_r;
    os>>__VdlyVal__flags__v0;
    os>>__VdlyDim0__flags__v0;
    os>>__VdlyDim0__gen__BRA__0__KET____DOT__entries__v0;
    os>>__VdlyVal__flags__v1;
    os>>__VdlyDim0__flags__v1;
    os>>__VdlyDim0__gen__BRA__1__KET____DOT__entries__v0;
    os>>__VdlyVal__flags__v2;
    os>>__VdlyDim0__flags__v2;
    os>>__VdlyDim0__gen__BRA__2__KET____DOT__entries__v1;
    os>>__VdlyDim0__gen__BRA__3__KET____DOT__entries__v1;
    os>>__VdlyVal__flags__v3;
    os>>__VdlyDim0__flags__v3;
    os>>__VdlyDim0__gen__BRA__2__KET____DOT__entries__v2;
    os>>__VdlyDim0__gen__BRA__3__KET____DOT__entries__v2;
    os>>__VdlyVal__flags__v4;
    os>>__VdlyDim0__flags__v4;
    os>>__VdlyVal__flags__v5;
    os>>__VdlyDim0__flags__v5;
    os>>__VdlyVal__flags__v6;
    os>>__VdlyDim0__flags__v6;
    os>>__VdlyVal__flags__v7;
    os>>__VdlyDim0__flags__v7;
    os>>__VdlyVal__flags__v8;
    os>>__VdlyDim0__flags__v8;
    os>>__VdlyVal__flags__v9;
    os>>__VdlyDim0__flags__v9;
    os>>__VdlyVal__flags__v10;
    os>>__VdlyDim0__flags__v10;
    os>>__PVT__OUT_perfcInfo;
    os>>__VdlyVal__gen__BRA__0__KET____DOT__entries__v0;
    os>>__VdlyVal__gen__BRA__1__KET____DOT__entries__v0;
    os>>__VdlyVal__gen__BRA__2__KET____DOT__entries__v1;
    os>>__VdlyVal__gen__BRA__3__KET____DOT__entries__v1;
    os>>__VdlyVal__gen__BRA__2__KET____DOT__entries__v2;
    os>>__VdlyVal__gen__BRA__3__KET____DOT__entries__v2;
    os>>__PVT__OUT_trapUOp;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__IN_stComLimit[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__deqEntries[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__deqFlags[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__deqPorts[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os>>__PVT__storeSqNs_c[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os>>__PVT__loadSqNs_c[__Vi0];
    }
    os>>__PVT__misprReplayEnd;
    os>>__PVT__misprReplay_r;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        os>>__PVT__flags[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__deqAddrs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__deqAddrsSorted[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__deqFlagPorts[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        os>>__PVT__gen__BRA__0__KET____DOT__entries[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        os>>__PVT__gen__BRA__1__KET____DOT__entries[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        os>>__PVT__gen__BRA__2__KET____DOT__entries[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        os>>__PVT__gen__BRA__3__KET____DOT__entries[__Vi0];
    }
    os>>__Vdly__hangDetected;
    os>>__VdlySet__gen__BRA__2__KET____DOT__entries__v0;
    os>>__VdlySet__gen__BRA__3__KET____DOT__entries__v0;
    os>>__VdlySet__gen__BRA__1__KET____DOT__entries__v1;
    os>>__VdlySet__gen__BRA__1__KET____DOT__entries__v2;
    os>>__PVT__hangCounter;
    os>>__Vdly__hangCounter;
    os>>__PVT__misprReplayFwdMask;
    os>>__PVT__misprReplay_c;
    os>>__PVT__OUT_mispredFlush;
    os>>IN_interruptPending;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__OUT_comUOp[__Vi0];
    }
    os>>__VdlyVal__OUT_comUOp__v10;
    os>>__VdlyVal__OUT_comUOp__v11;
    os>>__VdlyVal__OUT_comUOp__v15;
    os>>__VdlyVal__OUT_comUOp__v16;
    os>>__VdlyVal__OUT_comUOp__v20;
    os>>__VdlyVal__OUT_comUOp__v21;
    os>>__VdlyVal__OUT_comUOp__v25;
    os>>__VdlyVal__OUT_comUOp__v26;
    os>>__VdlyVal__OUT_comUOp__v28;
    os>>__VdlyVal__OUT_comUOp__v29;
    os>>__VdlyVal__OUT_comUOp__v30;
    os>>__VdlyVal__OUT_comUOp__v31;
    os>>__VdlyVal__OUT_comUOp__v32;
    os>>__VdlyVal__OUT_comUOp__v36;
    os>>__VdlyVal__OUT_comUOp__v37;
    os>>__VdlyVal__OUT_comUOp__v38;
    os>>__VdlyVal__OUT_comUOp__v39;
    os>>__VdlyVal__OUT_comUOp__v40;
    os>>__VdlyVal__OUT_comUOp__v44;
    os>>__VdlyVal__OUT_comUOp__v45;
    os>>__VdlyVal__OUT_comUOp__v46;
    os>>__VdlyVal__OUT_comUOp__v47;
    os>>__VdlyVal__OUT_comUOp__v48;
    os>>__VdlyVal__OUT_comUOp__v52;
    os>>__VdlyVal__OUT_comUOp__v53;
    os>>__VdlyVal__OUT_comUOp__v54;
    os>>__VdlyVal__OUT_comUOp__v55;
    os>>__VdlyVal__OUT_comUOp__v56;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            os>>__PVT__IN_uop[__Vi0][__Vi1];
        }
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        os>>__PVT__IN_flagUOps[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            os>>__PVT__rnUOpSorted[__Vi0][__Vi1];
        }
    }
    os>>__PVT__OUT_lastStoreSqN;
    os>>__VdlySet__OUT_comUOp__v0;
    os>>__VdlySet__OUT_comUOp__v8;
    os>>__VdlySet__OUT_comUOp__v13;
    os>>__VdlySet__OUT_comUOp__v18;
    os>>__VdlySet__OUT_comUOp__v23;
    os>>__VdlySet__OUT_comUOp__v28;
    os>>__VdlySet__OUT_comUOp__v34;
    os>>__VdlySet__OUT_comUOp__v36;
    os>>__VdlySet__OUT_comUOp__v42;
    os>>__VdlySet__OUT_comUOp__v44;
    os>>__VdlySet__OUT_comUOp__v50;
    os>>__VdlySet__OUT_comUOp__v52;
    os>>__VdlySet__OUT_comUOp__v58;
    os>>__PVT__unnamedblk14__DOT__temp;
    os>>__PVT__unnamedblk14__DOT__temp2;
    os>>__PVT__unnamedblk14__DOT__pred;
    os>>__PVT__unnamedblk14__DOT__cnt;
    os>>__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__id;
    os>>__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN;
    os>>__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN;
    os>>__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit;
    os>>__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isRenamed;
    os>>__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isExecuted;
    os>>__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__noFlagConflict;
    os>>__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__lbAllowsCommit;
    os>>__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit;
    os>>__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isBranch;
    os>>__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__minstretRetire;
    os>>__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isException;
    os>>__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sendTrapUOp;
    os>>__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sqN;
    os>>__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id;
    os>>__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id1;
    os>>__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id0;
    os>>__PVT__unnamedblk22__DOT__unnamedblk23__DOT__id;
    os>>__Vlvbound_h3cfa08f5__0;
    os>>__Vlvbound_hc62d1ce5__0;
    os>>__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry;
    os>>__PVT__didCommit;
    os>>__Vdly__baseIndex;
    os>>__PVT__baseIndex;
    os>>__PVT__OUT_curFetchID;
    os>>__PVT__lastIndex;
    os>>__PVT__stop;
    os>>__PVT__hangDetected;
    os>>__Vdly__stop;
    os>>__Vdly__lastIndex;
    os>>__VdlySet__flags__v0;
    os>>__VdlySet__gen__BRA__0__KET____DOT__entries__v0;
    os>>__VdlySet__flags__v1;
    os>>__VdlySet__gen__BRA__1__KET____DOT__entries__v0;
    os>>__VdlySet__flags__v2;
    os>>__VdlySet__gen__BRA__2__KET____DOT__entries__v1;
    os>>__VdlySet__gen__BRA__3__KET____DOT__entries__v1;
    os>>__VdlySet__flags__v3;
    os>>__VdlySet__gen__BRA__2__KET____DOT__entries__v2;
    os>>__VdlySet__gen__BRA__3__KET____DOT__entries__v2;
    os>>__VdlySet__flags__v4;
    os>>__VdlySet__flags__v5;
    os>>__VdlySet__flags__v6;
    os>>__VdlySet__flags__v7;
    os>>__VdlySet__flags__v8;
    os>>__VdlySet__flags__v9;
    os>>__VdlySet__flags__v10;
    os>>__PVT__OUT_bpUpdate;
    os>>__PVT__clk;
    os>>__PVT__rst;
    os>>__PVT__IN_ldComLimit;
    os>>__PVT__OUT_maxSqN;
    os>>__PVT__OUT_curSqN;
    os>>__PVT__OUT_fpNewFlags;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>__PVT__IN_branch[__Vi0];
    }
}
