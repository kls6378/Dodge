#pragma once
#include "GameObject.h"
#include "Player.h"			
#include "EnemyManager.h"
#include "GameScene.h"

class PhysicsManager :
	public GameObject
{
public:
	PhysicsManager(Player* p,
		EnemyManager* em, BulletManager* bm);
	~PhysicsManager();
	Player* p;
	EnemyManager* em;
	BulletManager* bm;
	GameScene* gs;
	virtual void LateUpdate();
};