#pragma once
class LoadingScene : public GameNode
{
public:
	LoadingScene();
	~LoadingScene();

	virtual bool Init();
	virtual void Release();
	virtual void Update();
	virtual void Render(HDC hdc);
};

