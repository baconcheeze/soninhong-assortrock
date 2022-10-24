#include "pch.h"
#include "SatelliteObj.h"
#include "TimeMgr.h"

SatelliteObj::SatelliteObj()
{
}

SatelliteObj::~SatelliteObj()
{
}

void SatelliteObj::Initialize()
{
	pos.x = 100;
	pos.y = 100;
	scale.x = 100;
	scale.y = 100;
}

void SatelliteObj::Update()
{
	pos.y += 100 * TimeMgr::Create()->dt();
 

	
}

void SatelliteObj::Render(HDC hdc)
{
	Ellipse(hdc, pos.x - scale.x / 2, pos.y - scale.y / 2, pos.x + scale.x / 2, pos.y + scale.y / 2);
}

void SatelliteObj::Destroy()
{
}
