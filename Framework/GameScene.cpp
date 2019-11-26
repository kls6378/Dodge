#include "stdafx.h"
#include "GameScene.h"
#include "PhysicsManager.h"

GameScene::GameScene()
{
}


GameScene::~GameScene()
{
}

void GameScene::Initialize()
{
	background = PushBackGameObject(new GameObject(L"resources/background/background.jpg"));
	background->transform->SetScale(1.4f, 1.4f);

	se = new SoundEvent();
	se->LoadFile(L"resources/sound/bgm.mp3");
	se->Play();

	BulletManager* bm = (BulletManager*)PushBackGameObject(new BulletManager());

	player = (Player*)PushBackGameObject(new Player(L"resources/player/Player.png"));
	player->transform->SetPosition(600.0f, 600.0f);

	EnemyManager* em = (EnemyManager*)PushBackGameObject(new EnemyManager());
	PhysicsManager* pm = (PhysicsManager*)PushBackGameObject(new PhysicsManager(player, em, bm));

	em->setEM(em);
	em->SetBM(bm);
}