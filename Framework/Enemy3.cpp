#include "stdafx.h"
#include "Enemy3.h"
#include "InputManager.h"

Enemy3::Enemy3()
	:GameObject(L"resources/enemy/enemy3.png"),
	colEnemy3(*transform, Vector2(75.0f, 75.0f))
{
	transform->SetScale(3.0f, 3.0f);
}

void Enemy3::Update()
{
	//InputManager::GetMouseVector2(), InputManager::GetMouseX()를 통해 마우스 위치를 반환받을 수 있습니다.
	if (colEnemy3.Intersected(InputManager::GetMouseVector2()))	//충돌처리, Player를 참고하세요.
		printf("enemy3 마우스 충돌\n");
}
