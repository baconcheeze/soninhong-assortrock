#pragma once
#include <Windows.h>

class TimeMgr
{
private:
	TimeMgr();
	~TimeMgr();

	LARGE_INTEGER m_llCurCount;
	LARGE_INTEGER m_llPrevCount;
	LARGE_INTEGER m_llFrequency;
	double delta_time;
	static int m_FPS;
	static int m_count;

	void set_dt(double dt)
	{
		delta_time = dt;
	}

public:
	static TimeMgr* Create()
	{
		static TimeMgr p;
		return &p;
	}

	void Initialize();
	void Update();

	double dt()
	{
		return delta_time;
	}
};

