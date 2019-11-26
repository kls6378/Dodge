#include "stdafx.h"
#include "GameOverFont.h"

GameOverFont::GameOverFont()
	:GameObject(fontRenderer = new FontRenderer()), str(L"GAME OVER")
{
	font = new Font(L"arial", 100.0f, 1.0f, 0.0f, 0.0f, 1.0f, true);
	fontRenderer->font = this->font;
	fontRenderer->text = str;
	transform->SetPosition(300.0f, 100.0f);
	transform->SetScale(1.0f, 1.0f);
}

GameOverFont::~GameOverFont()
{
	SAFE_DELETE(font);
}