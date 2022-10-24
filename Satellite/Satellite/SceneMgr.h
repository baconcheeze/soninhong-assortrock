#pragma once
#include "Scene.h"



class SceneMgr
{
public:
	SceneMgr();
	~SceneMgr();

	void Initialize(WindowData);
	void Update();
	void Render();
	void Destroy();

private:
	std::vector<Scene*> Scenes;
	
};

