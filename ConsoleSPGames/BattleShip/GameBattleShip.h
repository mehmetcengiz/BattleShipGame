#pragma once
class GameBattleShip
{
public:
	//Constructors n Destructors
	GameBattleShip();


	bool isPlayerWon();

	void StartGame();
	void InitializeGame();
	void PlayGame();
	void ResetGame();

private:
	int TotalShipCount;

};

