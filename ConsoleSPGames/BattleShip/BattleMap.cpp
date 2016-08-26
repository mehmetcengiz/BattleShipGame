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

void BattleMap::DetermineShipsLocation()
{
	Location location;
	constexpr int TotalShip = 3;
	//Determinate Ships Location for per Ship
	for(int totalShipCount = 0;totalShipCount <TotalShip ;totalShipCount++)
	{
		location = getNewLocation(Ships[totalShipCount]); // get random x and y value.
		bool isShipFits = checkShipFitsToLocation(Ships[totalShipCount],location);// check if ship fits that location
		if(isShipFits)
		{
			PlaceTheShip(Ships[totalShipCount],location); // Place the ship if it fits.
		}else
		{
			totalShipCount--;							// If not fits. find another x y value for sames 
		}
	}
}

Location BattleMap::getNewLocation(Ship currentShip)
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
	currentShip.setLocationX(location.x);
	currentShip.setLocationY(location.y);
	return location;
}

bool BattleMap::checkShipFitsToLocation(Ship currentShip,Location location)
{
	int Size = currentShip.getShipSize();
	bool isHorizontal = currentShip.getIsHorizontal();

	for (int i = 0; i < Size; i++)
	{
		if(isHorizontal)
		{
			if (HiddenMap[location.x + i][location.y] == '0')
			{
				return false;
			}
		}else
		{
			if (HiddenMap[location.x][location.y + i] == '0')
			{
				return false;
			}
		}
	}

	return true;
}

void BattleMap::PlaceTheShip(Ship currentShip,Location location)
{
	int Size = currentShip.getShipSize();
	bool isHorizontal = currentShip.getIsHorizontal();

	for(int shipSizeCount = 0;shipSizeCount<Size;shipSizeCount++)
	{
		if(isHorizontal)
		{
			HiddenMap[location.x + shipSizeCount][location.y] = '0';
		}else
		{
			HiddenMap[location.x][location.y + shipSizeCount] = '0';
		}
		
	}
	
}