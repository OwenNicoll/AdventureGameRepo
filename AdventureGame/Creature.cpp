#include "Creature.h"

Creature::Creature()
	:health(0)
	,damage(0)
{
}

Creature::Creature(int newHealth, int newDamage)
	:health(newHealth)
	,damage(newDamage)
{
}

Creature::~Creature()
{
}

void Creature::PotionEffect()
{
}

int Creature::GetHealth()
{
	return health;
}

int Creature::GetDamage()
{
	return damage;
}

void Creature::SetHealth(int newHealth)
{
	health = newHealth;
}

void Creature::RemoveHealth(int damage)
{
	health -= damage;
}

void Creature::SetDamage(int newDamage)
{
	damage = newDamage;
}
