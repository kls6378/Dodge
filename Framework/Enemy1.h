#pragma once
#include "GameObject.h"
#include "AABBCollider.h"

class Enemy1 :
	public GameObject
{
public:
	Enemy1();
public:
	AABBCollider colEnemy1;
	GameObject* player;

	void Update();
};

