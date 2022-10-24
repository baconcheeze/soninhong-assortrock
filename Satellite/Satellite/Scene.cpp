#include "pch.h"
#include "Scene.h"

Scene::Scene()
	:S_bitmap(0)
	,S_dc(0)
	,S_windowdata{}
{
}

Scene::~Scene()
{
}

void Scene::Initialize(WindowData windowdata)
{
	S_windowdata = windowdata;
	S_bitmap = CreateCompatibleBitmap(windowdata.hdc, windowdata.width, windowdata.height);
	S_dc = CreateCompatibleDC(windowdata.hdc);

	//HBRUSH brush = CreateSolidBrush(RGB(1, 0, 0));
	//SelectObject(S_dc, brush);
	
	HBITMAP holdmap = (HBITMAP)SelectObject(S_dc, S_bitmap);
	DeleteObject(holdmap);

	Rectangle(S_dc, -1, -1, S_windowdata.width + 1, S_windowdata.height + 1);
}

void Scene::Update()
{
	
}

void Scene::Render()
{
	BitBlt(S_windowdata.hdc, 0, 0, S_windowdata.width, S_windowdata.height, S_dc, 0, 0, SRCCOPY);
}

void Scene::Destroy()
{
}
