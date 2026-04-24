#pragma once

#include "../ut/types.hpp"

namespace nw::lyt
{
    struct TextureInfo
    {
        TextureInfo();

        u8 field_0x00[0x14];
    };
    static_assert(sizeof(TextureInfo) == 0x14);
}