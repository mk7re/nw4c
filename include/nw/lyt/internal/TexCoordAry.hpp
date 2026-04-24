#pragma once

#include "../lyt_common.hpp"

namespace nw::lyt::internal
{
    class TexCoordAry
    {
        TexCoordAry();
        void Copy(const void*, u8);
        void Free();
        void Reserve(u8);
        void SetSize(u8);
        void SetCoord(u32, const nw::lyt::detail::TexCoord*);
        void GetCoord(u32, nw::lyt::detail::TexCoord*) const;

        u8 cap;
        u8 num;
        nw::lyt::detail::TexCoord* texCoord;
    };
    static_assert(sizeof(TexCoordAry) == 0x8);
}
