#pragma once
#include "Ship.h"

struct Location
{
	int x;
	int y;
};
class BattleMap
{
public:
	BattleMap();

	void CreateMap();
	void PrintMap();
	void DetermineShipsLocation();

private:
	Location getNewLocation(Ship);
	bool checkShipFitsToLocation(Ship, Location);
	void PlaceTheShip(Ship, Location);
	Ship Ships[3];
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

