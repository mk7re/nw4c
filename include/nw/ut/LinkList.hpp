#pragma once

#include "internal/LinkListImpl.hpp"

namespace nw::ut
{
    class LinkList : public internal::LinkListImpl<> {};
    static_assert(sizeof(LinkList) == 0xC);
}