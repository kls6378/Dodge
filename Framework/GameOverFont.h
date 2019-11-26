#pragma once
#include "GameObject.h"
#include "FontRenderer.h"

class GameOverFont :
	public GameObject
{
public:
	GameOverFont();
	~GameOverFont();

	Font* font;
	FontRenderer* fontRenderer;
	wchar_t str[100];
};

