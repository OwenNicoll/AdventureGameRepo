#pragma once
#include <string>
#include <vector>
#include "Area.h"
#include "Creature.h"
class Monster : public Creature
	
{
public:
	Monster();
	Monster(std::string name, Area* currentArea, int health, int damage);


	void PotionEffect();

	// Name Getter and Setter
	std::string GetName();
	void SetName(std::string newName);

	// Current Area
	Area* GetCurrentArea();
	void SetCurrentArea(Area* newArea);


private:
	std::string name;
	Area* currentArea;


};

