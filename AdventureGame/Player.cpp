#include "Player.h"
#include <iostream>
#include "Area.h"
#pragma once

Player::Player()
	:name("")
	,currentArea()
	,health(100)
	,inventory()
{
}

Player::Player(std::string name, Area currentArea, int health, std::vector<std::string> inventory)
	
{
}

void Player::PrintPlayer()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Current Area: " << currentArea.name << std::endl;
	std::cout << "Health: " << health << std::endl;
	std::cout << "inventory: " << std::endl;
	if (inventory.size() != 0);
	{
		for (int i = 0; i < inventory.size(); ++i)
		{
			std::cout << inventory[i] << std::endl;
		}
	}
	if (inventory.size() > 0)
	{
		std::cout << "Inventory is empty" << std::endl;
	}
	
	
}
