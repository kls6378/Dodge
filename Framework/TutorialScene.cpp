#include "stdafx.h"
#include "TutorialScene.h"
#include "TutorialFontObject.h"
#include "PressEnterFontObject.h"

void TutorialScene::Initialize()
{
	PushBackGameObject(new TutorialFontObject());
	PushBackGameObject(new PressEnterFontObject());
}