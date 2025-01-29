#pragma once

#include <nn/types.h>

namespace nw::ut::internal
{
    template <typename size_type = u32, typename Node = ut::LinkListNode>
    class LinkListImpl
    {
    public:
        size_type m_size;
        Node m_base_node;
    };
    static_assert(sizeof(LinkListImpl<>) == 0xC);
}