#pragma once
#include "Scene.h"
#include "Player.h"
#include "SoundEvent.h"

class GameScene :
	public Scene
{
public:
	GameScene();
	~GameScene();

	SoundEvent* se;

	virtual void Initialize();
	Player* player;
	GameObject* background;
};
