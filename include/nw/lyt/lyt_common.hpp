#pragma once

#include "../ut/types.hpp"
#include <nn/math/VEC.h>

namespace nw::lyt
{
namespace detail
{

enum VertexColor {
    VERTEXCOLOR_LT,     // Left-top
    VERTEXCOLOR_RT,     // Right-top
    VERTEXCOLOR_LB,     // Left-bottom
    VERTEXCOLOR_RB,     // Right-bottom

    VERTEXCOLOR_MAX
};

typedef nn::math::VEC2 TexCoord[VERTEXCOLOR_MAX];

}
}