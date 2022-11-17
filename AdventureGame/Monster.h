#pragma once
#include <string>
#include <vector>
#include "Area.h"
class Monster
	
{
public:
	Monster();
	Monster(std::string name, int health, int damage, Area* currentArea);

	// Name Getter and Setter
	std::string GetName();
	void SetName(std::string newName);

	// Health Getter and Setter
	int GetHealth();
	void SetHealth(int newHealth);

	// Damage Getter and Setter
	int GetDamage();
	void SetDamage(int newDamage);
	void RemoveHealth(int healthToRemove);

	// Current Area
	Area* GetCurrentArea();
	void SetCurrentArea(Area* newArea);


private:
	std::string name;
	int health;
	int damage;
	Area* currentArea;


};

