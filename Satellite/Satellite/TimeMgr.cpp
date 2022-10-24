#include "pch.h"
#include "TimeMgr.h"

TimeMgr::TimeMgr()
	:m_PrevCount{}
	,m_CurCount{}
	,m_Frequency{}
	,delta_time(0)
{

}

TimeMgr::~TimeMgr()
{
}

void TimeMgr::Initialize()
{
	QueryPerformanceCounter(&m_PrevCount);

	QueryPerformanceFrequency(&m_Frequency);
}

void TimeMgr::Update()
{
	QueryPerformanceCounter(&m_CurCount);

	delta_time = ((double)m_CurCount.QuadPart - (double)m_PrevCount.QuadPart) / (double)m_Frequency.QuadPart;

	m_PrevCount = m_CurCount;
}
