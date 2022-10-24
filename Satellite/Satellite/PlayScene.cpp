#include "pch.h"
#include "PlayScene.h"
#include "SatelliteObj.h"

PlayScene::PlayScene()
	:PlayScene_GameObj{}
{
}

PlayScene::~PlayScene()
{
}


void PlayScene::Initialize(WindowData windowdata)
{
	Scene::Initialize(windowdata);

	PlayScene_GameObj.push_back(new SatelliteObj);

	PlayScene_GameObj[0]->Initialize();
}


void PlayScene::Update()
{
	for (int i = 0; i < PlayScene_GameObj.size(); ++i)
	{
		PlayScene_GameObj[i]->Update();
	}
	

	
}


void PlayScene::Render()
{
	Rectangle(S_dc, -1, -1, S_windowdata.width + 1, S_windowdata.height + 1);

	for (int i = 0; i < PlayScene_GameObj.size(); ++i)
	{
		PlayScene_GameObj[i]->Render(S_dc);
	}

	Scene::Render();
}

void PlayScene::Destroy()
{
}
