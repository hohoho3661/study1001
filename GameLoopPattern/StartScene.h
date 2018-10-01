#pragma once

// 실행시켯을때 젤 먼저 나오는 씬.

class StartScene : public GameNode
{
	RECT	selectButton;

public:
	StartScene();
	~StartScene();

	virtual bool Init();
	virtual void Release();
	virtual void Update();
	virtual void Render(HDC hdc);
};

