// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_RenameTable__ND5.h"
#include "VTop__Syms.h"

void VTop_RenameTable__ND5___ctor_var_reset(VTop_RenameTable__ND5* vlSelf);

VTop_RenameTable__ND5::VTop_RenameTable__ND5(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_RenameTable__ND5___ctor_var_reset(this);
}

void VTop_RenameTable__ND5::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop_RenameTable__ND5::~VTop_RenameTable__ND5() {
}

// Savable
void VTop_RenameTable__ND5::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x22437d9999aefbfaULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__IN_issueValid[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__IN_issueTags[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__IN_issueAvail[__Vi0];
    }
    os<<tagAvail;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os<<__PVT__IN_wbValid[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os<<__PVT__IN_wbTag[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os<<__PVT__OUT_lookupAvail[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os<<__PVT__OUT_lookupSpecTag[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os<<__PVT__IN_lookupIDs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        os<<specTag[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__IN_issueIDs[__Vi0];
    }
    os<<__VdlySet__comTag__v0;
    os<<__VdlySet__comTag__v1;
    os<<__VdlyVal__specTag__v32;
    os<<__VdlySet__specTag__v32;
    os<<__VdlyVal__specTag__v33;
    os<<__VdlyVal__specTag__v34;
    os<<__VdlyVal__specTag__v35;
    os<<__VdlyVal__specTag__v36;
    os<<__VdlyVal__specTag__v37;
    os<<__VdlyVal__specTag__v38;
    os<<__VdlyVal__specTag__v39;
    os<<__VdlyVal__specTag__v40;
    os<<__VdlyVal__specTag__v41;
    os<<__VdlyVal__specTag__v42;
    os<<__VdlyVal__specTag__v43;
    os<<__VdlyVal__specTag__v44;
    os<<__VdlyVal__specTag__v45;
    os<<__VdlyVal__specTag__v46;
    os<<__VdlyVal__specTag__v47;
    os<<__VdlyVal__specTag__v48;
    os<<__VdlyVal__specTag__v49;
    os<<__VdlyVal__specTag__v50;
    os<<__VdlyVal__specTag__v51;
    os<<__VdlyVal__specTag__v52;
    os<<__VdlyVal__specTag__v53;
    os<<__VdlyVal__specTag__v54;
    os<<__VdlyVal__specTag__v55;
    os<<__VdlyVal__specTag__v56;
    os<<__VdlyVal__specTag__v57;
    os<<__VdlyVal__specTag__v58;
    os<<__VdlyVal__specTag__v59;
    os<<__VdlyVal__specTag__v60;
    os<<__VdlyVal__specTag__v61;
    os<<__VdlyVal__specTag__v62;
    os<<__VdlyVal__specTag__v63;
    os<<__VdlyDim0__specTag__v63;
    os<<__VdlySet__specTag__v63;
    os<<__VdlyVal__specTag__v64;
    os<<__VdlyDim0__specTag__v64;
    os<<__VdlySet__specTag__v64;
    os<<__VdlyVal__specTag__v65;
    os<<__VdlyDim0__specTag__v65;
    os<<__VdlySet__specTag__v65;
    os<<__VdlyVal__specTag__v66;
    os<<__VdlyDim0__specTag__v66;
    os<<__VdlySet__specTag__v66;
    os<<__VdlyVal__specTag__v67;
    os<<__VdlyDim0__specTag__v67;
    os<<__VdlySet__specTag__v67;
    os<<__VdlyVal__comTag__v32;
    os<<__VdlyDim0__comTag__v32;
    os<<__VdlySet__comTag__v32;
    os<<__VdlyVal__specTag__v68;
    os<<__VdlyDim0__specTag__v68;
    os<<__VdlySet__specTag__v68;
    os<<__VdlyVal__specTag__v69;
    os<<__VdlyDim0__specTag__v69;
    os<<__VdlySet__specTag__v69;
    os<<__VdlyVal__comTag__v33;
    os<<__VdlyDim0__comTag__v33;
    os<<__VdlySet__comTag__v33;
    os<<__VdlyVal__specTag__v70;
    os<<__VdlyDim0__specTag__v70;
    os<<__VdlySet__specTag__v70;
    os<<__VdlyVal__specTag__v71;
    os<<__VdlyDim0__specTag__v71;
    os<<__VdlySet__specTag__v71;
    os<<__VdlyVal__comTag__v34;
    os<<__VdlyDim0__comTag__v34;
    os<<__VdlySet__comTag__v34;
    os<<__VdlyVal__specTag__v72;
    os<<__VdlyDim0__specTag__v72;
    os<<__VdlySet__specTag__v72;
    os<<__VdlyVal__specTag__v73;
    os<<__VdlyDim0__specTag__v73;
    os<<__VdlySet__specTag__v73;
    os<<__VdlyVal__comTag__v35;
    os<<__VdlyDim0__comTag__v35;
    os<<__VdlySet__comTag__v35;
    os<<__VdlyVal__specTag__v74;
    os<<__VdlyDim0__specTag__v74;
    os<<__VdlySet__specTag__v74;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        os<<comTag[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__IN_commitValid[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__IN_commitIDs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__IN_commitTags[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__OUT_commitPrevTags[__Vi0];
    }
    os<<__PVT__clk;
    os<<__PVT__rst;
    os<<__PVT__IN_mispred;
    os<<__PVT__IN_mispredFlush;
}
void VTop_RenameTable__ND5::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x22437d9999aefbfaULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__IN_issueValid[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__IN_issueTags[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__IN_issueAvail[__Vi0];
    }
    os>>tagAvail;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os>>__PVT__IN_wbValid[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os>>__PVT__IN_wbTag[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os>>__PVT__OUT_lookupAvail[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os>>__PVT__OUT_lookupSpecTag[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os>>__PVT__IN_lookupIDs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        os>>specTag[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__IN_issueIDs[__Vi0];
    }
    os>>__VdlySet__comTag__v0;
    os>>__VdlySet__comTag__v1;
    os>>__VdlyVal__specTag__v32;
    os>>__VdlySet__specTag__v32;
    os>>__VdlyVal__specTag__v33;
    os>>__VdlyVal__specTag__v34;
    os>>__VdlyVal__specTag__v35;
    os>>__VdlyVal__specTag__v36;
    os>>__VdlyVal__specTag__v37;
    os>>__VdlyVal__specTag__v38;
    os>>__VdlyVal__specTag__v39;
    os>>__VdlyVal__specTag__v40;
    os>>__VdlyVal__specTag__v41;
    os>>__VdlyVal__specTag__v42;
    os>>__VdlyVal__specTag__v43;
    os>>__VdlyVal__specTag__v44;
    os>>__VdlyVal__specTag__v45;
    os>>__VdlyVal__specTag__v46;
    os>>__VdlyVal__specTag__v47;
    os>>__VdlyVal__specTag__v48;
    os>>__VdlyVal__specTag__v49;
    os>>__VdlyVal__specTag__v50;
    os>>__VdlyVal__specTag__v51;
    os>>__VdlyVal__specTag__v52;
    os>>__VdlyVal__specTag__v53;
    os>>__VdlyVal__specTag__v54;
    os>>__VdlyVal__specTag__v55;
    os>>__VdlyVal__specTag__v56;
    os>>__VdlyVal__specTag__v57;
    os>>__VdlyVal__specTag__v58;
    os>>__VdlyVal__specTag__v59;
    os>>__VdlyVal__specTag__v60;
    os>>__VdlyVal__specTag__v61;
    os>>__VdlyVal__specTag__v62;
    os>>__VdlyVal__specTag__v63;
    os>>__VdlyDim0__specTag__v63;
    os>>__VdlySet__specTag__v63;
    os>>__VdlyVal__specTag__v64;
    os>>__VdlyDim0__specTag__v64;
    os>>__VdlySet__specTag__v64;
    os>>__VdlyVal__specTag__v65;
    os>>__VdlyDim0__specTag__v65;
    os>>__VdlySet__specTag__v65;
    os>>__VdlyVal__specTag__v66;
    os>>__VdlyDim0__specTag__v66;
    os>>__VdlySet__specTag__v66;
    os>>__VdlyVal__specTag__v67;
    os>>__VdlyDim0__specTag__v67;
    os>>__VdlySet__specTag__v67;
    os>>__VdlyVal__comTag__v32;
    os>>__VdlyDim0__comTag__v32;
    os>>__VdlySet__comTag__v32;
    os>>__VdlyVal__specTag__v68;
    os>>__VdlyDim0__specTag__v68;
    os>>__VdlySet__specTag__v68;
    os>>__VdlyVal__specTag__v69;
    os>>__VdlyDim0__specTag__v69;
    os>>__VdlySet__specTag__v69;
    os>>__VdlyVal__comTag__v33;
    os>>__VdlyDim0__comTag__v33;
    os>>__VdlySet__comTag__v33;
    os>>__VdlyVal__specTag__v70;
    os>>__VdlyDim0__specTag__v70;
    os>>__VdlySet__specTag__v70;
    os>>__VdlyVal__specTag__v71;
    os>>__VdlyDim0__specTag__v71;
    os>>__VdlySet__specTag__v71;
    os>>__VdlyVal__comTag__v34;
    os>>__VdlyDim0__comTag__v34;
    os>>__VdlySet__comTag__v34;
    os>>__VdlyVal__specTag__v72;
    os>>__VdlyDim0__specTag__v72;
    os>>__VdlySet__specTag__v72;
    os>>__VdlyVal__specTag__v73;
    os>>__VdlyDim0__specTag__v73;
    os>>__VdlySet__specTag__v73;
    os>>__VdlyVal__comTag__v35;
    os>>__VdlyDim0__comTag__v35;
    os>>__VdlySet__comTag__v35;
    os>>__VdlyVal__specTag__v74;
    os>>__VdlyDim0__specTag__v74;
    os>>__VdlySet__specTag__v74;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        os>>comTag[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__IN_commitValid[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__IN_commitIDs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__IN_commitTags[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__OUT_commitPrevTags[__Vi0];
    }
    os>>__PVT__clk;
    os>>__PVT__rst;
    os>>__PVT__IN_mispred;
    os>>__PVT__IN_mispredFlush;
}
