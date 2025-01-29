#pragma once

#include "../ut/types.hpp"

namespace nw::lyt
{
    struct Size
    {
        ut::ResF32 width;
        ut::ResF32 height;
    };
    static_assert(sizeof(Size) == 0x8);
}