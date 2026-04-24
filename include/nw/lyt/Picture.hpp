#pragma once

#include "Pane.hpp"
#include "Material.hpp"
#include "TexMap.hpp"
#include "internal/TexCoordAry.hpp"
#include "../ut/Color.hpp"
#include "lyt_common.hpp"

namespace nw::lyt
{
    class Picture : public Pane
    {
        virtual ~Picture() = default;
        virtual void *GetRuntimeTypeInfo() const;
        virtual nw::ut::Color8 GetVtxColor(u32) const;
        virtual void SetVtxColor(u32, nw::ut::Color8);
        virtual u8 GetVtxColorElement(u32) const;
        virtual void SetVtxColorElement(u32, u8);
        virtual u32 GetMaterialNum() const;
        virtual Material *GetMaterial(u32) const;
        void Append(const TexMap&);

        Picture(const TexMap&);
        Picture(const void*, const void*);
        void GetTexCoord(u32, detail::TexCoord*) const;
        void SetTexCoord(u32, const detail::TexCoord*);

        u8 field_0xD4[0x64];
        Material* material;
        nw::ut::Color8 mColors[4];
        internal::TexCoordAry texCoordAry;
    };
    static_assert(sizeof(Picture) == 0x154);
}
