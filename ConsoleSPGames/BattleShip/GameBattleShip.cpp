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
	bool _isValidPoint;
	bool _isPlayerWon;
	do
	{
		system("cls");
		battleMap.PrintMap();
		do
		{
			_isValidPoint = getValidShootingPointFromPlayer(); 
		} while (!_isValidPoint);

		//if there is a ship on that location
			//call gothit function for that ship.
		//else
			//change the char on that location
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
	if(checkShootingPointsAreValid(x, y))
	{
		std::cout << "\nPoints Are Valid\n";
		this->ShootX = x;
		this->ShootY = y;
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
