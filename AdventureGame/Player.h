#pragma once
#include <string>
#include <vector>
#include "Area.h"
#include "Item.h"
#include "Monster.h"
class Player : public Creature
{
public:

	Player();
	Player(std::string name,  Area* currentArea, int health, int damage);

	void Go(Area* targetArea);

	void Attack(Monster target);

	// Name Setter and Getter
	std::string GetName();
	void SetName(std::string newName);

	// Current Area Setter and Getter
	Area* GetCurrentArea();
	void SetCurrentArea(Area* newArea);
	
	void AddToInventory(Item newItems);
	
	void PrintInventory();

private:

	std::string name;
	Area* currentArea;
	std::vector<Item> inventory;
	bool isDead;
	
};

