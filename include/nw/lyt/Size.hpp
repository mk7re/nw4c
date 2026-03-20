#pragma once

#include "../ut/types.hpp"

namespace nw::lyt
{
    struct Size
    {
        inline Size(f32 w, f32 h): width(w), height(h) {}
        inline Size& operator=(const Size& other) {
            if (this != &other) {
                width = other.width;
                height = other.height;
            }
            return *this;
        }

        ut::ResF32 width;
        ut::ResF32 height;
    };
    static_assert(sizeof(Size) == 0x8);
}