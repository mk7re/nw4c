#pragma once

#include "../ut/types.hpp"
#include "DrawInfo.hpp"

namespace nw::lyt
{
    class Drawer {
    public:
        virtual ~Drawer();
        virtual void DrawBegin(const DrawInfo &);
        virtual void DrawEnd(u32);

        u8 field_0x00[0x694];
    };
    static_assert(sizeof(Drawer) == 0x698);
}