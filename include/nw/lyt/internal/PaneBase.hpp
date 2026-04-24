#pragma once

#include "../../ut/LinkListNode.hpp"

namespace nw::lyt::internal
{
    class PaneBase
    {
    public:
        ut::LinkListNode m_link;
    };
    static_assert(sizeof(PaneBase) == 0x8);
}