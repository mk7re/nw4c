#pragma once

#include "internal/PaneBase.hpp"

#include "res/ExtUserDataList.hpp"

#include "PaneList.hpp"
#include "AnimationList.hpp"
#include "Size.hpp"
#include "../ut/Color.hpp"
#include "../ut/Rect.hpp"
#include "../ut/types.hpp"
#include "AnimTransform.hpp"
#include "AnimationLink.hpp"
#include "Material.hpp"
#include "Drawer.hpp"
#include "DrawInfo.hpp"

#include <nn/util/MathTypes.h>

namespace nw::lyt
{
    class Pane : public internal::PaneBase
    {
    public:
        virtual ~Pane() = default;
        virtual void *GetRuntimeTypeInfo() const;
        virtual nw::ut::Color8 GetVtxColor(u32) const;
        virtual void SetVtxColor(u32, nw::ut::Color8);
        virtual u8 GetColorElement(u32) const;
        virtual void SetColorElement(u32, u8);
        virtual u8 GetVtxColorElement(u32) const;
        virtual void SetVtxColorElement(u32, u8);
        virtual u32 GetMaterialNum() const;
        virtual Material *GetMaterial(u32) const;
        virtual Pane *FindPaneByName(const char *, bool);
        virtual Material *FindMaterialByName(const char *, bool);
        virtual void Animate(u32);
        virtual void AnimateSelf(u32);
        virtual void BindAnimation(AnimTransform *, bool, bool);
        virtual void UnbindAnimation(AnimTransform *, bool);
        virtual void m_0x44();
        virtual void UnbindAnimationSelf(AnimTransform *);
        virtual void m_0x4C();
        virtual void m_0x50();
        virtual void m_0x54();
        virtual void m_0x58();
        virtual void CalculateMtx(const DrawInfo &);
        virtual void m_0x60();
        virtual void m_0x64();
        virtual void MakeUniformDataSelf(DrawInfo *, Drawer *) const;
        virtual void m_0x6C();

        Pane();
        Pane(void *);
        void Init();
        void SetName(const char *);
        void AppendChild(Pane *);
        void InsertChild(Pane *, Pane *);
        void RemoveChild(Pane *);
        void MakeUniformData(DrawInfo *, Drawer *) const;
        f32 GetVtxPos() const;
        ut::Rect GetPaneRect() const;
        Material *GetMaterial() const;
        void AddAnimationLink(AnimationLink *);

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