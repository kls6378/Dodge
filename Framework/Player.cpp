#include "stdafx.h"
#include "Player.h"
#include "InputManager.h"
#include "GameScene.h"

Player::Player()
	:GameObject(L"resources/player/player.png"),
	moveSpeed(10.0f),
	col(*transform, Vector2(50.0f, 100.0f))
{		
	//��ü�� ��ġ, ����, ũ�������� transform�� ��ϵǾ��ֽ��ϴ�. Transform.h, GameObject.h ����
	transform->SetPosition(600.0f, 600.0f);	//Player�� �ʱ� ��ġ ����
	transform->SetScale(1.4f, 1.4f);
	/*se = new SoundEvent();	���� ���߿� Ǯ��!!
	se->LoadFile(L"resources/sound/bgm.mp3");*/

	//���� Scene�� ������ �����ôٸ� �Ʒ��� ���� ����Ͻø� �˴ϴ�.
	GameScene& scene = (GameScene&)Scene::GetCurrentScene();
}

void Player::Update()
{
	if (InputManager::GetMyKeyState(VK_UP))
		transform->position.y -= moveSpeed;
	if (InputManager::GetMyKeyState(VK_DOWN))
		transform->position.y += moveSpeed;
	if (InputManager::GetMyKeyState(VK_RIGHT))
		transform->position.x += moveSpeed;
	if (InputManager::GetMyKeyState(VK_LEFT))
		transform->position.x -= moveSpeed; 
}

void Player::LateUpdate()
{
	static int count = 0;
	//�浹ó���� Update���� �̵��� �� ���� �� LateUpdate���� �������־�� �����մϴ�.
	//(GameObject�� Update ���� ������ ���� ���� �߻� ���ɼ�O)

	//��ü�� CircleCollider Ȥ�� AABBCollider�� ����� ��, �浹ó���� ���ݴϴ�.
	//OBB, ĸ�� �� �ٸ� ������ �浹ü�� ����ϰ� ������ ��� ���� �������ּž� �մϴ�.
	//��ü�� �浹���� ����� ��ü�� �����Ͽ� �浹�� �����ϴ� �͵� ��õ�帳�ϴ�.
	//collider�� intersected�Լ��� ȣ���Ͽ� �浹 ���θ� Ȯ���� �� �ֽ��ϴ�.
	if (col.Intersected(enemy1->colEnemy1))
	{
		printf("enemy1�̶� �浹%d\n",count++);
	}
	if (col.Intersected(enemy2->colEnemy2))
	{
		printf("enemy2�� �浹%d\n", count++);
	}
	if (col.Intersected(enemy3->colEnemy3))
	{
		printf("enemy3�̶� �浹%d\n", count++);
	}
	if (col.Intersected(InputManager::GetMouseVector2()))	//�浹ó��, Player�� �����ϼ���.
		printf("�÷��̾� ���콺 �浹\n");
}
