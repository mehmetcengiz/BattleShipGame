#pragma once
#include "BattleMap.h"

class GameBattleShip
{
	BattleMap battleMap;

public:
	//Constructors n Destructors
	GameBattleShip();

	void InitializeGame();
	void PlayGame();
	void ResetGame();

private:
	int TotalShipCount;
	int ShootX;
	int ShootY;

	bool checkShootingPointsAreValid(int, int);
	bool getShootingPointFromPlayer();
	bool isPlayerWon();
};

