#pragma once
#include "GameNode.h"



class MainGame : public GameNode
{
private:


public:
	MainGame();
	virtual ~MainGame();
	//==========================================

	

	//==========================================

	virtual bool Init();
	virtual void Release();
	virtual void Update();
	virtual void Render(HDC hdc);
};