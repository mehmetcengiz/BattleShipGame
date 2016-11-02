#include "GameBattleShip.h"
#include <iostream>


GameBattleShip::GameBattleShip()
{
}

bool GameBattleShip::isPlayerWon()
{
	return false;
}

void GameBattleShip::InitializeGame()
{
	battleMap.DetermineShipsLocation();
}

void GameBattleShip::PlayGame()
{
	//TODO Play Game
	bool _isValidPoint;
	bool _isPlayerWon;
	do
	{
		battleMap.PrintMap();
		do
		{
			_isValidPoint = getValidShootingPointFromPlayer();
		} while (!_isValidPoint);

		ShotThePoint();



		_isPlayerWon = isPlayerWon();
	}
	while (!_isPlayerWon);
}

bool GameBattleShip::getValidShootingPointFromPlayer()
{
	int x, y;
	std::cout << "Enter X: ";
	std::cin >> x ;
	std::cout << "Enter Y: ";
	std::cin >> y;
	std::cout <<"Shooting Point "<< "X: " << x << " Y: " << y;
	if(checkShootingPointsAreValid(x, y) && !isPointAlreadyGotShoot(x,y))
	{
		std::cout << "\nPoints Are Valid\n";
		this->ShootX = x;
		this->ShootY = y;
		return true;
	}else
	{
		std::cout << "\nYou Entered Unvalid Point or Point Already Got Shooted.\nEnter Points Again \n";
		return false;
	}
}

bool GameBattleShip::checkShootingPointsAreValid(int x,int y)
{
	if(x <=10 && x>=0 && y <= 10 && y>=0)
	{
		return true;
	}else
	{
		return false;
	}
}

bool GameBattleShip::isPointAlreadyGotShoot(int x,int y)
{
	if(battleMap.getPointFromVisualMap(x,y) == '*')
	{

		return true;
	}else
	{
		return false;
	}
	
	
}

void GameBattleShip::ShotThePoint()
{

	if(battleMap.getPointFromHiddenMap(ShootX,ShootY) == '0')
	{
		std::cout << "A SHIP GOT HITTTT !!!!!!!!!!!!";
		Ship ShipGotHit = battleMap.getShipFromAPoint(ShootX, ShootY);
		//ShipGotHit.GotHit();

	}else
	{
		std::cout << "TEST**************Nopeeeeeee.." << std::endl;
		//No ship got hit.
	}


}



void GameBattleShip::ResetGame()
{
}
