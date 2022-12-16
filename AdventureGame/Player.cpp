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

Player::Player(std::string name, Area* currentArea,int health, int damage)
	:name(name)
	,currentArea(currentArea)
	,Creature(health, damage)
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
			currentArea->PrintItems();
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

void Player::PotionEffect()
{
	health += 50;

	std::cout << "You heal yourself with the potion" << std::endl;
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

void Player::AddToInventory(Item newItem)
{
	inventory.push_back(newItem);
}

void Player::Take(Item newItem)
{
	for (int i = 0; i < currentArea->GetItems().size(); ++i)
	{
		if (newItem.name == currentArea->GetItems()[i]->GetName())
		{
			AddToInventory(newItem);
		}
	}

	PrintInventory();
}

void Player::PrintInventory()
{
	std::cout << "INVENTORY CONTENTS: " << std::endl;

	for (int i = 0; i < inventory.size(); ++i)
	{
		std::cout << "  -" << inventory[i].GetName() << std::endl;
	}
}




