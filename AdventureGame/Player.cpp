#include "Player.h"
#include <iostream>
#include "Area.h"
#pragma once

Player::Player()
	:name("")
	,currentArea(nullptr)
	,damage(100)
	,health(100)
	,inventory()
{
}

Player::Player(std::string name, Area* currentArea,int damage, int health, std::vector<std::string> inventory)
	:name(name)
	,currentArea(nullptr)
	,damage(damage)
	,health(health)
	,inventory()
	
{
}

void Player::Go(Area* targetArea)
{
	for (int i = 0; i < currentArea->GetConnectedAreas().size(); ++i)
	{
		if (currentArea->GetConnectedAreas()[i]->GetName() == targetArea->GetName())
		{
			*currentArea = *targetArea;
			std::cout << "You enter the " << GetCurrentArea()->GetName() << std::endl;
			std::cout << std::endl;
			std::cout << "Description: " << currentArea->GetDescription() << std::endl;
			std::cout << std::endl;
			for (int i = 0; i < currentArea->GetConnectedAreas().size(); ++i)
			{
				std::cout << targetArea->GetConnectedAreas()[i]->GetName() << std::endl;
			}
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

int Player::GetHealth()
{
	return health;
}

void Player::SetHealth(int newHealth)
{
	health = newHealth;
}

void Player::RemoveHealth(int healthToRemove)
{
	health -= healthToRemove;
}

int Player::GetDamage()
{
	return damage;
}

void Player::SetDamage(int newDamage)
{
	damage = newDamage;
}

Area* Player::GetCurrentArea()
{
	return currentArea;
}

void Player::SetCurrentArea(Area* newArea)
{
	currentArea = newArea;
}




