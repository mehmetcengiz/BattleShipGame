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
	bool checkShipFitsToLocation(Ship,Location);
	void DeterminateShipsLocation();
	Location getNewLocation(Ship);
	void PlaceTheShip(Ship,Location);

private:
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

