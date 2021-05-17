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
	ChangeWindowMode(true);
	SetGraphMode(960, 540, 32);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);

	Rect rc = { 200, 200, 50, 100 };

	char keystate[256];
	constexpr float speed = 4.0f;


	while (ProcessMessage() != -1)
	{
		ClearDrawScreen();
		GetHitKeyStateAll(keystate);
		if (keystate[KEY_INPUT_UP])
		{
			rc.center.y -= speed;
		}

		if (keystate[KEY_INPUT_DOWN])
		{
			rc.center.y += speed;

		}

		if (keystate[KEY_INPUT_RIGHT])
		{
			rc.center.x += speed;
		}

		if (keystate[KEY_INPUT_LEFT])
		{
			rc.center.x -= speed;
		}


		DrawBox(rc.Left(), rc.Top(), rc.Right(), rc.bottom(), 0xfffff, true);
		ScreenFlip();
	}

	DxLib_End();
}