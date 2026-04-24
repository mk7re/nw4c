#pragma once

#include "../ut/types.hpp"

namespace nw::math
{

struct VEC2 {
    f32 x, y;
};

struct VEC3 {
    f32 x, y, z;
};

struct MTX44 {
    f32 data[4][4];
};

struct MTX34 {
    f32 data[3][4];
};

}