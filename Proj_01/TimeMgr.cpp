#include "TimeMgr.h"

int TimeMgr::m_count = 0;
int TimeMgr::m_FPS = 0;

TimeMgr::TimeMgr()
	:m_llCurCount{}
	,m_llPrevCount{}
	,m_llFrequency{}
	,delta_time(0)
{
}

TimeMgr::~TimeMgr()
{
}

void TimeMgr::Initialize()
{
	//현재 카운트
	QueryPerformanceCounter(&m_llPrevCount);

	//현재 프리퀀시
	QueryPerformanceFrequency(&m_llFrequency);
}

void TimeMgr::Update()
{
	QueryPerformanceCounter(&m_llCurCount);

	set_dt((double)(m_llCurCount.QuadPart - m_llPrevCount.QuadPart) / (double)m_llFrequency.QuadPart); // 한 프레임이 넘어갈때의 시간

	m_count += (m_llCurCount.QuadPart - m_llPrevCount.QuadPart);
	m_llPrevCount = m_llCurCount;

	m_FPS += 1;

}
