#include "stdafx.h"
#include "PhysicsManager.h"
#include "Scene.h"
#include "GameOverScene.h"


PhysicsManager::PhysicsManager(
	Player* p,
	EnemyManager* em, BulletManager* bm)
	:p(p), em(em), bm(bm)
{
}

void PhysicsManager::LateUpdate()
{
	if (!bm || !em || !p)
		return;

	for (auto& i : bm->enemyBullet)
	{
		if (i->colBullet->Intersected(*p->colPlayer))
		{
			Scene::ChangeScene(new GameOverScene());
			printf("총알, 플레이어 충돌\n");
		}
	}

	for (auto& i : em->enemyList)
	{
		if (i->colEnemy->Intersected(*p->colPlayer))
		{
			Scene::ChangeScene(new GameOverScene());
			printf("적, 플레이어 충돌\n");
		}
	}
}


PhysicsManager::~PhysicsManager()
{
}
