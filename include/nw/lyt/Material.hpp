#pragma once

#include "../ut/types.hpp"

namespace nw::lyt
{
    class Material {
    public:
        u8 field_0x00[0x50];
    };
    static_assert(sizeof(Material) == 0x50);
}