#pragma once
#include "Point.h"

constexpr int kGreenColor = 10;
constexpr int kGreenColorSolid = 34;
constexpr int kRedColor = 12;
constexpr int kRedColorSolid = 68;
constexpr int kBlueColor = 9;
constexpr int kBlueColorSolid = 153;
constexpr int kRegularColor = 7;

enum class ActorColor
{
Green = 10,
GreenSolid = 34,
Red = 12,
RedSolid = 68,
Blue = 9,
BlueSolid = 153,
Regular = 7,
};

enum class ActorType
{
	Door,
	Enemy,
	Goal,
	Key,
	Money,
	Player
};

class PlaceableActor
{
public:
	PlaceableActor(int x, int y, ActorColor color = ActorColor::Regular);
	virtual ~PlaceableActor();

	int GetXPosition();
	int GetYPosition();
	int* GetXPositionPointer();
	int* GetYPositionPointer();
	void SetPosition(int x, int y);

	ActorColor GetColor() { return m_color; }

	void Remove() { m_IsActive = false; }
	bool IsActive() { return m_IsActive; }
	void Place(int x, int y);

	virtual ActorType GetType() = 0;
	virtual void Draw() = 0;
	virtual void Update()
	{

	}

protected:
	Point* m_pPosition;

	bool m_IsActive;
	ActorColor m_color;
};




