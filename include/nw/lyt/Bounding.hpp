#pragma once

#include "Pane.hpp"

namespace nw::lyt
{
    class Bounding : public Pane
    {
        u8 field_0xD4[8];
    };
    static_assert(sizeof(Bounding) == 0xDC);
}
