#pragma once

#include "../../ut/BinaryBlockHeader.hpp"

namespace nw::lyt::res
{
    struct ExtUserDataList
    {
        ut::BinaryBlockHeader block_header;
        ut::ResU16 num;
        ut::ResU8 padding[2];
    };
    static_assert(sizeof(ExtUserDataList) == 0xC);
}