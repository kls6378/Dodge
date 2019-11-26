#include "stdafx.h"
#include "TutorialFontObject.h"

TutorialFontObject::TutorialFontObject()
	:GameObject(fontRenderer = new FontRenderer()), str(L"����Ű�� ���ּ��� ������ ������ ������ ���ϼ���!")
{
	font = new Font(L"arial", 40.0f, 1.0f, 1.0f, 0.0f, 1.0f, true);
	fontRenderer->font = this->font;
	fontRenderer->text = str;
	transform->SetPosition(350.0f, 300.0f);
	transform->SetScale(1.0f, 1.0f);
}

TutorialFontObject::~TutorialFontObject()
{
	SAFE_DELETE(font);
}