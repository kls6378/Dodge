#include "stdafx.h"
#include "GameOverScene.h"
#include "InputManager.h"
#include "PressEnterFontObject.h"
#include "GameOverFont.h"

void GameOverScene::Initialize()
{
	background = PushBackGameObject(new GameObject(L"resources/background/background.jpg"));
	background->transform->SetScale(1.4f, 1.4f);

	PushBackGameObject(new GameOverFont());
	PushBackGameObject(new PressEnterFontObject());
}

void GameOverScene::Update() {
	if (InputManager::GetKeyUp(13)) {
		Scene::ChangeScene(new GameScene());
	}
}