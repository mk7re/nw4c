#pragma once

#include "../math/math_types.hpp"
#include "DrawInfo.hpp"

namespace nw::lyt
{
    class DrawInfo {
    public:
        DrawInfo();
        void SetProjectionMtx(const nn::math::MTX44&);

        u8 field_0x00[0x8c];
    };
    static_assert(sizeof(DrawInfo) == 0x8c);
}