#pragma once

#include "../ut/types.hpp"

namespace nw::lyt
{
    class Layout {
    public:
        u8 field_0x00[0x20];
    };
    static_assert(sizeof(Layout) == 0x20);
}