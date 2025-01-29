#pragma once

#include "internal/PaneBase.hpp"

#include "res/ExtUserDataList.hpp"

#include "PaneList.hpp"
#include "AnimationList.hpp"
#include "Size.hpp"

#include <nn/util/MathTypes.h>

namespace nw::lyt
{
    class Pane : public internal::PaneBase
    {
    public:
        Pane *m_parent;
        PaneList m_child_list;
        AnimationList m_animation_list;
        nn::util::Float3 m_translate;
        nn::util::Float3 m_rotate;
        nn::util::Float2 m_scale;
        Size m_size;
        nn::util::FloatColumnMajor4x3 m_matrix;
        nn::util::FloatColumnMajor4x3 m_global_matrix;
        res::ExtUserDataList *m_external_user_data_list;
        u8 m_alpha;
        u8 m_global_alpha;
        u8 m_base_position;
        u8 m_flag;
        char m_name[17];
        char m_user_data[9];
    };
    static_assert(sizeof(Pane) == 0xD4);
}