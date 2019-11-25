#include "stdafx.h"
#include "TutorialFontObject.h"

TutorialFontObject::TutorialFontObject()
	:GameObject(fontRenderer = new FontRenderer()), str(L"Ʃ�丮�� ȭ����!")
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