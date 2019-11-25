#include "stdafx.h"
#include "TutorialScene.h"
#include "InputManager.h"
#include "TutorialFontObject.h"
#include "PressEnterFontObject.h"
#include "GameScene.h"

void TutorialScene::Initialize()
{
	background = PushBackGameObject(new GameObject(L"resources/background/background.jpg"));
	background->transform->SetScale(1.4f, 1.4f);

	PushBackGameObject(new TutorialFontObject());
	PushBackGameObject(new PressEnterFontObject());
}

void TutorialScene::Update() {
	if (InputManager::GetKeyUp(13)) {
		Scene::ChangeScene(new GameScene());
	}
}