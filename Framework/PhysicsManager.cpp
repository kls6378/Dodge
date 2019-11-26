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
			printf("�Ѿ�, �÷��̾� �浹\n");
		}
	}

	for (auto& i : em->enemyList)
	{
		if (i->colEnemy->Intersected(*p->colPlayer))
		{
			Scene::ChangeScene(new GameOverScene());
			printf("��, �÷��̾� �浹\n");
		}
	}
}


PhysicsManager::~PhysicsManager()
{
}
