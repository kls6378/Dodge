#include "stdafx.h"
#include "Enemy1.h"
#include "InputManager.h"

Enemy1::Enemy1()
	:GameObject(L"resources/enemy/enemy1.png"),
	colEnemy1(*transform, Vector2(75.0f, 75.0f))
{
	transform->SetScale(3.0f, 3.0f);
}

void Enemy1::Update()
{
	//InputManager::GetMouseVector2(), InputManager::GetMouseX()를 통해 마우스 위치를 반환받을 수 있습니다.
	if (colEnemy1.Intersected(InputManager::GetMouseVector2()))	//충돌처리, Player를 참고하세요.
		printf("enemy1 마우스 충돌\n");
}
