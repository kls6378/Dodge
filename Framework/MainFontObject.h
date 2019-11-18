#pragma once
#include "GameObject.h"
#include "FontRenderer.h"

class MainFontObject :
	public GameObject
{
public:
	MainFontObject();
	~MainFontObject();

	Font* font;
	FontRenderer* fontRenderer;
	wchar_t str[100];
};

