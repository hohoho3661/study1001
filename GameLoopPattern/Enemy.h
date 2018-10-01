#pragma once



class Enemy
{
private:
	Image *		_enemy;
	RECT		_rc;
	Animation*	_ani;




public:
	Enemy();
	~Enemy();

	bool Init();
	void Release();
	void Update();
	void Render(HDC hdc);
};

