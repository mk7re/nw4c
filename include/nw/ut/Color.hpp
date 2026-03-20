#pragma once

#include "types.hpp"

namespace nw::ut
{
    struct Color8
    {
        Color8();
        inline Color8(u8 r_, u8 g_, u8 b_, u8 a_)
            : r(r_), g(g_), b(b_), a(a_) {}
        inline Color8(u32 color)
        {
            r = (color >> 24) & 0xFF;
            g = (color >> 16) & 0xFF;
            b = (color >> 8)  & 0xFF;
            a = (color >> 0)  & 0xFF;
        }
        u32 ToU32();

        u8 r, g, b, a;
    };
    static_assert(sizeof(Color8) == 0x4);
}
