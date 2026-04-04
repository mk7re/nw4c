#pragma once

#include "Pane.hpp"
#include "../ut/Color.hpp"

namespace nw::lyt
{
    class Picture : public Pane
    {
        u8 field_0xD4[104];
        nw::ut::Color8 mColors[4];
        u8 field_0x14C[8];
    };
    static_assert(sizeof(Picture) == 0x154);
}
