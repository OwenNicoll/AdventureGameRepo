#include "Player.h"
#include <iostream>
#include "Area.h"
#pragma once

Player::Player()
	:name("")
	,currentArea(nullptr)
	,inventory()
	,isDead(false)
{
}

Player::Player(std::string name, Area* currentArea,int damage, int health, std::vector<std::string> inventory)
	:name(name)
	,currentArea(nullptr)
	,inventory()
	,isDead(false)
{
}

void Player::Go(Area* targetArea)
{
	for (int i = 0; i < targetArea->GetConnectedAreas().size(); ++i)
	{
		if (targetArea->GetConnectedAreas()[i]->GetName() == currentArea->GetName())
		{
			*currentArea = *targetArea;
			std::cout << "You enter the " << GetCurrentArea()->GetName() << std::endl;
			std::cout << std::endl;
			std::cout << "Description: " << std::endl;
			std::cout << currentArea->GetDescription() << std::endl;
			std::cout << std::endl;
			std::cout << "Connected Areas: " << std::endl;
			for (int i = 0; i < targetArea->GetConnectedAreas().size(); ++i)
			{
				std::cout << targetArea->GetConnectedAreas()[i]->GetName() << std::endl;
			}
			return;
		}		
		else
		{
			std::cout << "That is too far away..." << std::endl;
		}
	}
}

void Player::Attack(Monster target)
{
	
	if (currentArea->GetName() == target.GetCurrentArea()->GetName())
	{
		health = health - target.GetDamage();
		target.RemoveHealth(damage);
		std::cout << "Player health: " << GetHealth() << std::endl;
		std::cout << target.GetHealth() << std::endl;
	}
	else
	{
		std::cout << "Invalid Target..." << std::endl;
	}
	if (target.GetHealth() <= 0)
	{
		std::cout << "You killed the " << target.GetName() << std::endl;
	}
}
	

std::string Player::GetName()
{
	return name;
}

void Player::SetName(std::string newName)
{
	name = newName;
}



Area* Player::GetCurrentArea()
{
	return currentArea;
}

void Player::SetCurrentArea(Area* newArea)
{
	currentArea = newArea;
}




