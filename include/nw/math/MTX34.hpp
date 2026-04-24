#pragma once

#include "../ut/types.hpp"
#include <nn/math/MTX.h>
#include <nn/math/VEC.h>

namespace nw::math
{
    void MTX34LookAtFIdx(nn::math::MTX34*, const nn::math::VEC3*, f32, const nn::math::VEC3*);
}