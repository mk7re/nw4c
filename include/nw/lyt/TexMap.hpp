#pragma once

#include "../ut/types.hpp"
#include "TextureInfo.hpp"

namespace nw::lyt
{
    struct TexMap
    {
        TexMap();
        TexMap(const TextureInfo &);
        void ResetU32Info();

        nw::lyt::TextureInfo textureInfo;
        u32 field_0x14;
        u32 field_0x18;
        s32 field_0x1C;
    };
    static_assert(sizeof(TexMap) == 0x20);
}