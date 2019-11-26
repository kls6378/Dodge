#pragma once
#include "GameObject.h"
#include "CircleCollider.h"			
class Bullet :
	public GameObject
{
public:
	Bullet(const wchar_t* path,
		float speed, float speedRate,
		float angle, float angleRate,
		float damage);
	~Bullet();
	float speed;					//속도
	float speedRate;				//가속도
	float angle;					//각도
	float angleRate;				//각속도

	bool CheckOutOfScreen();		//화면 나갔는지

	CircleCollider* colBullet;			//충돌체


	virtual void Update();
	virtual void Move();
	virtual void Destroy();
};

