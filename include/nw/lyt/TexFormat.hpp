#pragma once

#include "../ut/types.hpp"

namespace nw::lyt
{
    enum class TexFormat : u8 {
        TEX_FORMAT_1 = 1,
        TEX_FORMAT_2,
        TEX_FORMAT_LA8,
        TEX_FORMAT_4,
        TEX_FORMAT_5,
        TEX_FORMAT_6,
        TEX_FORMAT_7,
        TEX_FORMAT_8,
        TEX_FORMAT_RGBA8,
        TEX_FORMAT_10,
        TEX_FORMAT_11,
        TEX_FORMAT_12,
        TEX_FORMAT_13
    };
    static_assert(sizeof(TexFormat) == 0x1);
}