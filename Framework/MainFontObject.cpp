#include "stdafx.h"
#include "MainFontObject.h"

MainFontObject::MainFontObject()
	:GameObject(fontRenderer = new FontRenderer()), str(L"Dodge!!")
{
	font = new Font(L"arial");
	fontRenderer->font = this->font;
	fontRenderer->text = str;
	transform->SetPosition(300.0f, 100.0f);
	transform->SetScale(2.0f, 2.0f);
}

MainFontObject::~MainFontObject()
{
	SAFE_DELETE(font);
}