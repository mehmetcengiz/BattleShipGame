#pragma once
#include <string>

class Ship
{
public:
	Ship();
	
	void setShipInfo(std::string,int);
	void setLocationX(int);
	void setLocationY(int);
	
	
	void GotHit();
	bool isShipSinked();


private:
	std::string ShipName;
	int ShipLength;
	int ShipLocation_X;
	int ShipLocation_Y;
	bool isHorizontal;
	int GotHitTimes;
};

