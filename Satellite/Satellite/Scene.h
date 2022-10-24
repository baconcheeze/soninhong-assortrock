#pragma once
class Scene
{
public:
	Scene();
	~Scene();

	virtual void Initialize(WindowData);
	virtual void Update();
	virtual void Render();
	virtual void Destroy();


protected:
	HBITMAP S_bitmap;
	HDC S_dc;
	WindowData S_windowdata;
};

