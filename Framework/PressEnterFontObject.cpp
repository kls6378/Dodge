#include "stdafx.h"
#include "PressEnterFontObject.h"

PressEnterFontObject::PressEnterFontObject()
	:GameObject(fontRenderer = new FontRenderer()), str(L"Press Enter...")
{
	font = new Font(L"arial", 50.0f, 1.0f, 1.0f, 1.0f, 1.0f, false);
	fontRenderer->font = this->font;
	fontRenderer->text = str;
	transform->SetPosition(500.0f, 600.0f);
	transform->SetScale(1.0f, 1.0f);
}

PressEnterFontObject::~PressEnterFontObject()
{
	SAFE_DELETE(font);
}