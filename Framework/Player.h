#pragma once
#include "GameObject.h"
#include "CircleCollider.h"

class Player :
	public GameObject
{
public:
	Player(const wchar_t* path);
	~Player();

	virtual void Update();

	float moveSpeed;
	void Move();
	
	CircleCollider* colPlayer;
};