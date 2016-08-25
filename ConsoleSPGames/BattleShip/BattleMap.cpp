#include "BattleMap.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

BattleMap::BattleMap()
{
	Ships[0].setShipInfo("Wasp", 3,false);
	Ships[1].setShipInfo("Langley", 4,true);
	Ships[2].setShipInfo("Hornet", 5,false);
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
			std::cout << HiddenMap[i][j] << " ";
		}
		std::cout << std::endl;
	}

}

void BattleMap::DeterminateShipsLocation()
{
	

	for(int i = 0;i <3 ;i++)
	{
		//TODO Determinate Ships Location 
		//Check if the ship is horizontal or not.
		Location location = getDeterminatedLocation(Ships[i]);
		//Determinate random x and y value depends on angle.
		//Get the x and y value and check if the ship fits the location.
	}
	

	/*for(int shipCount =0; shipCount <3; shipCount++)
	{
		if(Ships[shipCount].getIsHorizontal()) //When ship is horizontal X should be lower than (Max X - ShipSize).
		{										// to not pass the max X value (Max X = 10)
			x = rand() % (10 - Ships[shipCount].getShipSize());
			y = rand() % 10;
			for (int i = 0; i<Ships[shipCount].getShipSize(); i++)
			{
				if (HiddenMap[x + i][y] == '0')
				{
					shipCount--;
				}
			}
		}else
		{
			x = rand() % 10;
			y = rand() % (10 - Ships[shipCount].getShipSize());
			for (int i = 0; i<Ships[shipCount].getShipSize(); i++)	//When ship is vertical
			{
				if (HiddenMap[x][y+i] == '0')
				{
					shipCount--;
				}
			}
		}

	}*/


}
Location getDeterminatedLocation(Ship currentShip)
{
	Location location;

	srand(time(NULL));
	if(currentShip.getIsHorizontal())
	{
		location.x = rand() % (10 - currentShip.getShipSize());
		location.y = rand() % 10;
	}else
	{
		location.x = rand() % 10;
		location.y = rand() % (10 - currentShip.getShipSize());
	}
	return location;
}
