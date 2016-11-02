#include "BattleMap.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>


BattleMap::BattleMap()
{
	Ships[0].setShipInfo("Wasp", 3,false);
	Ships[1].setShipInfo("Langley", 4,true);
	Ships[2].setShipInfo("Hornet", 5,false);

	ShipsPointer[0] = &Ships[0];
	ShipsPointer[1] = &Ships[1];
	ShipsPointer[2] = &Ships[2];


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
	TOTALSHIPSCOUNT;
	//Determinate Ships Location for per Ship
	for(int totalShipCount = 0;totalShipCount <TOTALSHIPSCOUNT;totalShipCount++)
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
	currentShip.setLocationX(location.x);
	currentShip.setLocationY(location.y);
	


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


char BattleMap::getPointFromVisualMap(int x, int y)
{
	return VisualMap[x][y];
}

char BattleMap::getPointFromHiddenMap(int x, int y)
{
	return HiddenMap[x][y];
}


Ship BattleMap::getShipFromAPoint(int x, int y)
{
	Ship ShipGotHit;
	int ShipSize;
	int ShipLocationX,ShipLocationY;
	bool IsShipHorizontal;
	
	//For Each Ship
	//TODO Keep Going From Here.
	//TODO Infinite Loop Because Locations of Ships are not set.
	for (Ship ship : Ships)
	{
		ShipSize = ship.getShipSize();
		ShipLocationX = ship.getLocationX();
		ShipLocationY = ship.getLocationY();
		IsShipHorizontal = ship.getIsHorizontal();

		for(int ShipSizeCount =0; ShipSizeCount < ShipSize;ShipSizeCount)
		{
			if (IsShipHorizontal)
			{
				if((ShipLocationX + ShipSizeCount) == x && ShipLocationY == y)
				{
					std::cout << "\n\nHorizontal and Size:" << ship.getShipSize() << std::endl;
					return ship;
				}
			}else 
			{
				if(ShipLocationX == x && (ShipLocationY + ShipSizeCount) == y)
				{
					std::cout << "\n\nNNNNNNOTTT  Horizontal and Size:" << ship.getShipSize() << std::endl;
					return ship;
				}
			}
		}
	}


	//for(int shipCount=0;shipCount<TOTALSHIPSCOUNT;shipCount++)
	//{
	//	ShipSize = Ships[shipCount].getShipSize();
	//	for(int shipSizeCount=0;shipSizeCount<ShipSize;shipSizeCount++)
	//	{
	//		//if(Ships[shipCount])
	//	}
	//}




	Ship ship;
	return ship;
}