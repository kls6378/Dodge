#include "stdafx.h"
#include "Enemy.h"
#include "TimeManager.h"


Enemy::Enemy(const wchar_t* path, BulletManager* bm, float speed, float speedRate, float angle)
	:GameObject(path), bm(bm), speed(speed), speedRate(speedRate), angle(angle)
{
	colEnemy = new CircleCollider(
		*transform, renderer->GetSprite().GetSize().x * 0.5f);
	timer = 0.0f;
	delay = 0.5f;
}

void Enemy::Shoot()
{
	if (timer > delay)
	{
		CreateBullet(speed, angle);
		timer = 0.0f;
	}
	timer += TimeManager::GetDeltaTime();
}

void Enemy::CreateBullet(float speed, float angle)
{
	Bullet* b = bm->PushBackPlayerBullet(
		new Bullet(L"resources/bullet/bullet2.png", speed, speedRate, angle, 0.0f, 1.0f)
	);
	b->transform->position = transform->position;
}

void Enemy::Update()
{
	Shoot();
}

Enemy::~Enemy()
{
	SAFE_DELETE(colEnemy);
}
