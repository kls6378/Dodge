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
	//InputManager::GetMouseVector2(), InputManager::GetMouseX()�� ���� ���콺 ��ġ�� ��ȯ���� �� �ֽ��ϴ�.
	if (colEnemy2.Intersected(InputManager::GetMouseVector2()))	//�浹ó��, Player�� �����ϼ���.
		printf("enemy2 ���콺 �浹\n");
}
