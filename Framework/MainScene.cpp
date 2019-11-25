#include "stdafx.h"
#include "MainScene.h"
#include "InputManager.h"
#include "MainFontObject.h"
#include "PressEnterFontObject.h"
#include "TutorialScene.h"

void MainScene::Initialize()
{
	PushBackGameObject(new MainFontObject());
	PushBackGameObject(new PressEnterFontObject());
}

void MainScene::Update() {
	if (InputManager::GetMyKeyState(13)) {
		Scene::ChangeScene(new TutorialScene());
	}
}