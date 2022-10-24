#pragma once
struct WindowData
{
	HWND hwnd;
	HDC hdc;
	int height;
	int width;

	void clear()
	{
		hwnd = 0;
		hdc = 0;
		height = 0;
		width = 0;
	}

};

struct doublepoint
{
	double x;
	double y;
};