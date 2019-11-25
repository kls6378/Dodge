#pragma once
#include "Scene.h"
#include "GameObject.h"

class MainScene :
	public Scene
{
public:
	virtual void Initialize();
	void Update();
	GameObject* background;
};

