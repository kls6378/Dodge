#include "stdafx.h"
#include "GameScene.h"
#include "Player.h"
#include "MainFontObject.h"

void GameScene::Initialize()
{
	TestObject* t = (TestObject*)PushBackGameObject(new TestObject());		//�׽�Ʈ�� ������Ʈ�Դϴ�.
	t->transform->SetPosition(200.0f,100.0f);

	player = (Player*)PushBackGameObject(new Player());			//������Ʈ�� �����ϰ� �ʹٸ�, PushBackGameObject�Լ��� ȣ���Ͽ� �����մϴ�.
	player->enemy = t;

	PushBackGameObject(new MainFontObject());
}
