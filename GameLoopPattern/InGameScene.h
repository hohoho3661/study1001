#pragma once

class SpaceShip;

class InGameScene : public GameNode
{
	SpaceShip* ship;

public:
	InGameScene();
	~InGameScene();

	virtual bool Init();
	virtual void Release();
	virtual void Update();
	virtual void Render(HDC hdc);
};

