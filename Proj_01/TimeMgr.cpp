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
	//���� ī��Ʈ
	QueryPerformanceCounter(&m_llPrevCount);

	//���� ��������
	QueryPerformanceFrequency(&m_llFrequency);
}

void TimeMgr::Update()
{
	QueryPerformanceCounter(&m_llCurCount);

	set_dt((double)(m_llCurCount.QuadPart - m_llPrevCount.QuadPart) / (double)m_llFrequency.QuadPart); // �� �������� �Ѿ���� �ð�

	m_count += (m_llCurCount.QuadPart - m_llPrevCount.QuadPart);
	m_llPrevCount = m_llCurCount;

	m_FPS += 1;

}
