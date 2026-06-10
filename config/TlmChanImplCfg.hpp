// ======================================================================
// \title  TlmChanImplCfg.hpp
// \brief  Project-local telemetry channel storage sizing for STM32H753
// ======================================================================

#ifndef TLMCHANIMPLCFG_HPP_
#define TLMCHANIMPLCFG_HPP_

namespace {

enum {
    TLMCHAN_NUM_TLM_HASH_SLOTS = 15,
    TLMCHAN_HASH_MOD_VALUE = 99,
    TLMCHAN_HASH_BUCKETS = 96
};

}

#endif
