#pragma once

namespace nw::ut
{
    class LinkListNode
    {
    public:
        LinkListNode *m_next;
        LinkListNode *m_prev;
    };
    static_assert(sizeof(LinkListNode) == 0x8);
}