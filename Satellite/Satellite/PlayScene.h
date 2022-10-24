#pragma once
#include "Scene.h"
#include "GameObj.h"

class PlayScene:public Scene
{
public:
	PlayScene();
	~PlayScene();
	
	virtual void Initialize(WindowData);
	virtual void Update();
	virtual void Render();
	virtual void Destroy();

private:
	std::vector<GameObj*> PlayScene_GameObj;
	
};

