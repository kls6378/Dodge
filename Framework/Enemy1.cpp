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
	//InputManager::GetMouseVector2(), InputManager::GetMouseX()�� ���� ���콺 ��ġ�� ��ȯ���� �� �ֽ��ϴ�.
	if (colEnemy1.Intersected(InputManager::GetMouseVector2()))	//�浹ó��, Player�� �����ϼ���.
		printf("enemy1 ���콺 �浹\n");
}
