#include "BattleMap.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

BattleMap::BattleMap()
{
	Ships[0].setShipInfo("Wasp", 3);
	Ships[1].setShipInfo("Langley", 4);
	Ships[2].setShipInfo("Hornet", 5);
	DeterminateShipsLocation();
}


void BattleMap::PrintMap()
{
	std::cout << "   ";
	
	for(int i = 0; i< 10; i++)
	{
		std::cout << i << " ";
	}

	std::cout << std::endl;
	
	for(int i = 0; i < 10; i++)
	{
		std::cout << i <<": ";
		;
		for(int j = 0; j < 10; j++)
		{
			std::cout << Map[i][j] << " ";
		}
		std::cout << std::endl;
	}

}

void BattleMap::DeterminateShipsLocation()
{
	srand(time(NULL));
	int x = rand() % 10;
	std::cout << "asdasd" << " ";
}
