#pragma once
#include "GameObject.h"
#include "Enemy.h"

class EnemyManager :
	public GameObject
{
public:
	EnemyManager();
	~EnemyManager();

	EnemyManager* em;
	BulletManager* bm;

	std::list<Enemy*> enemyList;

	float timer;
	float delay;
	float speed;
	float speedRate;
	float angle;

	Enemy* PushBackEnemy(Enemy* enemy);
	virtual void LateUpdate();

	void Destroy(Enemy* e);

	void SpawnEnemy();

	virtual void Update();

	void setEM(EnemyManager* em);
	void SetBM(BulletManager* bm);

private:
	std::list<Enemy*> destroyed;
	void RemoveDestroyed();
};

