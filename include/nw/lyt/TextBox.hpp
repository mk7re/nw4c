#pragma once

#include "Drawer.hpp"
#include "Material.hpp"
#include "Pane.hpp"
#include "Size.hpp"
#include <nn/math/MTX.h>
#include "../ut/Color.hpp"

namespace nw::lyt
{
    enum TextColor {
        TEXTCOLOR_TOP,
        TEXTCOLOR_BOTTOM,

        TEXTCOLOR_MAX
    };

    enum TextOutlineColor {
        TEXT_OUTLINE_GRAY,
        TEXT_OUTLINE_BLACK,
        TEXT_OUTLINE_NONE,

        TEXT_OUTLINE_MAX
    };

    enum TextAlingmentPosition {
        ALIGN_BOTTOM_LEFT,
        ALIGN_BOTTOM_CENTER,
        ALIGN_BOTTOM_RIGHT,
        
        ALIGN_CENTER_LEFT,
        ALIGN_CENTER_CENTER,
        ALIGN_CENTER_RIGHT,

        ALIGN_TOP_LEFT,
        ALIGN_TOP_CENTER,
        ALIGN_TOP_RIGHT
    };

    class TextBox : public Pane
    {
    public:
        virtual void AllocStringBuffer(u16);
        virtual void FreeStringBuffer();
        virtual u16 SetString(const wchar_t *, u16);

        Textbox();
        f32 AdjustTextPos(const Size&, bool) const;
        void GetTextGlobalMtx(nn::math::MTX34*) const;
        void Init(u16);
        void SetupDrawCharData(Drawer*);

        wchar_t* mTextBuf;
        nw::ut::Color8 mTextColors[TEXTCOLOR_MAX];
        void* mpFont;
        Size mFontSize;
        f32 mLineSpace;
        f32 mCharSpace;
        void* mpTagProcessor;
        u16 mTextBufBytes;
        u16 mTextLen;
        u8 mTextPosition;
        u8 mFlags;
        Material* mpMaterial;
        void** mppDispStringBuffer;
        u8 mOutlineColor;
    };
    static_assert(sizeof(TextBox) == 0x10C);
}
