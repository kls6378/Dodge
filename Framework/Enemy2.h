#pragma once
#include "GameObject.h"
#include "AABBCollider.h"

class Enemy2 :
	public GameObject
{
public:
	Enemy2();
public:
	AABBCollider colEnemy2;
	GameObject* player;

	void Update();
};

