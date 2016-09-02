#include "GameBattleShip.h"
#include <iostream>


GameBattleShip::GameBattleShip()
{
	TotalShipCount = 3;
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
	bool validPoint;
	bool _isPlayerWon;
	do
	{

		battleMap.PrintMap();
		do
		{
			validPoint = getShootingPointFromPlayer();
		} while (!validPoint);
		system("cls");
		_isPlayerWon = isPlayerWon();
	}
	while (!_isPlayerWon);
	//if there is a ship on that location
		//call gothit function for that ship.
	//else
		//change the char on that location
	//check isPlayerWon every time.
}
bool GameBattleShip::getShootingPointFromPlayer()
{
	int x, y;
	std::cout << "Enter X: ";
	std::cin >> x ;
	std::cout << "Enter Y: ";
	std::cin >> y;
	std::cout <<"Shooting Point "<< "X: " << x << " Y: " << y;
	if(checkShootingPointsAreValid(x, y))
	{
		std::cout << "\nPoints Are Valid\n";
		return true;
	}else
	{
		std::cout << "\nPoints Are Not Valid\nEnter Points Again \n";
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

void GameBattleShip::ResetGame()
{
}
