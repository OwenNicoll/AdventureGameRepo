#pragma once
#include <string>
#include <vector>
#include "Area.h"
class Player
{
public:

	Player();
	Player(std::string name,  Area* currentArea, int health, std::vector<std::string> inventory);

	void Go(Area* targetArea);

	

	std::string name;
	Area* currentArea;
	
	int health;
	std::vector<std::string> inventory;
};

