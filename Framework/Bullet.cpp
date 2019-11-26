#include "stdafx.h"
#include "Bullet.h"
#include "TimeManager.h"
#include "Framework.h"
#define PI 3.141592f


Bullet::Bullet(const wchar_t* path,
	float speed, float speedRate,
	float angle, float angleRate,
	float damage)
	:GameObject(path),
	speed(speed), speedRate(speedRate),
	angle(angle), angleRate(angleRate)
{
	this->speed = speed;
	colBullet = new CircleCollider(
		*transform, renderer->GetSprite().GetSize().x * 0.5f);
}


Bullet::~Bullet()
{
}

void Bullet::Update()
{
	Move();
	CheckOutOfScreen();
}

void Bullet::Move()
{
	//움직일 때 사용할 함수
	float rad = PI * angle * 2.0f;

	transform->position.x
		+= (speed * cosf(rad)
			* TimeManager::GetDeltaTime());
	transform->position.y
		+= (speed * sinf(rad)
			* TimeManager::GetDeltaTime());

	angle += angleRate;
	speed += speedRate;
}

void Bullet::Destroy()
{
	//삭제될 때 실행할 함수
}


bool Bullet::CheckOutOfScreen()
{
	//총알의 포지션값과, 총알의 이미지 크기를 고려해서
	//총알이 밖에 나갔는지 판정해주어야 함.
	int sw = Framework::GetInstance().GetWinApp().GetScreenWidth();
	int sh = Framework::GetInstance().GetWinApp().GetScreenHeight();
	int bw = renderer->GetSprite().GetSize().x;
	int bh = renderer->GetSprite().GetSize().y;
	Vector2 pos = transform->position;
	Vector2 scale = transform->scale;
	return pos.x<scale.x * bw * (-1.0f) ||
		pos.x>scale.x * bw + sw ||
		pos.y<scale.y * bh * (-1.0f) ||
		pos.y>scale.y * bh + sh;
}