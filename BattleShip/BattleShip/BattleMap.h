#pragma once
#include "Ship.h"

#define TOTALSHIPSCOUNT 3

struct Location
{
	int x;
	int y;
};
class BattleMap
{
public:
	BattleMap();
	void PrintMap();
	void DetermineShipsLocation();
	char getPointFromVisualMap(int x, int y);
	char getPointFromHiddenMap(int x, int y);
	Ship getShipFromAPoint(int x,int y);


private:
	Location getNewLocation(Ship);
	bool checkShipFitsToLocation(Ship, Location);
	void PlaceTheShip(Ship, Location);
	Ship Ships[TOTALSHIPSCOUNT];
	Ship * ShipsPointer[TOTALSHIPSCOUNT];



	char VisualMap[10][10] = {	{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' },
								{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' },
								{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' }, 
								{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' }, 
								{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' }, 
								{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' }, 
								{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' }, 
								{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' }, 
								{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' },
								{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' }};
	
	char HiddenMap[10][10] = {	{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' },
								{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' },
								{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' },
								{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' },
								{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' },
								{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' },
								{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' },
								{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' },
								{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' },
								{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' } };
};

