#pragma once
#include "Scene.h"
#include "GameObject.h"

class TutorialScene :
	public Scene
{
	virtual void Initialize();
	void Update();
	GameObject* background;
};

