#pragma once

#include "SigWord.hpp"

namespace nw::ut
{
    struct BinaryBlockHeader
    {
        SigWord kind;
        u32 size;
    };
    static_assert(sizeof(BinaryBlockHeader) == 0x8);
}