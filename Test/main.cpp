#include<DxLib.h>

struct Vector2
{
	float x, y;

};

using Position2 = Vector2;

struct Rect
{
	Position2 center;
	float w, h;//íÜêSÇ©ÇÁç∂í[Ç™Ç«ÇÍÇ≠ÇÁÇ¢ó£ÇÍÇƒÇ¢ÇÈÇ©
	float Left()const
	{
		return center.x - w;

	}

	float Right()const
	{
		return center.x + w;

	}

	float Top()const
	{
		return center.y - h;

	}

	float bottom()const
	{
		return center.y + h;

	}
};

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	ChengeWindowMode(true);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);

	Rect rc = { 200, 200, 50, 100 };


}