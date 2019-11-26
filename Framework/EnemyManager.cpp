#include "stdafx.h"
#include "EnemyManager.h"
#include "Scene.h"
#include "TimeManager.h"
#include<cstdlib>
#include <string>
#include "Bullet.h"

EnemyManager::EnemyManager()
{
	timer = 0.0f;
	delay = 0.5f;
	speed = 20.0f;
}

EnemyManager::~EnemyManager()
{

}

void EnemyManager::setEM(EnemyManager* em)
{
	this->em = em;
}

void EnemyManager::SetBM(BulletManager* bm)
{
	this->bm = bm;
}

Enemy* EnemyManager::PushBackEnemy(Enemy* enemy)
{
	Scene::GetCurrentScene().PushBackGameObject(enemy);
	enemyList.push_back(enemy);
	return enemy;
}

void EnemyManager::SpawnEnemy() 
{
	static int count = 0;
	std::wstring nameARR[3] = { L"resources/enemy/enemy1.png",L"resources/enemy/enemy2.png",L"resources/enemy/enemy3.png" };
	int nameRand = rand() % 2 + 0;
	std::wstring name = nameARR[nameRand];
	float positionX;
	positionX = rand() % 1220 + 30;
	speedRate = rand() % 10 + 1;
	angle = rand() % 5 + 0;
	angle /= 10;

	if (timer > delay)
	{
		Enemy* enemy = em->PushBackEnemy(new Enemy(name.c_str(), bm,speed,speedRate,angle));
		enemy->transform->SetPosition(positionX, 50.0f);
		printf("%f\n", positionX);
		timer = 0.0f;
		count++;
	}
	timer += TimeManager::GetDeltaTime();
	if (count % 20 == 0 && count>0)
	{
		for (auto& i : enemyList)
		{
			Destroy(i);
		}
		if (speed != 100.0f)
		{
			speed += 10.0f;
		}
	}
	
}

void EnemyManager::Update()
{
	SpawnEnemy();
}

void EnemyManager::LateUpdate()
{
	RemoveDestroyed();
}

void EnemyManager::Destroy(Enemy* e)
{
	destroyed.push_back(e);
}

void EnemyManager::RemoveDestroyed()
{
	for (auto& i : destroyed)
	{
		enemyList.remove(i);
		Scene::GetCurrentScene().Destroy(i);
	}
	destroyed.clear();
}
