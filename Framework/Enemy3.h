#pragma once
#include "GameObject.h"
#include "AABBCollider.h"

class Enemy3 :
	public GameObject
{
public:
	Enemy3();
public:
	AABBCollider colEnemy3;
	GameObject* player;

	void Update();
};

