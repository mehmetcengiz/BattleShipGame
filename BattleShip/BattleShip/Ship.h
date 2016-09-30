#pragma once
#include <string>

class Ship
{
public:
	Ship();
	
	void setShipInfo(std::string,int,bool);
	void setLocationX(int);
	void setLocationY(int);
	int getShipSize();
	bool getIsHorizontal();
	int getLocationX();
	int getLocationY();
	
	
	void GotHit();
	bool isShipSinked();


private:
	std::string ShipName;
	int ShipSize;
	int ShipLocation_X;
	int ShipLocation_Y;
	bool isHorizontal;
	int GotHitTimes;
};

