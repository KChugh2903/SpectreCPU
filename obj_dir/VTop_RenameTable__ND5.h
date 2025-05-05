// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_RENAMETABLE__ND5_H_
#define VERILATED_VTOP_RENAMETABLE__ND5_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_save.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_RenameTable__ND5 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__IN_issueValid[4],0,0);
        VL_IN8(__PVT__IN_issueTags[4],6,0);
        VL_IN8(__PVT__IN_issueAvail[4],0,0);
        QData/*63:0*/ tagAvail;
        VL_IN8(__PVT__IN_wbValid[5],0,0);
        VL_IN8(__PVT__IN_wbTag[5],6,0);
        VL_OUT8(__PVT__OUT_lookupAvail[8],0,0);
        VL_OUT8(__PVT__OUT_lookupSpecTag[8],6,0);
        VL_IN8(__PVT__IN_lookupIDs[8],4,0);
        VlUnpacked<CData/*6:0*/, 32> specTag;
        VL_IN8(__PVT__IN_issueIDs[4],4,0);
        CData/*0:0*/ __VdlySet__comTag__v0;
        CData/*0:0*/ __VdlySet__comTag__v1;
        CData/*6:0*/ __VdlyVal__specTag__v32;
        CData/*0:0*/ __VdlySet__specTag__v32;
        CData/*6:0*/ __VdlyVal__specTag__v33;
        CData/*6:0*/ __VdlyVal__specTag__v34;
        CData/*6:0*/ __VdlyVal__specTag__v35;
        CData/*6:0*/ __VdlyVal__specTag__v36;
        CData/*6:0*/ __VdlyVal__specTag__v37;
        CData/*6:0*/ __VdlyVal__specTag__v38;
        CData/*6:0*/ __VdlyVal__specTag__v39;
        CData/*6:0*/ __VdlyVal__specTag__v40;
        CData/*6:0*/ __VdlyVal__specTag__v41;
        CData/*6:0*/ __VdlyVal__specTag__v42;
        CData/*6:0*/ __VdlyVal__specTag__v43;
        CData/*6:0*/ __VdlyVal__specTag__v44;
        CData/*6:0*/ __VdlyVal__specTag__v45;
        CData/*6:0*/ __VdlyVal__specTag__v46;
        CData/*6:0*/ __VdlyVal__specTag__v47;
        CData/*6:0*/ __VdlyVal__specTag__v48;
        CData/*6:0*/ __VdlyVal__specTag__v49;
        CData/*6:0*/ __VdlyVal__specTag__v50;
        CData/*6:0*/ __VdlyVal__specTag__v51;
        CData/*6:0*/ __VdlyVal__specTag__v52;
        CData/*6:0*/ __VdlyVal__specTag__v53;
        CData/*6:0*/ __VdlyVal__specTag__v54;
        CData/*6:0*/ __VdlyVal__specTag__v55;
        CData/*6:0*/ __VdlyVal__specTag__v56;
        CData/*6:0*/ __VdlyVal__specTag__v57;
        CData/*6:0*/ __VdlyVal__specTag__v58;
        CData/*6:0*/ __VdlyVal__specTag__v59;
        CData/*6:0*/ __VdlyVal__specTag__v60;
        CData/*6:0*/ __VdlyVal__specTag__v61;
        CData/*6:0*/ __VdlyVal__specTag__v62;
        CData/*6:0*/ __VdlyVal__specTag__v63;
        CData/*4:0*/ __VdlyDim0__specTag__v63;
        CData/*0:0*/ __VdlySet__specTag__v63;
        CData/*6:0*/ __VdlyVal__specTag__v64;
        CData/*4:0*/ __VdlyDim0__specTag__v64;
        CData/*0:0*/ __VdlySet__specTag__v64;
        CData/*6:0*/ __VdlyVal__specTag__v65;
        CData/*4:0*/ __VdlyDim0__specTag__v65;
        CData/*0:0*/ __VdlySet__specTag__v65;
        CData/*6:0*/ __VdlyVal__specTag__v66;
        CData/*4:0*/ __VdlyDim0__specTag__v66;
        CData/*0:0*/ __VdlySet__specTag__v66;
        CData/*6:0*/ __VdlyVal__specTag__v67;
        CData/*4:0*/ __VdlyDim0__specTag__v67;
        CData/*0:0*/ __VdlySet__specTag__v67;
        CData/*6:0*/ __VdlyVal__comTag__v32;
        CData/*4:0*/ __VdlyDim0__comTag__v32;
        CData/*0:0*/ __VdlySet__comTag__v32;
        CData/*6:0*/ __VdlyVal__specTag__v68;
    };
    struct {
        CData/*4:0*/ __VdlyDim0__specTag__v68;
        CData/*0:0*/ __VdlySet__specTag__v68;
        CData/*6:0*/ __VdlyVal__specTag__v69;
        CData/*4:0*/ __VdlyDim0__specTag__v69;
        CData/*0:0*/ __VdlySet__specTag__v69;
        CData/*6:0*/ __VdlyVal__comTag__v33;
        CData/*4:0*/ __VdlyDim0__comTag__v33;
        CData/*0:0*/ __VdlySet__comTag__v33;
        CData/*6:0*/ __VdlyVal__specTag__v70;
        CData/*4:0*/ __VdlyDim0__specTag__v70;
        CData/*0:0*/ __VdlySet__specTag__v70;
        CData/*6:0*/ __VdlyVal__specTag__v71;
        CData/*4:0*/ __VdlyDim0__specTag__v71;
        CData/*0:0*/ __VdlySet__specTag__v71;
        CData/*6:0*/ __VdlyVal__comTag__v34;
        CData/*4:0*/ __VdlyDim0__comTag__v34;
        CData/*0:0*/ __VdlySet__comTag__v34;
        CData/*6:0*/ __VdlyVal__specTag__v72;
        CData/*4:0*/ __VdlyDim0__specTag__v72;
        CData/*0:0*/ __VdlySet__specTag__v72;
        CData/*6:0*/ __VdlyVal__specTag__v73;
        CData/*4:0*/ __VdlyDim0__specTag__v73;
        CData/*0:0*/ __VdlySet__specTag__v73;
        CData/*6:0*/ __VdlyVal__comTag__v35;
        CData/*4:0*/ __VdlyDim0__comTag__v35;
        CData/*0:0*/ __VdlySet__comTag__v35;
        CData/*6:0*/ __VdlyVal__specTag__v74;
        CData/*4:0*/ __VdlyDim0__specTag__v74;
        CData/*0:0*/ __VdlySet__specTag__v74;
        VlUnpacked<CData/*6:0*/, 32> comTag;
        VL_IN8(__PVT__IN_commitValid[4],0,0);
        VL_IN8(__PVT__IN_commitIDs[4],4,0);
        VL_IN8(__PVT__IN_commitTags[4],6,0);
        VL_OUT8(__PVT__OUT_commitPrevTags[4],6,0);
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst,0,0);
        VL_IN8(__PVT__IN_mispred,0,0);
        VL_IN8(__PVT__IN_mispredFlush,0,0);
    };

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_RenameTable__ND5(VTop__Syms* symsp, const char* v__name);
    ~VTop_RenameTable__ND5();
    VL_UNCOPYABLE(VTop_RenameTable__ND5);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};


#endif  // guard
