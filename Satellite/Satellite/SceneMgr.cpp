#include "pch.h"
#include "SceneMgr.h"
#include "PlayScene.h"

SceneMgr::SceneMgr()
	:Scenes{}
{
}

SceneMgr::~SceneMgr()
{
}

void SceneMgr::Initialize(WindowData windowdata)
{
	Scenes.push_back(new PlayScene);

	for (int i = 0; i < Scenes.size(); i++)
	{
		Scenes[i]->Initialize(windowdata);
	}
}

void SceneMgr::Update()
{
	for (int i = 0; i < Scenes.size(); i++)
	{
		Scenes[i]->Update();
	}
}

void SceneMgr::Render()
{
	for (int i = 0; i < Scenes.size(); i++)
	{
		Scenes[i]->Render();
	}
}

void SceneMgr::Destroy()
{
	for (int i = 0; i < Scenes.size(); i++)
	{
		Scenes[i]->Destroy();

	}
}
