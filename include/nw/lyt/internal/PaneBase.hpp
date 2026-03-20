#pragma once

#include "../../ut/LinkListNode.hpp"

namespace nw::lyt::internal
{
    class PaneBase
    {
    public:
        // TODO: Fill this vtable properly
        virtual ~PaneBase() = default;
        virtual void m_0x08();
        virtual void m_0x0C();
        virtual void m_0x10();
        virtual void m_0x14();
        virtual void m_0x18();
        virtual void m_0x1C();
        virtual void m_0x20();
        virtual void m_0x24();
        virtual void m_0x28();
        virtual void m_0x2C();
        virtual void m_0x30();
        virtual void m_0x34();
        virtual void m_0x38();
        virtual void m_0x3C();
        virtual void m_0x40();
        virtual void m_0x44();
        virtual void m_0x48();
        virtual void m_0x4C();
        virtual void m_0x50();
        virtual void m_0x54();
        virtual void m_0x58();
        virtual void m_0x5C();
        virtual void m_0x60();
        virtual void m_0x64();
        virtual void m_0x68();
        virtual void m_0x6C();

        ut::LinkListNode m_link;
    };
    static_assert(sizeof(PaneBase) == 0xC);
}