#include "stdafx.h"
#include "MainFontObject.h"

MainFontObject::MainFontObject()
	:GameObject(fontRenderer = new FontRenderer()), str(L"Dodge!!")
{
	font = new Font(L"arial",100.0f, 1.0f,1.0f,1.0f,1.0f,true);
	fontRenderer->font = this->font;
	fontRenderer->text = str;
	transform->SetPosition(450.0f, 100.0f);
	transform->SetScale(1.0f, 1.0f);
}

MainFontObject::~MainFontObject()
{
	SAFE_DELETE(font);
}