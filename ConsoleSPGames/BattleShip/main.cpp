#include <iostream>
#include "BattleMap.h"

void PrintIntroduceGame();
void PlayGame();

BattleMap TestMap;

int main()
{
	//PrintIntroduceGame();
	//PlayGame();
	TestMap.DeterminateShipsLocation();
	TestMap.PrintMap();


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
	//TODO Initialize the Game and Start Game.
}

