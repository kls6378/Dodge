#pragma once
#include "GameObject.h"
#include "AABBCollider.h"
#include "Enemy1.h"
#include "Enemy2.h"
#include "Enemy3.h"
#include "Scene.h"
#include "SoundEvent.h"

//Player�� ���Ƿ� ������ ��ü�Դϴ�.
//���� ���� ������Ʈ�� GameObject��ü�� ��ӹ޾� �����Ͽ����մϴ�.
class Player :
	public GameObject
{
public:
	float moveSpeed;		

	AABBCollider col;		//�浹�� ������ ����
	Enemy1* enemy1;		//���� �� �ٸ� ��ü
	Enemy2* enemy2;
	Enemy3* enemy3;

	SoundEvent* se;

	Player();					//Player������
	virtual void Update();		//Update: �� ������ ȣ��˴ϴ�.
	virtual void LateUpdate();	//LateUpdate: �� ������ Update, Render�� ����� ���� ȣ��˴ϴ�.
};