#pragma once
#include <string>
#include <vector>
#include "Area.h"
class Player
{
public:

	Player();
	Player(std::string name,  Area currentArea, int health, std::vector<std::string> inventory);

	void PrintPlayer();

	std::string name;
	Area currentArea;
	
	int health;
	std::vector<std::string> inventory;
};

