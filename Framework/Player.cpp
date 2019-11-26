#include "stdafx.h"
#include "Player.h"
#include "Scene.h"
#include "InputManager.h"
#include "TimeManager.h"


Player::Player(const wchar_t* path)
	:GameObject(path)
{
	moveSpeed = 300.0f;
	colPlayer = new CircleCollider(*transform, renderer->GetSprite().GetSize().x * 0.5f);
}

void Player::Update()
{
	Move();
}

void Player::Move()
{
	if (InputManager::GetMyKeyState(VK_UP))
		transform->position.y -= moveSpeed * TimeManager::GetDeltaTime();
	if (InputManager::GetMyKeyState(VK_DOWN))
		transform->position.y += moveSpeed * TimeManager::GetDeltaTime();
	if (InputManager::GetMyKeyState(VK_RIGHT))
		transform->position.x += moveSpeed * TimeManager::GetDeltaTime();
	if (InputManager::GetMyKeyState(VK_LEFT))
		transform->position.x -= moveSpeed * TimeManager::GetDeltaTime();
}


Player::~Player()
{
	SAFE_DELETE(colPlayer);
}