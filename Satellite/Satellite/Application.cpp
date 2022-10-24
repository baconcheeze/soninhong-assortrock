#include "pch.h"
#include "Application.h"
#include "define.h"
#include "TimeMgr.h"

Application::Application()
	:A_SceneMgr{}
{
}

Application::~Application()
{
}

void Application::Initialize(WindowData windowdata)
{
	A_WindowData = windowdata;
	
	
	RECT rt = { 0,0,A_WindowData.width,A_WindowData.height };

	AdjustWindowRect(&rt, WS_OVERLAPPEDWINDOW, true);
	SetWindowPos(A_WindowData.hwnd, nullptr, 0, 0, rt.right - rt.left, rt.bottom - rt.top, 0);

	A_WindowData.hdc = GetDC(A_WindowData.hwnd);

	A_SceneMgr.Initialize(A_WindowData);
	
	TimeMgr::Create()->Initialize();
		
		
}

void Application::Update()
{
	TimeMgr::Create()->Update();

	A_SceneMgr.Update();
}

void Application::Render()
{
	A_SceneMgr.Render();
}

void Application::Destroy()
{
}
