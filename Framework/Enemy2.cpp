#include "stdafx.h"
#include "Enemy2.h"
#include "InputManager.h"

Enemy2::Enemy2()
	:GameObject(L"resources/enemy/enemy2.png"),
	colEnemy2(*transform, Vector2(75.0f, 75.0f))
{
	transform->SetScale(3.0f, 3.0f);
}

void Enemy2::Update()
{
	//InputManager::GetMouseVector2(), InputManager::GetMouseX()를 통해 마우스 위치를 반환받을 수 있습니다.
	if (colEnemy2.Intersected(InputManager::GetMouseVector2()))	//충돌처리, Player를 참고하세요.
		printf("enemy2 마우스 충돌\n");
}
