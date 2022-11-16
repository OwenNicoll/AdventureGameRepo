#include "Player.h"
#include <iostream>
#include "Area.h"
#pragma once

Player::Player()
	:name("")
	,currentArea(nullptr)
	,health(100)
	,inventory()
{
}

Player::Player(std::string name, Area* currentArea, int health, std::vector<std::string> inventory)
	:name(name)
	,currentArea(nullptr)
	,health(health)
	,inventory()
	
{
}

void Player::Go(Area* targetArea)
{
	for (int i = 0; i < currentArea->connectedAreas.size(); ++i)
	{
		if (currentArea->connectedAreas[i]->name == targetArea->name)
		{
			*currentArea = *targetArea;
		}
	}
}


