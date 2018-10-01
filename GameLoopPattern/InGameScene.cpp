#include "stdafx.h"
#include "InGameScene.h"
#include "SpaceShip.h"


InGameScene::InGameScene()
{
}


InGameScene::~InGameScene()
{
}

bool InGameScene::Init()
{	
	IMAGEMANAGER->findImage(TEXT("InGameImage"));

	ship = new SpaceShip;
	ship->Init();
	
	return true;
}

void InGameScene::Release()
{
	SAFE_DELETE(ship);
}

void InGameScene::Update()
{
	ship->Update();
}

void InGameScene::Render(HDC hdc)
{
	IMAGEMANAGER->Render(TEXT("InGameImage"), hdc);
	ship->Render(hdc);
}
