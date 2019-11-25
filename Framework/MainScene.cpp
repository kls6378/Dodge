#include "stdafx.h"
#include "MainScene.h"
#include "InputManager.h"
#include "MainFontObject.h"
#include "PressEnterFontObject.h"
#include "TutorialScene.h"

void MainScene::Initialize()
{
	background = PushBackGameObject(new GameObject(L"resources/background/background.jpg"));
	background->transform->SetScale(1.4f, 1.4f);

	PushBackGameObject(new MainFontObject());
	PushBackGameObject(new PressEnterFontObject());
}

void MainScene::Update() {
	if (InputManager::GetKeyUp(13)) {
		Scene::ChangeScene(new TutorialScene());
	}
}