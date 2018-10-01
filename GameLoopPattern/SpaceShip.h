#pragma once
class SpaceShip
{
	RECT		rc;
	POINT		pt;
	
	float		speed;

	Image*		image;


public:
	SpaceShip();
	~SpaceShip();

	bool Init();
	void Release();
	void Update();
	void Render(HDC hdc);

};

