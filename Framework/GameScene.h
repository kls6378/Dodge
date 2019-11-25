#pragma once
#include "Scene.h"
#include "GameObject.h"
#include "Player.h"

//����� ������ ��ü�� �ʿ��մϴ�.
//Scene�� ��ӹ޾� ��ü�� �����մϴ�.
class GameScene :
	public Scene
{
public:
	virtual void Initialize();		//��� Scene���� �ݵ�� Initialize�Լ��� �־���մϴ�. (�߻� Ŭ���� ����)
public:
	GameObject* background;
	Enemy1* e1;
	Enemy2* e2;
	Enemy3* e3;
	Player* player;
};
