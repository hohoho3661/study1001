#include "stdafx.h"
#include "StartScene.h"



StartScene::StartScene()
{
}


StartScene::~StartScene()
{
}

bool StartScene::Init()
{
	IMAGEMANAGER->findImage(TEXT("StartImage"));
	selectButton = RectMakeCenter(WINSIZEX / 2, WINSIZEY / 2, 100, 100);

	return true;
}

void StartScene::Release()
{
}

void StartScene::Update()
{
	if (KEYMANAGER->isOnceKeyDown(VK_LBUTTON))
	{
		GetCursorPos(&_ptMouse);				// 전체화면기준
		ScreenToClient(_hWnd, &_ptMouse);		// 클라이언트 기준으로 바꿔줌

		if (PtInRect(&selectButton, _ptMouse))
		{
			SCENEMANAGER->ChangeScene("InGame");
		}
	}
}

void StartScene::Render(HDC hdc)
{
	IMAGEMANAGER->Render(TEXT("StartImage"), hdc);
	Rectangle(hdc, selectButton.left, selectButton.top, selectButton.right, selectButton.bottom);	
}
