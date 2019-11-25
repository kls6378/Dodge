#include "stdafx.h"
#include "Framework.h"
#include "GameScene.h"
#include "Math.h"
#include "MainScene.h"

int main()
{
	Framework& f = Framework::GetInstance();
	f.Run(new MainScene(),L"Dodge!!", 640, 415, false);
	return 0;
}