#pragma once
#include "BattleMap.h"

class GameBattleShip
{
	BattleMap battleMap;

public:
	//Constructors n Destructors
	GameBattleShip();

	void InitializeGame();
	void ShotThePoint();
	void PlayGame();
	void ResetGame();
	

private:
	int ShootX;
	int ShootY;

	bool checkShootingPointsAreValid(int, int);
	bool getValidShootingPointFromPlayer();
	bool isPointAlreadyGotShoot(int x,int y);
	bool isPlayerWon();
};

