#include "stdafx.h"
#include "Player.h"
#include "InputManager.h"
#include "GameScene.h"

Player::Player()
	:GameObject(L"resources/player/player.png"),
	moveSpeed(10.0f),
	col(*transform, Vector2(50.0f, 100.0f))
{		
	//객체의 위치, 각도, 크기조정은 transform에 등록되어있습니다. Transform.h, GameObject.h 참고
	transform->SetPosition(600.0f, 600.0f);	//Player의 초기 위치 설정
	transform->SetScale(1.4f, 1.4f);
	/*se = new SoundEvent();	음악 나중에 풀기!!
	se->LoadFile(L"resources/sound/bgm.mp3");*/

	//현재 Scene을 얻어오고 싶으시다면 아래와 같이 사용하시면 됩니다.
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
	//충돌처리는 Update에서 이동이 다 끝난 후 LateUpdate에서 시행해주어야 안전합니다.
	//(GameObject의 Update 실행 순서에 따라 오류 발생 가능성O)

	//객체에 CircleCollider 혹은 AABBCollider를 등록한 후, 충돌처리를 해줍니다.
	//OBB, 캡슐 등 다른 형태의 충돌체를 사용하고 싶으신 경우 직접 구현해주셔야 합니다.
	//물체의 충돌만을 담당할 객체를 생성하여 충돌을 관리하는 것도 추천드립니다.
	//collider의 intersected함수를 호출하여 충돌 여부를 확인할 수 있습니다.
	if (col.Intersected(enemy1->colEnemy1))
	{
		printf("enemy1이랑 충돌%d\n",count++);
	}
	if (col.Intersected(enemy2->colEnemy2))
	{
		printf("enemy2랑 충돌%d\n", count++);
	}
	if (col.Intersected(enemy3->colEnemy3))
	{
		printf("enemy3이랑 충돌%d\n", count++);
	}
	if (col.Intersected(InputManager::GetMouseVector2()))	//충돌처리, Player를 참고하세요.
		printf("플레이어 마우스 충돌\n");
}
