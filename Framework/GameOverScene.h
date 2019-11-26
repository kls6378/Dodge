#pragma once
#include "Scene.h"
#include "GameObject.h"
#include "GameScene.h"

class GameOverScene :
	public Scene
{
	virtual void Initialize();
	void Update();
	GameObject* background;
	GameScene* gameScene;
};

