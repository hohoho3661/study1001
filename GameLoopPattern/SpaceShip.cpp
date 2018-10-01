#include "stdafx.h"
#include "SpaceShip.h"



SpaceShip::SpaceShip()
{
}


SpaceShip::~SpaceShip()
{
}

bool SpaceShip::Init()
{	
	image = IMAGEMANAGER->findImage(TEXT("Player"));
		
	pt.x = WINSIZEX / 2;
	pt.y = WINSIZEY - 100;

	image->SetX(pt.x);
	image->SetY(pt.y);

	speed = 5.f;



	return true;
}

void SpaceShip::Release()
{
}

void SpaceShip::Update()
{
	if (KEYMANAGER->isStayKeyDown(VK_LEFT))
	{
		pt.x -= speed;
	}
	if (KEYMANAGER->isStayKeyDown(VK_RIGHT))
	{
		pt.x += speed;
	}
	if (KEYMANAGER->isStayKeyDown(VK_UP))
	{
		pt.y -= speed;
	}
	if (KEYMANAGER->isStayKeyDown(VK_DOWN))
	{
		pt.y += speed;
	}

	rc = RectMakeCenter(pt.x, pt.y, image->GetWidth(), image->GetHeight());

}

void SpaceShip::Render(HDC hdc)
{
	image->Render(hdc, rc.left, rc.top);
}
