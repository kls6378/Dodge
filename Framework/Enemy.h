#pragma once
#include "GameObject.h"
#include "BulletManager.h"
#include "CircleCollider.h"

class Enemy :
	public GameObject
{
public:
	Enemy(const wchar_t* path, BulletManager* bm, float speed, float speedRate, float angle);
	~Enemy();
	
	virtual void Update();

	CircleCollider* colEnemy;

	BulletManager* bm;
	float timer;
	float delay;
	float speed;
	float speedRate;
	float angle;
	void Shoot();
	void CreateBullet(float speed, float angle);
};