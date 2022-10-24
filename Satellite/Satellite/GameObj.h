#pragma once
class GameObj
{
public:
	GameObj();
	~GameObj();

	virtual void Initialize();
	virtual void Update();
	virtual void Render(HDC hdc);
	virtual void Destroy();

protected:
	doublepoint pos;
	doublepoint scale;
};

