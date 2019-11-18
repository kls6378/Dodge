#include "stdafx.h"
#include "MainScene.h"
#include "MainFontObject.h"

void MainScene::Initialize()
{
	PushBackGameObject(new MainFontObject());
}