#pragma once
#include "GameObject.h"
#include "AABBCollider.h"
#include "Enemy1.h"
#include "Enemy2.h"
#include "Enemy3.h"
#include "Scene.h"
#include "SoundEvent.h"

//Player는 임의로 생성한 객체입니다.
//게임 내의 오브젝트는 GameObject객체를 상속받아 생성하여야합니다.
class Player :
	public GameObject
{
public:
	float moveSpeed;		

	AABBCollider col;		//충돌을 관리할 변수
	Enemy1* enemy1;		//게임 내 다른 객체
	Enemy2* enemy2;
	Enemy3* enemy3;

	SoundEvent* se;

	Player();					//Player생성자
	virtual void Update();		//Update: 매 프레임 호출됩니다.
	virtual void LateUpdate();	//LateUpdate: 매 프레임 Update, Render가 실행된 이후 호출됩니다.
};