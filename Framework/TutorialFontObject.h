#pragma once
#include "GameObject.h"
#include "FontRenderer.h"

class TutorialFontObject :
	public GameObject
{
public:
	TutorialFontObject();
	~TutorialFontObject();

	Font* font;
	FontRenderer* fontRenderer;
	wchar_t str[100];
};

