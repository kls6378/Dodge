#include "stdafx.h"
#include "TutorialFontObject.h"

TutorialFontObject::TutorialFontObject()
	:GameObject(fontRenderer = new FontRenderer()), str(L"Ʃ�丮�� ȭ����!")
{
	font = new Font(L"arial", 100.0f, 1.0f, 1.0f, 1.0f, 1.0f, true);
	fontRenderer->font = this->font;
	fontRenderer->text = str;
	transform->SetPosition(300.0f, 100.0f);
	transform->SetScale(1.0f, 1.0f);
}

TutorialFontObject::~TutorialFontObject()
{
	SAFE_DELETE(font);
}