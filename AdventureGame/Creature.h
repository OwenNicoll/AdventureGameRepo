#pragma once
#include "Thing.h"
class Creature : public Thing
{
public:
	Creature();
	Creature(int newHealth, int newDamage);
	~Creature();

	// Getters
	int GetHealth();
	int GetDamage();

	// Setters
	void SetHealth(int newHealth);
	void RemoveHealth(int damage);
	void SetDamage(int newDamage);


protected:
	int health;
	int damage;
};

