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
	//InputManager::GetMouseVector2(), InputManager::GetMouseX()�� ���� ���콺 ��ġ�� ��ȯ���� �� �ֽ��ϴ�.
	if (colEnemy3.Intersected(InputManager::GetMouseVector2()))	//�浹ó��, Player�� �����ϼ���.
		printf("enemy3 ���콺 �浹\n");
}
