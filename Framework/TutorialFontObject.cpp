#include "stdafx.h"
#include "TutorialFontObject.h"

TutorialFontObject::TutorialFontObject()
	:GameObject(fontRenderer = new FontRenderer()), str(L"튜토리얼 화면임!")
{
	font = new Font(L"arial");
	fontRenderer->font = this->font;
	fontRenderer->text = str;
	transform->SetPosition(300.0f, 100.0f);
	transform->SetScale(2.0f, 2.0f);
}

TutorialFontObject::~TutorialFontObject()
{
	SAFE_DELETE(font);
}