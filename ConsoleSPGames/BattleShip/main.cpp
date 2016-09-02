#include <iostream>
#include "GameBattleShip.h"

void PrintIntroduceGame();
void PlayGame();

GameBattleShip gamebattleship;

int main()
{
	PrintIntroduceGame();
	PlayGame();
	//TestMap.DetermineShipsLocation();
	//TestMap.PrintMap();


	system("pause");
	return 0;
}

void PrintIntroduceGame()
{
	//TODO Introduce the game.
	std::cout << "Welcome to Battle Ship\n";
	std::cout << "Enter the x and y coordinate to Explode the point.\n\n";

}



void PlayGame()
{
	gamebattleship.InitializeGame();
	gamebattleship.PlayGame();
}

