#pragma once
#include "GameObj.h"

class SatelliteObj:public GameObj
{
public:
	SatelliteObj();
	~SatelliteObj();

	virtual void Initialize();
	virtual void Update();
	virtual void Render(HDC hdc);
	virtual void Destroy();
};

