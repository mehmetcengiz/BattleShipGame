#include "Ship.h"

Ship::Ship() {}

void Ship::setShipInfo(std::string newName, int newLength)
{
	this->ShipName = newName;
	this->ShipLength = newLength;
}

void Ship::setLocationX(int)
{
	//TODO set Randomly X location.
}

void Ship::setLocationY(int)
{
	//TODO set Randomly X location by BattleMap.
}

void Ship::GotHit()
{
	//TODO Function calls when ship gots hit. Increase the GotHitTimes
}

bool Ship::isShipSinked()
{
	//TODO Determinate if the ship length == gothittimes.
	return false;
}
