#include "stdafx.h"
#include "GameScene.h"
#include "Player.h"

void GameScene::Initialize()
{
	background = PushBackGameObject(new GameObject(L"resources/background/background.jpg"));
	background->transform->SetScale(1.4f, 1.4f);

	e1 = (Enemy1*)PushBackGameObject(new Enemy1());
	e1->transform->SetPosition(200.0f,100.0f);

	e2 = (Enemy2*)PushBackGameObject(new Enemy2());
	e2->transform->SetPosition(400.0f, 100.0f);

	e3 = (Enemy3*)PushBackGameObject(new Enemy3());
	e3->transform->SetPosition(600.0f, 100.0f);

	player = (Player*)PushBackGameObject(new Player());
	player->enemy1 = e1;
	player->enemy2 = e2;
	player->enemy3 = e3;
	//player->se->Play();	배경음악 재생 마지막에 풀기!!
}