// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_RenameTable__ND5.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_RenameTable__ND5___nba_sequent__TOP__Top__soc__core__rn__rt__0(VTop_RenameTable__ND5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_RenameTable__ND5___nba_sequent__TOP__Top__soc__core__rn__rt__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__specTag__v32 = 0U;
    vlSelfRef.__VdlySet__specTag__v63 = 0U;
    vlSelfRef.__VdlySet__specTag__v64 = 0U;
    vlSelfRef.__VdlySet__specTag__v65 = 0U;
    vlSelfRef.__VdlySet__specTag__v66 = 0U;
    vlSelfRef.__VdlySet__specTag__v67 = 0U;
    vlSelfRef.__VdlySet__specTag__v68 = 0U;
    vlSelfRef.__VdlySet__specTag__v69 = 0U;
    vlSelfRef.__VdlySet__specTag__v70 = 0U;
    vlSelfRef.__VdlySet__specTag__v71 = 0U;
    vlSelfRef.__VdlySet__specTag__v72 = 0U;
    vlSelfRef.__VdlySet__specTag__v73 = 0U;
    vlSelfRef.__VdlySet__specTag__v74 = 0U;
    vlSelfRef.__VdlySet__comTag__v0 = 0U;
    vlSelfRef.__VdlySet__comTag__v1 = 0U;
    vlSelfRef.__VdlySet__comTag__v32 = 0U;
    vlSelfRef.__VdlySet__comTag__v33 = 0U;
    vlSelfRef.__VdlySet__comTag__v34 = 0U;
    vlSelfRef.__VdlySet__comTag__v35 = 0U;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__VdlySet__comTag__v0 = 1U;
        vlSelfRef.tagAvail = 0xffffffffffffffffULL;
        vlSelfRef.__VdlySet__comTag__v1 = 1U;
    } else {
        if ((vlSelfRef.__PVT__IN_wbValid[0U] & (~ (
                                                   vlSelfRef.__PVT__IN_wbTag
                                                   [0U] 
                                                   >> 6U)))) {
            vlSelfRef.tagAvail = (vlSelfRef.tagAvail 
                                  | ((QData)((IData)(1U)) 
                                     << (0x3fU & vlSelfRef.__PVT__IN_wbTag
                                         [0U])));
        }
        if ((vlSelfRef.__PVT__IN_wbValid[1U] & (~ (
                                                   vlSelfRef.__PVT__IN_wbTag
                                                   [1U] 
                                                   >> 6U)))) {
            vlSelfRef.tagAvail = (vlSelfRef.tagAvail 
                                  | ((QData)((IData)(1U)) 
                                     << (0x3fU & vlSelfRef.__PVT__IN_wbTag
                                         [1U])));
        }
        if ((vlSelfRef.__PVT__IN_wbValid[2U] & (~ (
                                                   vlSelfRef.__PVT__IN_wbTag
                                                   [2U] 
                                                   >> 6U)))) {
            vlSelfRef.tagAvail = (vlSelfRef.tagAvail 
                                  | ((QData)((IData)(1U)) 
                                     << (0x3fU & vlSelfRef.__PVT__IN_wbTag
                                         [2U])));
        }
        if ((vlSelfRef.__PVT__IN_wbValid[3U] & (~ (
                                                   vlSelfRef.__PVT__IN_wbTag
                                                   [3U] 
                                                   >> 6U)))) {
            vlSelfRef.tagAvail = (vlSelfRef.tagAvail 
                                  | ((QData)((IData)(1U)) 
                                     << (0x3fU & vlSelfRef.__PVT__IN_wbTag
                                         [3U])));
        }
        if ((vlSelfRef.__PVT__IN_wbValid[4U] & (~ (
                                                   vlSelfRef.__PVT__IN_wbTag
                                                   [4U] 
                                                   >> 6U)))) {
            vlSelfRef.tagAvail = (vlSelfRef.tagAvail 
                                  | ((QData)((IData)(1U)) 
                                     << (0x3fU & vlSelfRef.__PVT__IN_wbTag
                                         [4U])));
        }
        if ((1U & vlSymsp->TOP__Top__soc__core.branch[0U])) {
            vlSelfRef.__VdlyVal__specTag__v32 = vlSelfRef.comTag
                [1U];
            vlSelfRef.__VdlySet__specTag__v32 = 1U;
            vlSelfRef.__VdlyVal__specTag__v33 = vlSelfRef.comTag
                [2U];
            vlSelfRef.__VdlyVal__specTag__v34 = vlSelfRef.comTag
                [3U];
            vlSelfRef.__VdlyVal__specTag__v35 = vlSelfRef.comTag
                [4U];
            vlSelfRef.__VdlyVal__specTag__v36 = vlSelfRef.comTag
                [5U];
            vlSelfRef.__VdlyVal__specTag__v37 = vlSelfRef.comTag
                [6U];
            vlSelfRef.__VdlyVal__specTag__v38 = vlSelfRef.comTag
                [7U];
            vlSelfRef.__VdlyVal__specTag__v39 = vlSelfRef.comTag
                [8U];
            vlSelfRef.__VdlyVal__specTag__v40 = vlSelfRef.comTag
                [9U];
            vlSelfRef.__VdlyVal__specTag__v41 = vlSelfRef.comTag
                [0xaU];
            vlSelfRef.__VdlyVal__specTag__v42 = vlSelfRef.comTag
                [0xbU];
            vlSelfRef.__VdlyVal__specTag__v43 = vlSelfRef.comTag
                [0xcU];
            vlSelfRef.__VdlyVal__specTag__v44 = vlSelfRef.comTag
                [0xdU];
            vlSelfRef.__VdlyVal__specTag__v45 = vlSelfRef.comTag
                [0xeU];
            vlSelfRef.__VdlyVal__specTag__v46 = vlSelfRef.comTag
                [0xfU];
            vlSelfRef.__VdlyVal__specTag__v47 = vlSelfRef.comTag
                [0x10U];
            vlSelfRef.__VdlyVal__specTag__v48 = vlSelfRef.comTag
                [0x11U];
            vlSelfRef.__VdlyVal__specTag__v49 = vlSelfRef.comTag
                [0x12U];
            vlSelfRef.__VdlyVal__specTag__v50 = vlSelfRef.comTag
                [0x13U];
            vlSelfRef.__VdlyVal__specTag__v51 = vlSelfRef.comTag
                [0x14U];
            vlSelfRef.__VdlyVal__specTag__v52 = vlSelfRef.comTag
                [0x15U];
            vlSelfRef.__VdlyVal__specTag__v53 = vlSelfRef.comTag
                [0x16U];
            vlSelfRef.__VdlyVal__specTag__v54 = vlSelfRef.comTag
                [0x17U];
            vlSelfRef.__VdlyVal__specTag__v55 = vlSelfRef.comTag
                [0x18U];
            vlSelfRef.__VdlyVal__specTag__v56 = vlSelfRef.comTag
                [0x19U];
            vlSelfRef.__VdlyVal__specTag__v57 = vlSelfRef.comTag
                [0x1aU];
            vlSelfRef.__VdlyVal__specTag__v58 = vlSelfRef.comTag
                [0x1bU];
            vlSelfRef.__VdlyVal__specTag__v59 = vlSelfRef.comTag
                [0x1cU];
            vlSelfRef.__VdlyVal__specTag__v60 = vlSelfRef.comTag
                [0x1dU];
            vlSelfRef.__VdlyVal__specTag__v61 = vlSelfRef.comTag
                [0x1eU];
            vlSelfRef.__VdlyVal__specTag__v62 = vlSelfRef.comTag
                [0x1fU];
        } else {
            if ((vlSelfRef.__PVT__IN_issueValid[0U] 
                 & (0U != vlSelfRef.__PVT__IN_issueIDs
                    [0U]))) {
                vlSelfRef.__VdlyVal__specTag__v63 = 
                    vlSelfRef.__PVT__IN_issueTags[0U];
                vlSelfRef.__VdlyDim0__specTag__v63 
                    = vlSelfRef.__PVT__IN_issueIDs[0U];
                vlSelfRef.__VdlySet__specTag__v63 = 1U;
                if ((1U & (~ (vlSelfRef.__PVT__IN_issueTags
                              [0U] >> 6U)))) {
                    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                        if (VL_UNLIKELY((vlSelfRef.__PVT__IN_issueAvail
                                         [0U]))) {
                            VL_WRITEF_NX("[%0t] %%Error: RenameTable.sv:99: Assertion failed in %NTop.soc.core.rn.rt.unnamedblk8: 'assert' failed.\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("src/RenameTable.sv", 99, "");
                        }
                    }
                    vlSelfRef.tagAvail = ((~ (1ULL 
                                              << (0x3fU 
                                                  & vlSelfRef.__PVT__IN_issueTags
                                                  [0U]))) 
                                          & vlSelfRef.tagAvail);
                }
            }
            if ((vlSelfRef.__PVT__IN_issueValid[1U] 
                 & (0U != vlSelfRef.__PVT__IN_issueIDs
                    [1U]))) {
                vlSelfRef.__VdlyVal__specTag__v64 = 
                    vlSelfRef.__PVT__IN_issueTags[1U];
                vlSelfRef.__VdlyDim0__specTag__v64 
                    = vlSelfRef.__PVT__IN_issueIDs[1U];
                vlSelfRef.__VdlySet__specTag__v64 = 1U;
                if ((1U & (~ (vlSelfRef.__PVT__IN_issueTags
                              [1U] >> 6U)))) {
                    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                        if (VL_UNLIKELY((vlSelfRef.__PVT__IN_issueAvail
                                         [1U]))) {
                            VL_WRITEF_NX("[%0t] %%Error: RenameTable.sv:99: Assertion failed in %NTop.soc.core.rn.rt.unnamedblk8: 'assert' failed.\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("src/RenameTable.sv", 99, "");
                        }
                    }
                    vlSelfRef.tagAvail = ((~ (1ULL 
                                              << (0x3fU 
                                                  & vlSelfRef.__PVT__IN_issueTags
                                                  [1U]))) 
                                          & vlSelfRef.tagAvail);
                }
            }
            if ((vlSelfRef.__PVT__IN_issueValid[2U] 
                 & (0U != vlSelfRef.__PVT__IN_issueIDs
                    [2U]))) {
                vlSelfRef.__VdlyVal__specTag__v65 = 
                    vlSelfRef.__PVT__IN_issueTags[2U];
                vlSelfRef.__VdlyDim0__specTag__v65 
                    = vlSelfRef.__PVT__IN_issueIDs[2U];
                vlSelfRef.__VdlySet__specTag__v65 = 1U;
                if ((1U & (~ (vlSelfRef.__PVT__IN_issueTags
                              [2U] >> 6U)))) {
                    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                        if (VL_UNLIKELY((vlSelfRef.__PVT__IN_issueAvail
                                         [2U]))) {
                            VL_WRITEF_NX("[%0t] %%Error: RenameTable.sv:99: Assertion failed in %NTop.soc.core.rn.rt.unnamedblk8: 'assert' failed.\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("src/RenameTable.sv", 99, "");
                        }
                    }
                    vlSelfRef.tagAvail = ((~ (1ULL 
                                              << (0x3fU 
                                                  & vlSelfRef.__PVT__IN_issueTags
                                                  [2U]))) 
                                          & vlSelfRef.tagAvail);
                }
            }
            if ((vlSelfRef.__PVT__IN_issueValid[3U] 
                 & (0U != vlSelfRef.__PVT__IN_issueIDs
                    [3U]))) {
                vlSelfRef.__VdlyVal__specTag__v66 = 
                    vlSelfRef.__PVT__IN_issueTags[3U];
                vlSelfRef.__VdlyDim0__specTag__v66 
                    = vlSelfRef.__PVT__IN_issueIDs[3U];
                vlSelfRef.__VdlySet__specTag__v66 = 1U;
                if ((1U & (~ (vlSelfRef.__PVT__IN_issueTags
                              [3U] >> 6U)))) {
                    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                        if (VL_UNLIKELY((vlSelfRef.__PVT__IN_issueAvail
                                         [3U]))) {
                            VL_WRITEF_NX("[%0t] %%Error: RenameTable.sv:99: Assertion failed in %NTop.soc.core.rn.rt.unnamedblk8: 'assert' failed.\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("src/RenameTable.sv", 99, "");
                        }
                    }
                    vlSelfRef.tagAvail = ((~ (1ULL 
                                              << (0x3fU 
                                                  & vlSelfRef.__PVT__IN_issueTags
                                                  [3U]))) 
                                          & vlSelfRef.tagAvail);
                }
            }
        }
        if ((vlSelfRef.__PVT__IN_commitValid[0U] & 
             (0U != vlSelfRef.__PVT__IN_commitIDs[0U]))) {
            if (vlSymsp->TOP__Top__soc__core.mispredFlush) {
                if ((1U & (~ vlSymsp->TOP__Top__soc__core.branch[0U]))) {
                    vlSelfRef.__VdlyVal__specTag__v67 
                        = vlSelfRef.__PVT__IN_commitTags
                        [0U];
                    vlSelfRef.__VdlyDim0__specTag__v67 
                        = vlSelfRef.__PVT__IN_commitIDs
                        [0U];
                    vlSelfRef.__VdlySet__specTag__v67 = 1U;
                }
            } else {
                vlSelfRef.__VdlyVal__comTag__v32 = 
                    vlSelfRef.__PVT__IN_commitTags[0U];
                vlSelfRef.__VdlyDim0__comTag__v32 = 
                    vlSelfRef.__PVT__IN_commitIDs[0U];
                vlSelfRef.__VdlySet__comTag__v32 = 1U;
                if ((1U & vlSymsp->TOP__Top__soc__core.branch[0U])) {
                    vlSelfRef.__VdlyVal__specTag__v68 
                        = vlSelfRef.__PVT__IN_commitTags
                        [0U];
                    vlSelfRef.__VdlyDim0__specTag__v68 
                        = vlSelfRef.__PVT__IN_commitIDs
                        [0U];
                    vlSelfRef.__VdlySet__specTag__v68 = 1U;
                }
            }
        }
        if ((vlSelfRef.__PVT__IN_commitValid[1U] & 
             (0U != vlSelfRef.__PVT__IN_commitIDs[1U]))) {
            if (vlSymsp->TOP__Top__soc__core.mispredFlush) {
                if ((1U & (~ vlSymsp->TOP__Top__soc__core.branch[0U]))) {
                    vlSelfRef.__VdlyVal__specTag__v69 
                        = vlSelfRef.__PVT__IN_commitTags
                        [1U];
                    vlSelfRef.__VdlyDim0__specTag__v69 
                        = vlSelfRef.__PVT__IN_commitIDs
                        [1U];
                    vlSelfRef.__VdlySet__specTag__v69 = 1U;
                }
            } else {
                vlSelfRef.__VdlyVal__comTag__v33 = 
                    vlSelfRef.__PVT__IN_commitTags[1U];
                vlSelfRef.__VdlyDim0__comTag__v33 = 
                    vlSelfRef.__PVT__IN_commitIDs[1U];
                vlSelfRef.__VdlySet__comTag__v33 = 1U;
                if ((1U & vlSymsp->TOP__Top__soc__core.branch[0U])) {
                    vlSelfRef.__VdlyVal__specTag__v70 
                        = vlSelfRef.__PVT__IN_commitTags
                        [1U];
                    vlSelfRef.__VdlyDim0__specTag__v70 
                        = vlSelfRef.__PVT__IN_commitIDs
                        [1U];
                    vlSelfRef.__VdlySet__specTag__v70 = 1U;
                }
            }
        }
        if ((vlSelfRef.__PVT__IN_commitValid[2U] & 
             (0U != vlSelfRef.__PVT__IN_commitIDs[2U]))) {
            if (vlSymsp->TOP__Top__soc__core.mispredFlush) {
                if ((1U & (~ vlSymsp->TOP__Top__soc__core.branch[0U]))) {
                    vlSelfRef.__VdlyVal__specTag__v71 
                        = vlSelfRef.__PVT__IN_commitTags
                        [2U];
                    vlSelfRef.__VdlyDim0__specTag__v71 
                        = vlSelfRef.__PVT__IN_commitIDs
                        [2U];
                    vlSelfRef.__VdlySet__specTag__v71 = 1U;
                }
            } else {
                vlSelfRef.__VdlyVal__comTag__v34 = 
                    vlSelfRef.__PVT__IN_commitTags[2U];
                vlSelfRef.__VdlyDim0__comTag__v34 = 
                    vlSelfRef.__PVT__IN_commitIDs[2U];
                vlSelfRef.__VdlySet__comTag__v34 = 1U;
                if ((1U & vlSymsp->TOP__Top__soc__core.branch[0U])) {
                    vlSelfRef.__VdlyVal__specTag__v72 
                        = vlSelfRef.__PVT__IN_commitTags
                        [2U];
                    vlSelfRef.__VdlyDim0__specTag__v72 
                        = vlSelfRef.__PVT__IN_commitIDs
                        [2U];
                    vlSelfRef.__VdlySet__specTag__v72 = 1U;
                }
            }
        }
        if ((vlSelfRef.__PVT__IN_commitValid[3U] & 
             (0U != vlSelfRef.__PVT__IN_commitIDs[3U]))) {
            if (vlSymsp->TOP__Top__soc__core.mispredFlush) {
                if ((1U & (~ vlSymsp->TOP__Top__soc__core.branch[0U]))) {
                    vlSelfRef.__VdlyVal__specTag__v73 
                        = vlSelfRef.__PVT__IN_commitTags
                        [3U];
                    vlSelfRef.__VdlyDim0__specTag__v73 
                        = vlSelfRef.__PVT__IN_commitIDs
                        [3U];
                    vlSelfRef.__VdlySet__specTag__v73 = 1U;
                }
            } else {
                vlSelfRef.__VdlyVal__comTag__v35 = 
                    vlSelfRef.__PVT__IN_commitTags[3U];
                vlSelfRef.__VdlyDim0__comTag__v35 = 
                    vlSelfRef.__PVT__IN_commitIDs[3U];
                vlSelfRef.__VdlySet__comTag__v35 = 1U;
                if ((1U & vlSymsp->TOP__Top__soc__core.branch[0U])) {
                    vlSelfRef.__VdlyVal__specTag__v74 
                        = vlSelfRef.__PVT__IN_commitTags
                        [3U];
                    vlSelfRef.__VdlyDim0__specTag__v74 
                        = vlSelfRef.__PVT__IN_commitIDs
                        [3U];
                    vlSelfRef.__VdlySet__specTag__v74 = 1U;
                }
            }
        }
    }
}
