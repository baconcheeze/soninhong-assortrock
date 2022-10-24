#pragma once
class TimeMgr
{
private:
	TimeMgr();
	~TimeMgr();

	LARGE_INTEGER m_PrevCount;
	LARGE_INTEGER m_CurCount;
	LARGE_INTEGER m_Frequency;
	double delta_time;

public:
	static TimeMgr* Create()
	{
		static TimeMgr p;
		return &p;
	}

	void Initialize();
	void Update();
	double dt() { return delta_time; }
};

