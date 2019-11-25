#pragma once
#include "GameObject.h"
#include "FontRenderer.h"

class PressEnterFontObject :
	public GameObject
{
public:
	PressEnterFontObject();
	~PressEnterFontObject();

	Font* font;
	FontRenderer* fontRenderer;
	wchar_t str[100];
};

