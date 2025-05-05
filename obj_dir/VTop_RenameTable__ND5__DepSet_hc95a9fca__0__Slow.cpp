// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_RenameTable__ND5.h"

VL_ATTR_COLD void VTop_RenameTable__ND5___ctor_var_reset(VTop_RenameTable__ND5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_RenameTable__ND5___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_mispred = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_mispredFlush = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__IN_lookupIDs[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__OUT_lookupAvail[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__OUT_lookupSpecTag[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__IN_issueValid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__IN_issueIDs[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__IN_issueTags[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__IN_issueAvail[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__IN_commitValid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__IN_commitIDs[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__IN_commitTags[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__OUT_commitPrevTags[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__IN_wbValid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__IN_wbTag[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->comTag[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->specTag[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->tagAvail = VL_RAND_RESET_Q(64);
    vlSelf->__VdlySet__comTag__v0 = 0;
    vlSelf->__VdlySet__comTag__v1 = 0;
    vlSelf->__VdlyVal__specTag__v32 = VL_RAND_RESET_I(7);
    vlSelf->__VdlySet__specTag__v32 = 0;
    vlSelf->__VdlyVal__specTag__v33 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v34 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v35 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v36 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v37 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v38 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v39 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v40 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v41 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v42 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v43 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v44 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v45 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v46 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v47 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v48 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v49 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v50 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v51 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v52 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v53 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v54 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v55 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v56 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v57 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v58 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v59 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v60 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v61 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v62 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__specTag__v63 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__specTag__v63 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__specTag__v63 = 0;
    vlSelf->__VdlyVal__specTag__v64 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__specTag__v64 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__specTag__v64 = 0;
    vlSelf->__VdlyVal__specTag__v65 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__specTag__v65 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__specTag__v65 = 0;
    vlSelf->__VdlyVal__specTag__v66 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__specTag__v66 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__specTag__v66 = 0;
    vlSelf->__VdlyVal__specTag__v67 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__specTag__v67 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__specTag__v67 = 0;
    vlSelf->__VdlyVal__comTag__v32 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__comTag__v32 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__comTag__v32 = 0;
    vlSelf->__VdlyVal__specTag__v68 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__specTag__v68 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__specTag__v68 = 0;
    vlSelf->__VdlyVal__specTag__v69 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__specTag__v69 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__specTag__v69 = 0;
    vlSelf->__VdlyVal__comTag__v33 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__comTag__v33 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__comTag__v33 = 0;
    vlSelf->__VdlyVal__specTag__v70 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__specTag__v70 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__specTag__v70 = 0;
    vlSelf->__VdlyVal__specTag__v71 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__specTag__v71 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__specTag__v71 = 0;
    vlSelf->__VdlyVal__comTag__v34 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__comTag__v34 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__comTag__v34 = 0;
    vlSelf->__VdlyVal__specTag__v72 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__specTag__v72 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__specTag__v72 = 0;
    vlSelf->__VdlyVal__specTag__v73 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__specTag__v73 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__specTag__v73 = 0;
    vlSelf->__VdlyVal__comTag__v35 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__comTag__v35 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__comTag__v35 = 0;
    vlSelf->__VdlyVal__specTag__v74 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__specTag__v74 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__specTag__v74 = 0;
}
