#pragma once
#include "Ship.h"

class BattleMap
{
public:
	BattleMap();
	void CreateMap();
	void PrintMap();
	void DeterminateShipsLocation();
private:
	Ship Ships[3];
	char Map[10][10] = {{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' },
						{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' },
						{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' }, 
						{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' }, 
						{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' }, 
						{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' }, 
						{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' }, 
						{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' }, 
						{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' },
						{ 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' }};
};

