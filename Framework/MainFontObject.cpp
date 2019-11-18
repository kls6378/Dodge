#include "stdafx.h"
#include "MainFontObject.h"

MainFontObject::MainFontObject()
	:GameObject(fontRenderer = new FontRenderer()), str(L"테스트 제목")
{
	font = new Font(L"Gothic");
	fontRenderer->font = this->font;
	fontRenderer->text = str;
	transform->SetPosition(540.0f, 200.0f);
	transform->SetScale(2.0f, 2.0f);
}

MainFontObject::~MainFontObject()
{
	SAFE_DELETE(font);
}