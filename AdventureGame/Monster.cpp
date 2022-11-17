#include "Monster.h"

Monster::Monster()
    :name(name)
    , health()
    ,damage()
    ,currentArea(nullptr)
{
}

std::string Monster::GetName()
{
    return name;
}

void Monster::SetName(std::string newName)
{
    name = newName;
}

Monster::Monster(std::string name, int health, int damage, Area* currentArea)
    :name(name)
    ,health(health)
    ,damage(damage)
    ,currentArea(currentArea)
   
{
}

int Monster::GetHealth()
{
    return health;
}

void Monster::SetHealth(int newHealth)
{
    health = newHealth;
}

int Monster::GetDamage()
{
    return damage;
}

void Monster::SetDamage(int newDamage)
{
    damage = newDamage;
}

void Monster::RemoveHealth(int healthToRemove)
{
    health -= healthToRemove;
}

Area* Monster::GetCurrentArea()
{
    return currentArea;
}

void Monster::SetCurrentArea(Area* newArea)
{
    currentArea = newArea;
}
