// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IF_ICache.h"

std::string VL_TO_STRING(const VTop_IF_ICache* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VTop_IF_ICache::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
