#pragma once
#include "SceneMgr.h"

class Application
{
private:
	Application();
	~Application();

	WindowData A_WindowData;
	SceneMgr A_SceneMgr;

public:
	static Application* Create()
	{
		static Application p;
		return &p;
	}

	void Initialize(WindowData);
	void Update();
	void Render();
	void Destroy();

};

