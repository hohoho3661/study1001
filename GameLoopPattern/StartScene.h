#pragma once

// ����������� �� ���� ������ ��.

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

