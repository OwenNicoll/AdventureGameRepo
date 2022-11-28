#pragma once
#include <string>
#include <vector>
#include "Area.h"
#include "Monster.h"
class Player : public Creature
{
public:

	Player();
	Player(std::string name,  Area* currentArea, int damage, int health, std::vector<std::string> inventory);

	void Go(Area* targetArea);

	void Attack(Monster target);

	// Name Setter and Getter
	std::string GetName();
	void SetName(std::string newName);

	// Current Area Setter and Getter
	Area* GetCurrentArea();
	void SetCurrentArea(Area* newArea);
	

	

private:

	std::string name;
	Area* currentArea;
	std::vector<std::string> inventory;
	bool isDead;
	
};

