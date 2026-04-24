#pragma once

#include "../ut/types.hpp"

namespace nw::lyt
{
    class AnimTransformBasic {
    public:
        u8 field_0x00[0x20];
    };
    static_assert(sizeof(AnimTransformBasic) == 0x20);

    class AnimTransform: public AnimTransformBasic {};
    static_assert(sizeof(AnimTransform) == 0x20);
}