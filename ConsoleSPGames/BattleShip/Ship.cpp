#include "Ship.h"

Ship::Ship() {}

void Ship::setShipInfo(std::string newName, int newLength,bool newIsHorizontal)
{
	this->ShipName = newName;
	this->ShipSize = newLength;
	this->isHorizontal = newIsHorizontal;
}

int Ship::getShipSize()
{
	return this->ShipSize;
}

bool Ship::getIsHorizontal()
{
	return isHorizontal;
}

int Ship::getLocationX()
{
	return this->ShipLocation_X;
}

int Ship::getLocationY()
{
	return this->ShipLocation_Y;
}

void Ship::setLocationX(int x)
{
	this->ShipLocation_X = x;
}

void Ship::setLocationY(int y)
{
	this->ShipLocation_Y = y;
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
